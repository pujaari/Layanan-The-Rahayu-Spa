//=======================================================================//
//*******   Fungsi Untuk Menampilkan Gaji Pegawai The Rahayu Spa  *******//
//=======================================================================//
// Nama Fungsi    : penggajianPegawai                                    //
// Input Argumen  : int jumlah                                           //
//                  int masaKerja                                        //
//                  int i                                                //
//                  int lanjutan                                         //
//                  gaji [i].nama                                        //
//                  gaji [i].pokok                                       //
//                  gaji [i].pinjaman                                    //
// Output Argumen : i+1, gaji [i].nama, gaji [i].pokok, gaji[i].bonus,   //
//                  gaji[i].pinjaman, gaji[i].pokok + gaji[i].bonus,     //
//                  gaji[i].pokok + gaji[i].bonus - gaji[i].pinjaman     //
// Deskripsi      : Fungsi ini digunakan untuk menggaji karyawan sesuai  //
//                  dengan masa kerja dari karyawan dan menampilkannnya  //
//                  serta akan disimpan dalam bentuk file                //
// Dibuat Oleh    : Puja - 2105551016                                    //
//                                                                       //
// Versi : 1.1                                    Rev. 1                 //
// Tgl   : 15-12-2021                             Tgl: 21-01-2021        //
// Revisi 1       : Mengedit kondisi perulangan pada file penggajian.    //
//                  pegawai                                              //
// Direvisi Oleh  : Puja - 2105551016                                    //
//=======================================================================//
void penggajianPegawai (void){
	system ("cls");
	header();
	int jumlah;
	int masaKerja;
	int i;
	int lanjutan;
	printf("\n\n\t\t\t\t\t========================================\n");
	printf("\t\t\t\t\t\t\t|     PENGGAJIAN KARYAWAN RAHAYU SPA   |\n");
	printf("\t\t\t\t\t\t\t========================================\n\n");
	printf("============================================\n");
	printf("MASUKKAN JUMLAH KARYAWAN YANG INGIN DIGAJI : ");
	scanf("%d", &jumlah);
	printf("============================================\n");

	for(i=0;i<jumlah; i++){
		printf ("\n");
		printf("MASUKKAN NAMA KARYAWAN KE-%d: ", i+1);
		fflush(stdin);
		gets (gaji[i].nama);
		printf("=============================\n");
		printf("MASUKKAN GAJI POKOK KARYAWAN: Rp. ");
		scanf("%d", &gaji[i].pokok);
		printf("MASUKKAN MASA KERJA(BULAN)  : ");
		scanf("%d", &masaKerja);

		if(masaKerja<12){
			gaji[i].bonus=0;
		}
		else if(masaKerja>=12 && masaKerja<36){
			gaji[i].bonus=500000;
		}
		else{
			gaji[i].bonus=1000000;
		}
		printf("MASUKKAN PINJAMAN           : ");
		scanf("%d", &gaji[i].pinjaman);
		printf("==============================\n");
	}
	printf("\n\n\n\t\t\t\t\t            		         =======  GAJI KARYAWAN ======= \n");
    printf("\t\t\t\t=======================================================================================================\n");
    printf("\t\t\t\t  NO |    NAMA           |   GAJI POKOK   |     BONUS    |   PINJAMAN  |  TOTAL GAJI  |  GAJI BERSIH  |\n");
    printf("\t\t\t\t=======================================================================================================\n");
    for (i = 0; i < jumlah; i++){
    	printf("\t\t\t\t  %d     %-15s        %d          %-10d     %-13d %-13d %d  \n", i + 1, gaji[i].nama, gaji[i].pokok, gaji[i].bonus, gaji[i].pinjaman, gaji[i].pokok + gaji[i].bonus, gaji[i].pokok + gaji[i].bonus - gaji[i].pinjaman);
	}
	printf("\t\t\t\t=======================================================================================================\n");

	FILE * fPointer;
	fPointer = fopen("Gaji Karyawan Rayuri Spa.txt", "a+");
	fprintf(fPointer, "\n");
 	fprintf(fPointer ,"            		         =======  GAJI KARYAWAN ======= \n");
    fprintf(fPointer ,"=======================================================================================================\n");
    fprintf(fPointer ,"  NO |    NAMA           |   GAJI POKOK   |     BONUS    |   PINJAMAN  |  TOTAL GAJI  |  GAJI BERSIH  |\n");
    fprintf(fPointer ,"=======================================================================================================\n");

	for (i = 0; i < jumlah; i++){
    fprintf(fPointer,"  %d     %-15s        %d          %-10d     %-13d %-13d %d  \n", i + 1, gaji[i].nama, gaji[i].pokok, gaji[i].bonus, gaji[i].pinjaman, gaji[i].pokok + gaji[i].bonus, gaji[i].pokok + gaji[i].bonus - gaji[i].pinjaman);
	}
	fprintf(fPointer,"=======================================================================================================\n");
  	fclose(fPointer);

	printf ("\n\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
	printf ("Langkah Apa Yang Ingin Dilakukan Sekarang ? \n");
	printf ("	1. Kembali ke Menu Utama\n");
	printf ("	2. Kembali ke penggajian karyawan\n");
	printf ("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
	printf ("Masukkan pilihan anda : ");
	scanf  ("%d", &lanjutan);



	if(lanjutan == 1){
		menuPegawai();
	}
	else if (lanjutan == 2){
		penggajianPegawai();
	}
	else{
		inputSalah();
	}
}
