#include<iostream>
using namespace std;

int tambah(int a, int b) { return a + b; }
int kurang(int a, int b) { return a - b; }
int kali(int a, int b) { return a * b; }
float bagi(int a, int b) { return b != 0 ? (float)a/b : 0; }

int main() {
    cout << "5 + 10 = " << tambah(5, 10) << endl;
    cout << "10 - 5 = " << kurang(10, 5) << endl;
    cout << "5 * 10 = " << kali(5, 10) << endl;
    cout << "10 / 3 = " << bagi(10, 3) << endl;
    return 0;
}




