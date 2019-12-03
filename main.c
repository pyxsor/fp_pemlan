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
			- No Resi (Generate Angka Acak) (int resi)
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
	 */

header(){
	printf("\t\tSi Bungkus\t\t\n\n");
	printf("Bungkusin Aja Paket Anda, Cepat Handal Murah\n");
}

footer(){
	printf("Final Project Pemrograman Lanjut Oleh Ayunda dan Handie");
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

char pengiriman[10];

jenis_pengiriman(char pengiriman){
	float temp_ongkir;
	
	if (pengiriman == 1){
		temp_ongkir = temp_ongkir + 30000;
	} else if (pengiriman == 2){
		temp_ongkir = temp_ongkir + 20000;
	} else if (pengiriman == 3){
		temp_ongkir = temp_ongkir + 10000;
	}
}

struct pelanggan {
	char nama_penerima[30];
	char alamat_penerima[30];
}pelanggan;

struct pengirim {
	char nama_pengirim[30];
	char alamat_pengirim[30];
}pengirim;

float berat [10];


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
					printf("\nMasukkan Nama Pelanggan =");
					scanf("%c",&pelanggan.nama_penerima[i]);
					printf("\nMasukkan Alamat Pelanggan =");
					scanf("%c",&pelanggan.alamat_penerima[i]);
					printf("\nMasukkan Nama Pengirim =");
					scanf("%c",&pengirim.nama_pengirim[i]);
					printf("\nMasukkan Alamat Pengirim =");
					scanf("%c",&pengirim.alamat_pengirim[i]);
					printf("\nMasukkan Berat Paket =");
					scanf("%f",&berat[i]);
					printf("\nMassukkan Jenis Pengiriman");
					scanf("%f",&pengiriman[i]);
					printf("\nMasukkan nomor resi = ");
					scanf("%f",&resi[i]);

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
