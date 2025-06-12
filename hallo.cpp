#include <iostream>
using namespace std;

int main() {
    string nama[5]; // array untuk 5 nama
    return 0;

    for (int i = 0; i < 5; i++) {
        cout << "Masukkan nama ke-" << i + 1 << ": ";
        cin >> nama[i];
    }
    
     cout << "\nDaftar Nama:\n";
    for (int i = 0; i < 5; i++) {
        cout << "- " << nama[i] << endl;
    }

}