#include <iostream>
#include <stdlib.h>
using namespace std;

// function prototype
void swap(int *a, int *b);
void printArray(int arrayInput[], int arrayLength);
void bubbleSort(int arrayInput[], int arrayLength);
void exchangeSort(int arrayInput[], int arrayLength);
void insertionSort(int arrayInput[], int arrayLength);
void selectionSort(int arrayInput[], int arrayLength);
void duplicateArray(int arrayInput[], int temporaryArray[], int length);
void inputArrayELement(int arrayInput[], int arrayLength);
void menu();

// main function
int main() {

    menu(); // eksekusi fungsi menu

    return 0;
}

void menu(){
    string choice;
    int arrayInput[1000];
    int arrayLength;
    int randNum;
    bool ongoing = true;
    bool needChoiceInput = false;

    cout << endl << "Program Penerapan Metode Sorting." << endl;
    
    // membuat array
    cout << "Ukuran array: ";
    cin >> arrayLength;     // input ukuran array
    arrayInput[arrayLength];

    inputArrayELement(arrayInput, arrayLength);

    cout << endl << "Kondisi awal array:" << endl;
    printArray(arrayInput, arrayLength);    // cetak array

    while(ongoing){
        needChoiceInput = true;
        cout << endl << "=====================================" << endl; 
        cout << "Program Penerapan Metode Sorting" << endl;
        cout << "=====================================" << endl;
        cout << "1. Bubble Sort" << endl;
        cout << "2. Exchange Sort" << endl;
        cout << "3. Selection Sort" << endl;
        cout << "4. Insertion Sort" << endl;
        cout << "5. Input ulang Array" << endl;
        cout << "6. Test dengan nilai random" << endl;
        cout << "7. Test dengan array kosong" << endl;
        cout << "8. AKHIRI PROGRAM" << endl;
        // memilih metode sorting
        while (needChoiceInput){
            cout << "Silahkan pilih antara [1-8]: ";
            cin >> choice;
            needChoiceInput = false;
            switch (choice[0]){
                case '1':
                    bubbleSort(arrayInput, arrayLength);
                    break;
                case '2':
                    exchangeSort(arrayInput, arrayLength);
                    break;
                case '3':
                    selectionSort(arrayInput, arrayLength);
                    break;
                case '4':
                    insertionSort(arrayInput, arrayLength);
                    break;
                case '5':   // apabila user ingin membuat array baru
                    cout << "Ukuran array: ";
                    cin >> arrayLength;     // input ukuran array
                    arrayInput[arrayLength];
                    inputArrayELement(arrayInput, arrayLength);
                    break;
                case '6':
                    cout << endl << "#06. Array dengan Nilai Random" << endl;
                    cout << "Ukuran array: ";
                    cin >> arrayLength;
                    for(int i = 0; i < arrayLength; i++){
                        randNum = rand() % 100 + 1;
                        arrayInput[i] = randNum;
                    }
                    cout << "Kondisi array sekarang:" << endl;
                    printArray(arrayInput, arrayLength);
                    break;
                case '7':
                    cout << endl << "#07. Array Kosong" << endl;
                    cout << "Ukuran array: ";
                    cin >> arrayLength;
                    cout << "Array kosong berhasil dibuat." << endl;
                    break;
                case '8':
                    cout << endl << "Program Selesai." << endl;
                    ongoing = false;
                    break; 
                default:    
                    // jika input tidak sesuai akan diminta kembali
                    cout << "Input tidak tepat." << endl << endl;
                    needChoiceInput = true;
                    break;
            }
        }
    }
} // akhir fungsi menu

// fungsi untuk input array 
void inputArrayELement(int arrayInput[], int arrayLength){
    for(int i = 0; i < arrayLength; i++) {
        cout << "elemen-" << i << ": ";
        cin >> arrayInput[i];   // input elemen array
    }
}

// fungsi untuk mentukar elemen array
void swap(int *a, int *b){
 	int t=*a;
 	*a=*b;
	 *b=t;
}

// fungsi untuk mencetak seluruh elemen array
void printArray(int arrayInput[], int arrayLength){
    cout << "   ";
    for(int i = 0; i < arrayLength; i++) {
        cout << arrayInput[i] << " ";
	} cout << endl;
}

// fungsi untuk duplikasi array input ke array sementara
void duplicateArray(int arrayInput[], int temporaryArray[], int length){
    for (int i = 0; i < length; i++){
        temporaryArray[i] = arrayInput[i];
    }
}

// fungsi bubble sort
void bubbleSort(int arrayInput[], int arrayLength){
    int temporaryArray[arrayLength];
    int stepCounter = 0, swapCounter = 0;
    duplicateArray(arrayInput, temporaryArray, arrayLength);

    cout << endl << "#01 Metode Bubble Sort" << endl;
    cout << "Kondisi awal array:" << endl;
    printArray(arrayInput, arrayLength);
    cout << "Proses Sorting" << endl;
    
    for (int i = 0; i < arrayLength-1; i++) {
        for (int j = 0; j < arrayLength-i-1; j++) {
            // perbandingan elemen
            if (temporaryArray[j] > temporaryArray[j+1]) {
                swap(&temporaryArray[j], &temporaryArray[j+1]);
                swapCounter++;  // perhitungan jumlah perkukaran
                printArray(temporaryArray, arrayLength);
            }
            stepCounter++;  // perhitungan jumlah langkah
        }
    }
    // mencetak array hasil sorting, beserta jumlah langkah dan pertukaran
    cout << "Hasil Sorting Bubble Sort: " << endl;
    printArray(temporaryArray, arrayLength);
    cout << "Total langkah Bubble Sort: " << stepCounter << endl;
    cout << "Total pertukaran Bubble Sort: " << swapCounter << endl;
}

// fungsi exchange sort
void exchangeSort(int arrayInput[], int arrayLength){
	int temporaryArray[arrayLength];
    int stepCounter = 0, swapCounter = 0;
    duplicateArray(arrayInput, temporaryArray, arrayLength);

    cout << endl << "#02 Metode Exchange Sort" << endl;
    cout << "Kondisi awal array:" << endl;
    printArray(arrayInput, arrayLength);
    cout << "Proses Sorting" << endl;
    for (int i = 0; i < arrayLength; i++) {
        for (int j = i + 1; j < arrayLength; j++) {
            if (temporaryArray[i] < temporaryArray[j]) {
                swap(&temporaryArray[i], &temporaryArray[j]);
                printArray(temporaryArray, arrayLength);
                swapCounter++;
            }
            stepCounter++;
        }
    }
    cout << endl << "Hasil Sorting Exchange Sort: " << endl;
    printArray(temporaryArray, arrayLength);
    cout << endl << "Total langkah Exchange Sort: " << stepCounter << endl;
    cout << "Total pertukaran Exchange Sort: " << swapCounter << endl;
}

// fungsi selection sort
void selectionSort(int arrayInput[], int arrayLength) {
    int temporaryArray[arrayLength];
    int pos, stepCounter = 0, swapCounter = 0;
    duplicateArray(arrayInput, temporaryArray, arrayLength);
    
    cout << endl << "#03 Metode Selection Sort" << endl;
    cout << "Kondisi awal array:" << endl;
    printArray(arrayInput, arrayLength);
    cout << "Proses Sorting" << endl;
    for (int i = 0; i < arrayLength - 1; i++) {
        pos = i;
        for (int j = i + 1; j < arrayLength; j++) {
            if (temporaryArray[j] > temporaryArray[pos]) {
                pos = j;
            }
            stepCounter++;
        }
        if (pos != i) {
            swap(&temporaryArray[pos], &temporaryArray[i]);
            swapCounter++;
            printArray(temporaryArray, arrayLength);
        }
    }

    cout << "Hasil Sorting Selection Sort: " << endl;
    printArray(temporaryArray, arrayLength);
    cout << endl << "Total langkah Selection Sort: " << stepCounter << endl;
    cout << "Total pertukaran Selection Sort: " << swapCounter << endl;
}

// fungsi insertion sort
void insertionSort(int arrayInput[], int arrayLength){
    int temporaryArray[arrayLength];
	int j, temp, stepCounter = 0, swapCounter = 0;
    duplicateArray(arrayInput, temporaryArray, arrayLength);

    cout << endl << "#04 Metode Insertion Sort" << endl;
    cout << "Kondisi awal array:" << endl;
    printArray(arrayInput, arrayLength);
    cout << "Proses Sorting" << endl;
    for (int i = 1; i < arrayLength; i++) {
        temp = temporaryArray[i];
        j = i - 1;
        while (temporaryArray[j] < temp && j >= 0) {
            temporaryArray[j+1] = temporaryArray[j];
            j--;
            printArray(temporaryArray, arrayLength);
            stepCounter++;
            swapCounter++;
        }
        temporaryArray[j+1] = temp;
    }

    cout << "Hasil Sorting Isertion Sort: " << endl;
    printArray(temporaryArray, arrayLength);
    cout << endl << "Total langkah Isertion Sort: " << stepCounter << endl;
    cout << "Total pertukaran Isertion Sort: " << swapCounter << endl;
}

