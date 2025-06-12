#include <iostream>
using namespace std;

int main() {
   cout << "Masukkan jumlah nama: ";
    cin >> jumlah;

    string* nama = new string[jumlah];
    string nama[5]; // array untuk 5 nama

    for (int i = 0; i < 5; i++) {
        cout << "Masukkan nama ke-" << i + 1 << ": ";
        cin >> nama[i];
    }

     cout << "\nDaftar Nama:\n";
    for (int i = 0; i < 5; i++) {
        cout << "- " << nama[i] << endl;
    }

    delete[] nama;
    return 0;
}