// https://tlx.toki.id/problems/ngoding-seru-2015-dec-pemula/A
#include <iostream>
using namespace std;
int main() {
   int a, b, c;
   cin >> a >> b >> c;
   if (0 <= a && a <= 100 && 0 <= b && b <= 100 && 0 <= c && c <= 100) {
      if ((a + b + c) >= 200 && a >= 50 && b >= 50 && b >= 50) {
         cout << "Lolos";
      } else {
         cout << "Tidak Lolos";
      }
   }
   return 0;
}