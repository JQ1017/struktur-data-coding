#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float hadir;
};

int main() {
    int N;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> N;

    Mahasiswa mhs[40];
    cout << "\n=== INPUT DATA MAHASISWA (STRUCT) ===\n";
    for (int i = 0; i < N; i++) {
        cout << "Mahasiswa ke-" << i+1 << ":\n";
        cout << "  Nama      : "; cin >> mhs[i].nama;
        cout << "  NIM       : "; cin >> mhs[i].nim;
        cout << "  Kehadiran : "; cin >> mhs[i].hadir;
    }
    cout << "\n=== DAFTAR MAHASISWA (STRUCT) ===\n";
    for (int i = 0; i < N; i++) {
        cout << i+1 << ". " << mhs[i].nama << " | " << mhs[i].nim << " | " <<  mhs[i].hadir << "%\n";
    }
    cout << "Total Mahasiswa: " << N << "\n\n";

    string cariNIM;
    cout << "Masukkan NIM yang dicari/diupdate: ";
    cin >> cariNIM;

    bool ketemu = false;
    for (int i = 0; i < N; i++) {
        if (mhs[i].nim == cariNIM) {
            cout << "Ketemu: " << mhs[i].nama << " | Kehadiran Lama: " << mhs[i].hadir << "%\n";
            cout << "Masukkan Kehadiran Baru: ";
            cin >> mhs[i].hadir;
            cout << "Data berhasil diubah!\n";
            ketemu = true;
            break;
        }
    }
    if (!ketemu) cout << "NIM tidak ditemukan.\n";

    return 0;
}