//=======================================================================//
//***********        Fungsi Untuk Cetak Kuitansi         ****************//
//=======================================================================//
// Nama Fungsi    : cetakKuitansi                                        //
// Input Argumen  : -                                                    //
// Output Argumen : const char * namaPelanggan,const char * noHp,        //
//                  const char * alamat, const char * namaJasa[100][30], //
//                  int totaljumlahharga, int totalDp,                   //
//                  const char * waktu1, const char * waktu2, int i,     //
//                  int paket, time_t ambil_waktu1, time(&ambil_waktu1)  //
// Deskripsi      : Fungsi untuk mencetak kuitansi apabila customer      //
//                  sudah selesai melakukan pembayaran Dp.               //
// Dibuat Oleh    : Puja - 2105551016                                    //
//                                                                       //
// Versi : 1.4                                     Rev. 1                //
// Tgl   : 5-12-2021                               Tgl: 6-12-2021        //
// Revisi 1       : Menampilkan waktu atau tanggal pada cetak kuitansi.  //
// Direvisi Oleh  : Puja - 2105551016                                    //
//                                                 Rev. 2                //
//                                                 Tgl: 14-12-2021       //
// Revisi 2       : Memperbaiki dan merapikan.                           //
// Direvisi Oleh  : Jenni - 2105551028                                   //
//                                                 Rev. 3                //
//                                                 Tgl: 20-12-2021       //
// Revisi 3       : Mengubah file open yang awalnya kuitansi.txt         //
//                  menjadi pengguna.nama serta menambahkan time.        //
// Direvisi Oleh  : Jenni - 2105551028                                   //
//                                                 Rev. 4                //
//                                                 Tgl: 22-12-2021       //
// Revisi 4       : Mengubah pemanggilan total harga dan DP untuk        //
//                  menyesuaikan dengan perulangan di menu jasa.         //
// Direvisi Oleh  : Puja - 2105551016                                    //
//=======================================================================//
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
