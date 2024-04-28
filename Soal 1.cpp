#include <iostream>
using namespace std;

int main()
{
    float total = 0, nilai, rata;
    int count = 0;
    
    cout << "Masukkan Nilai (Masukkan -1 untuk mengakhiri):" << endl;
    
    do {
        cout << "Nilai ke-" << count + 1 << ": ";
        cin >> nilai;
        
        if (nilai == -1) {
            break;
        } else if (nilai < 0) {
            cout << "Error: Nilai harus bilangan bulat positif." << endl;
            continue; 
        }
        
        total += nilai;
        count++;
    } while (true);
    
    if (count > 0) {
        rata = total / count;
        cout << "Nilai rata-rata: " << rata << endl;
    } else {
        cout << "Tidak ada nilai yang dimasukkan." << endl;
    }
    
    return 0;
}
