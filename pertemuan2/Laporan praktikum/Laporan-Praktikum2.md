# <h1 align="center">Laporan Praktikum Modul Array</h1>
<p align="center">Azaria Nanda Putri - 2311102147</p>

## Dasar Teori

Tipe data adalah klasifikasi nilai suatu variabel yang membantu operasi komputer untuk mengenali nilai data tanpa menghasilkan kesalahan keluaran. Tipe data dalam program memudahkan dalam mendeteksi berbagai jenis informasi. Selain itu, tipe data juga memastikan sistem operasional dapat berjalan dengan lancar dan meminimalkan kesalahan (error).

1. Tipe Data Primitif<br/>
Tipe data primitif adalah tipe data dasar yang tersedia secara langsung pada suatu bahasa pemrograman. Sebagai contoh, tipe data integer dan char merupakan beberapa contoh dari tipe data primitive tersebut.

2. Tipe Data Abstrak<br/>
Tipe data abstrak merupakan suatu konsep dalam pemrograman yang menyediakan representasi data dan operasi terkait tanpa harus mengungkapkan detail implementasinya. Konsep ini bertujuan untuk meningkatkan tingkat abstraksi dan modularitas dalam pengembangan perangkat lunak. Contoh dari tipe data abstrak meliputi tumpukan (stack), antrian (queue), dan daftar (list).

3. Tipe Data Koleksi<br/>
Tipe data koleksi adalah jenis data dalam pemrograman yang memungkinkan penyimpanan dan pengolahan sekumpulan data, seperti array. Hal ini memungkinkan pengelompokan data untuk pengolahan yang lebih efisien. Contoh data koleksi:
- Array (struktur data yang menyimpan sekumpulan
 nilai yang memiliki tipe data yang sama)
- Vector (sama seperti array. Tetapi bisa berubah ukuran dan memori secara dinamis,
 cocok untuk himpunan nilai yang fleksibel)
- Map (Tipe data map memetakan kunci ke nilai, 
memudahkan penyimpanan dan akses data dengan cepat)
    
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
![2311102147_Azaria Nanda unguided1](output_Unguided1.png)

Kode di atas digunakan untuk menghitung nilai rata-rata siswa dan menentukan apakah siswa tersebut naik kelas. Pengguna diminta untuk memasukkan nilai sesuai jumlah siswa melalui fungsi inputNilai. Nilainya disimpan dalam array. Fungsi hitungRataRata menghitung rata-rata nilai, dan kenaikanKelas menentukan apakah siswa naik kelas dengan melihat rata-rata. Fungsi main mengatur eksekusi, meminta input, menampilkan status kenaikan kelas, dan daftar siswa yang tidak naik kelas. Pengguna dapat mengulang program sesuai keinginan. Program ini memberikan informasi jelas dan interaktif tentang kenaikan kelas berdasarkan nilai rata-rata siswa.

Kesimpulan Tipe Data Primitif:<br/>
Tipe data primitif adalah tipe data yang telah ditetapkan oleh sistem dan tersedia dalam berbagai bahasa pemrograman. Ini berfungsi sebagai dasar untuk menyimpan nilai-nilai sederhana, memberikan fondasi penting dalam penyimpanan informasi dalam program.

### 2. Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya!
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
![2311102147_Azaria Nanda unguided2](output_Unguided2.png)

Kode di atas menggunakan struktur data dan class dalam C++ untuk merepresentasikan sebuah rumah kos dengan kemampuan menambahkan kamar dan menampilkan daftar kamar. Ini dilakukan dengan menggunakan struct Kamar untuk mewakili nomor dan lantai kamar, serta class (Rumah Kos) untuk mewakili rumah kos dengan menggunakan vektor kamar. Metode (tambah Kamar) digunakan untuk menambahkan kamar baru, sementara (tampilkan Kamar) menampilkan daftar kamar yang telah ditambahkan. Fungsi main membuat objek kosan, menambahkan beberapa kamar, dan menampilkan daftar kamar tersebut. Keseluruhan, program ini menunjukkan penggunaan struktur data dan class dalam mengelola data di program C++.


a. Fungsi dari Class:<br/>
Class adalah  menentukan jenis variabel yang akan digunakan untuk menyimpan objek. Ini memungkinkan pembuatan objek dengan data khusus dan tindakan yang dapat dilakukan oleh objek metode tersebut.

b. Fungsi dari Struct:<br/>
Struct, yang juga dikenal sebagai struktur data, ini digunakan ketika kita ingin mengelompokkan beberapa jenis data yang berbeda    menjadi sebuah "Tabel" atau untuk membuat representasi dari sebuah data yang terstruktur. Dengan menggunakan struct, kita dapat membuat jenis data baru yang terdiri dari berbagai jenis data yang berbeda.


### 3. Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari array dengan map!
```C++
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    
    // Deklarasi map dengan key int dan value string
    map<int, string> kartun_jepang;
  
    // Memasukkan elemen-elemen ke dalam map
    kartun_jepang[1] = "Shinchan";
    kartun_jepang[2] = "Doraemon";
    kartun_jepang[3] = "Spy x Family";
    kartun_jepang[4] = "Suzume";
    kartun_jepang[5] = "From up on puppy hill";
    kartun_jepang[6] = "Detective Conan";
    kartun_jepang[7] = "Onepiece";

    cout << " Pilihan Kartun Jepang " << endl;
    for (int i = 1; i <= kartun_jepang.size(); ++i) { // Looping untuk menampilkan semua elemen pada map
        cout << "No." << i << ": " << kartun_jepang[i] << endl; // Menampilkan elemen map
    }

    return 0;
}
```
#### Output:
![2311102147_Azaria Nanda unguided3](output_Unguided3.png)
Kode diatas mencetak isi map kartun_jepang, yang menyimpan nama-nama kartun Jepang, dengan menggunakan perulangan for. Setiap elemen map ditampilkan dengan nomor urut indeksnya dan nama kartun Jepang yang sesuai, memudahkan pemahaman mengenai konten map.

Berikut adalah perbedaan antara Array dan Map:

Array
- Tersusun secara berurutan dan diakses menggunakan nomor urutan.
- Memiliki ukuran tetap yang ditentukan saat dideklarasikan.
- Cocok untuk menyimpan data dengan tipe yang sama.

Map
- Menghubungkan suatu kunci dengan nilai tertentu, memungkinkan akses nilai berdasarkan kunci yang unik.
- Ukuran map dinamis dan dapat berubah sesuai dengan penambahan atau penghapusan elemen.
- Berguna untuk menyimpan pasangan data kunci-nilai yang tidak harus memiliki tipe data yang sama.

## Kesimpulan
Tipe data C++ pada program diatas berfungsi untuk membantu programmer dalam mengorganisir data dan mengoptimalkan kinerja program, secara efisien dan akurat.

## Referensi
[1] Meidyan Permata Putri, et al., Algoritma dan Struktur Data. Bandung: Widina Bhakti Persada Bandung, 2022.<br/>
[2] MPutra, Muhammad Taufik D., et al. BELAJAR DASAR PEMROGRAMAN DENGAN C++.Bandung: Edited by Damayanti, Evi, CV WIDINA MEDIA UTAMA, 2022

