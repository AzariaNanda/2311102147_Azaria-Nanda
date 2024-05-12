# <h1 align="center">Laporan Praktikum Modul Queue</h1>
<p align="center">Azaria Nanda Putri - 2311102147</p>

## Dasar Teori
    
Stack adalah seperti tumpukan piring di kafetaria; bayangkan saat Anda menumpuk piring bersih satu per satu. Yang Anda letakkan pertama kali akan berada di dasar, dan yang terakhir akan berada di atas. Ketika seseorang mengambil piring, yang diambil adalah yang teratas, bukan yang ada di bawahnya. Konsep ini, di mana elemen terakhir yang dimasukkan adalah yang pertama dikeluarkan, menjadi dasar dari tumpukan. Jadi, secara sederhana, stack adalah cara penyimpanan data di mana yang terakhir datang adalah yang pertama dilayani, mirip dengan saat Anda menumpuk piring; piring teratas adalah yang akan Anda ambil terlebih dahulu.

Dalam pemrograman C++, stack merupakan salah satu struktur data yang sangat berguna dan seringkali diimplementasikan menggunakan array atau linked list. Bayangkan stack seperti tumpukan buku di meja; setiap kali Anda menambahkan buku baru, itu diletakkan di atas buku-buku yang sudah ada. Operasi utama dalam stack adalah push untuk menambahkan buku baru ke tumpukan dan pop untuk mengambil buku paling atas dari tumpukan. Ada juga operasi lain seperti peek untuk sekadar melihat buku paling atas tanpa mengambilnya, dan isEmpty untuk memeriksa apakah tumpukan kosong atau tidak.

Penerapan stack dalam pemrograman sangat beragam, mulai dari penyelesaian masalah matematika hingga manajemen memori dalam sistem komputer. Karakteristik LIFO (Last In, First Out) membuat stack sangat berguna untuk mempertahankan urutan operasi atau data yang penting dan memudahkan akses ke data terbaru yang dimasukkan. Namun, ada juga dua kondisi yang perlu diwaspadai dalam struktur data stack, yaitu underflow dan overflow, berikut penjelasannya:

- Stack underflow terjadi saat kita mencoba mengambil buku dari tumpukan yang kosong, seperti mencoba mengambil buku dari tumpukan yang tidak memiliki buku sama sekali.
- Stack overflow terjadi saat tumpukan sudah penuh dengan buku namun kita masih mencoba menambahkan buku baru ke dalamnya, seperti mencoba menambahkan buku baru ke tumpukan yang sudah terlalu tinggi untuk menampungnya.
  
![Screenshot Soal Unguided 1](ssunguided(5).png)


#### Jenis- jenis operasi pada Stack:

Operasi pada stack melibatkan serangkaian fungsi yang memberikan kita kemampuan untuk berinteraksi dengan struktur data ini. Mari kita jabarkan beberapa operasi dasar yang dapat kita lakukan pada stack:

 - a. *Push (Masukkan)*: Bayangkan menambahkan satu per satu buku ke tumpukan yang sudah Anda susun. Setiap buku yang Anda tambahkan diletakkan di atas tumpukan, sehingga semakin tinggi tumpukan tersebut.
 - b. *Pop (Keluarkan)*: Sekarang, bayangkan mengambil buku dari atas tumpukan yang telah Anda susun. Ketika Anda mengambil buku, yang Anda ambil adalah buku paling atas, yang paling terlihat.
 - c. *Top (Atas)*: Ketika Anda ingin melihat judul buku teratas di tumpukan tanpa mengganggu susunannya.
 - d. *IsEmpty (Kosong)*: Anda mungkin ingin memeriksa apakah tumpukan buku kosong atau masih ada buku yang tersisa di dalamnya.
 - e. *IsFull (Penuh)*: Namun, jika Anda hanya memiliki sedikit ruang untuk menambahkan buku baru, Anda perlu memeriksa apakah tumpukan sudah penuh atau masih ada ruang kosong
 - f. *Size (Ukuran)*: Ketika Anda ingin tahu berapa banyak buku yang telah Anda susun di tumpukan tersebut.
 - g. *Peek (Lihat)*: Jika Anda ingin melihat buku tertentu di dalam tumpukan tanpa harus mengambilnya dari susunannya.
 - h. *Clear (Hapus Semua)*: Ketika tiba saatnya untuk membersihkan tumpukan, Anda ingin mengosongkan semua buku dari tumpukan.
 - i. *Search (Cari)*: Dan terakhir, jika Anda ingin menemukan apakah buku tertentu ada di dalam tumpukan, Anda bisa mencari dengan cepat.

#### Kelebihan dan kekurangan dalam menggunakan Stack:

##### 1. Kelebihan
- Menggunakan metode LIFO untuk membantu mengelola data dengan mudah dan efektif.
- secara otomatis membersihkan objek  yang tidak lagi diperlukan.
- tidak mudah rusak karena ukuran variabel yang tetap.
- ukuran variabel tidak dapat diubah.
- mengontrol memori secara mandiri.
##### 2. Kekurangan
- memori stack cenderung terbatas.
- ada kemungkinan stack akan meluap atau overflow jika objek terlalu banyak dimasukan.
- tidak dapat mengakses data secara acak, karena harus mengeluarkan tumpukan paling atas terlebih dahulu untuk membuat proses pencarian menjadi lebih terstruktur dan berurutan.


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
Program tersebut merupakan implementasi stack menggunakan array dalam C++. Array arrayBuku dengan ukuran 5 dan variabel maksimal serta top dideklarasikan di awal. Fungsi isFull() digunakan untuk memeriksa keadaan penuhnya stack, sedangkan isEmpty() untuk mengecek apakah stack kosong.
Program juga mengimplementasikan beberapa prosedur. pushArrayBuku() menambahkan elemen ke stack, popArrayBuku() menghapus elemen, dan peekArrayBuku() melihat elemen pada posisi tertentu. Fungsi countStack() menghitung jumlah elemen, dan changeArrayBuku() mengubah elemen pada posisi tertentu. Terakhir, destroyArrayBuku() menghapus semua elemen dari stack. Di dalam fungsi main(), program melakukan operasi-operasi pada stack seperti menambahkan, mencetak, memeriksa keadaan stack, melihat elemen, mengubah elemen, dan menghapus elemen.

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

