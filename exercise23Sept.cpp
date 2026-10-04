#include <iostream>
#include <string>
#include <vector>
using namespace std;
// =================================================================
// 2. ABSTRACT DATA TYPE (ADT)
// ADT adalah tipe data bentukan (user-defined type) yang menggabungkan 
// beberapa tipe data dasar dan method menjadi satu entitas terstruktur.
// =================================================================
struct Mahasiswa {
    string nim;     // Tipe Data String (NIM)
    string nama;    // Tipe Data String (Nama)
    string kelas;   // Tipe Data String (Kelas)
    double nilai;   // Tipe Data Double (Nilai)
    // Method di dalam ADT untuk menampilkan data mahasiswa
    void tampilkanData() const {
        cout << "NIM   : " << nim << endl;
        cout << "Nama  : " << nama << endl;
        cout << "Kelas : " << kelas << endl;
        cout << "Nilai : " << nilai << endl;
    }
};
int main() {
    // =================================================================
    // 1. TIPE DATA DASAR (PRIMITIVE DATA TYPES) & ARRAY
    // Tipe data dasar yang disediakan secara bawaan oleh C++.
    // =================================================================
    int jumlahMahasiswa = 3;               // Tipe Data Integer (Bilangan Bulat)
    double nilaiUjian = 85.5;              // Tipe Data Double (Bilangan Desimal)
    char indeksNilai = 'A';                // Tipe Data Char (Karakter Tunggal)
    bool lulus = true;                     // Tipe Data Bool (Boolean: true/false)
    // Array / List Tipe Data Dasar
    string daftarMahasiswa[] = {"Shiddiq", "Budi", "Siti"};
    double daftarNilai[] = {85.5, 90.0, 78.25};
    string daftarKelas[] = {"IF-A", "IF-B", "IF-A"};
    cout << "==================================================" << endl;
    cout << " 1. TIPE DATA DASAR & ARRAY                       " << endl;
    cout << "==================================================" << endl;
    cout << "Nilai Ujian (double) : " << nilaiUjian << endl;
    cout << "Indeks Nilai (char)  : " << indeksNilai << endl;
    cout << "Status Lulus (bool)  : " << (lulus ? "LULUS" : "TIDAK LULUS") << endl;
    cout << "--------------------------------------------------" << endl;
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Mahasiswa ke-" << (i + 1) << ": " << daftarMahasiswa[i]
             << " | Kelas: " << daftarKelas[i]
             << " | Nilai: " << daftarNilai[i] << endl;
    }
    // =================================================================
    // 2. ABSTRACT DATA TYPE (ADT)
    // Mengelompokkan variabel NIM, Nama, Kelas, Nilai ke dalam 1 objek.
    // =================================================================
    cout << endl;
    cout << "==================================================" << endl;
    cout << " 2. ABSTRACT DATA TYPE (ADT - STRUCT)             " << endl;
    cout << "==================================================" << endl;
    Mahasiswa mhs1 = {"2023001", "Shiddiq", "Data Structure - A", 95.0};
    Mahasiswa mhs2 = {"2023002", "Budi", "Data Structure - A", 87.5};
    cout << "[Objek ADT mhs1]" << endl;
    mhs1.tampilkanData();
    // =================================================================
    // 3. ADDRESS (ALAMAT MEMORI - Operator &)
    // Operator '&' (Address-of) mengambil lokasi alamat memori RAM 
    // di mana suatu variabel disimpan.
    // =================================================================
    cout << endl;
    cout << "==================================================" << endl;
    cout << " 3. ADDRESS (ALAMAT MEMORI RAM)                   " << endl;
    cout << "==================================================" << endl;
    cout << "Alamat memori variabel mhs1 (&mhs1)           : " << &mhs1 << endl;
    cout << "Alamat memori mhs1.nama (&mhs1.nama)         : " << &mhs1.nama << endl;
    cout << "Alamat memori mhs1.nilai (&mhs1.nilai)       : " << &mhs1.nilai << endl;
    cout << "Alamat memori elemen array daftarNilai[0]     : " << &daftarNilai[0] << endl;
    cout << "Alamat memori elemen array daftarNilai[1]     : " << &daftarNilai[1] << endl;
    // =================================================================
    // 4. POINTER (Variabel Penunjuk Memori - Operator * & ->)
    // Pointer adalah variabel khusus yang menyimpan ALAMAT MEMORI 
    // dari variabel lain.
    // - Operator '*' (Dereference) mengambil nilai di alamat memori tersebut.
    // - Operator '->' digunakan untuk mengakses member struct via pointer.
    // =================================================================
    cout << endl;
    cout << "==================================================" << endl;
    cout << " 4. POINTER & DEREFERENCING                       " << endl;
    cout << "==================================================" << endl;
    // Menentukan Pointer yang menunjuk ke objek ADT mhs1
    Mahasiswa* ptrMhs = &mhs1;
    cout << "Isi variabel ptrMhs (Alamat memori mhs1)     : " << ptrMhs << endl;
    cout << "Akses data via Pointer (ptrMhs->nama)        : " << ptrMhs->nama << endl;
    cout << "Akses data via Dereference (*ptrMhs).nilai   : " << (*ptrMhs).nilai << endl;
    // Mengubah nilai variabel mhs1 secara langsung melalui pointer
    ptrMhs->nilai = 98.0; 
    cout << "Nilai mhs1 setelah diubah via Pointer         : " << mhs1.nilai << endl;
    // Aritmatika Pointer pada Array
    cout << "\n[Navigasi Memori Array Menggunakan Pointer]" << endl;
    double* ptrNilai = daftarNilai; // Menunjuk ke elemen pertama array
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Alamat: " << (ptrNilai + i) << " | Nilai di alamat tsb (*ptr): " << *(ptrNilai + i) << endl;
    }
    return 0;
}