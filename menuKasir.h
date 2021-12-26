//=======================================================================//
//***********         Fungsi Untuk Menu Kasir            ****************//
//=======================================================================//
// Nama Fungsi    : menuKasir                                            //
// Input Argumen  : char namaPelanggan[100], char noHp[100],             //
//                  char namapaket[100][30], int i, int paket,           //
//                  int harga[100], int jumlah[100], int pembayaran      //
//                  int pilih                                            //
// Output Argumen : int i, char namapaket[100][30], int harga[100],      //
//                  int jumlah[100], int totalharga[100],                //
//                  int totalhargakeseluruhan, int DP,                   //
//                  int sisapembayaran, int pembayaran, int kembali      //
// Deskripsi      : Fungsi ini untuk menampilkan menu bantuan apabila    //
//                  user kesulitan dan tidak mengerti dalam penggunaan   //
//                  program                                              //
// Dibuat Oleh    : Puja - 2105551016                                    //
//                                                                       //
// Versi : 1.4                                     Rev. 1                //
// Tgl: 5-12-2021                                  Tgl: 14-12-2021       //
// Revisi 1       : Merapikan program karena masih error di output       //
//                  nama pelanggan dan perulangannya sebelumnya.         //
// Direvisi Oleh  : Puja - 2105551016                                    //
//                                                 Rev. 2                //
//                                                 Tgl: 20-12-2021       //
// Revisi 2       : Merapikan program untuk tampilan output.             //
// Direvisi Oleh  : Puja - 2105551016                                    //
//                                                 Rev. 3                //
//                                                 Tgl: 18-12-2020       //
// Revisi 3       : Menambahkan pilihan status member customer dan       //
//                  mengedit totalhargakeseluruhan untuk menambahkan     //
//                  diskon tergantung status member yang dipilih         //
// Direvisi Oleh  : Jenni - 210551028                                    //
//                                                 Rev. 4                //
//                                                 Tgl: 20-12-2021       //
// Revisi 4       : Menjadikan fungsi yang awalnya terpisah menjadi      //
//                  satu kesatuan fungsi kasir.                          //
//                  Memperbaiki output tampilan Dp.                      //
// Direvisi Oleh  : Puja - 210551016                                     //
//=======================================================================//
void menuKasir(void){
	system("cls");
	char namaPelanggan[100], noHp[100], namapaket[100][30];
	int i, paket, harga[100], jumlah[100], totalharga[100], totalhargakeseluruhan = 0, DP, pembayaran, pilih;
    //detailpembelian(namaPelanggan, noHp, namapaket, i, paket, harga, jumlah, totalharga, totalhargakeseluruhan, DP, pembayaran);
    totalhargakeseluruhan = 0;
    header();
    printf("Nama Pelanggan              : ");
    scanf(" %[^\n]s",namaPelanggan);
    printf("No Hp                       : ");
    scanf(" %[^\n]s",noHp);

    printf("========================================================\n");
	printf("Total Jumlah Paket          : ");
	scanf("%i", &paket);
    printf(" \n");

	for(i=1; i<=paket; i++){
		printf("Nama Paket ke-%i             : ", i);
        scanf(" %[^\n]s",&namapaket[i][i]);
		printf("Harga Paket %i               : Rp. ", i);
		scanf("%i", &harga[i]);
		printf("Jumlah                      : ");
		scanf("%i", &jumlah[i]);
        printf(" \n");
	}

	for(i=1; i<=paket; i++){
		totalharga[i] =jumlah[i]*harga[i];
		totalhargakeseluruhan = totalhargakeseluruhan + totalharga[i];
	}

    printf("=====================================================================================\n");
    printf("*********************                DAFTAR BELANJA             *********************\n");
    printf("=====================================================================================\n");
    printf("%3s", "No");
    printf("%20s", "Nama Paket");
    printf("%20s", "Harga");
    printf("%20s", "Jumlah");
    printf("%20s\n", "Total Harga");
    printf("=====================================================================================\n");

    for(i=1; i<=paket; i++){
        printf("%3i", i);
        printf("%20s", &namapaket[i][i]);
        printf("%20d", harga[i]);
        printf("%20d", jumlah[i]);
        printf("%20d\n", totalharga[i]);
    }

	printf("=====================================================================================\n");
	printf ("\t\tPilih Status Member Anda Di Bawah Ini. \n");
	printf ("\t\t  1. Silver \n");
	printf ("\t\t  2. Gold \n");
	printf ("\t\t  3. Non Member\n");
	printf ("\t\tMasukkan status member anda : ");
	scanf  ("%d", &pilih);
	printf ("\n\n");

	if (pilih == 1){
		totalhargakeseluruhan = 0.95 * totalhargakeseluruhan;
	}
	else if (pilih ==2){
		totalhargakeseluruhan = 0.90 * totalhargakeseluruhan;
	}
	else{
		inputSalah();
	}

	tampilkantotalharga(totalhargakeseluruhan);

	printf("DP                          : Rp. ");
	scanf("%i", &DP);

	int sisapembayaran = hitungsisapembayaran (totalhargakeseluruhan, DP);
	tampilkansisapembayaran(sisapembayaran);

	printf("Pembayaran                  : Rp. ");
	scanf("%i", &pembayaran);

	int kembali = hitungkembali(pembayaran, totalhargakeseluruhan);
	tampilkankembali(kembali, pembayaran, sisapembayaran, totalhargakeseluruhan);

	cetaknota(namaPelanggan, noHp, i, jumlah, harga, totalharga, namapaket, totalhargakeseluruhan, DP, pembayaran, kembali, paket, sisapembayaran);

	getch();
	menuPegawai();
}
