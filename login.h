//=======================================================================//
//***********       Fungsi Untuk Menampilkan login       ****************//
//=======================================================================//
// Nama Fungsi    : login                                                //
// Input Argumen  : int pilihPengguna                                    //
// Output Argumen : void                                                 //
// Deskripsi      : Fungsi ini untuk menampilkan pilihan login sebagai   //
//                  customer atau staff. Jika input 1 akan diarahkan ke  //
//                  customer dan jika input 2 akan diarahkan ke staff    //
// Dibuat Oleh    : Puja - 2105551016                                    //
//                                                                       //
// Versi : 1.3                                     Rev. 1                //
// Tgl   : 04-12-2021                              Tgl: 05-12-2021       //
// Revisi 1       : Menambahkan agar customer dapat melakukan login dan  //
//                  sign up.                                             //
// Direvisi Oleh  : Jenni - 2105551028                                   //
//                                                 Rev. 2                //
//                                                 Tgl: 06-12-2021       //
// Revisi 2       : Merapikan isi fungsi agar terlihat rapi              //
// Direvisi Oleh  : Jenni - 2105551028                                   //
//                                                 Rev. 3                //
//                                                 Tgl: 07-12-2021       //
// Revisi 3       : Membenahi fungsi login sehingga akses data bisa      //
//                  berdasarkan tiap akun pengguna                       //
// Direvisi Oleh  : Puja - 2105551016                                    //
//=======================================================================//

//fungsi untuk menampilkan header program
void header(void);
//fungsi untuk masuk ke menu utama apabila sebelumnya di login memilih customer
void menuCostumer(void);
//fungsi untuk menampilkan menu apabila login sebagai pegawai/staff
void menuPegawai(void);

char username[20];
char password [20];
struct Data{
    char nama[100];
    char password[100];
};
struct Data pengguna;
FILE*out;

void login(void){
	login:
	system("cls");

	int pilihPengguna;

	printf("\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t=============================================\n");
	printf("\t\t\t\t\t|              'THE RAHAYU SPA'             |\n");
	printf("\t\t\t\t\t|===========================================|\n");
	printf("\t\t\t\t\t|   Jalan Bintang No. 295, Kota Galaksi     |\n");
	printf("\t\t\t\t\t|   Relaxtion your body with Rahayu Spa     |\n");
	printf("\t\t\t\t\t|    >>> Kenyamanan Anda Yang Utama <<<     |\n");
	printf("\t\t\t\t\t=============================================\n");
	printf("\n\t\t\t\t\tLogin sebagai : \n");
	printf("\t\t\t\t\t[1] Customer\n");
	printf("\t\t\t\t\t[2] Pegawai\n");
	printf("\n\n\t\t\tMasukkan pilihan anda :");
	scanf("%d",&pilihPengguna);

	if(pilihPengguna == 1){ //jika milih ini maka akan masuk ke login costumer
		loginCostumer:
		system("cls");
		bool masuk;
		int opsi;
 		printf ("\n\n\n\n\n");
 		header();
		printf("\n\n\t\t   1. Sign Up\n");
		printf("\t\t   2. Login\n\n");
		printf("\tMasukan pilihan Anda: ");
		scanf("%d", &opsi);

		switch(opsi){
			case 1: //buat pengguna
				system("cls");
				out=fopen("pengguna","a+");
				header();
				printf("\nUsername  : ");
				scanf("%s", &pengguna.nama);
				printf("\nPassword  : ");
				scanf("%s", &pengguna.password);
				printf("\n\n\t\t ********************");
				printf("\n\n\t\t | SIGN UP BERHASIL! |");
				printf("\n\n\t\t ********************");
				fprintf(out,"%s\n",pengguna.nama);
	            fprintf(out,"%s\n",pengguna.password);
	            fclose(out);
				getch();
				system("cls");
				goto loginCostumer;
			case 2: //masuk setelah buat akun
				cobaMasuk:
				system("cls");
				out = fopen("pengguna","r+");
				masuk = false;
				header();
				printf("\n\t\tUsername : ");
				scanf("%s", &username);
				printf("\n\t\tPassword : ");
				scanf("%s", &password);
				while(fscanf(out,"\n%s\n%s",pengguna.nama,pengguna.password)!=EOF){
		            if((strcmp(pengguna.nama,username) == 00) && (strcmp(pengguna.password,password)==00)){
		                masuk = true;
		                break;
	           		}
	       		}
	        	if(!masuk){ //kalau salah
		            system("cls");
		            int loginFailed;
		            printf("\n\nLOGIN FAILED!!!\n");
		            printf("\nPilih tindakan : \n");
		            printf("\n> Pilih 1 untuk keluar\n");
		            printf("> Masukan Angka acak untuk coba lagi\n\n");
		            //pilih sembarang artinya pilih nomor berapa saja untuk coba lagi memasukkan username dan password
		            printf("Pilih : ");
		            scanf("%d",&loginFailed);
		            if(loginFailed==1){
		            	goto loginCostumer;
		            }
		            else{
						goto cobaMasuk;
		            }
		    	}
		    	else { //kalau benar
	            printf("\n\n\t    Selamat anda berhasil LOGIN!");
	            getch();
				menuCostumer();
	            system("cls");
	        	}
	    }
	}
	else if(pilihPengguna == 2){ //jika memilih ini maka akan masuk ke login pegawai
		loginPegawai:
		system("cls");
		char usernamePegawai [50];
		char passwordPegawai [50];

        printf("\n\n\n\n\n\n\n");
		printf("\t\t\t\t\t=============================================\n");
        printf("\t\t\t\t\t|              'THE RAHAYU SPA'             |\n");
        printf("\t\t\t\t\t|===========================================|\n");
        printf("\t\t\t\t\t|   Jalan Bintang No. 295, Kota Galaksi     |\n");
        printf("\t\t\t\t\t|   Relaxtion your body with Rahayu Spa     |\n");
        printf("\t\t\t\t\t|    >>> Kenyamanan Anda Yang Utama <<<     |\n");
        printf("\t\t\t\t\t=============================================\n");
		printf("\n\n\t\tUsername : ");
        scanf("%s",&usernamePegawai);
        printf("\n\t\tPassword : ");
        scanf("%s",&passwordPegawai);
 		//username disini masukkan admin dan untuk password masukkan 123

        if(strcmp(usernamePegawai,"PUJA")==0 && strcmp(passwordPegawai,"1016")==0){
			menuPegawai();
		}
		else if(strcmp(usernamePegawai,"JENNI")==0 && strcmp(passwordPegawai,"1028")==0){
            menuPegawai();
		}
		else{
			int gagal;
            printf("\n\t\tLOGIN FAILED!!!\n");
            printf("\n\tPilih tindakan : \n");
            printf("\n> Pilih 1 untuk keluar\n");
            printf("> Masukan Angka acak untuk coba lagi\n\n");
            printf("Pilih : ");
            scanf("%d",&gagal);
            if(gagal == 1){
                goto login;
            }
            else{
                goto loginPegawai;
			}
		}
	}
}
