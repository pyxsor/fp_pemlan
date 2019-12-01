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
			- No Resi
			- Nama Penerima
			- Alamat Penerima
			- Nama Pengirim
			- Alamat Pengirim
			- Berat (KG)
			- Jenis Pengiriman (Kilat, Reguler, Dsb)
			- Total Harga Pengiriman
			
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

int main() {
	int pilihan;
	
	awal: //teleport
	system("cls");
		
	menu();
	scanf("%d",&pilihan);
	
	switch(pilihan){
		case 1:
			printf("Ngantuk Bor");
		default:
			printf("Input Anda Salah!, Silahkan Ulangi Lagi");
			getch();
			goto awal;
	}
	return 0;
}
