#include <iostream>
using namespace std;

int main() 
{
    char a[3][5];

    for (int i=0; i<3; i++) {
        cout << &a[i] << endl;

        for (int j=0; j<5; j++) {
            cout << &a[i][j] << endl;
        }
    }

    cout << &a << endl;
    
    return 0;
}

//sama seperti percobaan 1, compiler tidak bisa menampilkan alamat dari isi array yang bertipe data char