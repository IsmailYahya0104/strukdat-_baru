#include<iostream>
using namespace std;

int tambah(int a, int b) { return a + b; }
int kurang(int a, int b) { return a - b; }
int kali(int a, int b) { return a * b; }
float bagi(int a, int b) { return b != 0 ? (float)a / b : 0; }

int main() {
    int a, b;
    
    cout << "Masukkan bilangan pertama: ";
    cin >> a;
    cout << "Masukkan bilangan kedua: ";
    cin >> b;
    
    cout << a << " + " << b << " = " << tambah(a, b) << endl;
    cout << a << " - " << b << " = " << kurang(a, b) << endl;
    cout << a << " * " << b << " = " << kali(a, b) << endl;
    
    if (b != 0) {
        cout << a << " / " << b << " = " << bagi(a, b) << endl;
    } else {
        cout << "Pembagian oleh nol tidak valid." << endl;
    }
    
    return 0;
}




