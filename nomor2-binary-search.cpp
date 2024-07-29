/*
    Nama        : Ariel Gema Wardana
    NIM         : 230401010057
    Mata Kuliah : Struktur Data dan Algoritma
    KELAS       : IT201
*/

#include <iostream>
using namespace std;

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
