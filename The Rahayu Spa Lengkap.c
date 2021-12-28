#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#include <stdbool.h>

//prtotipe program
//fungsi untuk menampilkan judul program
void judul (void);
//fungsi untuk menampilkan header program
void header(void);
//fungsi untuk masuk ke menu utama apabila sebelumnya di login memilih pelanggan
void menuPelanggan(void);
//fungsi untuk menampilkan menu jasa dan paket yang tersedia di spa
void menuJasa(void);
//fungsi untuk menampilan menu bantuan apabila user kesulitan dan tidak mengerti dalam penggunaan program
void menuBantuan(void);
//fungsi untuk menampilkan apabila input salah
void inputSalah(void);
//fungsi untuk menampilkan rincian jasa 1
void tampilkanRincianJasa1(void);
//fungsi untuk menampilkan rincian jasa 2
void tampilkanRincianJasa2(void);
//fungsi untuk menampilkan rincian jasa 3
void tampilkanRincianJasa3(void);
//fungsi untuk menampilkan rincian jasa 4
void tampilkanRincianJasa4(void);
//fungsi untuk menampilkan rincian jasa 5
void tampilkanRincianJasa5(void);
//fungsi untuk mencetak kuitansi pembayaran DP apabila pelanggan sudah selesai memesan
void cetakKuitansi(const char * namaPelanggan,const char * noHp, const char * alamat, const char * namaJasa[100][30], int totaljumlahharga, int totalrDp, const char * waktu1, const char * waktu2, int i, int paket);
//fungsi untuk login sebagai pengguna(pelanggan) atau pegawai
void login(void);
//fungsi untuk menampilkan menu apabila login sebagai pegawai
void menuPegawai(void);
//fungsi untuk menampilkan menu kasir untuk menyelesaikan pembayaran
void menuKasir(void);
//fungsi untuk menampilkan total harga
void tampilkantotalharga(int totalhargakeseluruhan);
//fungsi untuk menghitung sisa pembayaran
int hitungsisapembayaran(int totalhargakeseluruhan, int DP);
//fungsi untuk menampilkan sisa pembayaran
void tampilkansisapembayaran(int sisapembayaran);
//fungsi untuk menghitung kembali
int hitungkembali(int pembayaran, int totalhargakeseluruhan);
//fungsi untuk menampilkan kembali dan akhir dari transaksi
void tampilkankembali(int kembali, int pembayaran, int sisapembayaran, int totalhargakeseluruhan);
//fungsi untuk mencetak nota pembayaran pelanggan
void cetaknota(const char * namaPelanggan, const char * noHp, int i, int jumlah[100], int harga[100], int totalharga[100], char namapaket[100][30], int totalhargakeseluruhan, int DP, int pembayaran, int kembali, int paket, int sisapembayaran);
//fungsi untuk mengkonfirmasi pemesanan
void konfirmasiPemesanan(void);
//syarat mendaftarkan member
void rulesMember(void);
//fungsi untuk mendaftarkan member
void pendaftaranMember(void);
//fungsi untuk menampilkan rekomendasi pembelian paket spa
void menurekomen(void);
//fungsi untuk mwnampilkan informasi tentang The Rahayu Spa
void tentangKami(void);
//fungsi mencetak pembayaran
void cekPembayaran(const char * bank, int noRekening, const char * nama, int jumlahTransfer);
//fungsi pendaftaran member
void pendaftaranMember(void);
//fungsi menampilkan daftar transaksi
void daftarTransaksi(void);
//fungsi untuk rekap absensi pegawai
void menuAbsensi(void);
//fungsi untuk menggaji pegawai
void penggajianPegawai (void);

char kuitansi[50] = "kuitansi";
char username[20];
char password [20];
struct Data{
    char nama[100];
    char password[100];
    char name[100];
    char alamat[100];
    int notlp;
};
struct Data pengguna;
struct pegawai{
    char nama[100][30];
    int bulan, alpha, total;
}pegawai[100];
FILE*out;

int main() {
	judul();
	login();
return 0;
}

struct karyawan {
	char nama[50];
	int pokok;
	int bonus;
	int pinjaman;
	}gaji[100];

//fungsi untuk menampilkan judul program
void judul(void){
	system("cls");
	system("color 20");
	printf("\n\n\n\n\n\n\n");
	printf("\t\t\t\t==================================================\n");
	printf("\t\t\t\t|            Program Layanan The Rahayu SPA      | \n");
	printf("\t\t\t\t==================================================\n");
	printf("\t\t\t\t|            This Program Created By :           |\n");
	printf("\t\t\t\t|                    1. Puja                     |\n");
	printf("\t\t\t\t|                    2. Jenni                    |\n");
	printf("\t\t\t\t==================================================\n\n\n");
	printf("\t\t\t\t\t\t**********************\n");
	printf("\t\t\t\t\t\t|Click enter to start|\n");
	printf("\t\t\t\t\t\t**********************\n");
	getch();
	system("cls");
	printf("\t\n\n\n\n\n\n\n\n"); //Halaman awal bagian pemesanan dengan nama SPA
	printf("\t\t\t\t\t==============================================\n");
	printf("\t\t\t\t\t|      SELAMAT DATANG DI RAHAYU SPA          |\n");
	printf("\t\t\t\t\t|       'WELCOME TO THE RAHAYU SPA'          |\n");
	printf("\t\t\t\t\t|============================================|\n");
	printf("\t\t\t\t\t|   Jalan Bintang No. 295, Kota Galaksi      |\n");
	printf("\t\t\t\t\t|   Relaxtion your body with Rahayu Spa      |\n");
	printf("\t\t\t\t\t|    >>> Kenyamanan Anda Yang Utama <<<      |\n");
	printf("\t\t\t\t\t|    Hubungi  : 08123456789                  |\n");
	printf("\t\t\t\t\t|   Instagram : @rahayu.spa                  |\n");
	printf("\t\t\t\t\t|   Facebook  : rahayuspabali                |\n");
	printf("\t\t\t\t\t|   E-mail    : rahayuspa@gmail.com          |\n");
	printf("\t\t\t\t\t==============================================\n");
	getch();
}

//fungsi untuk menampilkan header program
void header(void){
    printf("\n\n\n");
    printf("\t\t\t\t\t==============================================\n");
	printf("\t\t\t\t\t|              'THE RAHAYU SPA'              |\n");
	printf("\t\t\t\t\t|============================================|\n");
	printf("\t\t\t\t\t|   Jalan Bintang No. 295, Kota Galaksi      |\n");
	printf("\t\t\t\t\t|   Relaxtion your body with Rahayu Spa      |\n");
	printf("\t\t\t\t\t|    >>> Kenyamanan Anda Yang Utama <<<      |\n");
	printf("\t\t\t\t\t==============================================\n");

}

//fungsi untuk login sebagai pengguna(pelanggan) atau pegawai
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
	printf("\t\t\t\t\t[1] Pelanggan\n");
	printf("\t\t\t\t\t[2] Pegawai\n");
	printf("\n\t\t\t\t\tMasukkan pilihan anda :");
	scanf("%d",&pilihPengguna);

	if(pilihPengguna == 1){ //jika milih ini maka akan masuk ke login Pelanggan
		loginPelanggan:
		system("cls");
		bool masuk;
		int opsi;
 		printf ("\n\n\n\n\n");
 		header();
		printf("\n\n\t 1. Registrasi\n");
		printf("\n\n\t 2. Login\n\n");
		printf("\tMasukan pilihan Anda: ");
		scanf("%d", &opsi);

		switch(opsi){
			case 1: //buat pengguna
				system("cls");
				out=fopen("pengguna","a+");
				header();
				printf("\nNama       : ");
				scanf(" %[^\n]s", &pengguna.name);
				printf("\nAlamat     : ");
				scanf(" %[^\n]s", &pengguna.alamat);
				printf("\nNo.telepon : ");
				scanf("%s", &pengguna.notlp);
				printf("\nUsername   : ");
				scanf("%s", &pengguna.nama);
				printf("\nPassword   : ");
				scanf("%s", &pengguna.password);
				printf("\n\n\t\t ======================");
				printf("\n\n\t\t |REGISTRASI BERHASIL! |");
				printf("\n\n\t\t ======================");
				fprintf(out,"%s\n",pengguna.nama);
	            fprintf(out,"%s\n",pengguna.password);
	            fclose(out);
				getch();
				system("cls");
				goto loginPelanggan;
			case 2: //masuk setelah buat akun
				cobaMasuk:
				system("cls");
				out = fopen("pengguna","r+");
				masuk = false;
				header();
				printf("\nUsername : ");
				scanf("%s", &username);
				printf("\nPassword : ");
				scanf("%s", &password);
				while(fscanf(out,"\n%s\n%s",pengguna.nama,pengguna.password)!=EOF){
		            if((strcmp(pengguna.nama,username) == 00) && (strcmp(pengguna.password,password)==00)){
		                masuk = true;
		                break;
	           		}
	       		}
	        	if(!masuk){ //jika salah
		            system("cls");
		            int loginGagal;
		            printf("\n\t\tLOGIN GAGAL!!!\n");
		            printf("\n\tPilih langkah selanjutnya : \n");
		            printf("\n>Pilih 1 untuk keluar<\n");
		            printf(">>Masukan Angka acak untuk coba lagi<<\n\n");
		            //input pilihan angka acak untuk coba lagi memasukkan username dan password
		            printf("Pilih : ");
		            scanf("%d",&loginGagal);
		            if(loginGagal==1){
		            	goto loginPelanggan;
		            }
		            else{
			    goto cobaMasuk;
		            }
		    	}
		    	else { //kalau benar
	            printf("\n\n\t    Selamat anda berhasil masuk!");
	            getch();
				menuPelanggan();
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
 		//input username pegawai "PUJA" atau "JENNI" dengan input password 1016 (PUJA) dan 1028 (JENNI)

        if(strcmp(usernamePegawai,"PUJA")==0 && strcmp(passwordPegawai,"1016")==0){
			menuPegawai();
		}
		else if(strcmp(usernamePegawai,"JENNI")==0 && strcmp(passwordPegawai,"1028")==0){
            menuPegawai();
		}
		else{
			int gagal;
            printf("\n\t\tLOGIN GAGAL!!!\n");
            printf("\n\tPilih langkah selanjutnya : \n");
            printf("\n>Pilih 1 untuk keluar<\n");
            printf(">>Masukan Angka acak untuk coba lagi<<\n\n");
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
	printf ("|[6] BANTUAN                                  |\n"); // Jika bingung dengan program ini, dapat menggunakan menu bantuan
	printf ("|[7] KELUAR                                   |\n"); // Pilihan keluar yang dapat digunakan user sebagai pilihan untuk menutup program
	printf ("|=============================================|\n");
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
			printf("Anda Telah Keluar Dari Program Layanan The Rahayu Spa\n");
			exit(0);
		}
		else{
			inputSalah();
			goto menuPelanggan;
		}
}

//fungsi untuk menampilkan menu jasa dan menu paket yang tersedia di spa
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
	printf ("|[1] REFLEXY                 Rp.  190.000,-   |\n");
	printf ("|[2] REJUVENATE              Rp.  205.000,-   |\n");
	printf ("|[3] RECHARGE                RP.  265.000,-   |\n");
	printf ("|[4] REFRESH                 Rp.  330.000,-   |\n");
	printf ("|[5] RELAX                   Rp.  370.000,-   |\n");
	printf ("|=============================================|\n");
	printf ("|[6] KEMBALI                                  |\n"); // Pilihan untuk kembali ke menu sebelumnya
	printf ("|=============================================|\n");


	printf("Ingin memesan berapa paket? "); //untuk memilih jumlah jasa yang diinginkan
	scanf("%i", &paket);

	for(i=1; i<=paket; i++){                 //perulangan untuk memilih jasa
		printf("\n\nPilih paket ke-%i : " , i);
		scanf("%i", &menuJasa[i]);
		printf("Jumlah                : " , i);
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
		printf("|=====================================================|\n\n");
		printf("\n\nDetail Pemesanan\n");
		printf("Tanggal-Bulan-Tahun Pemesanan  : ");
		gets(waktu1);
		printf("Masukan Jam                    : ");
		gets(waktu2);
		printf("|=====================================================|\n\n");
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

//fungsi menampilkan informasi tentang the rahayu spa
void tentangKami(void){
	tentangKami:
	system("cls");
	int tentangKami;
	printf ("\n\n\n\n\n\n\n\n");
    printf ("\t\t\t\t\t\t  =================================================================\n");
    printf ("\t\t\t\t\t\t  *                         'THE RAHAYU SPA'                      *\n");
    printf ("\t\t\t\t\t\t  *===============================================================*\n");
    printf ("\t\t\t\t\t\t  *                             ABOUT US                          *\n");
	printf ("\t\t\t\t\t\t  ================================================================*\n");
	printf ("\t\t\t\t\t\t  *    Rahayu SPA telah berdiri sejak tahun 2010 yang merupakan   *\n");
	printf ("\t\t\t\t\t\t  *  tempat perawatan dan relaksasi dengan konsep natural modern  *\n");
	printf ("\t\t\t\t\t\t  *   SPA. SPA yang modern dari segi design interior dan produk,  *\n");
	printf ("\t\t\t\t\t\t  *       tetapi tetap menggunakan banyak unsur alami serta       *\n");
	printf ("\t\t\t\t\t\t  *                          tradisional.                         *\n");
	printf ("\t\t\t\t\t\t  *                                                               *\n");
	printf ("\t\t\t\t\t\t  *   Rahayu Spa menyediakan pengalaman spa & refleksi authentik  *\n");
	printf ("\t\t\t\t\t\t  *  yang memberikan manfaat terbaik bagi seluruh tubuh dan jiwa. *\n");
	printf ("\t\t\t\t\t\t  *  Spa authentik memberi ketenangan jiwa, menjernihkan pikiran, *\n");
	printf ("\t\t\t\t\t\t  *  Rahasia sehat dan awet muda untuk kehidupan yang senantiasa  *\n");
	printf ("\t\t\t\t\t\t  *                         penuh kedamaian.                      *\n");
	printf ("\t\t\t\t\t\t  =================================================================\n");
	printf ("\n");
	printf ("\t\t\t\t\t\t\t***** THERAPHY THAT WILL BE IN THE RAHAYU SPA *****\n");
	printf ("\t\t\t\t\t\t  *****************************************************************\n");
	printf ("\t\t\t\t\t\t  *  Terapi indera motorik dengan teknik  pijatan/sentuhan yang   *\n");
	printf ("\t\t\t\t\t\t  *  merilekskan serta  menghilangkan kelelahan tubuh, dilakukan  *\n");
	printf ("\t\t\t\t\t\t  *       oleh terapis yang berpengalaman dan profesional         *\n");
	printf ("\t\t\t\t\t\t  *                                                               *\n");
	printf ("\t\t\t\t\t\t  *  Terapi indera pendengaran dengan musik yang menenangkan jiwa *\n");
	printf ("\t\t\t\t\t\t  *                                                               *\n");
	printf ("\t\t\t\t\t\t  *  Terapi indera penglihatan dengan dekor interior tradisional  *\n");
	printf ("\t\t\t\t\t\t  *       bernuansa tropis  minimalis serta alami sehingga        *\n");
	printf ("\t\t\t\t\t\t  *   menciptakan suasana nyaman dan relax bagi pikiran dan jiwa  *\n");
	printf ("\t\t\t\t\t\t  *                                                               *\n");
	printf ("\t\t\t\t\t\t  *  Terapi indera penciuman dengan wangi aroma theraphy di area  *\n");
	printf ("\t\t\t\t\t\t  *                 titik vital, spa & refleksi                   *\n");
	printf ("\t\t\t\t\t\t  *                                                               *\n");
	printf ("\t\t\t\t\t\t  *   Terapi indera perasa dimana setiap customer akan disuguhi   *\n");
	printf ("\t\t\t\t\t\t  *     minuman tradisional dengan olahan alami terbaik bagi      *\n");
	printf ("\t\t\t\t\t\t  *                      kesehatan di akhir perawatan             *\n");
    printf ("\t\t\t\t\t\t  *****************************************************************\n\n\n");
	printf ("\t\t\t\t\t\t[1] Pesan Sekarang\n");
	printf ("\t\t\t\t\t\t[2] Kembali Ke Halaman Utama\n\n");
	printf ("\t\t\t\t\t\tPilih : ");
	scanf("%d",&tentangKami);
	if(tentangKami == 1){
		getch();
		menuJasa();
	}
	else if(tentangKami == 2){
		menuPelanggan();
	}
	else{
		inputSalah();
		goto tentangKami;
	}
}

//fungsi untuk menampilan menu bantuan apabila user kesulitan dan tidak menegerti dalam penggunaan program
void menuBantuan(void){
	menuBantuan:
	system("cls");
	header();
	int bantuan;
	printf ("|=============================================|\n");
	printf ("|                MENU BANTUAN                 |\n");
	printf ("|=============================================|\n");
	printf ("|[1] TENTANG PROGRAM                          |\n");//Menjelaskan tentang program layanan spa
	printf ("|[2] CARA MENGGUNAKAN                         |\n");//Menjelaskan cara menggunakan program layanan spa
	printf ("|[3] FAQ                                      |\n");//Penjelasan tentang pertanyaan yang kira-kira sering diajukan oleh pelanggan (FAQ)
	printf ("|[4] RESET PROGRAM                            |\n");//fungsi ini akan mendelete semua file
	printf ("|[5] KEMBALI                                  |\n");//Kembali pada menu utama
	printf ("|=============================================|\n");
 	printf("Silahkan pilih :"); // User diminta untuk memilih pilihan diantara 5 pilihan tersebut
 	scanf("%d",&bantuan);

 	//memilih di menu bantuan
 	switch(bantuan){
		 // Penjelasan tentang Program Pemesanan SPA
 		case 1:
		system("cls");
		header();
 		int tentangProgram;
        printf ("========================================================\n");
        printf ("|                   'THE RAHAYU SPA'                   |\n");
        printf ("|======================================================|\n");
   		printf ("|Program ini bertujuan untuk memesan SPA dengan mudah. |\n");
   		printf ("|   Pemesanan spa ini diawali dengan sistem booking    |\n");
   		printf ("| terlebih dahulu. Setelah memesan maka pelanggan akan |\n");
   		printf ("|    membayar dp terlebih dahulu agar pesanan tidak    |\n");
   		printf ("|    dibatalkan lalu pada saat hari yang ditentukan    |\n");
   		printf ("|pelanggan akan membayar penuh. Program ini dibuat agar|\n");
   		printf ("|    pelanggan tidak lama menunggu antrian saat ingin  |\n");
   		printf ("|   melakukan spa sehingga tidak banyak yang komplain  |\n");
   		printf ("|            terhadap pelayanan di spa.                |\n");
		printf ("|======================================================|\n");
   		getch ();
   		menuBantuan();
 		// Penjelasan tentang tata cara Program pemesanan SPA
  		case 2:
		system("cls");
		header();
  		int caraMenggunakan;
  		printf ("\n\n");
		printf ("==============================================================\n");
        printf ("|                      'THE RAHAYU SPA'                       |\n");
        printf ("|=============================================================|\n");
		printf ("|                                                             |\n");
  	    printf ("|Inputkan angka pada menu utama sesuai kebutuhan,             |\n");
   		printf ("|Membuat akun untuk mendapatkan diskon 5 persen,              |\n");
   		printf ("|Pengguna kartu member akan diberi discount sebesar 5 persen  |\n");
   		printf ("|untuk pengguna Member Silver dan 20 persen untuk pengguna    |\n");
   		printf ("|Member Gold                                                  |\n");
		printf ("|=============================================================|\n");
   		getch();
   		menuBantuan();
   		case 3:
   		system("cls");
		header();
		int FAQ;
		printf ("\n\n");
		printf ("===================================================================================\n");
        printf ("|                                  'THE RAHAYU SPA'                               |\n");
        printf ("|=================================================================================|\n");
		printf ("|                                                                                 |\n");
		printf ("|                           PERTANYAAN YANG SERING DIAJUKAN                       |\n");
		printf ("|                                                                                 |\n");
		printf ("| [A] Q : Bagaimana jika kulit saya sensitif?                                     |\n");
		printf ("|     A : Kami menyediakan banyak jenis product untuk berbagai jenis kulit,       |\n");
		printf ("|         bila anda memiliki masalah khusus dengan kulit anda,                    |\n");
		printf ("|         mohon diberitahukan sebelumnya                                          |\n");
		printf ("|                                                                                 |\n");
		printf ("| [C] Q : Apakah ada batas usia?                                                  |\n");
		printf ("|     A : Dianjurkan batas usia minimal 12 tahun                                  |\n");
		printf ("|                                                                                 |\n");
		printf ("| [E] Q : Apa yang terjadi jika saya membatalkan pemesanan?                       |\n");
		printf ("|     A : Hubungi kontak yang tertra. Pembayaran Anda bisa kembali 100 persen     |\n");
		printf ("|         apabila Anda melakukan pembatalan dalam kurun waktu kurang dari 24 jam  |\n");
		printf ("|         dari waktu pemesanan                                                    |\n");
		printf ("|=================================================================================|\n");
		getch();
   		menuBantuan();
   		//mendelete semua file
   		case 4:
   		system("cls");
   		header ();
   		char input;
   	    printf ("===============================================================\n");
        printf ("|                       'THE RAHAYU SPA'                      |\n");
        printf ("|=============================================================|\n");
		printf ("|                                                             |\n");
		printf ("|      Mendelete Semua data Transaksi Anda Menjadi kosong     |\n");
		printf ("|                                                             |\n");
		printf ("|                      - PERINGATAN DATA -                    |\n");
		printf ("|                   TRANSAKSI ANDA AKAN HILANG                |\n");
		printf ("|               DAN TIDAK BISA DIKEMBALIKAN LAGI              |\n");
		printf ("|=============================================================|\n");
		printf ("Apakah Anda yakin ingin mereset seluruh data transaksi? (y/n): ");
		getchar();
		input=getchar();
		if(input == 'y' || input == 'Y'){
			remove(pengguna.nama);
			remove(kuitansi);
			system("cls");
			printf("\tBerhasil!, Program Akan Diakhiri Silahkan Login Ulang");
			getch();
			exit(0);
		}
		else{
			goto menuBantuan;
		}
   		//kembali ke menu utama
	    case 5:
   		menuPelanggan();
   		default:
   		inputSalah();
   		goto menuBantuan;
 	}

}


//fungsi untuk menampilkan apabila input salah
void inputSalah(void){
	system("cls");
	printf("\nINPUT ANDA ADA SALAH\n");
	system("pause");
	}

//fungsi untuk mencetak kuitansi pembayaran DP apabila customer sudah selesai memesan
void cetakKuitansi(const char * namaPelanggan,const char * noHp, const char * alamat, const char * namaJasa[100][30], int totaljumlahharga, int totalDp, const char * waktu1, const char * waktu2, int i, int paket){
    //kuitansi
    time_t ambil_waktu1;
    time(&ambil_waktu1);
    FILE * fpointerkuitansiPelanggan;
    fpointerkuitansiPelanggan=fopen(pengguna.nama, "w");
    fprintf (fpointerkuitansiPelanggan,"\n%s",ctime(&ambil_waktu1));
    fprintf (fpointerkuitansiPelanggan, "==============================================================================================================\n\n");
    fprintf (fpointerkuitansiPelanggan, "                                                THE RAHAYU SPA                                                  \n");
    fprintf (fpointerkuitansiPelanggan, "                                      Jalan Bintang No. 295, Kota Galaksi                                       \n");
    fprintf (fpointerkuitansiPelanggan, "                                                Telp. 08123456789                                               \n");
    fprintf (fpointerkuitansiPelanggan, "==============================================================================================================\n\n");
    fprintf (fpointerkuitansiPelanggan, "Bukti Pemesanan Paket Spa\n\n");
    fprintf (fpointerkuitansiPelanggan, "Jadwal Pemesanan Paket                    : %s\n",waktu1);
    fprintf (fpointerkuitansiPelanggan, "Pukul                                     : %s\n",waktu2);
    fprintf (fpointerkuitansiPelanggan, "Nama Pelanggan                            : %s\n",namaPelanggan);
    fprintf (fpointerkuitansiPelanggan, "No Telepon                                : %s\n",noHp);
    fprintf (fpointerkuitansiPelanggan, "Alamat                                    : %s\n",alamat);
    fprintf (fpointerkuitansiPelanggan, "----------------------------------------------------------------------------------------------------------------\n");
 	for(i=1; i<=paket; i++){
    fprintf (fpointerkuitansiPelanggan, "%s\n",namaJasa[i][i]);
 	}
    fprintf (fpointerkuitansiPelanggan, "Total Harga                               : %d\n",totaljumlahharga);
    fprintf (fpointerkuitansiPelanggan, "----------------------------------------------------------------------------------------------------------------\n");
    fprintf (fpointerkuitansiPelanggan, "                                                      DP                                                        \n");
    fprintf (fpointerkuitansiPelanggan, "                                                 Rp. %d\n", totalDp);
    fprintf (fpointerkuitansiPelanggan, "----------------------------------------------------------------------------------------------------------------\n");
    fclose  (fpointerkuitansiPelanggan);
    }

 //fungsi menampilkan daftar transaksi yang lunas
void konfirmasiPemesanan (void){
	konfirmasiPemesanan:
	system("cls");
	int kembali;
	char benar;
    FILE * fpointerkuitansiPelanggan=fopen(pengguna.nama, "r");
    if(fpointerkuitansiPelanggan!=NULL){
		printf("\t\t\t\t\tHistory Pemesanan\n");
		char buff[255];
    	while(fgets(buff, sizeof(buff), fpointerkuitansiPelanggan)){
    		printf("%s ",buff);
    	}
    fclose(fpointerkuitansiPelanggan);
    printf("\t[1] Konfirmasi Pembayaran\n");
    printf("\t[2] Kembali\n\n");
    int pilihKonfirmasi;
    printf("pilih                               : ");
    scanf("%d",&pilihKonfirmasi);
	    if (pilihKonfirmasi==1){
	    	konfirmasi:;
	        char bank[20];
	        int noRekening;
	        int jumlahTransfer;
	        char idInvoice[20];
	        char nama[60];
	        char nohp[20];

	        printf("Bank                                : "); fflush(stdin);
	        gets(bank);
	        printf("No Rekening Anda                    : "); fflush(stdin);
	        scanf("%d", &noRekening);
	        printf("Atas Nama                           : "); fflush(stdin);
	        gets(nama);
	        printf("Jumlah Transfer                     : "); fflush(stdin);
	        scanf("%d", &jumlahTransfer);
	        printf("Apakah Data Anda Sudah Benar? (y/n) : \n");
	       	getchar();
	       	benar = getchar();
	        if(benar=='y'||benar=='Y'){
            printf("----------------------------------------------------------------------------");
            printf("\nTerimakasih Pesanan Anda Sedang Kami Cek\n\n");
            cekPembayaran(bank, noRekening, nama, jumlahTransfer);
            system("pause");
            menuPelanggan();
		    }
		    else{
		    	printf("\n\nKonfirmasi Telah Dibatalkan !\n\n");
		    	goto konfirmasiPemesanan;
		    }
	    }
	    else if(pilihKonfirmasi==2){
	        menuPelanggan();
	    }
	    else{
	        inputSalah();
	        goto konfirmasiPemesanan;
	    }
    }

    else{
    	printf("\n\n\nAnda Belum Melakukan Pemesanan Apapun\n\n\n");
    	getch();
    	menuPelanggan();
    }

}

//fungsi cetak bukti pembayaran
void cekPembayaran(const char * bank, int noRekening, const char * nama, int jumlahTransfer){
	time_t waktuBayar;
    time(&waktuBayar);
    FILE * fpointercekPembayaran;
    fpointercekPembayaran=fopen(pengguna.nama, "a+");
    fprintf (fpointercekPembayaran, "Telah Dibayar               \n");
    fprintf (fpointercekPembayaran,"\n%s",ctime(&waktuBayar));
    fprintf (fpointercekPembayaran, "Bank                         :%s\n",bank);
    fprintf (fpointercekPembayaran, "No Rekening                  :%d\n",noRekening);
    fprintf (fpointercekPembayaran, "Atas Nama                    :%s\n",nama);
    fprintf (fpointercekPembayaran, "Jumlah Transfer              :%d\n",jumlahTransfer);
    fprintf (fpointercekPembayaran, "----------------------------------------------------------------------------------------------------------------\n\n\n");
    fclose  (fpointercekPembayaran);
    //menyalin ke kuitansi.txt
    FILE*fdaftarTransaksi;
    fdaftarTransaksi=fopen(kuitansi, "r");
	if(fdaftarTransaksi==NULL){
		strcat(kuitansi,pengguna.nama);
	}
    FILE *baca, *salin;
	baca = fopen(pengguna.nama, "a+");
	salin = fopen(kuitansi, "a+");
	char karakter;
	while((karakter=fgetc(baca))!=EOF)
	fputc(karakter,salin);
	fclose(baca);
	fclose(salin);
	fclose(fdaftarTransaksi);

	//mendelete di konformasi pemesanan karena data sudah masuk ke daftar transaksi
	FILE * fpointerkuitansiPelanggan;
	fpointerkuitansiPelanggan=fopen(pengguna.nama,"w");
	fprintf (fpointerkuitansiPelanggan,"\n\n\nAnda Belum Melakukan Pemesanan Apapun\n\n\n");
	fclose (fpointerkuitansiPelanggan);
}

//fungsi menampilkan daftar transaksi yang sukses
void daftarTransaksi(void){
	system("cls");
	//cek dulu apakah ada flie kutiansi kalau tidak kita buat
	FILE * fdaftarTransaksi;
    fdaftarTransaksi=fopen(kuitansi, "r");
	if(fdaftarTransaksi==NULL){
		strcat(kuitansi,pengguna.nama);
	}
	//cek file yang sudah di buat
    fdaftarTransaksi=fopen(kuitansi, "r");
    if(fdaftarTransaksi!=NULL){
		char buff[255];
    	while(fgets(buff, sizeof(buff), fdaftarTransaksi)){
    		printf("%s ",buff);
    	}
    }
    else{
    	printf("Daftar transaksi Anda Kosong");
    }
    	fclose(fdaftarTransaksi);
    	getch();
    	menuPelanggan();
}

//fungsi untuk menampilkan rincian jasa
void tampilkanRincianJasa1(void){
    printf("|****************************************************************************************************|\n");
    printf("|                                            <REFLEXY>                                               |\n");
    printf("|****************************************************************************************************|\n");
    printf("|                             Foot Massage With Shooting Aromatherapy                                |\n");
    printf("|                             ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^                                |\n");
    printf("|              Manjakan diri, hilangkan penat dan rasa lelah pada kaki cantik anda.                  |\n");
    printf("|                         cocok untuk anda yang aktif bergerak seharian                              |\n");
    printf("|  Perawatan ini difokuskan pada kaki anda, yaitu pijat refleksi kaki dengan aromaterapi menenangkan |\n");
    printf("|****************************************************************************************************|\n");
    printf("|                                  | 1.5 hours Rp 190.000,- |                                        |\n");
    printf("|****************************************************************************************************|\n");
}

void tampilkanRincianJasa2(void){
    printf("|****************************************************************************************************|\n");
    printf("|                                          <REJUVENATE>                                              |\n");
    printf("|                       Relaxing Back Massage With Gentle Touch Of Olive Oil                         |\n");
    printf("|                       ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^                         |\n");
    printf("| Kembalikan rasa energik anda, dapatkan relaksasi yang menyegarkan di setiap sentuhan minyak zaitun |\n");
    printf("| Perawatan ini akan mengurangi rasa pegal & kelelahan pada punggung dengan pijatan lembut olive oil |\n");
    printf("|   Sangat cocok bagi anda yang duduk seharian saat bekerja. pijatan punggung yang lembut dengan     |\n");
    printf("|                      minyak zaitun ini akan mengembalikan vitalitas anda.                          |\n");
    printf("|****************************************************************************************************|\n");
    printf("|                                     | 1.5 Hours Rp 205.000,- |                                     |\n");
    printf("|****************************************************************************************************|\n");
}

void tampilkanRincianJasa3(void){
    printf("|****************************************************************************************************|\n");
    printf("|                                           <RECHARGE>                                               |\n");
    printf("|   A Touch Of Peaceful Massage On The Points Of Your Face And Head, As Well As Your Beautiful Back  |\n");
    printf("|   ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^  |\n");
    printf("|  Temukan kedamaian dalam setiap sentuhan pijatan pada titik-titik wajah, kepala dan punggung anda  |\n");
    printf("|  Perawatan ini mampu  mengurangi stress dan mengembalikan kesegaran tubuh. pemijatan akan dimulai  |\n");
    printf("|  dari titik-titik wajah, kemudian pada kepala, lalu menuju punggung dengan paduan minyak esensial  |\n");
    printf("|****************************************************************************************************|\n");
    printf("|                                       | 1 Hour Rp 265.000,- |                                      |\n");
	printf("|****************************************************************************************************|\n");
}

void tampilkanRincianJasa4(void){
    printf("|****************************************************************************************************|\n");
    printf("|                                            <REFRESH>                                               |\n");
    printf("|                        Feel The Best Sensation Of Body Massage And Body Scrub                      |\n");
    printf("|                        ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^                      |\n");
    printf("|    Rasakan sensasi terbaik dari pijatan tubuh dengan perpaduan minyak kelapa dan minyak esensial   |\n");
    printf("|     akan memberikan anda ketenangan diri dan rasa menyegarkan, dilanjutkan baluran lulur untuk     |\n");
    printf("|         membersihakan sel kulit mati. cocok untuk anda yang sangat sibuk dan produktif.            |\n");
    printf("|                                     | 2 Hours Rp 370.000,- |                                       |\n");
    printf("|****************************************************************************************************|\n");
}

void tampilkanRincianJasa5(void){
    printf("|****************************************************************************************************|\n");
    printf("|                                            <RELAX>                                                 |\n");
    printf("|         Complete Your Peace Of Mind With Body & face Massage, Body Scrub, And Aromatic Bath        |\n");
    printf("|         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^        |\n");
    printf("| Perawatan terlengkap dari kami, nikmati pijatan terbaik di seluruh tubuh dan wajah anda, lembutnya |\n");
    printf("|     lulur, serta ketenangan mandi berendam dengan wewangian aromatik, siap memanjakan jiwa anda.   |\n");
    printf("|   untuk anda yang ingin mendapatkan kedamaian jiwa dan vitalitas yang baik, perawatan lengkap ini  |\n");
    printf("|                                          adalah jawabannya                                         |\n");
    printf("|                                     | 2.5 Hours Rp 370.000,- |                                     |\n");
	printf("|****************************************************************************************************|\n");
}

//fungsi untuk menampilkan menu apabila login sebagai pegawai/staff
void menuPegawai(void){
	menuPegawai:
	system("cls");
	header();
	int menuPegawai;
	printf ("|=============================================|\n");
	printf ("|          T H E  R A H A Y U   S P A         |\n");
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

//fungsi untuk menampilkan rekomendasi pembelian paket spa
void menurekomen(void){
    menurekomen:
    system("cls");
    int keluhanTidakvalid;
    header ();
    printf("ANDA BINGUNG MAU MEMILIH PAKET YANG MANA?\n");
    printf("Tenang, kami bantu\n");

    printf ("|====================================|===========|\n");
    printf ("|            KELUHAN ANDA            |    KODE   |\n");
    printf ("|====================================|===========|\n");
    printf ("|[1]  Stres                          |    100    |\n");
    printf ("|[2]  Cemas                          |    101    |\n");
    printf ("|[3]  Lelah                          |    102    |\n");
    printf ("|[4]  Depresi                        |    103    |\n");
    printf ("|[5]  Penuaan                        |    104    |\n");
    printf ("|[6]  Kulit Kusam                    |    105    |\n");
    printf ("|[7]  Berat Badan Berlebih           |    106    |\n");
    printf ("|[8]  Badan Terasa Kurang Sehat      |    107    |\n");
    printf ("|[9]  Badan Pegal                    |    108    |\n");
    printf ("|[10] Insomnia                       |    109    |\n");
    printf ("|====================================|===========|\n");
    printf("Masukkan 0 untuk mengakhiri\n");
    int total , nilai=0;
    total=0;
    do{
   		total = total + nilai;
        printf("Masukkan Kode Keluhan   :\n");
        scanf("%d",&nilai);
    }while (nilai != 0);
    	if((total==102)||(total==108)||(total==102+108)){
    		printf("Rekomendasikan kami berdasarkan keluhan Anda    \n");
    		printf("-----------------REFLEXY-----------------\n\n");
    	}
    	else if((total==100)||(total==101)||(total==105)||(total==109)||(total==100+105)||(total==100+101+105)||(total==101+105)||(total==102+109)){
    		printf("Rekomendasikan kami berdasarkan keluhan Anda    \n");
    		printf("-----------------REJUVENATE-----------------\n\n");
    	}
    	else if((total==102)||(total==108)||(total==103)||(total==100)||(total==107)||(total==102+108)||(total==100+102+108)||(total==107+108)||(total==100+101+102+107)){
    		printf("Rekomendasikan kami berdasarkan keluhan Anda    \n");
    		printf("-----------------RECHARGE-----------------\n\n");
    	}
    	else if((total==107)||(total==108)||(total==109)||(total==107+108)||(total==107+108+109)||(total==102)||(total==102+109)){
    		printf("Rekomendasikan kami berdasarkan keluhan Anda    \n");
    		printf("-----------------REFRESH-----------------\n\n");
    	}
    	else if((total==105)||(total==106)||(total==107)||(total==108)||(total==106+107)||(total==105+107)){
    		printf("Rekomendasikan kami berdasarkan keluhan Anda    \n");
    		printf("-----------------RELAX-----------------\n\n");
    	}
    	else if((total==104)||(total==105)||(total==104+105)){
    		printf("Rekomendasikan kami berdasarkan keluhan Anda    \n");
    		printf("-----------------REJUVENATE-----------------\n\n");
    	}
    	else if((total==105)||(total==100+101+102+103+105+109)||(total==105+109)){
    		printf("Rekomendasikan kami berdasarkan keluhan Anda    \n");
    		printf("-----------------REFRESH-----------------\n\n");
    	}
      else{
        printf("Keluhan Anda Tidak Valid\n");
        printf("[1] Kembali Ke Menu Utama\n");
        printf("[2] Coba Lagi\n");
        printf("Pilih : ");
        scanf("%d",&keluhanTidakvalid);
        if(keluhanTidakvalid==1){
        	menuPelanggan();
        }
        else if(keluhanTidakvalid==2){
	        goto menurekomen;
        }
        else{
        	inputSalah();
        	goto menurekomen;
        }
      }
    printf("Anda Akan Diarahkan ke Menu Jasa\n");
    system("pause");
	menuJasa();

}

//fungsi untuk menampilkan menu kasir untuk menyelesaikan pembayaran
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

//fungsi untuk menampilkan total harga
void tampilkantotalharga(int totalhargakeseluruhan){
	    printf("=========================================================================================\n\n");
	    printf("Total Harga Keseluruhan     : Rp. %i\n", totalhargakeseluruhan);
}

//fungsi untuk menghitung sisa pembayaran
int hitungsisapembayaran(int totalhargakeseluruhan, int DP){
	int sisapembayaran;
	sisapembayaran = totalhargakeseluruhan - DP;
	return sisapembayaran;
}

//fungsi untuk menampilkan sisa pembayaran
void tampilkansisapembayaran(int sisapembayaran){
	    printf("Sisa Pembayaran	            : Rp. %i\n", sisapembayaran);
}

//fungsi untuk menghitung kembali
int hitungkembali(int pembayaran, int totalhargakeseluruhan){
	int kembali;
	kembali = pembayaran - totalhargakeseluruhan;
	return kembali;
}

//fungsi untuk menampilkan kembali dan akhir dari transaksi
void tampilkankembali(int kembali, int pembayaran, int sisapembayaran, int totalhargakeseluruhan){
	if(pembayaran>=sisapembayaran)
	{	printf("========================================================\n");
		printf("Total Harga                 : Rp. %i\n", totalhargakeseluruhan);
		printf("Pembayaran                  : Rp. %i\n", pembayaran);
		if(pembayaran>totalhargakeseluruhan){
        printf("Kembali                     : Rp. %i\n", kembali);
		}
		printf("========================================================\n");
		printf ("|                      TERIMAKASIH                     |\n");
		printf ("|                TELAH MELAKUKAN TRANSAKSI             |\n");
		printf ("|                   DI THE RAHAYU SPA                  |\n");
		printf("========================================================\n");

	}
	else
	{
		printf ("|                    TRANSAKSI GAGAL		        	|\n");
	}
}




//fungsi untuk mencetak nota pembayaran customer
void cetaknota(const char * namaPelanggan, const char * noHp, int i, int jumlah[100], int harga[100], int totalharga[100], char namapaket[100][30], int totalhargakeseluruhan, int DP, int pembayaran, int kembali, int paket, int sisapembayaran){
	time_t ambil_waktu2;
    time(&ambil_waktu2);
	FILE * fpointernota2;
	fpointernota2 = fopen ("kuitansiKasir.txt", "w+"); //write a file
	fprintf (fpointernota2,"%s", ctime(&ambil_waktu2) );
	fprintf (fpointernota2, "==============================================================================================================\n\n");
	fprintf (fpointernota2, "                                                 THE RAHAYU SPA                                                 \n");
	fprintf (fpointernota2, "                                        Jalan Bintang No. 295, Kota Galaksi                                     \n");
	fprintf (fpointernota2, "                                                Telp. 08123456789                                               \n");
	fprintf (fpointernota2, "==============================================================================================================\n\n");
	fprintf (fpointernota2, "Bukti Pembayaran Paket Spa\n\n");
	fprintf (fpointernota2, "Kasir                                     : Siapa\n");
	fprintf (fpointernota2, "Nama Pelanggan                            : %s\n" , namaPelanggan);
	fprintf (fpointernota2, "No Telepon                                : %s\n",noHp);
	fprintf (fpointernota2, "Rincian Belanja                           :\n");
	fprintf (fpointernota2, "----------------------------------------------------------------------------------------------------------------\n");
    for(i=1; i<=paket; i++){
    fprintf(fpointernota2, "%i. %i %s (Rp.%i) \nRp. %i\n\n", i, jumlah[i], &namapaket[i][i], harga[i], totalharga[i]);
	}
	fprintf(fpointernota2, "-----------------------------------------------------------------------------------------------------------------\n");
	fprintf(fpointernota2, "                                               TOTAL PEMBAYARAN                                                  \n");
	fprintf(fpointernota2, "                                               Rp. %i\n", totalhargakeseluruhan);
	fprintf(fpointernota2, "-----------------------------------------------------------------------------------------------------------------\n");
    fclose (fpointernota2);
}

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

//fungsi pendaftaran member
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
//fungsi untuk rekap absensi pegawai
void menuAbsensi(){
	system("cls");
    menuAbsensi:;
    header();

    int i, jumlah, jumlahhari, tahun;

    printf("\n==================================================================\n");
    printf("***************           ABSENSI PEGAWAI          ***************\n");
    printf("==================================================================\n");

    printf("\nMasukkan jumlah pegawai           : ");
    scanf("%d", &jumlah);

    //input untuk masing-masing pegawai seperti nama dan bulannya
    printf("\n");
    for(i=1; i<=jumlah; i++){
    printf("Nama Pegawai ke-%i                 : ", i);
    scanf(" %[^\n]s", &pegawai[i].nama[i][i]); fflush(stdin);
    printf("Masukkan Bulan                    : ");
    scanf("%i", &pegawai[i].bulan);

        if(pegawai[i].bulan==1||pegawai[i].bulan==3||pegawai[i].bulan==5||pegawai[i].bulan==7||pegawai[i].bulan==8||pegawai[i].bulan==10||pegawai[i].bulan==12){
            jumlahhari=31;                                        //jika input bulan di antara bulan 1, 3, 5, 7, 8, 10, 12 yang memiliki 31 hari maka diarahkan ke sini
    printf("Masukkan Ketidakhadiran           : ");
            scanf("%d", &pegawai[i].alpha);
            if(pegawai[i].alpha<=31){
                pegawai[i].total=jumlahhari-pegawai[i].alpha;
            }
            else{
                inputSalah();                                     //jika input ketidakhadiran melebihi 31 maka dianggap salah
                goto menuAbsensi;
            }

        }
        else if(pegawai[i].bulan==4||pegawai[i].bulan==6||pegawai[i].bulan==9||pegawai[i].bulan==11){
            jumlahhari=30;                                       //jika input bulan di antara bulan 4, 6, 9, 11 yang memiliki 30 hari maka diarahkan ke sini
            printf("Masukkan Ketidakhadiran            : ");
            scanf("%d", &pegawai[i].alpha);
            if(pegawai[i].alpha<=30){
                pegawai[i].total=jumlahhari-pegawai[i].alpha;
            }
            else{                                                //jika input ketidakhadiran melebihi 30 maka dianggap salah
                inputSalah();
                goto menuAbsensi;
            }
        }
        else if(pegawai[i].bulan==2){                            //jika input bulan 2 maka diarahkan ke sini
            printf("Masukkan Tahun                     : ");
            scanf("%d", &tahun);
            if(tahun%4==0){
            	jumlahhari=29;                                   //jika input tahun yang habis dibagi 4(kabisat) akan diarahkan ke kondisi total jumlah hari 29
                printf("Masukkan Ketidakhadiran                    : ");
                scanf("%d", &pegawai[i].alpha);
                if(pegawai[i].alpha<=29){
                pegawai[i].total=jumlahhari-pegawai[i].alpha;
                }
                else{
                    inputSalah();                                //jika input ketidakhadiran melebihi 29 maka dianggap salah
                    goto menuAbsensi;
                }
            }
            else{
                jumlahhari=28;
                printf("Masukkan Ketidakhadiran : ");
                scanf("%d", &pegawai[i].alpha);
                if(pegawai[i].alpha<=28){                        //jika input tahun yang tidak habis dibagi 4 akan diarahkan ke kondisi total jumlah hari 28
                pegawai[i].total=jumlahhari-pegawai[i].alpha;
                }
                else{
                    inputSalah();                                //jika input ketidakhadiran melebihi 28 maka dianggap salah
                    goto menuAbsensi;
                }
            }
        }
        else{
            inputSalah();
            goto menuAbsensi;
        }

        printf("\n");
    }

    //output untuk perhitungan rekap absensi
    printf("\n");
    printf("==================================================================\n");
    printf("***************          REKAP ABSENSI             ***************\n");
    printf("==================================================================\n");
    printf("%3s", "No");
    printf("%20s", "Nama Pegawai");
    printf("%20s", "Periode Bulan");
    printf("%20s\n", "Total Kehadiran");
    printf("==================================================================\n");

    for(i=1; i<=jumlah; i++){
    printf("%3i", i);
    printf("%20s", &pegawai[i].nama[i][i]);
    printf("%20d", pegawai[i].bulan);
    printf("%20d\n", pegawai[i].total);
    }
    printf("==================================================================\n");

    //rekap absensi dicetak ke file txt
    FILE * fpointerabsensi;
    fpointerabsensi=fopen("RekapAbsensi.txt", "w+");
    fprintf (fpointerabsensi, "==================================================================\n");
    fprintf (fpointerabsensi, "***************          REKAP ABSENSI             ***************\n");
    fprintf (fpointerabsensi, "==================================================================\n");
    fprintf (fpointerabsensi, "%3s", "No");
    fprintf (fpointerabsensi, "%20s", "Nama Pegawai");
    fprintf (fpointerabsensi, "%20s", "Periode Bulan");
    fprintf (fpointerabsensi, "%20s\n", "Total Kehadiran");
    for(i=1; i<=jumlah; i++){
    fprintf (fpointerabsensi, "%3i", i);
    fprintf (fpointerabsensi, "%20s", &pegawai[i].nama[i][i]);
    fprintf (fpointerabsensi, "%20d", pegawai[i].bulan);
    fprintf (fpointerabsensi, "%20d\n", pegawai[i].total);
    }
    fprintf (fpointerabsensi, "==================================================================\n");
    fclose (fpointerabsensi);

    system("pause");
	menuPegawai();
}

void penggajianPegawai (void){
	system ("cls");
	header();
	int jumlah;
	int masaKerja;
	int i;
	int lanjutan;
	printf("\n\n===========================================\n");
	printf("|    PENGGAJIAN KARYAWAN THE RAHAYU SPA   |\n");
	printf("===========================================\n\n");
	printf("===========================================\n");
	printf(" MASUKKAN JUMLAH KARYAWAN YANG INGIN DIGAJI : ");
	scanf("%d", &jumlah);
	printf("===========================================\n");

	for(i=0;i<jumlah; i++){
		printf ("\n");
		printf("MASUKKAN NAMA KARYAWAN KE-%d: ", i+1);
		fflush(stdin);
		gets (gaji[i].nama);
		printf("========================================\n");
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
		printf("========================================\n");
	}
	printf("\n\n\n\t            		         =======  GAJI KARYAWAN ======= \n");
    printf("=======================================================================================================\n");
    printf("  NO |    NAMA           |   GAJI POKOK   |     BONUS    |   PINJAMAN  |  TOTAL GAJI  |  GAJI BERSIH  |\n");
    printf("=======================================================================================================\n");
    for (i = 0; i < jumlah; i++){
    printf("  %d     %-15s        %d          %-10d     %-13d %-13d %d  \n", i + 1, gaji[i].nama, gaji[i].pokok, gaji[i].bonus, gaji[i].pinjaman, gaji[i].pokok + gaji[i].bonus, gaji[i].pokok + gaji[i].bonus - gaji[i].pinjaman);
	}
	printf("=======================================================================================================\n");

	FILE * fPointer;
	fPointer = fopen("Gaji Karyawan The Rahayu Spa.txt", "a+");
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
