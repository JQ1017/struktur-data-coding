#include <iostream>
#include <string>
using namespace std;

// Definisi Struct
struct Mahasiswa {
    string nim;
    string nama;
    float persentaseKehadiran;
};

int main() {
    Mahasiswa mhs[40];

    for (int i = 0; i < 40; i++) {
        cout << i + 1 << ". " << mhs[i].nim << " | " << mhs[i].nama << " | " << mhs[i].persentaseKehadiran << "%\n";
    }

    string cariNIM;
    int idx = -1;
    for (int i = 0; i < 40; i++) {
        if (mhs[i].nim == cariNIM) { idx = i; break; }
    }

    if (idx != -1) {
        cout << "NIM Ditemukan! Mengubah persentase kehadiran...\n";
        cin >> mhs[idx].persentaseKehadiran;    
        cout << "Hasil Update: " << mhs[idx].nim << " | " << mhs[idx].nama << " | " << mhs[idx].persentaseKehadiran << "%\n";
    } else {
        cout << "NIM tidak ditemukan.\n";
    }

    return 0;
}