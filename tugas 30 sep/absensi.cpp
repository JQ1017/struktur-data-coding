#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> N;

    string nama[40];
    string nim[40];
    float hadir[40];

    cout << "\n=== INPUT DATA MAHASISWA ===\n";
    for (int i = 0; i < N; i++) {
        cout << "Mahasiswa ke-" << i+1 << ":\n";
        cout << "  Nama      : "; cin >> nama[i];
        cout << "  NIM       : "; cin >> nim[i];
        cout << "  Kehadiran : "; cin >> hadir[i];
    }
    cout << "\n=== DAFTAR MAHASISWA ===\n";
    for (int i = 0; i < N; i++) {
        cout << i+1 << ". " << nama[i] << " | " << nim[i] << " | " <<  hadir[i] << "%\n";
    }
    cout << "Total Mahasiswa: " << N << "\n\n";

    string cariNIM;
    cout << "Masukkan NIM yang dicari/diupdate: ";
    cin >> cariNIM;

    bool ketemu = false;
    for (int i = 0; i < N; i++) {
        if (nim[i] == cariNIM) {
            cout << "Ketemu: " << nama[i] << " | Kehadiran Lama: " << hadir[i] << "%\n";
            cout << "Masukkan Kehadiran Baru: ";
            cin >> hadir[i];
            cout << "Data berhasil diubah!\n";
            ketemu = true;
            break;
        }
    }
    if (!ketemu) cout << "NIM tidak ditemukan.\n";

    return 0;
}