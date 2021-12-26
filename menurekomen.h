//=======================================================================//
//***********   Fungsi Untuk Menampilkan Menu Rekomendasi    ************//
//=======================================================================//
// Nama Fungsi    : menurekomen                                          //
// Input Argumen  : int keluhanTidakvalid, int nilai                     //
// Output Argumen : int total                                            //
// Deskripsi      : Fungsi ini untuk menampilkan menu rekomendasi jasa   //
//                  apabila user kebingungan memilih. Nanti akan         //
//                  disesuaikan dengan kode keluhan useer.               //
// Dibuat Oleh    : Puja - 2105551016                                    //
//                                                                       //
// Versi : 1.0                                     Rev. 0                //
// Tgl: 5-12-2020                                  Tgl: -                //
//=======================================================================//
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
        printf("Masukkan Kode Keluhan            :\n");
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
