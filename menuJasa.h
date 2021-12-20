//=======================================================================//
//***********            Fungsi Untuk Menu Jasa          ****************//
//=======================================================================//
// Nama Fungsi    : menuJasa                                             //
// Input Argumen  : const char * namaJasa[100][30], int i, int paket,    //
//                  char teruskanPemesanan, char jumlah[100]             //
//                  char namaPelanggan[100], char noHp[20],              //
//                  char alamat[50], char waktu1[40], char waktu2[20]    //
// Output Argumen : const char * namaJasa[100][30], char jumlah[100]     //
//                  int i, int harga[100], intbayarDp[100],              //
//                  char namaPelanggan[100], char noHp[20],              //
//                  char alamat[50], char waktu1[40], char waktu2[20]    //
// Deskripsi      : Fungsi ini untuk menampilkan menu jasa yang tersedia //
//                  di spa. User bisa langsung memilih dan memesan       //
//                  paket.                                               //
// Dibuat Oleh    :  Jenni - 2105551028                                  //
//                                                                       //
// Versi : 1.2                                     Rev. 1                //
// Tgl: 5-12-2021                                  Tgl: 17-12-2021       //
// Revisi 1       : Merapikan fungsi dan menambahkan di teruskan         //
//                  pemesanan.                                           //
// Direvisi Oleh  : Puja - 2105551016                                    //
//                                                 Rev. 2                //
//                                                 Tgl: 20-12-2021       //
// Revisi 2       : Menambahkan perulangan saat pemesanan paket.         //
//                  Memperbaiki perhitungan dan output yang ditampilkan. //
// Direvisi Oleh  : Puja - 2105551016                                    //
//=======================================================================//
void menuJasa(void){
	menuJasa:
	system("cls");
	header();
	const  float dp = 0.5;
	const char * namaJasa[100][30];

	int i, bayarDp[100], harga[100], paket, menuJasa[100], totaljumlahharga = 0, totalDp = 0;
	char teruskanPemesanan, jumlah[100], dataBenar;
	printf ("|=============================================|\n");
	printf ("|                 PACKAGE LIST                |\n");
	printf ("|=============================================|\n");
	printf ("|[1] REFLEXY                  Rp.  190.000,-  |\n");
	printf ("|[2] REJUVENATE               Rp.  205.000,-  |\n");
	printf ("|[3] RECHARGE                 RP.  265.000,-  |\n");
	printf ("|[4] REFRESH                  Rp.  330.000,-  |\n");
	printf ("|[5] RELAX            	       Rp.  370.000,-  |\n");
	printf ("|=============================================|\n");
	printf ("|                                             |\n");
	printf ("|[8] KEMBALI                                  |\n"); // Pilihan untuk kembali ke sebelumnya
	printf ("=============================================== \n");


	printf("Ingin memesan berapa paket? "); //memilih jumlah jasa yang diinginkan
	scanf("%i", &paket);

	for(i=1; i<=paket; i++){                 //perulangan dalam memilih jasa
		printf("\n\nPilih paket ke-%i   : " , i);
		scanf("%i", &menuJasa[i]);
		printf("Jumlah             : " , i);
		scanf("%i", &jumlah[i]);
		printf("\n");
	   	// insialisasi harga dan nama jasa
		if(menuJasa[i]==1){
			harga[i]= 190000;
			namaJasa[i][i]= "REFLEXY";
			//fungsi untuk menampilkan rincian jasa 1
			tampilkanRincianJasa1();
			getch();
	 	}
		else if(menuJasa[i]==2){
			harga[i]= 205000;
			namaJasa[i][i]= "REJUVENATE";
			//fungsi untuk menampilkan rincian jasa 2
			tampilkanRincianJasa2();
			getch();
		}
		else if(menuJasa[i]==3){
			harga[i] = 265000;
			namaJasa[i][i] = "RECHARGE";
			//fungsi untuk menampilkan rincian jasa 3
			tampilkanRincianJasa3();
			getch();
		}
		else if(menuJasa[i]==4){
			harga[i] = 330000;
			namaJasa[i][i] = "REFRESH";
			//fungsi untuk menampilkan rincian jasa 4
			tampilkanRincianJasa4();
			getch();
		}
		else if(menuJasa[i]==5){
			harga[i] = 370000;
			namaJasa[i][i] = "RELAX";
			//fungsi untuk menampilkan rincian jasa 5
			tampilkanRincianJasa5();
			getch();
		}
		else if(menuJasa[i]== 8){
	   		menuPelanggan();
	   	}
	   	else{
	   		inputSalah();
	   		goto menuJasa;
		}

	}

	//perhitungan untuk pembayaran
	for(i=1; i<=paket; i++){
		harga[i] = harga[i] * jumlah[i];
		bayarDp[i] = harga[i] * dp;
		totaljumlahharga= totaljumlahharga + harga[i];
		totalDp = totalDp + bayarDp[i];
	}

	printf("\n\n");
	printf("================================================================\n");
	printf("%20s", "Pilihan");
	printf("%10s", "Jumlah");
	printf("%15s", "Total Harga");
	printf("%15s\n", "Dp");
	printf("================================================================\n");

	for(i=1; i<=paket; i++){
		printf("%20s",namaJasa[i][i]);
		printf("%10i",jumlah[i]);
		printf("%15d",harga[i]);
		printf("%15d\n",bayarDp[i]);
	}

	//menampilkan total harga, total dp, dan melanjutkan ke pemesanan
	printf("================================================================\n");
	printf("%30s", "GRAND TOTAL");
	printf("%15d", totaljumlahharga);
	printf("%15d\n", totalDp);
	printf(" Teruskan Pemesanan? (y/n)     : ");
	getchar();
	teruskanPemesanan = getchar();
	printf("|===============================================================|\n\n");

	pembayaran:;
	char namaPelanggan[100] ;
	char noHp[20];
	char alamat[50];
	char waktu1[40];
	char waktu2[20];

	if(teruskanPemesanan == 'y'||teruskanPemesanan == 'Y'){
		system("cls");
		printf("\n\n");
		printf("\t\t\t\t\t=============================================\n");
        printf("\t\t\t\t\t|              'THE RAHAYU SPA'             |\n");
        printf("\t\t\t\t\t|===========================================|\n");
        printf("\t\t\t\t\t|   Jalan Bintang No. 295, Kota Galaksi     |\n");
        printf("\t\t\t\t\t|   Relaxtion your body with Rahayu Spa     |\n");
        printf("\t\t\t\t\t|    >>> Kenyamanan Anda Yang Utama <<<     |\n");
        printf("\t\t\t\t\t=============================================\n");
		printf("\n       Anda Sudah Masuk Ke Menu Pemesanan \n\n");
		printf("\nSilahkan Isi Data Diri Anda\n");
		printf(" Nama                          : "); fflush(stdin);
		gets(namaPelanggan);
		printf(" No Telepon                    : "); fflush(stdin);
		gets(noHp);
		printf(" Alamat                        : "); fflush(stdin);
		gets(alamat);
		printf("|====================================================|\n\n");
		printf("\n\nDetail Pemesanan\n");
		printf("Tanggal-Bulan-Tahun Pemesanan: ");
		gets(waktu1);
		printf("Masukan Jam                  : ");
		gets(waktu2);
		printf("|====================================================|\n\n");
    	printf("Transaksi Anda Sudah Terdaftar\n");
    	printf("Silahkan Transfer Dp Transaksi Anda Dan Lanjutkan Ke Konfirmasi pemesanan\n");
    	printf("BCA     : 001122334455\n");
    	printf("BNI     : 009933212122\n");
    	printf("Mandiri : 003242332122\n");
    	cetakKuitansi(namaPelanggan,noHp,alamat,namaJasa,totaljumlahharga,totalDp,waktu1,waktu2,i,paket);
    	getchar();
    	menuPelanggan();
	}

	else if(teruskanPemesanan == 'n'||teruskanPemesanan == 'N'){
		goto menuJasa;
	}
	else{
		inputSalah();
		goto pembayaran;
	}
}
