# <h1 align="center">Laporan Praktikum Modul Array</h1>
<p align="center">Azaria Nanda Putri - 2311102147</p>

## Dasar Teori

---
    
## Guided 

### 1. Program Input Array Tiga Dimensi

```C++
#include <iostream>

 using namespace std;

 // PROGRAM INPUT ARRAY 3 DIMENSI
 int main()
 {
    // Deklarasi array
    int arr[2][3][3];
    // Input elemen
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";

                cin >> arr[x][y][z];
            }
         }
        cout << endl;
    }
    // Output Array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Data Array[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;
            }
        }
    }
    cout << endl;
    // Tampilan array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << arr[x][y][z] << ends;
            }
            cout << endl;
        }
        cout << endl;
    }
 }
```
Kode di atas adalah sebuah program yang digunakan untuk menyimpan nilai-nilai dalam sebuah tabel tiga dimensi. Pengguna diminta untuk menambahkan angka-angka ke dalam tabel tersebut dengan cara memberikan informasi tentang baris, kolom, dan nilai di dalam kotak tersebut. Setelah selesai, program menampilkan kembali nilai-nilai tersebut dalam bentuk tabel bersama dengan nomor kotaknya. Selain itu, program juga menampilkan nilai-nilai tersebut tanpa tanda kurung siku.

### 2. Program Mencari Nilai Maksimal pada Array

```C++
#include <iostream>

using namespace std;

// Program Mencari Nilai Maksimal pada Array

int main()
{
    int maks, a, i = 1, lokasi;
    cout << "Masukkan panjang array: ";
    cin >> a;
    int array[a];
    cout << "Masukkan " << a << " angka\n";
    for (i = 0; i < a; i++)
    {
        cout << "Array ke-" << (i) << ": ";
        cin >> array[i];
    }
    maks = array[0];
    for (i = 0; i < a; i++)
    {
        if (array[i] > maks)
        {
            maks = array[i];
            lokasi = i;
        }
    }
    cout << "Nilai maksimum adalah " << maks << " berada di Array ke " << lokasi << endl;
}
```
Kode di atas bertujuan untuk mencari nilai maksimum dalam suatu array setelah pengguna memasukkan panjang array dan nilai-nilai elemennya. Setelah memasukkan nilai-nilai, program akan menggunakan perulangan for dan if untuk mencari nilai maksimum. Nilai maksimum tersebut akan disimpan dalam variabel maks dan indeksnya dalam variabel lokasi. Program kemudian akan menampilkan nilai maksimum beserta indeksnya.

## Unguided 

### 1. Buatlah program untuk menampilkan output seperti berikut dengan data yang diinputkan oleh user!
![Screenshot Unguided Q1](Unguided_Q1.png)

```C++
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a_2147; // Deklarasi variabel

    cout << "\n2147==Program Ganjil Genap==2147" << endl;
    cout << "\nInput angka: " << endl;
    cin >> a_2147;

    vector<int> Array_2147; // Deklarasi array sebagai vector

    // Untuk memasukan bilangan array
    for (int i = 0; i < a_2147; i++) {
        cout << "Array " << "[" << i + 1 << "]" << " :";
        int num;
        cin >> num;
        Array_2147.push_back(num);
    }

    // Menampilkan data array yang sudah diinput oleh user
    cout << "Data array: ";
    for (int i = 0; i < a_2147; ++i) { // Melakukan perulangan untuk menampilkan data array
        cout << Array_2147[i] << " ";
    }
    cout << endl;

    // Menampilkan angka genap, jika angkanya habis dibagi 2 maka akan ditampilkan
    cout << "Nomor genap  : ";
    for (int i = 0; i < a_2147; ++i) { // Melakukan perulangan untuk mengecek angka genap
        if (Array_2147[i] % 2 == 0)
            cout << Array_2147[i] << ", ";
    }
    cout << endl;

    // Menampilkan angka ganjil, jika angkanya tidak habis dibagi 2 maka akan ditampilkan
    cout << "Nomor ganjil : ";
    for (int i = 0; i < a_2147; ++i) { // Melakukan perulangan untuk mengecek angka ganjil
        if (Array_2147[i] % 2 != 0)
            cout << Array_2147[i] << ", ";
    }
    cout << endl;

    return 0;
}
```
#### Output:
![Screenshot Unguided Q1](output_Unguided1.png)

----
### 2. Buatlah program input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya diinputkan oleh user!

```C++
#include <iostream>
using namespace std;

int main()
{
    // Deklarasi isi array
    int ukurax_2147, ukurany_2147, ukuranz_2147;

    // Meminta input ukuran array dari user
    cout << "\n Array Tiga Dimensi -- by nanda" << endl;
    cout << "Input ukuran 'x' dalam array: "; cin >> ukurax_2147;
    cout << "Input ukuran 'y' dalam array: "; cin >> ukurany_2147;
    cout << "Input ukuran 'z' dalam array: "; cin >> ukuranz_2147;

    int arr[ukurax_2147][ukurany_2147][ukuranz_2147];

    for (int x = 0; x < ukurax_2147; x++) {
        for (int y = 0; y < ukurany_2147; y++) {
            for (int z = 0; z < ukuranz_2147; z++) {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }

    for (int x = 0; x < ukurax_2147; x++) {
        for (int y = 0; y < ukurany_2147; y++) {
            for (int z = 0; z < ukuranz_2147; z++) {
                cout << arr[x][y][z] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
```
#### Output:
![Screenshot Unguided Q1](output_Unguided-2.png)
![Screenshot Unguided Q1](output_Unguided2.png)


Kode di atas 

### 3. Buatlah program menu untuk mencari nilai maksimum, minimum dan nilai rata – rata dari suatu array dengan input yang dimasukkan oleh user!

```C++
#include <iostream>
using namespace std;

int main() {
    int pilihan, ukuran;
    cout << "Operasi Array\n";
    cout << "Masukkan ukuran array: ";
    cin >> ukuran;
    int Array[ukuran];
    cout << "\nMasukkan " << ukuran << " angka\n";
    for (int i = 0; i < ukuran; i++) {
        cout << "Array[" << i + 1 << "]: ";
        cin >> Array[i];
    }
    cout << "\nData array: ";
    for (int i = 0; i < ukuran; i++) {
        cout << Array[i] << ", ";
    }
    cout << "\n\nOperator Array\n";
    cout << "1. Maksimum\n";
    cout << "2. Minimum\n";
    cout << "3. Rata-rata\n";
    cout << "4. Keluar\n";
    cout << "Masukkan pilihan Anda: ";
    cin >> pilihan;
    
    switch (pilihan) {
        case 1: {
            int maksimum = Array[0], posisi = 0;
            for (int i = 1; i < ukuran; i++) {
                if (Array[i] > maksimum) {
                    maksimum = Array[i];
                    posisi = i;
                }
            }
            cout << "Nilai maksimum " << maksimum << " berada pada posisi " << posisi + 1 << endl;
            break;
        }
        case 2: {
            int minimum = Array[0], posisi = 0;
            for (int i = 1; i < ukuran; i++) {
                if (Array[i] < minimum) {
                    minimum = Array[i];
                    posisi = i;
                }
            }
            cout << "Nilai minimum " << minimum << " berada pada posisi " << posisi + 1 << endl;
            break;
        }
        case 3: {
            int jumlah = 0;
            for (int i = 0; i < ukuran; i++) {
                jumlah += Array[i];
            }
            double rata_rata = static_cast<double>(jumlah) / ukuran;
            cout << "Rata-rata array: " << rata_rata << endl;
            break;
        }
        case 4: 
            cout << "Terima kasih telah menggunakan program!" << endl;
            break;
        default: 
            cout << "Pilihan tidak valid!" << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int pilihan, ukuran;
    cout << "Operasi Array\n";
    cout << "Masukkan ukuran array: ";
    cin >> ukuran;
    int Array[ukuran];
    cout << "\nMasukkan " << ukuran << " angka\n";
    for (int i = 0; i < ukuran; i++) {
        cout << "Array[" << i + 1 << "]: ";
        cin >> Array[i];
    }
    cout << "\nData array: ";
    for (int i = 0; i < ukuran; i++) {
        cout << Array[i] << ", ";
    }
    cout << "\n\nOperator Array\n";
    cout << "1. Maksimum\n";
    cout << "2. Minimum\n";
    cout << "3. Rata-rata\n";
    cout << "4. Keluar\n";
    cout << "Masukkan pilihan Anda: ";
    cin >> pilihan;
    
    switch (pilihan) {
        case 1: {
            int maksimum = Array[0], posisi = 0;
            for (int i = 1; i < ukuran; i++) {
                if (Array[i] > maksimum) {
                    maksimum = Array[i];
                    posisi = i;
                }
            }
            cout << "Nilai maksimum " << maksimum << " berada pada posisi " << posisi + 1 << endl;
            break;
        }
        case 2: {
            int minimum = Array[0], posisi = 0;
            for (int i = 1; i < ukuran; i++) {
                if (Array[i] < minimum) {
                    minimum = Array[i];
                    posisi = i;
                }
            }
            cout << "Nilai minimum " << minimum << " berada pada posisi " << posisi + 1 << endl;
            break;
        }
        case 3: {
            int jumlah = 0;
            for (int i = 0; i < ukuran; i++) {
                jumlah += Array[i];
            }
            double rata_rata = static_cast<double>(jumlah) / ukuran;
            cout << "Rata-rata array: " << rata_rata << endl;
            break;
        }
        case 4: 
            cout << "Terima kasih telah menggunakan program!" << endl;
            break;
        default: 
            cout << "Pilihan tidak valid!" << endl;
    }
    return 0;
}

```
#### Output:
![2311102147_Azaria Nanda unguided3](output_Unguided3.png)
------beloom
## Kesimpulan
Tipe data C++ pada program diatas berfungsi untuk membantu programmer dalam mengorganisir data dan mengoptimalkan kinerja program, secara efisien dan akurat.

## Referensi
[1] Meidyan Permata Putri, et al., Algoritma dan Struktur Data. Bandung: Widina Bhakti Persada Bandung, 2022.<br/>
[2] MPutra, Muhammad Taufik D., et al. BELAJAR DASAR PEMROGRAMAN DENGAN C++.Bandung: Edited by Damayanti, Evi, CV WIDINA MEDIA UTAMA, 2022

