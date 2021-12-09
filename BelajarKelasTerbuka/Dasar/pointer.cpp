#include <iostream>
using namespace std;
int main()
{
    int a = 5;

    // pointer
    int *aptr = nullptr; // pointer aptr ksong
    aptr = &a;           // aptr = alamat a

    // int a mempunyai nilai dan address (alamat )
    cout << " nilai dari a: " << a << endl;
    cout << "alamat dari a: " << aptr << endl;

    // dereferencing, mengambil data dari pointer
    cout << "Mengambil data dari pointer: " << *aptr << endl;
    return 0;
}
