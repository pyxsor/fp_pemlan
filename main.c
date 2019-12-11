#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
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
	float totalharga;
	float berat;
	int resi;
	char nama_pengirim[30];
	char alamat_pengirim[30];
}pelanggan[30];


int pengiriman[30];
char cari[30];
float cari_temp;
float ongkir[30];
int menu1,menu,i,id[30],i2;
int x=0,y=10000,z=0;
int pilihan;
int arr[30];

//===============================================================================
int binary_search_id(struct pelanggan resi[], int l, int r, float cari_temp) 
{
    while (l <= r) { 
        int m = l + (r-l) / 2; 
  
        // cek mid
        if (resi[m].resi == cari_temp) 
            return m;
        // If x greater, ignore left half 
        if (resi[m].resi < cari_temp) 
            l = m + 1; 
        // If x is smaller, ignore right half 
        else
            r = m - 1; 
    } 
    // if we reach here, then element was 
    // not present 
    return -1; 
}

//===============================================================================
int binary_search_totalharga(struct pelanggan totalharga[], int l, int r, float cari_temp) 
{
    while (l <= r) { 
        int m = l + (r-l) / 2; 
  
        // Check if x is present at mid 
        if (totalharga[m].totalharga == cari_temp) 
            return m;
        // If x greater, ignore left half 
        if (totalharga[m].totalharga < cari_temp) 
            l = m + 1; 
        // If x is smaller, ignore right half 
        else
            r = m - 1; 
    } 
    // if we reach here, then element was 
    // not present 
    return -1; 
}
//===============================================================================
int binary_search_berat(struct pelanggan berat[], int l, int r, float cari_temp) 
{
    while (l <= r) { 
        int m = l + (r-l) / 2; 
  
        // Check if x is present at mid 
        if (berat[m].berat == cari_temp) 
            return m;
        // If x greater, ignore left half 
        if (berat[m].berat < cari_temp) 
            l = m + 1; 
        // If x is smaller, ignore right half 
        else
            r = m - 1; 
    } 
    // if we reach here, then element was 
    // not present 
    return -1; 
}
//===============================================================================
void quickSort_berat (struct pelanggan a[], int lo, int hi){ 
    int i=lo, j=hi, h,ha,resi_temp;
	char ho[30],hu[30],he[30],namatmp[30],alamattmp[30]; 
    int pivot=a[lo].berat; //ganti 
 
//  pembagian 
    do{ 
        while (a[i].berat<pivot) i++; 
        while (a[j].berat>pivot) j--; 
        if (i<=j) 
        { 
            resi_temp=a[i].resi;
			h=a[i].totalharga;
			ha=a[i].berat; //iki
			strcpy(ho,a[i].nama_penerima);
			strcpy(hu,a[i].alamat_penerima);
			strcpy(he,a[i].ketpengiriman);
			strcpy(namatmp,a[i].nama_pengirim);
			strcpy(alamattmp,a[i].alamat_pengirim);
			
			a[i].totalharga=a[j].totalharga; // iki
			a[i].berat=a[j].berat;
			a[i].resi=a[j].resi;
			strcpy(a[i].nama_penerima,a[j].nama_penerima);
			strcpy(a[i].alamat_penerima,a[j].alamat_penerima);
			strcpy(a[i].ketpengiriman,a[j].ketpengiriman);
			strcpy(a[i].nama_pengirim,a[j].nama_pengirim);
			strcpy(a[i].alamat_pengirim,a[j].alamat_pengirim);
			
			strcpy(a[j].nama_pengirim,namatmp);
			strcpy(a[j].alamat_pengirim,alamattmp);
			strcpy(a[j].nama_penerima,ho);
			strcpy(a[j].alamat_penerima,hu);
			strcpy(a[j].ketpengiriman,he);
			a[j].totalharga=h;//tukar
			a[j].berat=ha;  // iki
            a[j].resi=resi_temp;
            
			i++; j--; 
        } 
    } while (i<=j); 
 
//  pengurutan 
    if (lo<j) quickSort_berat(a, lo, j); 
    if (i<hi) quickSort_berat(a, i, hi); 
}

//===============================================================================
void quickSort_resi (struct pelanggan a[], int lo, int hi){ 
    int i=lo, j=hi, h,ha,resi_temp;
	char ho[30],hu[30],he[30],namatmp[30],alamattmp[30]; 
    int pivot=a[lo].resi; //ganti 
 
//  pembagian 
    do{ 
        while (a[i].resi<pivot) i++; 
        while (a[j].resi>pivot) j--; 
        if (i<=j) 
        { 
            resi_temp=a[i].resi;
			h=a[i].totalharga;
			ha=a[i].berat; //iki
			strcpy(ho,a[i].nama_penerima);
			strcpy(hu,a[i].alamat_penerima);
			strcpy(he,a[i].ketpengiriman);
			strcpy(namatmp,a[i].nama_pengirim);
			strcpy(alamattmp,a[i].alamat_pengirim);
			
			
			
			a[i].totalharga=a[j].totalharga; // iki
			a[i].berat=a[j].berat;
			a[i].resi=a[j].resi;
			strcpy(a[i].nama_penerima,a[j].nama_penerima);
			strcpy(a[i].alamat_penerima,a[j].alamat_penerima);
			strcpy(a[i].ketpengiriman,a[j].ketpengiriman);
			strcpy(a[i].nama_pengirim,a[j].nama_pengirim);
			strcpy(a[i].alamat_pengirim,a[j].alamat_pengirim);
			
			strcpy(a[j].nama_pengirim,namatmp);
			strcpy(a[j].alamat_pengirim,alamattmp);
			strcpy(a[j].nama_penerima,ho);
			strcpy(a[j].alamat_penerima,hu);
			strcpy(a[j].ketpengiriman,he);
			a[j].totalharga=h;//tukar
			a[j].berat=ha;  // iki
            a[j].resi=resi_temp;
            
			i++; j--; 
        } 
    } while (i<=j); 
 
//  pengurutan 
    if (lo<j) quickSort_resi(a, lo, j); 
    if (i<hi) quickSort_resi(a, i, hi); 
}
//===============================================================================
void quickSort_harga (struct pelanggan a[], int lo, int hi){ 
    int i=lo, j=hi, h,ha,resi_temp;
	char ho[30],hu[30],he[30],namatmp[30],alamattmp[30]; 
    int pivot=a[lo].totalharga; //ganti 
 
//  pembagian 
    do{ 
        while (a[i].totalharga<pivot) i++; 
        while (a[j].totalharga>pivot) j--; 
        if (i<=j) 
        { 
            resi_temp=a[i].resi;
			h=a[i].totalharga;
			ha=a[i].berat; //iki
			strcpy(ho,a[i].nama_penerima);
			strcpy(hu,a[i].alamat_penerima);
			strcpy(he,a[i].ketpengiriman);
			strcpy(namatmp,a[i].nama_pengirim);
			strcpy(alamattmp,a[i].alamat_pengirim);
			
			a[i].totalharga=a[j].totalharga; // iki
			a[i].berat=a[j].berat;
			a[i].resi=a[j].resi;
			strcpy(a[i].nama_penerima,a[j].nama_penerima);
			strcpy(a[i].alamat_penerima,a[j].alamat_penerima);
			strcpy(a[i].ketpengiriman,a[j].ketpengiriman);
			strcpy(a[i].nama_pengirim,a[j].nama_pengirim);
			strcpy(a[i].alamat_pengirim,a[j].alamat_pengirim);
			
			strcpy(a[j].nama_pengirim,namatmp);
			strcpy(a[j].alamat_pengirim,alamattmp);
			strcpy(a[j].nama_penerima,ho);
			strcpy(a[j].alamat_penerima,hu);
			strcpy(a[j].ketpengiriman,he);
			a[j].totalharga=h;//tukar
			a[j].berat=ha;  // iki
            a[j].resi=resi_temp;
            
			i++; j--; 
        } 
    } while (i<=j); 
 
//  pengurutan 
    if (lo<j) quickSort_harga(a, lo, j); 
    if (i<hi) quickSort_harga(a, i, hi); 
}
//==========================================================================================

void quickSort_nama (struct pelanggan a[], int lo, int hi){ 
    int i=lo, j=hi, h,ha,resi_temp;
	char ho[30],hu[30],he[30],namatmp[30],alamattmp[30]; 
    char pivot[15]; //ganti 

 	strcpy(pivot,a[lo].nama_penerima);
 	printf("%s",pivot);
 	getch();
//  pembagian 
    do{ 
        while (strcmp(pivot,a[i].nama_penerima)>0) i++; 
        while (strcmp(pivot,a[j].nama_penerima)<0) j--; 
       
	    if (i<=j) 
        { 
            resi_temp=a[i].resi;
			h=a[i].totalharga;
			ha=a[i].berat; //iki
			strcpy(ho,a[i].nama_penerima);
			strcpy(hu,a[i].alamat_penerima);
			strcpy(he,a[i].ketpengiriman);
			strcpy(namatmp,a[i].nama_pengirim);
			strcpy(alamattmp,a[i].alamat_pengirim);
			
			
			
			a[i].totalharga=a[j].totalharga; // iki
			a[i].berat=a[j].berat;
			a[i].resi=a[j].resi;
			strcpy(a[i].nama_penerima,a[j].nama_penerima);
			strcpy(a[i].alamat_penerima,a[j].alamat_penerima);
			strcpy(a[i].ketpengiriman,a[j].ketpengiriman);
			strcpy(a[i].nama_pengirim,a[j].nama_pengirim);
			strcpy(a[i].alamat_pengirim,a[j].alamat_pengirim);
			
			strcpy(a[j].nama_pengirim,namatmp);
			strcpy(a[j].alamat_pengirim,alamattmp);
			strcpy(a[j].nama_penerima,ho);
			strcpy(a[j].alamat_penerima,hu);
			strcpy(a[j].ketpengiriman,he);
			a[j].totalharga=h;//tukar
			a[j].berat=ha;  // iki
            a[j].resi=resi_temp;
            
			i++; j--; 
        } 
    } while (i<=j); 
 
//  pengurutan 
    if (lo<j) quickSort_nama(a, lo, j); 
    if (i<hi) quickSort_nama(a, i, hi); 
}
//===============================================================================
void quickSort_pengiriman (struct pelanggan a[], int lo, int hi){ 
    int i=lo, j=hi, h,ha,resi_temp;
	char ho[30],hu[30],he[30],namatmp[30],alamattmp[30]; 
 	char pivot[30]; //ganti 
 	strcpy(pivot,a[lo].ketpengiriman);
 	
//  pembagian 
    do{ 
        while (strcmp(pivot,a[i].ketpengiriman)>0) i++; 
        while (strcmp(pivot,a[j].ketpengiriman)<0) j--; 
        if (i<=j) 
        { 
           	resi_temp=a[i].resi;
			h=a[i].totalharga;
			ha=a[i].berat; //iki
			strcpy(ho,a[i].nama_penerima);
			strcpy(hu,a[i].alamat_penerima);
			strcpy(he,a[i].ketpengiriman);
			strcpy(namatmp,a[i].nama_pengirim);
			strcpy(alamattmp,a[i].alamat_pengirim);
			
			a[i].totalharga=a[j].totalharga; // iki
			a[i].berat=a[j].berat;
			a[i].resi=a[j].resi;
			strcpy(a[i].nama_penerima,a[j].nama_penerima);
			strcpy(a[i].alamat_penerima,a[j].alamat_penerima);
			strcpy(a[i].ketpengiriman,a[j].ketpengiriman);
			strcpy(a[i].nama_pengirim,a[j].nama_pengirim);
			strcpy(a[i].alamat_pengirim,a[j].alamat_pengirim);
			
			strcpy(a[j].nama_pengirim,namatmp);
			strcpy(a[j].alamat_pengirim,alamattmp);
			strcpy(a[j].nama_penerima,ho);
			strcpy(a[j].alamat_penerima,hu);
			strcpy(a[j].ketpengiriman,he);
			a[j].totalharga=h;//tukar
			a[j].berat=ha;  // iki
            a[j].resi=resi_temp;
            
			i++; j--; 
        } 
    } while (i<=j); 
 
//  pengurutan 
    if (lo<j) quickSort_pengiriman(a, lo, j); 
    if (i<hi) quickSort_pengiriman(a, i, hi); 
}
//==========================================================================================

void quickSort_alamat (struct pelanggan a[], int lo, int hi){ 
    int i=lo, j=hi, h,ha,resi_temp;
	char ho[30],hu[30],he[30],namatmp[30],alamattmp[30]; 
    char pivot[15]; //ganti 

 	strcpy(pivot,a[lo].alamat_penerima);

//  pembagian 
    do{ 
        while (strcmp(pivot,a[i].alamat_penerima)>0) i++; 
        while (strcmp(pivot,a[j].alamat_penerima)<0) j--; 
       
	    if (i<=j) 
        { 
            resi_temp=a[i].resi;
			h=a[i].totalharga;
			ha=a[i].berat; //iki
			strcpy(ho,a[i].nama_penerima);
			strcpy(hu,a[i].alamat_penerima);
			strcpy(he,a[i].ketpengiriman);
			strcpy(namatmp,a[i].nama_pengirim);
			strcpy(alamattmp,a[i].alamat_pengirim);
			
			a[i].totalharga=a[j].totalharga; // iki
			a[i].berat=a[j].berat;
			a[i].resi=a[j].resi;
			strcpy(a[i].nama_penerima,a[j].nama_penerima);
			strcpy(a[i].alamat_penerima,a[j].alamat_penerima);
			strcpy(a[i].ketpengiriman,a[j].ketpengiriman);
			strcpy(a[i].nama_pengirim,a[j].nama_pengirim);
			strcpy(a[i].alamat_pengirim,a[j].alamat_pengirim);
			
			strcpy(a[j].nama_pengirim,namatmp);
			strcpy(a[j].alamat_pengirim,alamattmp);
			strcpy(a[j].nama_penerima,ho);
			strcpy(a[j].alamat_penerima,hu);
			strcpy(a[j].ketpengiriman,he);
			a[j].totalharga=h;//tukar
			a[j].berat=ha;  // iki
            a[j].resi=resi_temp;
            
			i++; j--; 
        } 
    } while (i<=j); 
 
//  pengurutan 
    if (lo<j) quickSort_alamat(a, lo, j); 
    if (i<hi) quickSort_alamat(a, i, hi); 
}
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
	printf("\n1. 1 Hari Sampai");
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
	printf("Nomer Index Orderan Ini = %d",x);
	id[x] = x;
	printf("\n\nMasukkan Nomer Resi = ");
	scanf("%d", &pelanggan[x].resi);
	printf("Masukkan Nama Penerima =");
	fflush (stdin);
	scanf("%s",&pelanggan[x].nama_penerima);
	printf("Masukkan Alamat Penerima =");
	fflush (stdin);
	scanf("%s",&pelanggan[x].alamat_penerima);
	printf("Masukkan Nama Pengirim =");
	fflush (stdin);
	scanf("%s",&pelanggan[x].nama_pengirim);
	printf("Masukkan Alamat Pengirim =");
	fflush (stdin);
	scanf("%s",&pelanggan[x].alamat_pengirim);
	printf("Masukkan Berat Paket =");
	fflush (stdin);
	scanf("%f",&pelanggan[x].berat);
	printf("Massukkan Jenis Pengiriman");
	jenispengiriman();
	fflush (stdin);
	printf("\nPilihan Anda =");
	scanf("%d",&pengiriman[x]);
	if(pengiriman[x] == 1){
		strcpy(pelanggan[x].ketpengiriman,"1 Hari Sampai");
		ongkir[x] = ongkir[x] + 30000;
	} else if(pengiriman[x] == 2){
		strcpy(pelanggan[x].ketpengiriman,"2-3 Hari Sampai");
		ongkir[x] = ongkir[x] + 20000;
	} else if(pengiriman[x] == 3){
		strcpy(pelanggan[x].ketpengiriman,"4-7 Hari Kerja Sampai");
		ongkir[x] = ongkir[x] + 10000;
	}
	pelanggan[x].totalharga = pelanggan[x].totalharga + ongkir[x];
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
		printf("==============No Index : %d==============\n",id[i]);
		printf("Nomer Resi		: %d\n",pelanggan[i].resi);
		printf("Nama Penerima 		: %s\n",pelanggan[i].nama_penerima);
		printf("Alamat Penerima 	: %s\n",pelanggan[i].alamat_penerima);
		printf("Nama Pengirim 		: %s\n",pelanggan[i].nama_pengirim);
		printf("Alamat Pengirim 	: %s\n",pelanggan[i].alamat_pengirim);
		printf("Berat Paket 		: %f\n",pelanggan[i].berat);
		printf("Jenis Pengiriman 	: %s\n",pelanggan[i].ketpengiriman);
		printf("Ongkir				: %f\n",pelanggan[i].totalharga);
		printf("========================================\n\n");
	}
	printf("That's All, Tekan ENTER untuk Kembali");
	getch();
	system("cls");
	}
}

//===============================================================================
void ubahorder(){
	int ubahresi;
	
	if (x==0){
		printf("Belum Ada Transaksi Tersimpan!");
		getch();
		system("cls");
	}
	else{
		printf("Masukkan No Index Yang Ingin di Ubah : ");
		scanf("%d",&ubahresi);
		// pake algoritma binary search?
		
		printf("Nomor Index yang akan dirubah = %d",ubahresi);
		
		printf("Masukkan Nomer Resi = ");
		scanf("%d", &pelanggan[x].resi);
		printf("\n\nMasukkan Nama Penerima =");
		fflush (stdin);
		scanf("%s",&pelanggan[ubahresi].nama_penerima);
		printf("Masukkan Alamat Penerima =");
		fflush (stdin);
		scanf("%s",&pelanggan[ubahresi].alamat_penerima);
		printf("Masukkan Nama Pengirim =");
		fflush (stdin);
		scanf("%s",&pelanggan[ubahresi].nama_pengirim);
		printf("Masukkan Alamat Pengirim =");
		fflush (stdin);
		scanf("%s",&pelanggan[ubahresi].alamat_pengirim);
		printf("Masukkan Berat Paket =");
		fflush (stdin);
		scanf("%f",&pelanggan[ubahresi].berat);
		printf("Massukkan Jenis Pengiriman");
		jenispengiriman();
		fflush (stdin);
		printf("\nPilihan Anda =");
		scanf("%d",&pengiriman[ubahresi]);
		if(pengiriman[ubahresi] == 1){
		strcpy(pelanggan[ubahresi].ketpengiriman,"Besok Sampai");
		ongkir[ubahresi] = 30000;
		} else if(pengiriman[ubahresi] == 2){
		strcpy(pelanggan[ubahresi].ketpengiriman,"2-3 Hari Sampai");
		ongkir[ubahresi] = 20000;
		} else if(pengiriman[ubahresi] == 3){
		strcpy(pelanggan[ubahresi].ketpengiriman,"4-7 Hari Kerja Sampai");
		ongkir[ubahresi] = 10000;
		}
	printf("Ubah Data Berhasil!");
	getch();
	system("cls");
	}
}
//===============================================================================
void cariorder(){
	int cariresi,a,hasil;
	float cariharga;
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
		quickSort_resi (pelanggan, 0,x-1);
		
		printf("Masukkan No Resi yang ingin dicari == ");
		scanf("%f",&cari_temp);
		
		hasil = binary_search_id(pelanggan, 0, x - 1, cari_temp);
		
		
		if(hasil==-1){
			printf("Tidak Ada");
	   		getch();
	   		system("cls");
		}else {
			printf("[Hasil Pencarian] :\n");
		    for(i=hasil; i<=hasil; i++){
				printf("==============No Index : %d==============\n",id[i]);
				printf("Nomor Resi		: %d\n",pelanggan[i].resi);
				printf("Nama Penerima 		: %s\n",pelanggan[i].nama_penerima);
				printf("Alamat Penerima 	: %s\n",pelanggan[i].alamat_penerima);
				printf("Nama Pengirim 		: %s\n",pelanggan[i].nama_pengirim);
				printf("Alamat Pengirim 	: %s\n",pelanggan[i].alamat_pengirim);
				printf("Berat Paket 		: %f\n",pelanggan[i].berat);
				printf("Jenis Pengiriman 	: %s\n",pelanggan[i].ketpengiriman);
				printf("Ongkir				: %f\n",pelanggan[i].totalharga);
				printf("========================================\n\n");	
			}
		getch();
		system("cls");
			}
			break;
		
		
		case 2:
		quickSort_harga(pelanggan,0,x-1);
		printf("Masukkan Total Harga yang ingin dicari == ");
		scanf("%f",&cari_temp);
		
		hasil = binary_search_totalharga(pelanggan, 0, x - 1, cari_temp);
		
		if(hasil==-1){
			printf("Tidak Ada");
	   		getch();
	   		system("cls");
		}else {
			printf("[Hasil Pencarian] :\n");
		    for(i=hasil; i<=hasil; i++){
				printf("==============No Index : %d==============\n",id[i]);
				printf("Nomor Resi		: %d\n",pelanggan[i].resi);
				printf("Nama Penerima 		: %s\n",pelanggan[i].nama_penerima);
				printf("Alamat Penerima 	: %s\n",pelanggan[i].alamat_penerima);
				printf("Nama Pengirim 		: %s\n",pelanggan[i].nama_pengirim);
				printf("Alamat Pengirim 	: %s\n",pelanggan[i].alamat_pengirim);
				printf("Berat Paket 		: %f\n",pelanggan[i].berat);
				printf("Jenis Pengiriman 	: %s\n",pelanggan[i].ketpengiriman);
				printf("Ongkir				: %f\n",pelanggan[i].totalharga);
				printf("========================================\n\n");	
			}
		getch();
		system("cls");
			}
			break;
		case 3:
		quickSort_berat(pelanggan,0,x-1);
		printf("Masukkan Berat yang ingin dicari == ");
		scanf("%f",&cari_temp);
		
		hasil = binary_search_berat(pelanggan, 0, x - 1, cari_temp);
		
		if(hasil==-1){
			printf("Tidak Ada");
	   		getch();
	   		system("cls");
		}else {
			printf("[Hasil Pencarian] :\n");
		    for(i=hasil; i<=hasil; i++){
				printf("==============No Index : %d==============\n",id[i]);
				printf("Nomor Resi		: %d\n",pelanggan[i].resi);
				printf("Nama Penerima 		: %s\n",pelanggan[i+1].nama_penerima);
				printf("Alamat Penerima 	: %s\n",pelanggan[i+1].alamat_penerima);
				printf("Nama Pengirim 		: %s\n",pelanggan[i+1].nama_pengirim);
				printf("Alamat Pengirim 	: %s\n",pelanggan[i+1].alamat_pengirim);
				printf("Berat Paket 		: %f\n",pelanggan[i+1].berat);
				printf("Jenis Pengiriman 	: %s\n",pelanggan[i+1].ketpengiriman);
				printf("Ongkir				: %f\n",pelanggan[i+1].totalharga);
				printf("========================================\n\n");	
			}
		getch();
		system("cls");
			}
			break;
		case 4:
		system("cls");
		home();	
	}
}
//===============================================================================
void urutkanorder(){
	printf("Urutkan Order Berdasarkan");
	printf("\n1. Urutkan Order dengan No Resi");
	printf("\n2. Urutkan Order dengan Alamat Penerima ");
	printf("\n3. Urutkan Order dengan Nama Pengirim");
	printf("\n4. Urutkan Order dengan Berat Terkecil");
	printf("\n5. Urutkan Order dengan Pengiriman Tercepat-Terlambat");
	printf("\n6. Urutkan Order dengan Harga Termurah");
	printf("\nPilihan Anda == ");
	fflush (stdin);
	scanf("%d",&menu);
	switch(menu){
		case 1:{
				quickSort_resi (pelanggan, 0,x-1);
			}
		case 2:{
			for(i=0; i<x; i++){
				quickSort_alamat (pelanggan, 0,x-1);
			}
				printf("Data setelah diurutkan");
				
			}
		case 3:{
					printf("case 3");
			for(i=0; i<x; i++){
				quickSort_nama(pelanggan,0,x-1);
			}
			
		printf("Data setelah diurutkan");
			break;
			}
		case 4:{
		for(i=0; i<x; i++){
			quickSort_berat(pelanggan,0,x-1);
		}
		printf("Data setelah diurutkan");
			break;
   			}
		case 5:{
			for(i=0; i<x; i++){
			quickSort_pengiriman (pelanggan, 0,x-1);
			}
					printf("Data setelah diurutkan");
			break;
			}

		case 6:{
		for(i=0; i<x; i++){
						quickSort_harga(pelanggan,0,x-1);
		}
			break;
		}

		case 7:{
					system("cls");
		home();
			break;
		}
	
		
		default :{
			printf("pilihan salah"); break;
			break;
		} 
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

