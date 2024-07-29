/*
    Nama        : Ariel Gema Wardana
    NIM         : 230401010057
    Mata Kuliah : Struktur Data dan Algoritma
    KELAS       : IT201
*/

#include <iostream>
#include <iomanip>
using namespace std;

void bubbleSort(string nama[], string alamat[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (nama[j] < nama[j - 1])
            {
                string tempNama = nama[j];
                nama[j] = nama[j - 1];
                nama[j - 1] = tempNama;

                string tempAlamat = alamat[j];
                alamat[j] = alamat[j - 1];
                alamat[j - 1] = tempAlamat;
            }
        }
    }
}

void selectionSort(string nama[], string alamat[], int n)
{
    for (int i = n - 1; i >= 1; i--)
    {
        int maxIndex = 0;
        for (int j = 1; j <= i; j++)
        {
            if (nama[j] > nama[maxIndex])
            {
                maxIndex = j;
            }
        }
        string tempNama = nama[maxIndex];
        nama[maxIndex] = nama[i];
        nama[i] = tempNama;

        string tempAlamat = alamat[maxIndex];
        alamat[maxIndex] = alamat[i];
        alamat[i] = tempAlamat;
    }
}

void tampilkanData(string nama[], string alamat[], int n)
{
    cout << "+---------------+---------------+" << endl;
    cout << "| " << left << setw(13) << "Nama" << " | " << setw(13) << "Alamat" << " |" << endl;
    cout << "+---------------+---------------+" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "| " << left << setw(13) << nama[i] << " | " << setw(13) << alamat[i] << " |" << endl;
    }
    cout << "+---------------+---------------+" << endl;
    cout << endl
         << endl;
}

int main()
{
    const int n = 8;
    string nama[n] = {"Fahmi", "Romi", "Andri", "Fadillah", "Ruli", "Rudi", "Dendi", "Zaki"};
    string alamat[n] = {"Jakarta", "Solo", "Jakarta", "Banyuwangi", "Bandung", "Bali", "Purwokerto", "Madiun"};

    cout << "Sebelum data berhasil diurutkan" << endl;
    tampilkanData(nama, alamat, n);

    int pilihan;
    cout << "Pilih metode pengurutan:" << endl;
    cout << "1. Bubble Sort" << endl;
    cout << "2. Selection Sort" << endl;
    cout << "Masukkan pilihan (1 atau 2): ";
    cin >> pilihan;
    cout << endl;

    if (pilihan == 1)
    {
        bubbleSort(nama, alamat, n);
        cout << "Setelah data berhasil diurutkan menggunakan Bubble Sort" << endl;
    }
    else if (pilihan == 2)
    {
        selectionSort(nama, alamat, n);
        cout << "Setelah data berhasil diurutkan menggunakan Selection Sort" << endl;
    }
    else
    {
        cout << "Pilihan tidak ada" << endl;
        return 1;
    }

    tampilkanData(nama, alamat, n);

    return 0;
}
