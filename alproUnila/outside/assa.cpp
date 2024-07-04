using namespace std;
#include <iostream>;

int bandingkan(int a, int b,int c, int d,int e){
    int terbesar;
    int terkecil;

    if (e >= a && b && c &&d){
        terbesar = e;
    }
    if (a >= e && b && c &&d){
        terbesar = a;
    }if (b >= a && e && c &&d){
        terbesar = b;
    }if (c >= a && b && e &&d){
        terbesar = c;
    }if (d >= a && b && c &&e){
        terbesar = d;
    }
    if (e >= a && b && c &&d){
        terkecil = e;
    }
    if (a < e && b && c &&d){
        terkecil = a;
    }if (b < a && e && c &&d){
        terkecil = b;
    }if (c < a && b && e &&d){
        terkecil = c;
    }if (d < a && b && c &&e){
        terkecil = d;
    }
    cout << "terbesar:" << terbesar << endl;
    cout << "terkecil:" << terkecil << endl;
}
int main(){
    int a, b, c, d, e;
    cin >> a >> b;
    if (a>b){
        cout << a << endl;
    }
    if (b>a){
        cout << b << endl;
    }else {
    cout<< "bilangan sama" << endl;
    }
    cin >> c >> d >> e;
    if (c>d && e){
        cout << c << endl;
    }else if (d> c && e){
        cout << d << endl;
    }else if (e > c && d){
        cout << c << endl;
    }else{
        cout << "bilangan sama" << endl;
    }

    cout << bandingkan(a, b, c, d, e);
    return 0;
}
