# :desktop_computer: UAS Struktur Data dan Algoritma IT201
berikut adalah penjelasan dari kode program terkait soal UAS Struktur Data dan Algoritma

# :scroll: Penjelasan

## Nomor 1 - sorting
Disini saya telah membuat sebuah kode program untuk mengurutkan data, dimana pada soal terdapat ketentuan yaitu menggunakan Bubble Sort dan
Selection Sort. Berikut adalah penjelasan dari kode programnya:

### Bagian Header
```c++
#include <iostream>
#include <iomanip>
using namespace std;
```
Untuk bagian header terdapat sebuah library dari c++ yaitu `#include <iostream>` untuk input output pada c++ dan `#include <iomanip>` untuk merapihkan text, misalnya pengaturan lebar tampilan teks.
Kemudian terdapat `using namespace std` dimana untuk Menggunakan namespace standar agar kita tidak perlu menuliskan `std::` sebelum setiap penggunaan komponen dari standar library.


### Bagian fungsi Bubble Sort
```c++
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
```
Untuk bagian fungsi **Bubble Sort** terdapat tiga parameter yaitu array `nama`, array `alamat`, dan integer `n` yang merupakan jumlah elemen dalam array. 
Jika kita lihat terdapat sebuah perulangan `for` bersarang, yang akan digunakan untuk pengimplementasian algoritma dari Bubble Sort. Berikut adalah perulangannya:
- Perulangan Pertama yaitu `for (int i = 0; i < n - 1; i++)` berjalan dari elemen pertama hingga elemen kedua terakhir dari array.
- Kemudian di dalam Perulangan pertama terdapat Perulangan Kedua yaitu `for (int j = n - 1; j > i; j--)` berjalan mundur dari elemen terakhir hingga elemen setelah indeks `i`.

Kemudian didalam perulangan tersebut terdapat sebuah kondisi yaitu `if (nama[j] < nama[j - 1])` dimana kondisi tersebut untuk memeriksa apakah elemen saat ini yaitu `nama[j]` lebih kecil dari elemen sebelumnya yaitu `nama[j - 1]`. Jika iya, maka kedua elemen tersebut ditukar. berikut adalah penukarannya:
- pertama kita membuat sebuah variabel yaitu `string tempNama = nama[j]` dimana akan digunakan untuk menyimpan elemen dari `nama[j]` ke variabel sementara yaitu `tempNama`.
- kemudian `nama[j] = nama[j - 1]` menukar elemen dari `nama[j]` dengan `nama[j - 1]`.
- kemudian `[j - 1] = tempNama` menukar elemen dari `nama[j]` dengan `nama[j - 1]`
- langkah yang sama dilakukan juga untuk array `alamat`, agar `alamat` tetap sinkron dengan array `nama`.


### Bagian fungsi Selection Sort
```c++
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
```
Untuk bagian fungsi **Selection Sort** terdapat tiga parameter yang sama seperti **Bubble Sort** yaitu array `nama`, array `alamat`, dan integer `n` yang merupakan jumlah elemen dalam array. 
Jika kita lihat terdapat sebuah perulangan `for` bersarang, yang akan digunakan untuk pengimplementasian algoritma dari *Selection Sort*. Berikut adalah perulangannya:
- Perulangan Pertama yaitu `for (int i = n - 1; i >= 1; i--)` berjalan dari elemen terakhir hingga elemen pertama dari array.
- Setelah itu kita membuat variabel `maxIndex` yang akan digunakan untuk melacak indeks dari elemen terbesar dalam subarray yang sedang melakukan perulangan.
- Kemudian di dalam Perulangan pertama terdapat Perulangan Kedua yaitu `for (int j = 1; j <= i; j++)` berjalan dari elemen kedua hingga elemen index `i`.

Kemudian didalam perulangan kedua terdapat sebuah kondisi yaitu `if (nama[j] > nama[maxIndex])` dimana kondisi tersebut untuk memeriksa apakah elemen saat ini yaitu `nama[j]` lebih besar dari elemen pada indeks yaitu `maxIndex`. Jika iya, maka `maxIndex` diisi dengan `j`. Setelah menemukan elemen terbesar dalam subarray yang tidak diurutkan, elemen tersebut ditukar dengan elemen terakhir dari subarray tersebut. berikut adalah penukarannya:
- pertama kita membuat sebuah variabel yaitu `string tempNama = nama[j]` dimana akan digunakan untuk menyimpan elemen dari `nama[j]` ke variabel sementara yaitu `tempNama`.
- kemudian `nama[j] = nama[j - 1]` menukar elemen dari `nama[j]` dengan `nama[j - 1]`.
- kemudian `[j - 1] = tempNama` menukar elemen dari `nama[j]` dengan `nama[j - 1]`
- langkah yang sama dilakukan juga untuk array `alamat`, agar `alamat` tetap sinkron dengan array `nama`.


### Bagian fungsi Selection Sort
```c++
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
    cout << endl << endl;
}
```
Untuk bagian fungsi **tampilkanData** terdapat tiga parameter yaitu array `nama`, array `alamat`, dan integer `n` yang merupakan jumlah elemen dalam array. Fungsi ini digunakan untuk menampilkan data nama dan alamat.\
Jika kita lihat terdapat sebuah perulangan `for` yaitu `for (int i = 0; i < n; i++)`, yang akan digunakan untuk mencetak baris setiap datanya.

Kemudian jika kita lihat terapat function `setw()` dimana function ini berasal dari library `#include <iomanip>` dimana akan digunakan untuk merapihkan text, misalnya pengaturan lebar tampilan teks.

### Bagian fungsi main
```c++
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
```
Untuk bagian fungsi main, kita lihat terdapat variabel `n` dengan nilai 8, dimana untuk menyimpan jumlah untuk menentukan jumlah array pada `nama` dan `alamat`. 
kemudian kita membuat variabel `nama` yang isi datanya ialah "Fahmi", "Romi", "Andri", "Fadillah", "Ruli", "Rudi", "Dendi", "Zaki".
Kemudian kita membuat variabel `alamat` yang isi datanya ialah "Jakarta", "Solo", "Jakarta", "Banyuwangi", "Bandung", "Bali", "Purwokerto", "Madiun".

Kemudian kita tampilkan datanya yang sebelum diurutkan dengan memanggil sebuah fungi yaitu `tampilkanData(nama, alamat, n)`. 

Kemudian kita melakukan input data untuk memilih jenis sort yang mana, apakah memilih Bubble Sort atau Selection Sort. Setelah kita melakukan input dengan cara mengisi sebuah angka, data input akan disimpan pada variabel `pilihan`.
Setelah kita melakukan input, kita akan melakukan perkondisian atau pengecekan pada pilihan kita, perkondisiannya sebagai berikut:
- Jika `pilihan` bernilai 1, maka kita melakukan sorting menggunakan Bubble Sort. Dengan cara memanggil sebuah fungsi yaitu `bubbleSort(nama, alamat, n)`.
- Jika `pilihan` bernilai 2, maka kita melakukan sorting menggunakan Selection Sort. Dengan cara memanggil sebuah fungsi yaitu `selectionSort(nama, alamat, n)`.
- Jika `pilihan` selain bernilai 1 dan 2, maka program akan menampilkan "Pilihan tidak ada".

Setelah kita melakukan sorting, kita akan menampilkan datanya dengan memanggil sebuah fungsi yaitu `tampilkanData(nama, alamat, n)`



