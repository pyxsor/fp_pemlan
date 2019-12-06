#include <stdio.h>
#include <stdlib.h>

/* 	Final Project
	Nama Anggota Kelompok 8:
	- Ayunda Noviala Dwijayanti (18081010025)
	- Handie Pramana Putra (18081010023)
	
	Algoritma:
	Sorting 	: Quick Sort
	Searching 	: Binary Search
	
	Aplikasi Jasa Pengiriman (no.5)
	Data : Barang Yang Akan Dikirim, Memiliki Karakteristik Berikut
			- No Resi (For + Number)
			- Nama Penerima (String nama_penerima)
			- Alamat Penerima (String alamat_penerima)
			- Nama Pengirim (String nama_pengirim)
			- Alamat Pengirim (String alamat_pengirim)
			- Berat (KG) (float berat)
			- Jenis Pengiriman (Kilat, Reguler, Dsb) (option using String) ??? 
			- Total Harga Pengiriman (float harga)
			
	Operasi : 
			- Tambah Data
			- Ubah Data
			- Pencarian Data Berdasarkan Kriteria
			- Pengurutan Data Berdasarkan Kriteria
			
	Update 1.2 : Perubahan Algoritma, agar lebih memudahkan user dalam mengakses dan programer untuk mengedit
	Update 1.2.1 : Rehat Sejenak, Mari Kita Makan :)
	 */

//===============================================================================
struct pelanggan {
	char nama_penerima[30];
	char alamat_penerima[30];
}pelanggan;

struct pengirim {
	char nama_pengirim[30];
	char alamat_pengirim[30];
}pengirim;

int pengiriman[30];
char ketpengiriman[30];
float berat [30];
float ongkir [30];
int menu,i,id;
int x=0,y=0,z=0;
y=10000;
//===============================================================================
header(){
	printf("\t\tSi Bungkus\t\t\n\n");
	printf("Bungkusin Aja Paket Anda, Cepat Handal Murah\n");
}
//===============================================================================
footer(){
	printf("Final Project Pemrograman Lanjut Oleh Ayunda dan Handie");
}
//===============================================================================
opsimenu(){
	printf("\n1. Tambah Data");
	printf("\n2. Lihat Data");
	printf("\n3. Ubah Data");
	printf("\n4. Cari Data");
	printf("\n5. Urutkan Data");
	printf("\n6. See Magic");
	printf("\n7. Exit");
}
jenispengiriman(){
	printf("\n1. Besok Sampai");
	printf("\n2. 2-3 Hari Sampai");
	printf("\n3. 4-7 Hari Kerja Sampai");
}
//===============================================================================
void orderbaru();
void lihatorder();
void ubahorder();
void cariorder();
void urutkanorder();
void seemagic();
//===============================================================================
void orderbaru(){
	printf("Order Baru");
//	input
	printf("Nomer Resi Orderan Ini = %d", x+y+1);
	id[x] = x+y+1;
	printf("\nMasukkan Nama Pelanggan =");
	fflush (stdin);
	scanf("%c",&pelanggan[x].nama_penerima);
	printf("\nMasukkan Alamat Pelanggan =");
	fflush (stdin);
	scanf("%c",&pelanggan[x].alamat_penerima);
	printf("\nMasukkan Nama Pengirim =");
	fflush (stdin);
	scanf("%c",&pengirim[x].nama_pengirim);
	printf("\nMasukkan Alamat Pengirim =");
	fflush (stdin);
	scanf("%c",&pengirim[x].alamat_pengirim);
	printf("\nMasukkan Berat Paket =");
	fflush (stdin);
	scanf("%f",&berat[x]);
	printf("\nMassukkan Jenis Pengiriman");
	jenispengiriman:
	fflush (stdin);
	scanf("%d",&pengiriman[x]);
	if (pengiriman == 1){
		ongkir = ongkir + 30000;
	} else if (pengiriman == 2){
		ongkir = ongkir + 20000;
	} else if (pengiriman == 3){
		ongkir = ongkir + 10000
	}
	x++;
	printf("Order Baru Telah Diterima,");
	getch();
	system("cls");
}
//===============================================================================
void lihatorder(){
	system("cls");
	printf("Cetak Semua Transaksi Order");
	if (x==0){
		printf("Belum Ada Transaksi Tersimpan!");
		getch();
	}
	else{ for(i=0;i<=x;i++){
		printf("==============No Resi : %d==============\n",id[i]);
		printf("Nama Penerima 		: %c\n",pelanggan[i].nama_penerima);
		printf("Alamat Penerima 	: %c\n",pelanggan[i].alamat_penerima);
		printf("Nama Pengirim 		: %c\n",pengirim[i].nama_pengirim);
		printf("Alamat Pengirim 	: %c\n",pengirim[i].alamat_pengirim);
		printf("Berat Paket 		: %f\n",berat[i]);
		printf("Jenis Pengiriman 	: %c\n",ketpengiriman[i]);
		printf("Ongkir				: %f\n",ongkir[i]);
		printf("========================================\n");
	}
	}
}
//===============================================================================
void ubahorder(){
	system("cls");
	printf("Cetak Semua Transaksi Order");
	if (x==0){
		printf("Belum Ada Transaksi Tersimpan!");
		getch();
	}
	else
	
}
//===============================================================================
void home(){
	do{
		header:
		opsimenu:		
		printf("Pilih Menu == ");
		scanf("%d",menu);
		system(cls);
			
		switch(menu){
			case 1 :{
				orderbaru(); 
				break;
			}
			case 2:{
				lihatorder();
				break;
			}
			case 3:{
				ubahorder();
				break;
			}
			case 4:{
				cariorder();
				break;
			}
			case 5:{
				urutkanorder();
				break;
			}
			case 6:{
				seemagic();
				break;
			}
			case 7:{
				exit(0);
				break;
			}
			default:{
				printf("Pilihan Menu Salah, Silahkan Ulangi Kembali");
				home();
				break;
			}
		}
	} while (menu>=1 && menu<=7);
}




//===============================================================================
int main(){
	home();
	return 0;
}





// ===============================SAMBUTAN=======================================










void newdata(int i){
	printf("Nomor Resi = %d", i+1);
}




menu(){
	header();
	printf("\nPilih Menu:\n");
	printf("1. Input Pengiriman Baru\n");
	printf("2. Ubah Data Pengiriman\n");
	printf("3. Search Data dengan No. Resi\n");
	printf("4. Search Data dengan Total Harga\n");
	printf("5. Search Data dengan Berat\n");
	printf("6. Sort Data dengan No. Resi\n");
	printf("7. Sort Data dengan Alamat A-Z\n");
	printf("8. Sort Data dengan Nama A-Z\n");
	printf("9. Sort Data dengan Berat Terkecil\n");
	printf("10. Sort Data dengan Berat Terbesar\n");
	printf("11. Sort Data dengan Pengiriman Terlambat-Tercepat\n");
	printf("12. Sort Data dengan Harga Termurah\n");
	printf("Pilihan Anda ===> ");
}

//==================================================================================



int main() {
	int pilihan;
	int i;
	
	//========
	//CORE MENU 1
	int jmlinp;
	float ongkir;
	int resi[10];
	//========
	// Untuk Checkpoint Kembali Ke Awal, dan Clear Screen
	awal: 
	system("cls");
	//========	
	
	menu();
	scanf("%d",&pilihan);
	
	switch(pilihan){
		case 1:
			printf("Berapa Jumlah Data Yang Ingin Anda Input ? ");
			scanf("%d",&jmlinp);
			fflush(stdin); //clear buffer
				
				for (i=0;i<=jmlinp;i++){
					

					printf("Total Harga Pengiriman Adalah = %f",ongkir);
					
//					resi[i] = resi[i]+rand()*30; (BETA RANDOM RESI)
					print("Nomor Resi Anda adalah = %d",resi[i]);
				}
			getch();
			goto awal;
		case 2:
			printf("Coming Soon!");
			getch();
			goto awal;
		case 3:
			printf("Coming Soon!");
			printf("masukan nomer seri data yang akan dicari : ");
			scanf ("%d"
			getch();
			goto awal;
		case 4:
			printf("Coming Soon!");
			getch();
			goto awal;
		case 5:
			printf("Coming Soon!");
			getch();
			goto awal;
		case 6:
			printf("Coming Soon!");
			getch();
			goto awal;
		case 7:
			printf("Coming Soon!");
			getch();
			goto awal;
		case 8:
			printf("Coming Soon!");
			getch();
			goto awal;
		case 9:
			printf("Coming Soon!");
			getch();
			goto awal;
		case 10:
			printf("Coming Soon!");
			getch();
			goto awal;
		case 11:
			printf("Coming Soon!");
			getch();
			goto awal;
		case 12:
			printf("Coming Soon!");
			getch();
			goto awal;
		default:
			printf("Input Anda Salah!, Silahkan Ulangi Lagi");
			getch();
			goto awal;
	}
	return 0;
}
