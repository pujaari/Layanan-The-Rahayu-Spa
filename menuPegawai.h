//=======================================================================//
//***********       Fungsi Untuk Menampilkan Menu Pegawai     ***********//
//=======================================================================//
// Nama Fungsi    : menuPegawai                                          //
// Input Argumen  : int menuPegawai                                      //
// Output Argumen : void                                                 //
// Deskripsi      : Fungsi ini digunakan untuk menampilkan  menu, yang   //
//                  terdiri dari kasir yang digunakan saat melakukan     //
//                  pembayaran. Setelah itu, di menu pegawai juga kita   //
//                  bisa melakukan pendaftaran member dan absensi pegawai//
//                  serta penggajian pegawai.                            //
// Dibuat Oleh    : Jenni - 2105551028                                   //
//                                                                       //
// Versi : 1.3                                     Rev. 1                //
// Tgl: 8-12-2021                                  Tgl: 9-12-2021        //
// Revisi 1       : Menambahkan menu daftar member.                      //
// Direvisi Oleh  : Puja - 2105551016                                    //
//                                                 Rev. 2                //
//                                                 Tgl: 10-12-2021       //
// Revisi 1       : Menambahkan menu absen pegawai.                      //
// Direvisi Oleh  : Jenni - 2105551028                                   //
//                                                 Rev. 3                //
//                                                 Tgl: 11-12-2021       //
// Revisi 1       : Menambahkan menu penggajian pegawai.                 //
// Direvisi Oleh  : Puja - 2105551016                                    //
//=======================================================================//

//fungsi untuk menampilkan menu apabila login sebagai pegawai/staff
void menuPegawai(void){
	menuPegawai:
	system("cls");
	header();
	int menuPegawai;
	printf ("|=============================================|\n");
	printf ("|            R A H A Y U   S P A              |\n");
	printf ("|=============================================|\n");
	printf ("|[1] KASIR                                    |\n");
	printf ("|[2] DAFTAR MEMBER                            |\n");
	printf ("|[3] ABSEN PEGAWAI                            |\n");
	printf ("|[4] PENGGAJIAN PEGAWAI                       |\n");
	printf ("|=============================================|\n");
	printf ("|[5] KELUAR                                   |\n"); // Pilihan untuk Keluar ke sebelumnya
	printf ("=============================================== \n");
	printf ("Silahkan pilih : "); // Memilih Jasa yang diinginkan
	scanf("%d", &menuPegawai);

	if(menuPegawai == 1){
		menuKasir();
	}
	else if(menuPegawai == 2){
		rulesMember();
	}
	else if(menuPegawai == 3){
		menuAbsensi();
	}
	else if(menuPegawai == 4){
		penggajianPegawai();
	}
	else if(menuPegawai == 5){
		system("cls");
		system("pause");
		printf("Anda keluar dari program\n");
		exit(0);
	}
	else{
		inputSalah();
		goto menuPegawai;
	}
}
