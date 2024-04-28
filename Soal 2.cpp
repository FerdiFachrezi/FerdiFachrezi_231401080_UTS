#include <iostream>
using namespace std;

int main() {
    int x;

    cout << "Masukkan nilai (masukkan -1 untuk mengakhiri): ";
    cin >> x;

    if (x < 2 || x > 10) {
        cout << "Inputan Tidak Memenuhi Batas" << endl;
    } else {
        for(int i = 1; i <= x; i++){
            for(int j = 1; j <= i; j++){
                cout << "x ";
            }
            cout << endl;
        }
        
        for(int i = 1; i <= x; i++){
            for(int k = 1; k <= x; k++){
                cout << "  ";
            }
            for(int j = 2; j <= i; j++){
                cout << "  ";
            }
            for(int l = x; l >= i; l--){
                cout << "x ";
            }
            cout << endl;
        }
    }
 
    }

