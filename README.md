# :desktop_computer: UAS Struktur Data dan Algoritma IT201
berikut adalah penjelasan dari kode program terkait soal UAS Struktur Data dan Algoritma

# :scroll: Penjelasan

## Nomor 1 - Sorting
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
- kemudian `nama[j - 1] = tempNama` menukar elemen dari `nama[j - 1]` dengan `tempNama`
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


### Bagian fungsi Menampilkan Data
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
Untuk bagian fungsi main, kita dapat melihat terdapat variabel `n` dengan nilai 8, dimana untuk menyimpan jumlah untuk menentukan jumlah array pada `nama` dan `alamat`. 
kemudian kita membuat variabel `nama` yang isi datanya ialah "Fahmi", "Romi", "Andri", "Fadillah", "Ruli", "Rudi", "Dendi", "Zaki".
Kemudian kita membuat variabel `alamat` yang isi datanya ialah "Jakarta", "Solo", "Jakarta", "Banyuwangi", "Bandung", "Bali", "Purwokerto", "Madiun".

Kemudian kita tampilkan datanya yang sebelum diurutkan dengan memanggil sebuah fungi yaitu `tampilkanData(nama, alamat, n)`. 

Kemudian kita melakukan input data untuk memilih jenis sort yang mana, apakah memilih Bubble Sort atau Selection Sort. Setelah kita melakukan input dengan cara mengisi sebuah angka, data input akan disimpan pada variabel `pilihan`.
Setelah kita melakukan input, kita akan melakukan perkondisian atau pengecekan pada pilihan kita, perkondisiannya sebagai berikut:
- Jika `pilihan` bernilai 1, maka kita melakukan sorting menggunakan Bubble Sort. Dengan cara memanggil sebuah fungsi yaitu `bubbleSort(nama, alamat, n)`.
- Jika `pilihan` bernilai 2, maka kita melakukan sorting menggunakan Selection Sort. Dengan cara memanggil sebuah fungsi yaitu `selectionSort(nama, alamat, n)`.
- Jika `pilihan` selain bernilai 1 dan 2, maka program akan menampilkan "Pilihan tidak ada".

Setelah kita melakukan sorting, kita akan menampilkan datanya dengan memanggil sebuah fungsi yaitu `tampilkanData(nama, alamat, n)`

## Nomor 2 - Binary Search
Konsep dari Binary Search ialah harus di urutkan terlebih dahulu, disini saya menggunakan Bubble Sort untuk mengurutkannya. Disini saya telah membuat sebuah kode program untuk melakukan Binary Search. Berikut adalah penjelasan dari kode programnya:

### Bagian Header
```c++
#include <iostream>
#include <iomanip>
using namespace std;
```
Untuk bagian header terdapat sebuah library dari c++ yaitu `#include <iostream>` untuk input output pada c++.
Kemudian terdapat `using namespace std` dimana untuk Menggunakan namespace standar agar kita tidak perlu menuliskan `std::` sebelum setiap penggunaan komponen dari standar library.


### Bagian fungsi Bubble Sort
```c++
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
```
Untuk bagian fungsi **bubbleSort** terdapat dua parameter yaitu array `arr` dan integer `n` yang merupakan jumlah elemen dalam array.
Jika kita lihat terdapat sebuah perulangan `for` bersarang, yang akan digunakan untuk pengimplementasian algoritma dari Bubble Sort. Berikut adalah perulangannya:
- Perulangan Pertama yaitu `for (int i = 0; i < n - 1; i++)` untuk mengontrol jumlah pengurutan.
- Kemudian di dalam Perulangan pertama terdapat Perulangan Kedua yaitu `for (int j = 0; j < n - i - 1; j++)` untuk membandingkan elemen-elemen dalam array.

Kemudian didalam perulangan tersebut terdapat sebuah kondisi yaitu `if (arr[j] > arr[j + 1])` dimana kondisi tersebut untuk membandingkan dua elemen yang berdekatan. Jika elemen yang di kiri lebih besar, maka dilakukan penukaran. berikut adalah penukarannya:
- pertama kita membuat sebuah variabel yaitu `string temp = arr[j]` dimana akan digunakan untuk menyimpan elemen dari `arr[j]` ke variabel sementara yaitu `temp`.
- kemudian `arr[j] = arr[j + 1]` menukar elemen dari `nama[j]` dengan ` arr[j + 1]`.
- kemudian `arr[j + 1] = tempNama` menukar elemen dari `arr[j + 1]` dengan `tempNama`


### Bagian fungsi binarySearch
```c++
int binarySearch(int arr[], int size, int input)
{
    int kiri = 0;
    int kanan = size - 1;
    int target = input;

    while (kiri <= kanan)
    {
        int tengah = kiri + (kanan - kiri) / 2;
        if (arr[tengah] == target)
        {
            return tengah;
        }
        else if (arr[tengah] < target)
        {
            kiri = tengah + 1;
        }
        else
        {
            kanan = tengah - 1;
        }
    }
    return -1;
}
```
Untuk bagian fungsi **binarySearch** terdapat dua parameter yaitu array `arr`, integer `size` yang merupakan ukuran array, dan integer `input` yang merupakan angka yang dicari.
kemudian membuat sebuah variabel yaitu:
- `int kiri = 0` dimana untuk menetapkan batas kiri pencarian.
- `int kanan = size - 1` dimana untuk menetapkan batas kanan pencarian.
- `int target = input` dimana untuk menyimpan nilai yang dicari dalam variabel `target`.

Jika kita lihat terdapat sebuah perulangan `while` yaitu `while (kiri <= kanan)`, dimana perulangan berjalan selama batas kiri tidak melebihi batas kanan. berikut adalah pencariannya:
- didalam perulangan terdapat variabel `tengah` dimana untuk menghitung indeks tengah pada array.
- Kemudian terdapat sebuah perkondisian:
  - Pertama kita melakukan perkondisian yaitu pada `if (arr[tengah] == target)`, apakah elemen tengah sama dengan `target`. jika iya, kembalikan indeks tengah yaitu `return tengah`. jika bukan, lanjut ke kondisi berikutnya.
  - Kemudian kita melakukan perkondisian yaitu pada `else if (arr[tengah] < target)`, apakah elemen tengah tengah kurang dari `target`. jika iya, geser batas kiri ke kanan yaitu `kiri = tengah + 1;`. jika bukan, lanjut ke kondisi berikutnya.
  - kemudian kondisi terakhir, apakah elemen tengah lebih besar dari `target`. jika iya, geser batas kanan ke kiri yaitu `kanan = tengah - 1`.
- kemudian terdapat `return -1`, dimana akan mengembalikan -1 jika `target` tidak ditemukan.
 

### Bagian fungsi Menampilkan Data
```c++
void tampilkanData(int originalArr[], int size, int target)
{
    bool found = false;
    for (int i = 0; i < size; i++)
    {
        if (originalArr[i] == target)
        {
            if (found)
            {
                cout << " dan " << (i + 1);
            }
            else
            {
                cout << "Angka " << target << " ada di indeks ke " << (i + 1);
                found = true;
            }
        }
    }
    if (!found)
    {
        cout << "Angka " << target << " tidak ada dalam array";
    }
    cout << endl;
}
```
Untuk bagian fungsi **tampilkanData** terdapat tiga parameter yaitu array `originalArr`, integer `size` yang merupakan ukuran array, dan integer `input` yang merupakan angka yang dicari.
Setelah itu disini terdapat sebuah variabel yaitu variabel `found` yang bernilai false, dimana variabel ini akan digunakan untuk mencatat apakah angka `target` telah ditemukan dalam array `originalArr`.

Kemudian jika kita lihat terdapat sebuah perulangan `for` yaitu `for (int i = 0; i < n; i++)`, yang akan digunakan untuk mencetak baris setiap datanya. 
dan juga didalam perulangan terdapat perkondisian `if` yaitu `if (originalArr[i] == target)`, yang dimana digunakan untuk memeriksa apakah elemen saat ini yaitu `originalArr[i]` sama dengan `target`.
jika nilainya sama maka kita melakukan pengecekan lagi, yaitu:
- pada kondisi `if (found)`, yang dimana untuk memeriksa apakah `found` bernilai `true`. jika iya, berarti `target` telah ditemukan sebelumnya, dan akan menambahkan kata 'dan' sebelum indeks saat ini. jika bukan, lanjut ke kondisi berikutnya.
- pada kondisi terakhir, Jika `found` masih false, berarti ini pertama kali `target` ditemukan, kemudian tampilkan pesan bahwa angka ditemukan di indeks saat ini dan set `found` menjadi `true`.

kemudian disini kita melakukan pengecakan lagi setelah perulangan selesai yaitu pada `if (!found)`, jika `found` masih `false`, berarti target tidak ditemukan sama sekali dalam array dan kemudian tampilkan pesan bahwa angka tidak ada dalam array.


### Bagian fungsi main
```c++
int main()
{
    int arr[] = {19, 40, 10, 90, 2, 50, 60, 50, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sortedArr[size];
    for (int i = 0; i < size; ++i)
    {
        sortedArr[i] = arr[i];
    }
    bubbleSort(sortedArr, size);

    int input;
    cout << "Masukkan angka yang dicari: ";
    cin >> input;

    int index = binarySearch(sortedArr, size, input);
    if (index != -1)
    {
        tampilkanData(arr, size, input);
    }
    else
    {
        cout << "Angka " << input << " tidak ada dalam array" << endl;
    }

    return 0;
}
```
Untuk bagian fungsi main, kita dapat melihat terdapat variabel array `arr[]` dengan data `{19, 40, 10, 90, 2, 50, 60, 50, 1}`.
kemudian terdapat variabel integer `size`, dimana untuk menghitung jumlah elemen dalam array. dan juga terdapat sebuah variabel array baru yaitu `sortedArr[size]` dimana untuk menyimpan elemen yang diurutkan.
kemudian terdapat perulangan `for` yaitu `for (int i = 0; i < size; ++i)`, dimana untuk menyalin elemen array asli yaitu variabel `arr[]` ke array baru yaitu `sortedArr[i]`.
Setelah melakukan perulangan, maka akan melakukan pengurutan yaitu menggunakan Bubble Sort yaitu pada function `bubbleSort(sortedArr, size)`.

Setelah program melakukan pengurutan. Terdapat sebuah penginputan, dimana penginputan ini akan mencari angka yang dicari. Kemudian hasil dari inputan akan disimpan ke variabel `input`.
Setelah Melakukan penginputan. Disini program akan melakukan pencarian, yaitu pada variabel `index` yang menyimpan sebuah fungsi yaitu `binarySearch(sortedArr, size, input)`. 

Kemudian disini kita melakukan perkondisian untuk menampilkan data. dimana kondisinya ialah:
- Pada kondisi `if (index != -1)`, melakukan pengecakan dimana Jika index tidak sama dengan `-1`, maka kita tampilkan datanya dengan memanggil sebuah fungsi yaitu `tampilkanData(arr, size, input)`.
- Jika tidak ditemukan maka tampilkan pesan bahwa angka tidak ada dalam array.


## Nomor 3
Pada soal terdapat ketentuan memilih salah satu topik yaitu Tree, Hash, Graph. Yang dimana topik-topik tersebut dipilih untuk pembuatan video presentasi.

Disini saya memilih topik Tree untuk topik pembuatan video presentasinya. Berikut adalah link youtube dari hasil presentasi saya:

:link: 〔 UAS 〕Struktrur Data dan Algoritma - Tree (Binary Tree): [https://youtu.be/Czj91UjSNac](https://youtu.be/Czj91UjSNac)

Berikut adalah kode program dari topik terkait:

:link: Kode Program Nomor 3: [https://github.com/ArielGwd/uas-struktur-data-dan-algoritma/blob/main/nomor3-binary-tree.cpp](https://github.com/ArielGwd/uas-struktur-data-dan-algoritma/blob/main/nomor3-binary-tree.cpp)


