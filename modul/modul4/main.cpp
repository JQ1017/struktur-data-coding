#include <iostream>
#include "list.h"

using namespace std;

int main() {
    List L;
    infotype angka;
    address p;

    createList(L);

    cout << "Masukkan angka pertama (digit NIM ke-1): ";
    cin >> angka;

    p = allocate(angka);

    insertFirst(L, p);

    printInfo(L);

    cout << "Masukkan angka kedua (digit NIM ke-2): ";
    cin >> angka;
    p = allocate(angka);
    insertFirst(L, p);
    printInfo(L);

    cout << "Masukkan angka ketiga (digit NIM ke-3): ";
    cin >> angka;
    p = allocate(angka);
    insertFirst(L, p);
    printInfo(L);

    return 0;
}
