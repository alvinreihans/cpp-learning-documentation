#include <iostream>
using namespace std;

//daftar film untuk anak-anak
void anakAnak()
{
     cout << "Judul film yang dapat anda pilih adalah :" << endl
          << "Cars [1]" << endl
          << "Waktu pukul 10.00, 13.00, dan 16.00" << endl
          << "Toy Story [2]" << endl
          << "Waktu pukul 10.00, 13.00, dan 16.00" << endl
          << "Finding Nemo [3]" << endl
          << "Waktu pukul 10.00, 13.00, dan 16.00" << endl;
}

//daftar film untuk remaja
void remaja()
{
     cout << "Cinta Pujangga [4]" << endl
          << "Waktu pukul 10.00, 13.00, dan 16.00" << endl
          << "Kimi no Nawa [5]" << endl
          << "Waktu pukul 10.00, 13.00, dan 16.00" << endl
          << "Transformers [6]" << endl
          << "Waktu pukul 10.00, 13.00, dan 16.00" << endl;
}

//daftar fil untuk dewasa
void dewasa()
{
     cout << "Fifty Shades of Grey [7]" << endl
          << "Waktu pukul 10.00, 13.00, dan 16.00" << endl
          << "Love for Sale [8]" << endl
          << "Waktu pukul 10.00, 13.00, dan 16.00" << endl;
}

int main()
{
     //kamus
     int katergori, usia, judul, waktu, tktCount, harga;
     int eror = 1;
     int kursi[50];

     //algoritma
     cout << "Selamat datang di bioskop XXII" << endl
          << endl;
     cout << "Harga berdasarkan kategori :" << endl
          << "Anak-anak (0-12 tahun) = 25k" << endl
          << "Remaja (13-16 tahun) = 30k" << endl
          << "Dewasa (17 tahun keatas) = 35k" << endl
          << endl;
     cout << "Masukkan usia anda : "; // meminta usia user
     cin >> usia;
     cout << endl;

     while (usia < 1) // apakah usia user valid?
     {
          // jika tidak, maka
          cout << "Umur tidak valid, silahkan coba lagi" << endl;
          cin >> usia;
          cout << endl;
     }
     //jika ya, maka periksa kategori user
     if (usia >= 1 && usia <= 12)
     {
          katergori = 1;
          harga = 25000;
          anakAnak();
     }
     else if (usia >= 12 && usia <= 16)
     {
          katergori = 2;
          harga = 30000;
          anakAnak();
          remaja();
     }
     else
     {
          katergori = 3;
          harga = 35000;
          anakAnak();
          remaja();
          dewasa();
     }
     while (eror == 1) //untuk memeriksa apakah film sesuai dengan umur
     {
          cout << endl;
          cout << "Silahkan pilih film dengan cara menuliskan kode film" << endl;
          cin >> judul;
          //apakah judul yg dipilih sesuai dengan umur?
          if ((katergori == 1 && judul <= 3) || (katergori == 2 && judul <= 6) || (katergori == 3 && judul <= 8))
          {
               // jika ya, maka
               cout << "Film sesuai dengan umur" << endl
                    << endl;
               break;
          }
          else //jika tidak, maka
          {
               cout << "Film tidak mungkin tidak tersedia atau tidak sesuai dengan umur anda." << endl;
          }
     }
     while (eror == 1) //untuk memeriksa apakah waktu tersedia
     {
          cout << "Silahkan pilih jam (10/13/16)" << endl;
          cin >> waktu;

          if ((waktu == 10) || (waktu == 13) || (waktu == 16))
          {
               //jika waktu tersedia, maka
               cout << "Jam tersedia" << endl
                    << endl;
               break;
          }
          else //jika waktu tidak tersedia, maka
          {
               cout << "Mohon maaf, jam tidak tersedia" << endl;
          }
     }

     //menanyakan berapa banyak tiket yg ingin dibeli
     cout << "Banyak tiket yang ingin dibeli : ";
     cin >> tktCount;
     //memilih nomor kursi
     cout << "Masukkan nomor kursi" << endl;
     for (int i = 0; i < tktCount; i++)
     {
          cout << "Kursi " << i + 1 << " : ";
          cin >> kursi[i];
     }

     //menampilkan struk pembelian tiket
     cout << endl
          << "Berikut rincian tiket anda :" << endl
          << "Judul : " << judul << endl
          << "Waktu pukul : " << waktu << ".00" << endl
          << "Jumlah tiket : " << tktCount << endl
          << "Nomor kursi : ";

     for (int i = 0; i < tktCount; i++)
     {
          cout << kursi[i] << ", ";
     }

     cout << endl
          << "Harga : " << tktCount * harga << endl
          << endl
          << "Selamat menonton!";

     return 0;
}
