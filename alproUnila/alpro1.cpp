#include <iostream>
using namespace std;

int main() {
   int userInput, count = 0, sum = 0;

   cout << "masukkan nilai : " << endl;
   cin >> userInput;

   if (userInput == -999) {
      cout << "tidak ada data yang diolah" << endl;
   } else {
      while (userInput != (-999)) {
         count++;
         sum = sum + userInput;
         cin >> userInput;
      }
      cout << "jumlah data sama dengan : " << count << endl;
      cout << "total nilai data : " << sum << endl;
   }
}