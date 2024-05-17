# <h1 align="center">Laporan Praktikum Modul Algoritma Searching</h1>
<p align="center">Azaria Nanda Putri - 2311102147</p>

## Dasar Teori
    
Algortima sequential searching adalah pencarian data semantik menggunakan teknologi array
satu dimensi untuk melakukan proses pencarian tanpa melalui semua elemen array secara berurutan, sehingga
tidak perlu dilakukan pengurutan data terlebih dahulu. Singkatnya Searching adalah proses mencari data dalam sebuah array dengan memeriksa setiap indeks menggunakan teknik perulangan. Ada dua metode dalam algoritma pencarian, yaitu:

### Sequential Search
Sequential Search adalah algoritma pencarian untuk data yang acak atau tidak terurut. Ini adalah teknik paling sederhana, di mana setiap elemen array dibaca satu per satu dari indeks terkecil hingga terbesar, atau sebaliknya. Konsepnya adalah:
- Membandingkan setiap elemen array satu per satu.
- Pencarian dimulai dari indeks pertama hingga terakhir.
- Pencarian berhenti saat data ditemukan. Jika tidak ditemukan hingga akhir array, pencarian berhenti.
- Perulangan terjadi sebanyak jumlah elemen dalam array (N).

Algoritma Sequential Search adalah sebagai berikut:
- i ← 0
- ketemu ← false
-  Selama (tidak ketemu) dan (i < N), lakukan:
-  Jika (Data[i] = x) maka ketemu ← true, jika tidak, i ← i + 1
-  Jika (ketemu) maka i adalah indeks data yang dicari, jika tidak, data tidak ditemukan.

Berikut adalah contoh soal untuk pencarian sekuensial beserta penjelasannya:
#### Int A[6] = {13, 87, 14, 21, 75, 53}
![Screenshot Soal Unguided 1](ssunguided(4).png)

- Misal nilai yang dicari adalah X = 21, maka elemen yang diperiksa adalah 13, 87, 14, 21. (ditemukan)
Jadi indeks larik yang dikembalikan : I = 3
- Misal nilai yang dicari adalah X = 15, maka elemen yang diperiksa adalah 13, 87, 14, 21, 75, 53. (tidak ditemukan)
Jadi indeks larik yang dikembalikan : I = 0

### Binary Search
Binary search adalah algoritma pencarian untuk data terurut. Pencarian dilakukan dengan membandingkan data yang dicari dengan data di tengah. Jika sama, data ditemukan. Jika tidak, pencarian dilanjutkan pada bagian kiri atau kanan dari data tengah, tergantung pada perbandingan antara data yang dicari dengan data tengah. Proses ini diulang hingga data ditemukan atau tidak ada lagi yang bisa diperiksa. Singkatnya Binary Search adalah algoritma pencarian pada array/list dengan elemen terurut. Algoritma ini sering digabungkan dengan algoritma sorting karena data harus diurutkan terlebih dahulu. 

Konsep Binary Search:
- Data diambil dari posisi 1 sampai akhir (N).
- Data dibagi menjadi dua untuk mendapatkan posisi tengah.
- Data yang dicari dibandingkan dengan data di posisi tengah.
  - Jika data yang dicari lebih besar dari data tengah, pencarian dilanjutkan di bagian kanan.
  - Jika data yang dicari lebih kecil, pencarian dilanjutkan di bagian kiri.
- Proses pembagian terus berlanjut hingga data ditemukan atau tidak ada lagi data yang bisa dibagi.
- Jika data sama dengan data tengah, pencarian berhenti karena data ditemukan.

Berikut adalah contoh soal untuk pencarian sekuensial beserta penjelasannya:
#### Int A[6] = {3, 4, 12, 18, 25, 27}
![Screenshot Soal Unguided 1](ssunguided(3).png)

Terdapat sebuah array yang menampung 6 elemen pada gambar di atas. Nilai yang akan dicari pada array tersebut adalah 18.
- Jadi karena konsep dari binary search ini adalah membagi array menjadi dua bagian, maka pertama-tama kita cari nilai tengahnya dulu. Total elemen dibagi 2 yaitu 6/2 = 3.
- Maka elemen ketiga pada array adalah nilai tengahnya, yaitu angka 12 pada indeks ke-2.
- Kemudian kita cek apakah 18 > 12 atau 18 < 12?
- Karena 18 lebih besar dari 12, maka kemungkinan besar angka 18 berada setelah 12 atau di sebelah kanan. Selanjutnya, kita cari ke kanan dan kita dapat mengabaikan elemen yang ada di kiri.
- Setelah itu, kita cari lagi nilai tengahnya di bagian kanan array, yang tersisa adalah [18, 25, 27]. Nilai tengah dari bagian ini adalah 25 pada indeks ke-4.
- Kemudian kita cek apakah 18 > 25 atau 18 < 25?
- Ternyata 18 lebih kecil dari 25, maka selanjutnya kita cari ke kiri bagian ini, yaitu [18].
- Karena tersisa hanya satu elemen saja, maka elemen tersebut adalah nilai tengahnya. Setelah dicek ternyata elemen pada indeks ke-3 adalah elemen yang dicari, maka telah selesai proses pencariannya.

Jadi, nilai 18 ditemukan pada indeks ke-3 dari array. Proses ini menunjukkan bagaimana binary search efisien dalam menemukan nilai dalam array yang terurut.


## Guided 

### 1. Latihan Searching

```C++
#include <iostream>

using namespace std;

int main(){
    int n = 10;
    int data[n] = {9,4,1,7,5,12,4,13,4,10};
    int cari = 10;
    bool ketemu = false;
    int i;

    for (i = 0; i < n; i++){
        if(data[i] == cari){
            ketemu = true;
            break;
        }
    }

    cout << "Program Sequential Search" << endl;
    cout << "data : {9,4,1,7,5,12,4,13,4,10}" << endl;

    if (ketemu){
        cout << "\nAngka " << cari << " ditemukan pada indeks ke-" << i << endl;
    }else{
        cout << "data tidak ditemukan" << endl;
    }

    return 0;
}
```
Program ini adalah implementasi dari algoritma Sequential Search dalam bahasa C++. Sequential Search digunakan untuk mencari suatu nilai dalam sebuah array dengan memeriksa setiap elemen array satu per satu hingga nilai yang dicari ditemukan atau seluruh elemen telah diperiksa.
Berikut adalah penjelasan langkah-langkah dalam program:
- n: ukuran dari array, yaitu 10.
- data: array yang berisi 10 elemen: {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}.
- cari: nilai yang ingin dicari dalam array, yaitu 10.
- ketemu: variabel boolean yang digunakan untuk menandakan apakah nilai yang dicari ditemukan atau tidak, diinisialisasi dengan false.
- i: variabel untuk iterasi.
Program menggunakan loop for untuk memeriksa setiap elemen dalam array data. Jika elemen pada indeks i sama dengan nilai cari, maka ketemu diubah menjadi true dan loop dihentikan menggunakan break. Setelah itu Program akan mencetak pesan "Program Sequential Search" dan isi array.
- Jika nilai cari ditemukan (ketemu bernilai true), program mencetak indeks di mana nilai tersebut ditemukan.
- Jika nilai cari tidak ditemukan, program mencetak pesan bahwa data tidak ditemukan

### 2. Latihan Binary Search

```C++
#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int dataArray[7] = {1, 8, 2, 5, 4, 9, 7};
int cari;

void Selection_Sort(){
    int temp, min, i, j;
    for(i = 0; i < 7; i++){
        min = i;
        for(j = i + 1; j < 7; j++){
            if(dataArray[j] < dataArray[min]){
                min = j;
            }
        }
        temp = dataArray[i];
        dataArray[i] = dataArray[min];
        dataArray[min] = temp;
    }
}

void BinarySearch(){
    int awal, akhir, tengah;
    bool b_flag = false;
    awal = 0;
    akhir = 6;
    while(!b_flag && awal <= akhir){
        tengah = (awal + akhir)/2;
        if(dataArray[tengah] == cari){
            b_flag = true;
        } else if(dataArray[tengah] < cari){
            awal = tengah + 1;
        } else {
            akhir = tengah - 1;
        }
    }
    if(b_flag){
        cout << "\nData ditemukan pada index ke-" << tengah << endl;
    } else {
        cout << "\nData tidak ditemukan" << endl;
    }
}

int main(){
    cout << "BINARY SEARCH" << endl;
    cout << "\nData : ";
    for(int x = 0; x < 7; x++){
        cout << setw(3) << dataArray[x];
    }
    cout << endl;

    cout << "Masukkan data yang ingin dicari : ";
    cin >> cari;
    
    cout << "\nData diurutkan : ";
    Selection_Sort();

    for(int x = 0; x < 7; x++){
        cout << setw(3) << dataArray[x];
    }
    cout << endl;
    BinarySearch();
    _getche();
    return 0;
}
```
Program ini adalah implementasi dari algoritma Binary Search untuk mencari sebuah nilai dalam array yang telah diurutkan menggunakan algoritma Selection Sort.
- Array pada 'dataArray' berisi data yang akan dicari, data ini akan diurutkan menggunakan algoritma Selection Sort sebelum dilakukan pencarian.
- Mengurutkan array dataArray menggunakan algoritma Selection_Sort().
- Melakukan pencarian nilai cari dalam array yang telah diurutkan menggunakan algoritma Binary Search.
- Jika nilai ditemukan, akan menampilkan indeks tempat nilai ditemukan.
- Jika nilai tidak ditemukan, akan menampilkan pesan bahwa nilai tidak ditemukan.
- Menampilkan data awal yang belum diurutkan.
- Meminta input dari pengguna untuk nilai yang dicari.
- Mengurutkan data menggunakan Selection_Sort().
- Menampilkan data yang telah diurutkan.
- Melakukan pencarian menggunakan BinarySearch().
- Menahan tampilan layar dengan _getche() sebelum program selesai. <br/>
Program ini memanfaatkan dua algoritma yang berbeda: Selection Sort untuk mengurutkan data dan Binary Search untuk mencari data. Ini adalah contoh yang baik tentang bagaimana algoritma berbeda dapat digabungkan untuk menyelesaikan masalah tertentu. 

## Unguided 

## 1. Buatlah sebuah program untuk mencari sebuah huruf pada sebuah kalimat yang sudah di input dengan menggunakan Binary Search!

```C++
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
```
Program ini ditulis dalam bahasa C++ dan bertujuan untuk mencari posisi suatu huruf dalam sebuah kalimat yang diinput oleh pengguna. Program ini menggunakan metode pencarian biner (binary search) setelah terlebih dahulu mengurutkan karakter dalam kalimat menggunakan metode selection sort. Berikut adalah deskripsi rinci dari setiap bagian program:

Fungsi Utama pada program yaitu binarySearch_2147 untuk melakukan pencarian biner pada array karakter yang sudah diurutkan, pada binarySearch_2147 juga terdapat fungsi utama yang tidak kalah penting, yaitu:
- arr[]: Array karakter yang akan dicari.
- indices[]: Array yang menyimpan indeks asli dari setiap karakter sebelum diurutkan.
- size: Ukuran dari array arr[].
- target: Karakter yang akan dicari.
- Fungsi ini mengembalikan indeks asli dari target jika ditemukan dalam kalimat. Jika tidak ditemukan, fungsi mengembalikan -1.

Fungsi selectionSort_2147 ini melakukan pengurutan array karakter menggunakan metode selection sort.
- arr[]: Array karakter yang akan diurutkan.
- indices[]: Array yang menyimpan indeks asli dari setiap karakter.
- size: Ukuran dari array arr[]. 
Setelah itu program meminta pengguna memasukkan kalimat, dan program mencetak posisi asli huruf jika ditemukan atau pesan jika tidak ditemukan, serta menunggu input pengguna sebelum berakhir dengan `_getche()`. Jika huruf ditemukan, program mencetak posisi asli dari huruf tersebut dalam kalimat. Jika tidak ditemukan, program mencetak pesan bahwa huruf tidak ditemukan. 

## Output:
![Screenshot Soal Unguided 1](ssunguided(1).png)

## 2. Buatlah sebuah program yang dapat menghitung banyaknya huruf vocal dalam sebuah kalimat!

```C++
#include <iostream>
#include <string>
using namespace std;

// Fungsi untuk memeriksa apakah sebuah karakter adalah vokal
bool isVowel_2147(char ch) {
    // Konversi karakter menjadi huruf kecil
    ch = tolower(ch);
    // Periksa apakah karakter adalah salah satu dari 'a', 'e', 'i', 'o', 'u'
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

// Fungsi untuk menghitung banyaknya huruf vokal dalam sebuah kalimat
int countVowels_2147(const string &sentence) {
    int count = 0;
    for (char ch : sentence) {
        if (isVowel_2147(ch)) {
            count++;
        }
    }
    return count;
}
int main() {
    string sentence;
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, sentence); // Membaca input kalimat dari pengguna

    int vowelCount = countVowels_2147(sentence);
    cout << "Banyaknya huruf vokal dalam kalimat adalah: " << vowelCount << endl;

    return 0;
}
```
Program ini ditulis dalam bahasa C++ untuk menghitung jumlah huruf vokal dalam sebuah kalimat yang diinput oleh pengguna. Program menggunakan
- fungsi isVowel_2147 untuk memeriksa apakah sebuah karakter adalah vokal dengan mengonversinya menjadi huruf kecil dan memeriksa apakah karakter tersebut termasuk dalam 'a', 'e', 'i', 'o', atau 'u'.
- Fungsi countVowels_2147 iterasi melalui setiap karakter dalam kalimat, menggunakan isVowel_2147 untuk menghitung jumlah vokal. 
Setelah itu program meminta pengguna memasukkan kalimat, kemudian menghitung dan menampilkan jumlah huruf vokal dalam kalimat tersebut.

## Output:
![Screenshot Soal Unguided 1](ssunguided(2).png)

##  3. Diketahui data = 9, 4, 1, 4, 7, 10, 5, 4, 12, 4. Hitunglah berapa banyak angka 4 dengan menggunakan algoritma Sequential Search!

```C++
#include <iostream>

using namespace std;

int main(){
    int n = 10;
    int data[n] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int target = 4;
    int count = 0;

    // Melakukan pencarian sequential untuk menghitung banyaknya angka 4
    for (int i = 0; i < n; i++) {
        if (data[i] == target) {
            count++;
        }
    }
    cout << "--Program Sequential Search Azaria Nanda Putri--" << endl;
    cout << "data : {9, 4, 1, 4, 7, 10, 5, 4, 12, 4}" << endl;
    cout << "Angka " << target << " ditemukan sebanyak " << count << " kali." << endl;

return 0;
}
```
Program diatas adalah program sederhana yang ditulis dalam bahasa C++ dan bertujuan untuk menghitung berapa kali angka 4 muncul dalam array data yang telah ditentukan sebelumnya. Dengan menggunakan sequential search, program iterasi melalui seluruh elemen dalam array dan menghitung setiap kemunculan angka 4. Hasilnya kemudian dicetak sebagai output bersama dengan pesan yang menjelaskan berapa kali angka 4 muncul dalam array.

## Ouput
![Screenshot Soal Unguided 1](ssunguided(5).png)

## Kesimpulan
- Algortima Sequential Search adalah metode pencarian data semantik yang menggunakan teknologi array satu dimensi untuk melakukan proses pencarian tanpa perlu melakukan pengurutan data terlebih dahulu. Dalam pencarian ini, setiap elemen array dibaca satu per satu dari indeks terkecil hingga terbesar, atau sebaliknya. Proses berhenti saat data ditemukan atau mencapai akhir array. Algoritma ini sederhana dan cocok untuk data yang acak atau tidak terurut. 

- Sedangkan Binary Search adalah algoritma pencarian yang cocok untuk data terurut. Pencarian dilakukan dengan membandingkan data yang dicari dengan data di tengah, dan prosesnya berlanjut pada bagian kiri atau kanan dari data tengah tergantung pada hasil perbandingan. Binary Search efisien karena membagi data menjadi dua setiap iterasi, namun memerlukan data terurut sebelumnya.

## Referensi
[1] Kartiko Ardi Widodo, Suryo Adi Wibowo, dan Nurlaily Vendyansyah. "PENERAPAN SEQUENTIAL SEARCH UNTUK 
PENGELOLAAN DATA BARANG", Vol. 15 No. 1 Mei 2021, <br/>
[2] Wafiqah Setyawati Wahyuni, Septi Andryana, Ben Rahman. "PENGGUNAAN ALGORITMA SEQUENTIAL SEARCHING PADA 
APLIKASI PERPUSTAKAAN BERBASIS WEB ", JIPI (Jurnal Ilmiah Penelitian dan Pembelajaran Informatika) Volume 07, Nomor 02, Juni 2022.<br/>
[3] Meidyan Permata Putri, et al., Algoritma dan Struktur Data. Bandung: Widina Bhakti Persada Bandung, 2022.<br/>

