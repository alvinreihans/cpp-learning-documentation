#include <iostream>
using namespace std;

void sequentialSearch(int dataInput[], int arrayLength, int search);
void binarySearch(int dataInput[], int arrayLength, int search);
void inputArrayELement(int dataInput[], int arrayLength);
void printArray(int dataInput[], int arrayLength);

int main()
{
    string choice;
    int dataInput[100];
    int arrayLength;
    int search;
    bool ongoing = true;
    bool needChoiceInput = false;

    cout << "========================================" << endl; 
    cout << "== Program Penerapan Metode Searching ==" << endl;
    cout << "========================================" << endl;

    while(ongoing){
        needChoiceInput = true;
        cout << endl << "============================" << endl; 
        cout << "== Pilih metode pencarian ==" << endl;
        cout << "============================" << endl;
        cout << "1. Sequential search" << endl;
        cout << "2. Binary search" << endl;
        cout << "3. AKHIRI PROGRAM" << endl;

        while (needChoiceInput){
            cout << endl << "Silahkan pilih antara [1-3]: ";
            cin >> choice;
            cout << "==========================" << endl; 
            needChoiceInput = false;
            switch (choice[0]){
                case '1':
                    cout << "Banyak data : ";
                    cin >> arrayLength;
                    dataInput[arrayLength];
                    inputArrayELement(dataInput, arrayLength);
                    cout << "Masukkan data yang dicari: ";
                    cin >> search;
                    printArray(dataInput, arrayLength);
                    cout << endl;
                    sequentialSearch(dataInput, arrayLength, search);
                    break;
                case '2':
                    cout << "Banyak data : ";
                    cin >> arrayLength;
                    dataInput[arrayLength];
                    inputArrayELement(dataInput, arrayLength);
                    cout << "Masukkan data yang dicari: ";
                    cin >> search;
                    printArray(dataInput, arrayLength);
                    cout << endl;
                    binarySearch(dataInput, arrayLength, search);
                    break;
                case '3':
                    cout << endl << "Program Selesai." << endl;
                    ongoing = false;
                    break; 
                default:    
                    cout << "Input tidak tepat." << endl << endl;
                    needChoiceInput = true;
                    break;
            }
        }
    }
    return 0;
}

void sequentialSearch(int dataInput[], int arrayLength, int search)
{
    int i = 0;
    int flag = 0;

    while(i< arrayLength) {
        if(dataInput[i] == search) {
            flag = 1;
            break;
        }
        i++;
    }

    if(flag == 1)
    {
        cout << "Data " << dataInput[i] << " ditemukan pada indeks ke : " << i << endl;
    } 
    else
    {
        cout << "Data TIDAK ditemukan" << endl;
    }
}

void binarySearch(int dataInput[], int arrayLength, int search)
{
    int l, r, m;
    l = 0;
    r = arrayLength-1;
    int flag = 0;

    int temporaryArray[arrayLength];
    for (int i = 0; i < arrayLength; i++){
        temporaryArray[i] = dataInput[i];
    };

    cout << "Proses sorting..." << endl;
    
    for (int i = 0; i < arrayLength-1; i++) {
        for (int j = 0; j < arrayLength-i-1; j++) {
            if (temporaryArray[j] > temporaryArray[j+1]) {
                int t=temporaryArray[j];
                temporaryArray[j]=temporaryArray[j+1];
                temporaryArray[j+1]=t;
            }
        }
    }
    printArray(temporaryArray, arrayLength);

    while(l <= r && flag == 0)
    {
        m = (l+r)/2;
        cout << endl << "Data tengah: " << m << endl;
        if (temporaryArray[m] == search)
        {
            flag = 1;
        }
        else if (search < temporaryArray[m])
        {
            cout << "Mencari di kiri..." << endl;
            r = m-1;
        }
        else
        {
        cout << "Mencari di kanan..." << endl;
        l = m+1;
        }
    }

    if(flag == 1)
    {
        cout << "Data " << temporaryArray[m] << " ditemukan pada indeks ke-" << m << endl;
    } 
    else
    {
        cout << "Data TIDAK ditemukan" << endl;
    }
}

void inputArrayELement(int dataInput[], int arrayLength)
{
    cout << endl;
    for(int i = 0; i < arrayLength; i++)
    {
        cout << "Masukkan data ke-" << i+1 << ": ";
        cin >> dataInput[i];
    }
    cout << endl;
}

void printArray(int dataInput[], int arrayLength)
{
    cout << endl;
    cout << "   ";
    for(int i = 0; i < arrayLength; i++)
    {
        cout << dataInput[i] << " ";
	}
    cout << endl;
}