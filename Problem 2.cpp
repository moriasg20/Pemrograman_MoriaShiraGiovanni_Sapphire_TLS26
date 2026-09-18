#include <iostream>
#include <string>

using namespace std;

int main() {
    string teks;
    cout << "Masukkan kata (huruf kapital): ";
    cin >> teks;

    string hasil = "";
    hasil += teks[0];

    for (int i = 1; i < teks.length(); i++) {
        int nilai_sekarang = teks[i] - 'A' + 1;
        int nilai_sebelumnya = teks[i - 1] - 'A' + 1;
        int total = nilai_sekarang + nilai_sebelumnya;
        if (total > 26) {
            total = total - 26;
        }

        char huruf_baru = total - 1 + 'A';
        
        hasil += huruf_baru;
    }

    cout << "Hasil sandi: " << hasil << endl;

    return 0;
}