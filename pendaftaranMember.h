//=======================================================================//
//***********       Fungsi Untuk Pendaftaran Member      ****************//
//=======================================================================//
// Nama Fungsi    : pendaftaranMember                                    //
// Input Argumen  : int member, char nama [100][30],                     //
//                  char alamat [100][100], char telp [50][50]           //
//                  char email[80][20], char status[50][20]              //
// Output Argumen : int i, char nama [100][30],                          //
//                  char alamat [100][100], char telp [50][50]           //
//                  char email[80][20], char status[50][20]              //
//                  time_t ambil_waktu2, time(&ambil_waktu2)             //
// Deskripsi      : Fungsi untuk mendaftarkan member apabila customer    //
//                  sudah pasti ingin menjadi member di Rayuri Spa       //
// Dibuat Oleh    : Jenni - 2105551028                                   //
//                                                                       //
// Versi : 1.2                                    Rev. 1                 //
// Tgl   : 15-12-2021                            Tgl: 20-12-2021         //
// Revisi 1       : Memperbaiki dan merapikan.                           //
//                  Menambahkan kuitansi pendaftaran member dalam file.  //
//                  txt.                                                 //
// Direvisi Oleh  : Jenni - 210555128                                    //
//                                                 Rev. 2                //
//                                                 Tgl: 25-12-2021       //
// Revisi 2       : Memperbaiki ouput karena masih error di bagian nama  //
//                  dan perulangan.                                      //
 //                 Merapikan program dan output dalam file.txt.         //
// Direvisi Oleh  : Puja - 2105551016                                    //
//=======================================================================//
void pendaftaranMember(){
        system ("cls");
        pendaftaranMember :
        header();
        char nama [100][30], alamat [100][100], telp [50][50], email[80][20], status[50][20];
        int member;
        int i;
        char konfirmasiPendaftaran;
        printf ("\n\n");
        printf ("=======================================================\n");
        printf ("|                   'THE RAHAYU SPA'                  |\n");
        printf ("|=====================================================|\n");
        printf ("\nBerapa jumlah member yang akan ditambahkan ? ");
        scanf  ("%d", &member);

        for (i=1; i<=member; i++){
        	printf ("\n\nMasukkan data diri pelanggan %d: ", i) ;
        	printf ("\n");
        	printf ("\n  NAMA          : ");
    		scanf  (" %[^\n]s",&nama[i][i]);
        	printf ("\n  ALAMAT        : ");
        	scanf  (" %[^\n]s",&alamat[i][i]);
        	printf ("\n  NOMOR TELEPON : ");
        	scanf  (" %[^\n]s",&telp[i][i]);
        	printf ("\n  EMAIL MEMBER  : ");
        	scanf  (" %[^\n]s", &email[i][i]);
        	printf ("\n  STATUS MEMBER : ");
        	scanf  (" %[^\n]s", &status[i][i]);
        }
        	printf ("\n================================================================================\n");
        	printf ("\n\n\n");
            printf ("\t         SELAMAT ANDA SUDAH MENJADI MEMBER DARI THE RAHAYU SPA ^_^ \n");
            FILE * fPointer2;
            fPointer2 = fopen ("Data Member Rahayu Spa.txt", "a+");
            fprintf (fPointer2, "\n");
            fprintf (fPointer2, "=====================================================================================================================================\n");
            fprintf (fPointer2, "                                          A N G G O T A  M E M B E R  T H E R A H A Y U  S P A \n");
            fprintf (fPointer2, "=====================================================================================================================================\n");
            fprintf (fPointer2, "%3s", "No");
            fprintf (fPointer2, "%20s", "Nama Customer");
            fprintf (fPointer2, "%20s", "Alamat Customer");
            fprintf (fPointer2, "%20s", "No. Telp");
            fprintf (fPointer2, "%30s", "Email");
            fprintf (fPointer2, "%20s\n", "Status");
            for(i=1; i<=member; i++){
            fprintf (fPointer2, "%3i", i);
            fprintf (fPointer2, "%20s", &nama[i][i]);
            fprintf (fPointer2, "%20s", &alamat[i][i]);
            fprintf (fPointer2, "%20s", &telp[i][i]);
            fprintf (fPointer2, "%30s", &email[i][i]);
            fprintf (fPointer2, "%20s\n", &status[i][i]);}
            fprintf (fPointer2, "=====================================================================================================================================\n");
            fclose(fPointer2);
        getch();
        menuPegawai();
}
