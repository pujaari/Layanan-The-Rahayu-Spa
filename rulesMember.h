//=======================================================================//
//*********  Fungsi Untuk Menampilkan Rules Member Rayuri Spa  **********//
//=======================================================================//
// Nama Fungsi    : rulesMember                                          //
// Input Argumen  : int registrasi                                       //
//                  int daftar                                           //
// Output Argumen : void                                                 //
// Deskripsi      : Fungsi untuk menampilkan rules member dari rayuri spa//
//                  kepada customer sebelum lanjut ke pendaftaran member.//
// Dibuat Oleh    : Jenni - 2105551028                                   //
//                                                                       //
// Versi : 1.1                                    Rev. 1                 //
// Tgl   : 22-12-2021                             Tgl: 25-12-2021        //
// Revisi 1       : Mengedit isi dari rules member dari Rayuri Spa       //
// Direvisi Oleh  : Jenni - 2105551028                                   //
//=======================================================================//
void rulesMember(void){
 	rulesMember :
 	header();
	int registrasi;
	int daftar;
	char nama [85];
	char alamat [250];
	char telp [13];
	printf ("\n\n\n\n\n\n\n");
	printf ("==============================================\n");
    printf ("|               'THE RAHAYU SPA'             |\n");
    printf ("|============================================|\n");
	printf ("|                    RULES                   | \n");
	printf ("|                                            | \n");
	printf ("|1. Sudah pernah melakukan layanan spa di    | \n");
	printf ("|   Rahayu Spa sebelumnya                    | \n");
	printf ("|2. Member bersifat pribadi dan tidak bisa   | \n");
	printf ("|   dipindah tangankan                       | \n");
	printf ("|3. Setiap anggota hanya diperbolehkan       | \n");
	printf ("|   memiliki satu akun keanggotaan dan satu  | \n");
	printf ("|   kartu keanggotaan                        | \n");
	printf ("|4. Untuk mendaftar menjadi member tidak     | \n");
	printf ("|   dikenakan biaya apapun                   | \n");
	printf ("|5. Terdapat 2 jenis member dalam The Rahayu | \n");
	printf ("|   Spa yaitu Member Silver dengan masa aktif| \n");
	printf ("|   6 bulan dan Member Gold dengan masa aktif| \n");
	printf ("|   1 tahun                                  | \n");
	printf ("|6. Jika masa keanggotaan sudah habis maka   | \n");
	printf ("|   anggota bisa mendaftar kembali atau      | \n");
	printf ("|   selesai menjadi member di The Rahayu Spa | \n");
	printf ("********************************************** \n");
	printf ("********************************************** \n");
	printf ("|            KEUNTUNGAN MEMBER               | \n");
	printf ("|                                            | \n");
	printf ("|(1) Mendapat potongan setiap melakukan      | \n");
	printf ("|    layanan di The Rahayu Spa               | \n");
	printf ("|(2) Mendapat bonus maupun promo setiap      | \n");
	printf ("|    hari-hari penting                       | \n");
	printf ("|(3) Dapat mengikuti program-program reward  | \n");
	printf ("|    lainnya                                 | \n");
	printf ("********************************************** \n");
 	printf ("\tApa yang selanjutnya akan dilakukan? \n");
 	printf ("	1. Lanjutkan Pendaftaran Member \n");
 	printf ("	2. Kembali ke Menu Utama \n");
 	printf ("Masukkan pilihan anda : ");
 	scanf  ("%d", &daftar);

 	if (daftar==1){
 		pendaftaranMember();
	}
 	else if (daftar==2){
		menuPegawai();
	}
	else{
		inputSalah();
		goto rulesMember;
	}
 }
