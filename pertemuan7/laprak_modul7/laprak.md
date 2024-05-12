# <h1 align="center">Laporan Praktikum Modul Queue</h1>
<p align="center">Azaria Nanda Putri - 2311102147</p>

## Dasar Teori
    
Queue adalah struktur data yang memungkinkan penyimpanan dan pengambilan data dengan prinsip FIFO (First-In First-Out). Artinya, data yang pertama dimasukkan ke dalam queue akan menjadi data yang pertama pula untuk dikeluarkan. Konsep ini serupa dengan antrian pada kehidupan sehari-hari di mana orang yang datang lebih dulu akan dilayani terlebih dahulu. Dalam implementasinya, queue dapat dibangun menggunakan array atau linked list. Struktur data queue memiliki dua pointer utama, yaitu front dan rear. Front mengarah ke elemen pertama dalam queue, sementara rear mengarah ke elemen terakhir.

Perbedaan mendasar antara queue dan struktur data lainnya seperti stack terletak pada aturan penambahan dan penghapusan elemen. Pada stack, penambahan dan penghapusan elemen dilakukan di satu ujung saja. Namun, pada queue, operasi tersebut dilakukan pada ujung yang berbeda karena perubahan data selalu mengacu pada head. Oleh karena itu, hanya terdapat satu jenis operasi untuk menambah atau menghapus elemen, yaitu Enqueue dan Dequeue. Saat Enqueue, elemen ditambahkan setelah elemen terakhir dalam queue. Sedangkan saat Dequeue, head digeser untuk menunjuk pada elemen selanjutnya dalam antrian.

![Screenshot Soal Unguided 1](ssunguided(5).png)


#### Jenis- jenis operasi pada Queue:

Operasi pada Queue melibatkan serangkaian fungsi yang memberikan kita kemampuan untuk berinteraksi dengan struktur data ini. Mari kita jabarkan beberapa operasi dasar yang dapat kita lakukan pada Queue:
1. Berdasarkan Implementasinya
    - Linear/Simple Queue: Elemen-elemen data disusun dalam barisan linear dan penambahan serta penghapusan elemen hanya terjadi pada dua ujung barisan. Contoh Linear Queue:
        ##### Enqueue (Tambahkan Elemen):
        - Elemen pertama: 1
        - Elemen kedua: 2
        - Elemen ketiga: 3
        - Elemen keempat: 4
        - Elemen kelima: 5
        ##### Dequeue (Hapus Elemen):
        - Elemen pertama: 1 (dihapus)
        - Elemen yang tersisa: 2, 3, 4, 5
        ##### Enqueue (Tambahkan Elemen):
        - Elemen pertama: 2 (sebelumnya)
        - Elemen kedua: 6
        - Elemen ketiga: 7
        - Elemen keempat: 8
        - Elemen kelima: 9
        ##### Dequeue (Hapus Elemen):
        - Elemen pertama: 2 (dihapus)
        - Elemen yang tersisa: 3, 4, 5, 6, 7, 8, 9

    - Circular Queue: Mirip dengan jenis linear, tetapi ujung-ujung barisan terhubung satu sama lain, menciptakan struktur antrean yang berputar.
    Contoh Circular Queue:
        ##### Enqueue (Tambahkan Elemen):
        - Elemen pertama: 1
        - Elemen kedua: 2
        - Elemen ketiga: 3
        - Elemen keempat: 4
        - Elemen kelima: 5
        ##### Dequeue (Hapus Elemen):
        - Elemen pertama: 1 (dihapus)
        - Elemen yang tersisa: 2, 3, 4, 5
        ##### Enqueue (Tambahkan Elemen):
        - Elemen pertama: 2 (sebelumnya)
        - Elemen kedua: 6
        - Elemen ketiga: 7
        - Elemen keempat: 8
        - Elemen kelima: 9
        ##### Dequeue (Hapus Elemen):
        - Elemen pertama: 2 (dihapus)
        - Elemen yang tersisa: 3, 4, 5, 6, 7, 8, 9
        ##### Enqueue (Tambahkan Elemen):
        - Elemen pertama: 3 (sebelumnya)
        - Elemen kedua: 10
        - Elemen ketiga: 11
        - Elemen keempat: 12
        - Elemen kelima: 13
        ##### Dequeue (Hapus Elemen):
        - Elemen pertama: 3 (dihapus)
        - Elemen yang tersisa: 4, 5, 6, 7, 8, 9, 10, 11, 12, 13

2. Berdasarkan Penggunaan
    - Priority Queue: Setiap elemen memiliki prioritas tertentu. Elemen dengan prioritas tertinggi akan diambil terlebih dahulu.Elemen dengan prioritas rendah akan dihapus setelah elemen dengan prioritas tinggi.
    Contoh Priority Queue:
        ##### Enqueue (Tambahkan Elemen):
        - Elemen pertama: 1 (prioritas tinggi)
        - Elemen kedua: 3 (prioritas sedang)
        - Elemen ketiga: 2 (prioritas rendah)
        - Elemen keempat: 4 (prioritas tinggi)
        - Elemen kelima: 5 (prioritas rendah)
        ##### Dequeue (Hapus Elemen):
        - Elemen pertama: 1 (dihapus prioritas tinggi)
        - Elemen yang tersisa: 3, 2, 4, 5

    - Double-ended Queue (Dequeue): Elemen dapat ditambahkan atau dihapus dari kedua ujung antrean
    Contoh Double Ended Queue (Dequeue):
        ##### Enqueue (Tambahkan Elemen):
        - Elemen pertama: 1
        - Elemen kedua: 2
        - Elemen ketiga: 3
        - Elemen keempat: 4
        - Elemen kelima: 5
        ##### Dequeue (Hapus Elemen):
        - Elemen pertama: 1 (dihapus urutan paling depan)
        - Elemen yang tersisa: 2, 3, 4, 5
        ##### Dequeue (Hapus Elemen):
        - Elemen pertama: 5 (dihapus urutan paling ujung belakang)
        - Elemen yang tersisa: 2, 3, 4.

#### Prosedur Operasi pada Queue:
 - enqueue() :menambahkan data kedalam queue.
 - dequeue() :mengeluarkan data dari queue.
 - peek()    :mengambil data dari queue tanpa menghapusnya.
 - isEmpty() :mengecek apakah queue kosong atau tidak.
 - isFull()  :mengecek apakah queue penuh atau tidak.
 - size()    :menghitung jumlah elemen dalam queue.

![Screenshot Soal Unguided 1](ssunguided(4).png)

Berikut penjelasan prosedur penggunaan Queue dari contoh gambar di atas:
- Antrian datang secara berurutan A, B dan C yang kemudian dimasukan ke dalam baris antrian. Urutan data masuk melalui bagian rear antrian.
- Setelah A dilayani, maka A akan keluar dari bagian Front baris antrian.
- Kemudian ada antrian baru yang masuk yaitu D dan E secara berurutan masuk melalui bagian rear lagi. Dan seterusnya

## Guided 

### 1. Latihan Queue

```C++
#include <iostream>
using namespace std;

const int maksimalAntarian = 5;
int front = 0;
int back = 0;
string queueTeller[5];

//mengecek antrian apakah sudah penuh
bool isFULL() {
    if(back == maksimalAntarian) {
        return true;
    }
    else {
        return false;
    }
}

//mengecek antrian apakah masih kosong 
bool isEmpty() {
    if(back == 0) {
        return true;
    }
    else {
        return false;
    }
}

//menambah antrian
void tambahData(string nama) {
    if(isFULL()) {
        cout << "Antrian sudah penuh." << endl;
    }
    else {
        if(isEmpty()) {
            queueTeller[0] = nama;
            front++;
            back++;
        }
        else {
            queueTeller[back] = nama;
            back++;

        }
    }
}

//mengurangi antrian
void kurangAntrian() {
    if(isEmpty()) {
        cout << "Antrian kosong" << endl;
    }
    else {
        for(int i = 0; i < back; i++) {
            queueTeller[i] =queueTeller[i+1];
        }
        back--;
    }
}

//menghintung banyak antrian
int count() {
    return back;
}

//menghapus seluruh antrian
void clearQueue() {
    if(isEmpty()) {
        cout << "Antrian kosong" << endl;
    }
    else {
        for(int i = 0; i < back; i++) {
            queueTeller[i] = "";
        }
        back = 0;
        front = 0;
    }
}

//melihat antrian
void viewQueue() {
    cout << "Data antrian: " << endl;
    for(int i = 0; i < maksimalAntarian; i++) {
        if(queueTeller[i] != "") {
            cout << i+1 << ". " << queueTeller[i] << endl;
        }
        else {
            cout << i+1 << ". " << "(kosong)" << endl;
        }
    }
}

//main
int main() {
    tambahData("anjing");
    viewQueue();
}
```
Program ini merupakan implementasi antrian menggunakan array dalam bahasa pemrograman C++. Array queueTeller dengan ukuran 5, serta variabel front dan back, digunakan untuk menyimpan data antrian. 
- Fungsi isFULL() digunakan untuk memeriksa apakah antrian sudah penuh, dengan cara mengecek apakah back sudah mencapai batas maksimum antrian.
- Fungsi isEmpty() digunakan untuk mengecek apakah antrian masih kosong, dengan cara mengecek apakah back bernilai 0.
- Prosedur tambahData(string nama) digunakan untuk menambahkan data ke dalam antrian. Jika antrian sudah penuh, program akan menampilkan pesan bahwa antrian sudah penuh. Jika antrian masih kosong, data akan ditambahkan di posisi awal antrian dan nilai front dan back akan diubah. Jika antrian tidak kosong, data akan ditambahkan di posisi belakang antrian.
- Prosedur kurangAntrian() digunakan untuk mengurangi data dari antrian. Jika antrian kosong, program akan menampilkan pesan bahwa antrian kosong. Jika tidak, data akan digeser ke atas untuk mengisi posisi yang dihapus.
- Fungsi count() digunakan untuk menghitung jumlah data dalam antrian.
- Prosedur clearQueue() digunakan untuk menghapus seluruh data dalam antrian dengan mengosongkan array dan mengembalikan nilai front dan back ke nilai awal.
- Prosedur viewQueue() digunakan untuk menampilkan data dalam antrian beserta nomor antriannya.
- Di dalam fungsi main(), terdapat contoh penggunaan dengan menambahkan data "anjing" ke dalam antrian dan menampilkan data antrian menggunakan fungsi viewQueue().

## Unguided 

## 1. Buatlah program untuk menentukan apakah kalimat tersebut yang diinputkan dalam program stack adalah palindrom/tidak. Palindrom kalimat yang dibaca dari depan dan belakang sama. Jelaskan bagaimana cara kerja programnya!
 ![Screenshot Soal Unguided 1](ssunguided(1).png)


```C++
#include <iostream>
#include <string>
#include <stack>

using namespace std;

string bersihkan_dan_ubah_ke_huruf_kecil_2147(string str) {
    string cleanStr;
    for (char &c : str) {
        if (isalpha(c)) {
            cleanStr += tolower(c);
        }
    }
    return cleanStr;
}

bool Palindrom_2147(string str) {
    stack<char> charStack;
    int length = str.length();

    for (int i = 0; i < length / 2; i++) {
        charStack.push(str[i]);
    }

    int start = length / 2;
    if (length % 2 != 0) {
        start++;
    }
    for (int i = start; i < length; i++) {
        if (charStack.empty() || str[i] != charStack.top()) {
            return false;
        }
        charStack.pop();
    }

    return true;
}

int main() {
    char lanjutkan_2147;
    do {
        string input;
        cout << "\nMasukkan kata atau kalimat: ";
        getline(cin, input);

        string membersihkan_input_2147 = bersihkan_dan_ubah_ke_huruf_kecil_2147(input);

        if (Palindrom_2147(membersihkan_input_2147)) {
            cout << "Kata atau kalimat tersebut adalah : Palindrom" << endl;
        } else {
            cout << "Kata atau kalimat tersebut adalah : Bukan Palindrom" << endl;
        }

        cout << "Ingin memasukkan kata atau kalimat lain? (y/n): ";
        cin >> lanjutkan_2147;
        cin.ignore();
    } while (lanjutkan_2147 == 'y' || lanjutkan_2147 == 'Y');

    return 0;
}
```

Program ini berfungsi untuk memeriksa apakah suatu teks merupakan palindrom, yaitu jika urutan hurufnya sama baik dari depan maupun belakang, seperti "level" atau "radar".
Menggunakan dua fungsi utama: bersihkan_dan_ubah_ke_huruf_kecil_2147 membersihkan input dari karakter non-alfabet dan mengubah huruf menjadi kecil, memastikan pemrosesan yang akurat. 
Palindrom_2147 menggunakan stack untuk membandingkan setengah pertama teks dengan setengah kedua secara terbalik. Dalam main, pengguna diminta input, program membersihkannya, lalu memeriksa apakah palindrom. Hasilnya ditampilkan, dan pengguna diberi opsi untuk input baru atau keluar.

## Output:
![Screenshot Soal Unguided 1](ssunguided(3).png)

## 2. Buatlah program untuk melakukan pembalikan terhadap kalimat menggunakan stack dengan minimal 3 kata. Jelaskan output program dan source codenya beserta operasi/fungsi yang dibuat?
 
 ![Screenshot Soal Unguided 1](ssunguided(2).png)

```C++
#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

string bersihkan_Dan_Kecilkan_Hurufnya_2147(string str) {
    string cleanStr;
    for (char &c : str) {
        if (isalpha(c)) {
            cleanStr += tolower(c);
        }
    }
    return cleanStr;
}

string balik_Kalimat_2147(string kalimat) {
    stack<char> tumpukanKarakter;
    string kalimat_Terbalik_2147;

    kalimat = bersihkan_Dan_Kecilkan_Hurufnya_2147(kalimat);

    for (char c : kalimat) {
        if (c != ' ') {
            tumpukanKarakter.push(c);
        } else {
            while (!tumpukanKarakter.empty()) {
                kalimat_Terbalik_2147 += tumpukanKarakter.top();
                tumpukanKarakter.pop();
            }
            kalimat_Terbalik_2147 += ' ';
        }
    }

    while (!tumpukanKarakter.empty()) {
        kalimat_Terbalik_2147 += tumpukanKarakter.top();
        tumpukanKarakter.pop();
    }

    return kalimat_Terbalik_2147;
}

int main() {
    string kalimat_2147;
    char lanjutkan_2147;

    do {
        cout << "\nMasukkan kata atau kalimat (minimal 3 kata): ";
        getline(cin, kalimat_2147);

        int jumlah_Spasi_2147 = count(kalimat_2147.begin(), kalimat_2147.end(), ' ');
        int jumlah_Kata_2147 = jumlah_Spasi_2147 + 1;

        if (jumlah_Kata_2147 < 3) {
            cout << "Masukkan minimal 3 kata!" << endl;
        } else {
            string kalimatTerbalik = balik_Kalimat_2147(kalimat_2147);
            cout << "Kalimat Terbalik: " << kalimatTerbalik << endl; 
        }

        cout << "Apakah ingin memasukkan kata atau kalimat lagi? (y/n): ";
        cin >> lanjutkan_2147;
        cin.ignore();
    } while (lanjutkan_2147 == 'y' || lanjutkan_2147 == 'Y');

    return 0;
}
```
Program ini bertujuan untuk membalikkan urutan setiap kata dalam sebuah kalimat yang dimasukkan oleh pengguna. Menggunakan dua fungsi utama: 
-bersihkan_Dan_Kecilkan_Hurufnya_2147 membersihkan kalimat dari karakter non-alfabet dan mengonversinya menjadi huruf kecil untuk memastikan konsistensi dalam pemrosesan
-balik_Kalimat_2147 menggunakan struktur data stack untuk membalikkan urutan setiap kata dalam kalimat, menghasilkan kalimat yang terbalik. 
Dalam fungsi main, pengguna diminta untuk memasukkan sebuah kalimat dengan minimal tiga kata. Program akan memeriksa jumlah kata dalam kalimat dan melakukan pembalikan jika syarat terpenuhi. Hasilnya akan ditampilkan, dan pengguna diberi opsi untuk memasukkan kalimat baru atau keluar dari program.

## Output:
![Screenshot Soal Unguided 1](ssunguided(4).png)


## Kesimpulan

Stack adalah struktur data yang mirip dengan menumpuk piring di kafetaria, di mana elemen terakhir yang ditambahkan menjadi yang pertama dikeluarkan, mengikuti konsep LIFO (Last In, First Out). Dalam implementasi C++, stack sering digunakan untuk menyimpan dan mengelola data dengan operasi dasar seperti push untuk menambahkan data, pop untuk mengeluarkan data, dan peek untuk melihat data teratas tanpa mengeluarkannya. Meskipun memiliki kelebihan seperti kemudahan penggunaan dan otomatisasi dalam penghapusan objek yang tidak diperlukan, stack juga memiliki keterbatasan, seperti kapasitas memori yang terbatas dan ketidakmampuan untuk mengakses data secara acak. Namun, dengan pemahaman yang baik tentang konsep dan penggunaannya, stack tetap menjadi alat yang sangat berguna dalam pengembangan perangkat lunak.

## Referensi
[1] Rafsanjani, Malik Akbar Hashemi. "Implementasi Algoritma Pengurutan General Purpose dan Berbasis Komparasi untuk Data Berkategori dalam Waktu Linier Tanpa Paralelisasi", 2021.<br/>
[2] Muhammad Nugraha, Dasar Pemrograman Dengan C++, Materi Paling Dasar untuk Menjadi Programmer Berbagai Platform. Yogyakarta: Deepublish, 2021.<br/>

