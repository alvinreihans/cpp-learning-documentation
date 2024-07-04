#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int jumlah, tahun;
    string judul, penulis, penerbit;
    ofstream data_koleksi_buku;
    data_koleksi_buku.open("DataKoleksiBuku.txt");
    if (data_koleksi_buku.is_open())
    {
        cout << "Jumlah buku : ";
        cin >> jumlah;
        for (int x = 0; x < jumlah; x++)
        {
            cout << "Judul buku : ";
            getline(cin >> ws, judul);
            cout << "Penulis : ";
            getline(cin >> ws, penulis);
            cout << "Tahun terbit : ";
            cin >> tahun;
            cout << "Penerbit : ";
            getline(cin >> ws, penerbit);
            data_koleksi_buku << judul << ". " << penulis << ", "
                              << tahun << ". Diterbitkan oleh " << penerbit << "." << endl;
            cout << judul << ". " << penulis << ", "
                 << tahun << ". Diterbitkan oleh " << penerbit << "." << endl;
        }
        data_koleksi_buku.close();
    }
    else
    {
        cout << "Tidak dapat membuka file DataKoleksiBuk.txt.";
    }
    return 0;
}
