#include <stdio.h>
#include <stdlib.h>
#include <string.h>
soal(){

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
	Update 1.2.2 : Rehat Sejenak, JANGAN LUPA ISTIRAHAT! :)
	 */
}
//===============================================================================
struct pelanggan {
	char nama_penerima[30];
	char alamat_penerima[30];
	char ketpengiriman[30];
}pelanggan[30];

struct pengirim {
	char nama_pengirim[30];
	char alamat_pengirim[30];
}pengirim[30];

int pengiriman[30];
float berat [30];
float ongkir[30];
int menu1,menu,i,id[30];
int x=0,y=10000,z=0;
int pilihan;
int arr[30];
//===============================================================================
//Binary Search
/* int binary_search1(int *cariresi){ // No Resi
   
    int t;
    int k = x - 1;
    int l = 0;
  
    while ( l <= k )
    {
        t = (l + k) / 2;
        hasil = strcmp(x, cariresi);

        if (hasil == -1)
            l = t + 1;
        else if (hasil == 1)
            k = t - 1;
        else
            return t;
    }       
    return -1;  
}
*/
//===============================================================================
//Main Binary Search (default)
/*
int binarySearch(int arr[], int l, int r, int cariresi){ 
	while (l <= r) { 
		int m = l + (r - l) / 2; 
		if (arr[m] == cariresi) 
			return m; 
		if (arr[m] < cariresi) 
			l = m + 1; 
		else
			r = m - 1; 
	} 
	return -1; 
}
*/
//===============================================================================
header(){
	printf("\n\t\tSi Bungkus\t\t\n\n");
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
	printf("\n7. Exit\n\n");
}

jenispengiriman(){
	printf("\n1. Besok Sampai");
	printf("\n2. 2-3 Hari Sampai");
	printf("\n3. 4-7 Hari Kerja Sampai");
}
//===============================================================================
//void orderbaru();
void lihatorder();
void ubahorder();
void cariorder();
void urutkanorder();
void seemagic();
//===============================================================================
void home(){
	do {
		header();
		opsimenu();		
		printf("Pilih Menu == ");
		scanf("%d",&menu);
		system("cls");
			
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
orderbaru(){
	printf("Order Baru");
//	input
	printf("Nomer Resi Orderan Ini = %d - %d",y,x);
	id[x] = x;
	printf("\n\nMasukkan Nama Penerima =");
	fflush (stdin);
	scanf("%s",&pelanggan[x].nama_penerima);
	printf("Masukkan Alamat Penerima =");
	fflush (stdin);
	scanf("%s",&pelanggan[x].alamat_penerima);
	printf("Masukkan Nama Pengirim =");
	fflush (stdin);
	scanf("%s",&pengirim[x].nama_pengirim);
	printf("Masukkan Alamat Pengirim =");
	fflush (stdin);
	scanf("%s",&pengirim[x].alamat_pengirim);
	printf("Masukkan Berat Paket =");
	fflush (stdin);
	scanf("%f",&berat[x]);
	printf("Massukkan Jenis Pengiriman");
	jenispengiriman();
	fflush (stdin);
	printf("\nPilihan Anda =");
	scanf("%d",&pengiriman[x]);
	if(pengiriman[x] == 1){
		strcpy(pelanggan[i].ketpengiriman,"Besok Sampai");
		ongkir[x] = ongkir[x] + 30000;
	} else if(pengiriman[x] == 2){
		strcpy(pelanggan[i].ketpengiriman,"2-3 Hari Sampai");
		ongkir[x] = ongkir[x] + 20000;
	} else if(pengiriman[x] == 3) {
		strcpy(pelanggan[i].ketpengiriman,"4-7 Hari Kerja Sampai");
		ongkir[x] = ongkir[x] + 10000;
	}
	x++;
	printf("Order Baru Telah Diterima,");
	getch();
	system("cls");
}
//===============================================================================
void lihatorder(){
	system("cls");
	printf("\n\t\tCetak Semua Transaksi Order\t\t\n\n");
	if (x==0){
		printf("\n\nBelum Ada Transaksi Tersimpan!");
		getch();
		system("cls");
	}
	else{ for(i=0;i<x;i++){
		printf("==============No Resi : %d==============\n",id[i]);
		printf("Nama Penerima 		: %s\n",pelanggan[i].nama_penerima);
		printf("Alamat Penerima 	: %s\n",pelanggan[i].alamat_penerima);
		printf("Nama Pengirim 		: %s\n",pengirim[i].nama_pengirim);
		printf("Alamat Pengirim 	: %s\n",pengirim[i].alamat_pengirim);
		printf("Berat Paket 		: %f\n",berat[i]);
		printf("Jenis Pengiriman 	: %s\n",pelanggan[i].ketpengiriman);
		printf("Ongkir				: %f\n",ongkir[i]);
		printf("========================================\n");
	}
	printf("That's All, Tekan ENTER untuk Kembali");
	getch();
	system("cls");
	}
}
//===============================================================================
void ubahorder(){
	int ubahresi;
	
	system("cls");
	printf("Cetak Semua Transaksi Order");
	
	if (x==0){
		printf("Belum Ada Transaksi Tersimpan!");
		getch();
	}
	else{
		printf("Masukkan No Resi Yang Ingin di Ubah : ");
		
		getch();// pake algoritma binary search?
	}
	
}
//===============================================================================
void cariorder(){
	int cariresi,a,hasil;
	printf("Cari Data Transaksi");
	printf("\n1. Cari dengan No Resi");
	printf("\n2. Cari dengan Total Harga");
	printf("\n3. Cari dengan Berat");
	printf("\n4. Kembali Ke Home\n");
	printf("\nPilihan Anda == ");
	fflush (stdin);
	scanf("%d",&menu);
	switch(menu){
		case 1:
		printf("Masukkan No Resi yang ingin dicari == ");
		scanf("%d", &cariresi);
		if(x==0){
			printf("\nTidak Ada Data Tersimpan, Silahkan Tambahkan Terlebih Dahulu!");
			getch();
			system("cls");
			cariorder();
		} else {
			for (i=0; i<x;i++){
				printf("============ Resi No = %d ============", x);
//				hasil = binary_search1(a,cariresi,x);
			}
		}
	
	
		getch();
		case 2:
		printf("Masukkan Total Harga yang ingin dicari == ");
		case 3:
		printf("Masukkan Berat barang yang ingin dicari == ");
		case 4:
		system("cls");
		home();	
	}
}
//===============================================================================
void urutkanorder(){
	printf("Urutkan Order Berdasarkan");
	printf("\n1. Urutkan Order dengan No Resi");
	printf("\n2. Urutkan Order dengan Alamat A-Z");
	printf("\n3. Urutkan Order dengan Nama A-Z");
	printf("\n4. Urutkan Order dengan Berat Terkecil");
	printf("\n5. Urutkan Order dengan Pengiriman Tercepat-Terlambat");
	printf("\n6. Urutkan Order dengan Harga Termurah");
	printf("\nPilihan Anda == ");
	fflush (stdin);
	scanf("%d",&menu);
	switch(menu){
		case 1:
		printf("Data setelah diurutkan");
		case 2:
		printf("Data setelah diurutkan");
		case 3:
		printf("Data setelah diurutkan");
		case 4:
		printf("Data setelah diurutkan");
		case 5:
		printf("Data setelah diurutkan");
		case 6:
		printf("Data setelah diurutkan");
		case 7:
		system("cls");
		home();	
	}
}
//===============================================================================
void seemagic(){
	printf("Coming Soon!"); //delete order
}

//===============================================================================
int main(){
		
	home();
	return 0;
}


// ===============================SAMBUTAN=======================================

menu9(){
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


