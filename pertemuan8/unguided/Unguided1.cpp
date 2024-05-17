#include <iostream>
#include <conio.h>  // Jika menggunakan Windows. Untuk sistem operasi lain, perlu mencari pengganti dari _getche()
#include <cstring>

using namespace std;

// Fungsi untuk melakukan pencarian binary pada array karakter
int binarySearch_2147(char arr[], int indices[], int size, char target) {
    int left = 0;
    int right = size - 1;

    // Melakukan binary search selama left tidak melebihi right
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Jika huruf target berada di tengah array
        if (arr[mid] == target)
            return indices[mid];

        // Jika huruf target berada di sebelah kiri tengah array
        if (arr[mid] > target)
            right = mid - 1;

        // Jika huruf target berada di sebelah kanan tengah array
        else
            left = mid + 1;
    }

    // Jika huruf target tidak ditemukan
    return -1;
}
// Fungsi untuk melakukan selection sort pada array karakter
void selectionSort_2147(char arr[], int indices[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIdx = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        // Menukar elemen minimum dengan elemen pertama
        swap(arr[i], arr[minIdx]);
        swap(indices[i], indices[minIdx]);
    }
}

int main() {
    string sentence;
    char target;
    cout << "147--Azaria Nanda Binary Search--147" << endl;
    cout << "Masukkan kalimat: ";
    getline(cin, sentence);

    // Membuat array untuk menyimpan karakter dan indeks asli mereka
    int len = sentence.size();
    char charArray[100];
    int indices[100];
    int size = 0;

    for (int i = 0; i < len; ++i) {
        if (sentence[i] != ' ') {  // Mengabaikan spasi
            charArray[size] = sentence[i];
            indices[size] = i;
            ++size;
        }
    }

    // Mengurutkan array karakter menggunakan selection sort
    selectionSort_2147(charArray, indices, size);

    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> target;

    // Mencari huruf dalam array yang telah diurutkan
    int index = binarySearch_2147(charArray, indices, size, target);

    if (index != -1) {
        cout << "Huruf '" << target << "' ditemukan pada indeks ke-" << index << " dalam kalimat." << endl;
    } else {
        cout << "Huruf '" << target << "' tidak ditemukan dalam kalimat." << endl;
    }

    _getche();  // Hanya untuk Windows. Jika menggunakan OS lain, gunakan pengganti sesuai kebutuhan
    return 0;
}
