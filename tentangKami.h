//=======================================================================//
//***********          Fungsi Untuk Tentang Kami         ****************//
//=======================================================================//
// Nama Fungsi    : tentangKami                                          //
// Input Argumen  : int tentangKami                                      //
// Output Argumen : void                                                 //
// Deskripsi      : Fungsi ini untuk menampilkan informasi tentang       //
//                  Rayuri Spa.                                          //
// Dibuat Oleh    : Jenni - 2105551028                                   //
//                                                                       //
// Versi : 1.0                                     Rev. 0                //
// Tgl: 22-12-2021                                 Tgl: -                //
//=======================================================================//
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
