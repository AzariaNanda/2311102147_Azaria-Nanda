# <h1 align="center">Laporan Praktikum Modul Stack</h1>
<p align="center">Azaria Nanda Putri - 2311102147</p>

## Dasar Teori
    
Stack adalah seperti tumpukan piring di kafetaria; bayangkan saat Anda menumpuk piring bersih satu per satu. Yang Anda letakkan pertama kali akan berada di dasar, dan yang terakhir akan berada di atas. Ketika seseorang mengambil piring, yang diambil adalah yang teratas, bukan yang ada di bawahnya. Konsep ini, di mana elemen terakhir yang dimasukkan adalah yang pertama dikeluarkan, menjadi dasar dari tumpukan. Jadi, secara sederhana, stack adalah cara penyimpanan data di mana yang terakhir datang adalah yang pertama dilayani, mirip dengan saat Anda menumpuk piring; piring teratas adalah yang akan Anda ambil terlebih dahulu.

Dalam pemrograman C++, stack merupakan salah satu struktur data yang sangat berguna dan seringkali diimplementasikan menggunakan array atau linked list. Bayangkan stack seperti tumpukan buku di meja; setiap kali Anda menambahkan buku baru, itu diletakkan di atas buku-buku yang sudah ada. Operasi utama dalam stack adalah push untuk menambahkan buku baru ke tumpukan dan pop untuk mengambil buku paling atas dari tumpukan. Ada juga operasi lain seperti peek untuk sekadar melihat buku paling atas tanpa mengambilnya, dan isEmpty untuk memeriksa apakah tumpukan kosong atau tidak.

Penerapan stack dalam pemrograman sangat beragam, mulai dari penyelesaian masalah matematika hingga manajemen memori dalam sistem komputer. Karakteristik LIFO (Last In, First Out) membuat stack sangat berguna untuk mempertahankan urutan operasi atau data yang penting dan memudahkan akses ke data terbaru yang dimasukkan. Namun, ada juga dua kondisi yang perlu diwaspadai dalam struktur data stack, yaitu underflow dan overflow, berikut penjelasannya:

- Stack underflow terjadi saat kita mencoba mengambil buku dari tumpukan yang kosong, seperti mencoba mengambil buku dari tumpukan yang tidak memiliki buku sama sekali.
- Stack overflow terjadi saat tumpukan sudah penuh dengan buku namun kita masih mencoba menambahkan buku baru ke dalamnya, seperti mencoba menambahkan buku baru ke tumpukan yang sudah terlalu tinggi untuk menampungnya.
  
![Screenshot Soal Unguided 1](ssunguided(5).png)


#### Kelebihan dan kekurangan dalam menggunakan Stack:


![Screenshot Soal Unguided 1](ssunguided(5).png)



![Screenshot Soal Unguided 1](ssdasarteori(2).png) 

## Guided 

### 1. Latihan Stack

```C++
#include<iostream>

using namespace std;

string arrayBuku[5];
int maksimal = 5, top = 0;

bool isFull(){
    return (top == maksimal);
}

bool isEmpty(){
    return (top == 0);
}

void pushArrayBuku(string data){
    if(isFull()){
        cout << "Data telah penuh" << endl;
    } else {
        arrayBuku[top] = data;
        top++;
    }
}

void popArrayBuku(){
    if(isEmpty()){
        cout << "tidak ada data yang dihapus" << endl;
    } else {
        arrayBuku[top - 1] = "";
        top--;
    }
}

void peekArrayBuku(int posisi){
    if(isEmpty()){
        cout << "tidak ada data yang bisa dilihat" << endl;
    } else {
        int index = top;
        for(int i = 1; i <= posisi; i++){
            index--;
        }
        cout << "Posisi ke-" << posisi << " adalah " << arrayBuku[index] << endl;
    }
}

int countStack(){
    return top;
}

void changeArrayBuku(int posisi, string data){
    if(posisi > top){
        cout << "Posisi melebihi data yang ada" << endl;
    } else {
        int index = top;
        for(int i = 1; i <= posisi; i++){
            index--;
        }
        arrayBuku[index] = data;
    }
}

void destroyArrayBuku(){
    for(int i = top; i >= 0; i--){
        arrayBuku[i] = "";
    }
    top = 0;
}

void cetakArrayBuku(){
    if(isEmpty()){
        cout << "tidak ada data yang bisa dicetak" << endl;
    } else {
        for (int i = top - 1; i >= 0; i--){
            cout << arrayBuku[i] << endl;
        }
    }
}

int main(){
    pushArrayBuku("Kalkulus");
    pushArrayBuku("Struktur Data");
    pushArrayBuku("Matematika Diskrit");
    pushArrayBuku("Dasar Multimedia");
    pushArrayBuku("Inggris");

    cetakArrayBuku();
    cout << "\n";

    cout << "Apakah data stack penuh? " << isFull() << endl;

    cout << "Apakah data stack kosong? " << isEmpty() << endl;
    cout << "\n";

    peekArrayBuku(2);

    popArrayBuku();
    cout << "\n";

    cout << "Banyaknya data = " << countStack() << endl;

    changeArrayBuku(2, "Bahasa Jerman");

    cetakArrayBuku();
    cout << "\n";

    destroyArrayBuku();

    cout << "Jumlah data setelah dihapus = " << countStack() << endl;

    cetakArrayBuku();

    return 0;
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

Hash table adalah struktur data yang memungkinkan penyimpanan dan akses data dengan efisiensi tinggi. Kelebihannya meliputi efisiensi waktu operasi seperti insert, delete, dan search yang cepat dengan waktu rata-rata O(1). Selain itu, hash table ideal untuk data dengan frekuensi operasi yang tinggi dan menggunakan algoritma hashing untuk mempercepat pencarian data. Selain efisien dalam penggunaan memori, hash table juga memiliki teknik-teknik seperti open hashing, separate chaining, dan closed hashing untuk mengurangi kemungkinan collision dalam penyimpanan data.

## Referensi
[1] Hussain Anwar," Cara Jitu Mahir C++ untuk Pemula". Jakarta: Elex media, 2020.<br/>
[2] Mulyana, A. (2023). E-Books Cara Mudah Mempelajari Algoritma dan Struktur Data.
[3] Rafsanjani, Malik Akbar Hashemi. "Implementasi Algoritma Pengurutan General Purpose dan Berbasis Komparasi untuk Data Berkategori dalam Waktu Linier Tanpa Paralelisasi" (2021).<br/>
[4] Nugraha, Muhammad. "Dasar Pemrograman Dengan C++, Materi Paling Dasar untuk Menjadi Programmer Berbagai Platform" (2021)<br/>
[5] Prof. Galih Satria. "Struktur data dan Algoritma pemrograman dalam C++ dan Phyton". Jakarta: Elex media (2019)<br/>

