//=======================================================================//
//***************      Fungsi Untuk Menu Pelanggan       ****************//
//=======================================================================//
// Nama Fungsi    : menuPelanggan                                        //
// Input Argumen  : int menuPelanggan                                    //
// Output Argumen : void                                                 //
// Deskripsi      : Fungsi ini untuk menampilkan menu Pelanggan apabila  //
//                  sebelumnya di menu login memilih login sebagai       //
//                  Pelanggan.                                           //
// Dibuat Oleh    : Puja - 2105551016                                    //
//                                                                       //
// Versi : 1.2                                     Rev. 1                //
// Tgl: 8-12-2021                                  Tgl: 9-12-2021        //
// Revisi 1       : Merapikan.                                           //
// Direvisi Oleh  : Jenni - 2105551028                                   //
//                                                 Rev. 2                //
//                                                 Tgl: 10-12-2021       //
// Revisi 2       : Mengubah urutan.                                     //
// Direvisi Oleh  : Puja - 2105551016                                    //
//=======================================================================//

//fungsi untuk masuk ke menu utama apabila sebelumnya di login memilih pelanggan
void menuPelanggan(void){
	menuPelanggan:
	system("cls");
	header();
	int menuPelanggan;
	printf ("|=============================================|\n");
	printf ("|                  MENU UTAMA                 |\n");
	printf ("|=============================================|\n");
	printf ("|[1] PACKAGE LIST                             |\n");
	printf ("|[2] KONFIRMASI PEMESANAN                     |\n");
	printf ("|[3] DAFTAR TRANSAKSI                         |\n");
	printf ("|[4] REKOMENDASI                              |\n");
	printf ("|[5] TENTANG KAMI                             |\n");
	printf ("|=============================================|\n");
	printf ("|[6] BANTUAN                                  |\n"); // Jika bingung dengan program ini, dapat menggunakan tombol bantuan
	printf ("|[7] KELUAR                                   |\n"); // Pilihan exit yang dapat digunakan user sebagai pilihan untuk menutup program
	printf ("=============================================== \n");
	printf ("Silahkan pilih : "); // Memilih Jasa yang diinginkan
	scanf("%d", &menuPelanggan);
	//memilih menu
		if(menuPelanggan==1){
			menuJasa();
		}
		else if(menuPelanggan==2){
			konfirmasiPemesanan();
		}
		else if(menuPelanggan==3){
			daftarTransaksi();
		}
		else if(menuPelanggan==4){
			menurekomen();
		}
		else if(menuPelanggan==5){
			tentangKami();
		}
		else if(menuPelanggan==6){
			menuBantuan();
		}
		else if(menuPelanggan==7){
			system("cls");
			system("pause");
			printf("Anda Telah Keluar Dari Program\n");
			exit(0);
		}
		else{
			inputSalah();
			goto menuPelanggan;
		}
}
