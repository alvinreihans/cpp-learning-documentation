#include <iostream>
using namespace std;
void tukar(int *a, int *b)
{
  int t = *a;
  *a = *b;
  *b = t;
}
int main()
{
  char repeat;
  int cari, choice, pos, n, r, m;
  int l = 0;
  int data[1000];
  int flag = 0;

  do
  {
    cout << "Pilihan Metode Searching: \n";
    cout << "1. Sequential Searching\n";
    cout << "2. Binary Searching\n";
    cout << "3. Keluar Program\n";
    cout << "Pilihan Anda (1-3): ";
    cin >> choice;

    cout << "Masukan Jumlah Data: ";
    cin >> n;
    r = n - 1;

    for (int i = 0; i < n; i++)
    {
      cout << "Masukan Data Ke-" << i + 1 << ": ";
      cin >> data[i];
    }

    for (int i = 0; i < n; i++)
      for (int j = n - 1; j >= i; j--)
        if (data[i] > data[j])
          tukar(&data[i], &data[j]);

    cout << "Masukan angka yang ingin dicari: ";
    cin >> cari;

    if (choice == 1)
    {
      for (int i = 0; i < 9; i++)
      {
        if (data[i] == cari)
        {
          flag = 1;
          break;
        }
        m = i + 1;
      }
    }
    else if (choice == 2)
    {
      while (l <= r && flag == 0)
      {
        m = (l + r) / 2;
        cout << "data tengah: " << m << endl;
        if (data[m] == cari)
        {
          flag = 1;
        }
        else if (cari < data[m])
        {
          cout << "cari di kiri" << endl;
          r = m - 1;
        }
        else
        {
          cout << "cari di kanan" << endl;
          l = m + 1;
        }
      }
    }
    else if (choice == 3)
    {
      break;
    }
    else
    {
      cout << "Pilihan Anda Salah!";
    }

    cout << endl;

    if (flag == 1)
      cout << "Ketemu Pada Index Ke-" << m << "\n\n";
    else
      cout << "Tidak Ketemu\n\n";

    cout << "Ingin Mencari Data Lagi? (y/n): ";
    cin >> repeat;
  } while (repeat == 'y' || repeat == 'Y');

  return 0;
}