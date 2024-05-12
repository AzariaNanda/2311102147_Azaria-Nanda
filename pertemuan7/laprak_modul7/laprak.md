# <h1 align="center">Laporan Praktikum Modul Queue</h1>
<p align="center">Azaria Nanda Putri - 2311102147</p>

## Dasar Teori
    
Queue adalah struktur data yang memungkinkan penyimpanan dan pengambilan data dengan prinsip FIFO (First-In First-Out). Artinya, data yang pertama dimasukkan ke dalam queue akan menjadi data yang pertama pula untuk dikeluarkan. Konsep ini serupa dengan antrian pada kehidupan sehari-hari di mana orang yang datang lebih dulu akan dilayani terlebih dahulu. Dalam implementasinya, queue dapat dibangun menggunakan array atau linked list. Struktur data queue memiliki dua pointer utama, yaitu front dan rear. Front mengarah ke elemen pertama dalam queue, sementara rear mengarah ke elemen terakhir.

Perbedaan mendasar antara queue dan struktur data lainnya seperti stack terletak pada aturan penambahan dan penghapusan elemen. Pada stack, penambahan dan penghapusan elemen dilakukan di satu ujung saja. Namun, pada queue, operasi tersebut dilakukan pada ujung yang berbeda karena perubahan data selalu mengacu pada head. Oleh karena itu, hanya terdapat satu jenis operasi untuk menambah atau menghapus elemen, yaitu Enqueue dan Dequeue. Saat Enqueue, elemen ditambahkan setelah elemen terakhir dalam queue. Sedangkan saat Dequeue, head digeser untuk menunjuk pada elemen selanjutnya dalam antrian.

![Screenshot Soal Unguided 1](ssunguided(4).png)


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

![Screenshot Soal Unguided 1](ssunguided(3).png)

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

## 1. Ubahlah penerapan konsep queue pada bagian guided dari array menjadi linked list.

```C++
#include <iostream>

using namespace std;

const int maksimalQueue = 5;  // Maksimal antrian adalah 5

// Node untuk menyimpan data dan pointer ke node berikutnya
struct Node {
    string data;
    Node* next;
};

class Queue {
private:
    Node* front; // Node depan dari antrian
    Node* rear;  // Node belakang dari antrian

public: 
    Queue() { // Konstruktor untuk menginisialisasi antrian kosong
        front = nullptr;
        rear = nullptr;
    }

    // Fungsi untuk menambahkan data ke antrian
    void enqueue_2147(const string& data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = nullptr;
        
        // Jika antrian kosong
        if (isEmpty_2147()) { // Jika antrian kosong maka front dan rear menunjuk ke newNode yang baru dibuat 
            front = rear = newNode;
        } else { // Jika antrian tidak kosong maka rear menunjuk ke newNode yang baru dibuat
            rear->next = newNode;
            rear = newNode;
        }
        
        cout << data << " ditambahkan ke dalam antrian." << endl;
    }

    // Fungsi untuk menghapus data dari antrian
    void dequeue_2147() {
        if (isEmpty_2147()) { // Jika antrian kosong maka tampilkan pesan "Antrian kosong" dan kembalikan nilai void
            cout << "Antrian kosong." << endl;
            return;
        }

        Node* temp = front; // Simpan node front ke dalam variabel temp untuk dihapus nantinya 
        front = front->next; // Geser front ke node selanjutnya 

        cout << temp->data << " dihapus dari antrian." << endl; // Tampilkan data yang dihapus dari antrian 
        delete temp; // Hapus node yang disimpan di variabel temp

        // Jika setelah penghapusan antrian menjadi kosong
        if (front == nullptr) {
            rear = nullptr;
        }
    }

    // Fungsi untuk menampilkan seluruh antrian
    void displayQueue_2147() {
        if (isEmpty_2147()) { // Jika antrian kosong maka tampilkan pesan "Data antrian:" dan tampilkan pesan "(kosong)"
            cout << "2147-Data antrian-2147:" << endl;
            for (int i = 0; i < maksimalQueue; i++) {
                cout << i + 1 << ". (kosong)" << endl;
            }
        } else { // Jika antrian tidak kosong maka tampilkan data antrian yang ada
            cout << "2147-Data antrian-2147:" << endl;
            Node* current = front;
            int i = 1;
            while (current != nullptr) { // Selama current tidak menunjuk ke nullptr maka tampilkan data antrian yang ada 
                cout << i << ". " << current->data << endl;
                current = current->next;
                i++;
            }
            for (; i <= maksimalQueue; i++) { // Tampilkan pesan "(kosong)" untuk antrian yang kosong 
                cout << i << ". (kosong)" << endl;
            }
        }
    }

    // Fungsi untuk memeriksa apakah antrian kosong
    bool isEmpty_2147() {
        return front == nullptr;
    }

    // Fungsi untuk mengembalikan jumlah elemen dalam antrian
    int countQueue_2147() {
        int count = 0;
        Node* current = front;
        while (current != nullptr) { // Selama current tidak menunjuk ke nullptr maka hitung jumlah elemen dalam antrian
            count++;
            current = current->next;
        }
        return count; // Kembalikan jumlah elemen dalam antrian
    }

    // Fungsi untuk menghapus semua elemen dalam antrian
    void clearQueue() {
        while (!isEmpty_2147()) { // Selama antrian tidak kosong maka hapus elemen dalam antrian
            dequeue_2147(); // Hapus elemen dalam antrian 
        } 
        cout << "Antrian telah dibersihkan." << endl;
    }
};

int main() {
    Queue queue; // Buat objek queue dari class Queue
    queue.enqueue_2147("Andi");
    queue.enqueue_2147("Maya");
    queue.displayQueue_2147();
    cout << "Jumlah antrian = " << queue.countQueue_2147() << endl;
    queue.dequeue_2147();
    queue.displayQueue_2147();
    cout << "Jumlah antrian = " << queue.countQueue_2147() << endl;
    queue.dequeue_2147();
    queue.displayQueue_2147();
    cout << "Jumlah antrian = " << queue.countQueue_2147() << endl;

    return 0;
}
```
Program di atas adalah implementasi dari struktur data antrian (queue) menggunakan linked list dalam bahasa pemrograman C++. Dalam program tersebut, digunakan struktur data linked list untuk menyimpan elemen-elemen antrian, di mana setiap elemen direpresentasikan oleh sebuah node yang memiliki dua atribut: data untuk menyimpan nilai data dan next untuk menunjukkan ke node berikutnya dalam antrian.
Kelas Queue memiliki beberapa fungsi untuk operasi dasar pada code antrian diatas:
- Fungsi enqueue_2147(const string& data): Digunakan untuk menambahkan data baru ke dalam antrian. Fungsi ini membuat sebuah node baru, menginisialisasi nilai datanya dengan data yang diberikan, dan menambahkan node tersebut ke belakang antrian. Jika antrian kosong, node tersebut akan menjadi elemen pertama dalam antrian.
- Fungsi dequeue_2147(): Digunakan untuk menghapus elemen pertama dari antrian. Fungsi ini menghapus node pertama dari antrian, mengubah pointer front untuk menunjuk ke node berikutnya (jika ada), dan menghapus node yang dihapus dari memori.
- Fungsi displayQueue_2147(): Digunakan untuk menampilkan seluruh elemen dalam antrian. Fungsi ini mengiterasi melalui setiap node dalam antrian, mulai dari node pertama hingga terakhir, dan menampilkan nilai data dari setiap node.
- Fungsi isEmpty_2147(): Digunakan untuk memeriksa apakah antrian kosong. Fungsi ini mengembalikan nilai true jika front menunjuk ke nullptr, yang menandakan bahwa antrian kosong.
- Fungsi countQueue_2147(): Digunakan untuk mengembalikan jumlah elemen dalam antrian. Fungsi ini menghitung jumlah node dalam antrian dengan mengiterasi melalui setiap node dan menghitungnya.
- Fungsi clearQueue(): Digunakan untuk menghapus semua elemen dari antrian. Fungsi ini menghapus satu per satu elemen dari antrian sampai antrian menjadi kosong. Di dalam fungsi main(), terdapat contoh penggunaan objek dari kelas Queue. Beberapa data ditambahkan ke dalam antrian menggunakan fungsi enqueue_2147(), kemudian antrian ditampilkan menggunakan fungsi displayQueue_2147(). Setelah itu, elemen pertama dari antrian dihapus menggunakan fungsi dequeue_2147(), dan kemudian antrian ditampilkan kembali. Proses ini diulang untuk menghapus elemen kedua dari antrian, dan kemudian menampilkan hasilnya.

## Output:
![Screenshot Soal Unguided 1](ssunguided(1).png)

## 2. Dari nomor 1 buatlah konsep antri dengan atribut Nama mahasiswa dan NIM Mahasiswa.

```C++
#include <iostream>
#include <string>

using namespace std;

const int maksimalQueue = 5;  // Maksimal antrian adalah 5

// Node untuk menyimpan data dan pointer ke node berikutnya
struct Node {
    string nama;
    string nim;
    Node* next;
};

class Queue {
private:
    Node* front; // Node depan dari antrian
    Node* rear;  // Node belakang dari antrian

public: 
    Queue() { // Konstruktor untuk menginisialisasi antrian kosong
        front = nullptr;
        rear = nullptr;
    }

    // Fungsi untuk menambahkan data ke antrian
    void enqueue_2147(const string& nama, const string& nim) {
        Node* newNode = new Node;
        newNode->nama = nama;
        newNode->nim = nim;
        newNode->next = nullptr;
        
        // Jika antrian kosong
        if (isEmpty_2147()) { // Jika antrian kosong maka front dan rear menunjuk ke newNode yang baru dibuat 
            front = rear = newNode;
        } else { // Jika antrian tidak kosong maka rear menunjuk ke newNode yang baru dibuat
            rear->next = newNode;
            rear = newNode;
        }
        
        cout << "Mahasiswa dengan Nama: " << newNode->nama << " dan NIM: " << newNode->nim << " ditambahkan ke dalam antrian." << endl;
    }

    // Fungsi untuk menghapus data dari antrian
    void dequeue_2147() {
        if (isEmpty_2147()) { // Jika antrian kosong maka tampilkan pesan "Antrian kosong" dan kembalikan nilai void
            cout << "Antrian kosong." << endl;
            return;
        }

        Node* temp = front; // Simpan node front ke dalam variabel temp untuk dihapus nantinya 
        front = front->next; // Geser front ke node selanjutnya 

        cout << "Mahasiswa dengan Nama: " << temp->nama << " dan NIM: " << temp->nim << " dihapus dari antrian." << endl; // Tampilkan data mahasiswa yang dihapus dari antrian 
        delete temp; // Hapus node yang disimpan di variabel temp

        // Jika setelah penghapusan antrian menjadi kosong
        if (front == nullptr) {
            rear = nullptr;
        }
    }

    // Fungsi untuk menampilkan seluruh antrian
    void displayQueue_2147() {
        if (isEmpty_2147()) { // Jika antrian kosong maka tampilkan pesan "Data antrian:" dan tampilkan pesan "(kosong)"
            cout << "Data antrian:" << endl;
            for (int i = 0; i < maksimalQueue; i++) {
                cout << i + 1 << ". (kosong)" << endl;
            }
        } else { // Jika antrian tidak kosong maka tampilkan data antrian yang ada
            cout << "Data antrian:" << endl;
            Node* current = front;
            int i = 1;
            while (current != nullptr) { // Selama current tidak menunjuk ke nullptr maka tampilkan data antrian yang ada 
                cout << i << ". " << "Nama: " << current->nama << ", NIM: " << current->nim << endl;
                current = current->next;
                i++;
            }
            for (; i <= maksimalQueue; i++) { // Tampilkan pesan "(kosong)" untuk antrian yang kosong 
                cout << i << ". (kosong)" << endl;
            }
        }
    }

    // Fungsi untuk memeriksa apakah antrian kosong
    bool isEmpty_2147() {
        return front == nullptr;
    }

    // Fungsi untuk mengembalikan jumlah elemen dalam antrian
    int countQueue_2147() {
        int count = 0;
        Node* current = front;
        while (current != nullptr) { 
            count++;
            current = current->next;
        }
        return count; // Kembalikan jumlah elemen dalam antrian
    }

    // Fungsi untuk menghapus semua elemen dalam antrian
    void clearQueue() {
        while (!isEmpty_2147()) { // Selama antrian tidak kosong maka hapus elemen dalam antrian
            dequeue_2147(); // Hapus elemen dalam antrian 
        } 
        cout << "Antrian telah dibersihkan." << endl;
    }
};

int main() {
    Queue queue; // Buat objek queue dari class Queue
    queue.enqueue_2147("Albert", "2311102147");
    queue.enqueue_2147("Nanda", "2311102101");
    queue.displayQueue_2147();
    cout << "Jumlah antrian = " << queue.countQueue_2147() << endl;
    queue.dequeue_2147();
    queue.displayQueue_2147();
    cout << "Jumlah antrian = " << queue.countQueue_2147() << endl;
    queue.dequeue_2147();
    queue.displayQueue_2147();
    cout << "Jumlah antrian = " << queue.countQueue_2147() << endl;

    return 0;
}
```
Program di atas adalah implementasi dari sebuah antrian (queue) menggunakan linked list dalam bahasa C++. Antrian ini dirancang untuk menyimpan data mahasiswa beserta NIM mereka. Struktur data Node digunakan untuk menyimpan informasi tentang setiap mahasiswa, yaitu nama dan NIM, serta pointer ke node berikutnya dalam antrian. Kelas Queue memiliki fungsi-fungsi untuk operasi dasar pada antrian sepert:
 - menambahkan data ke antrian (enqueue_2147())
 - menghapus data dari antrian (dequeue_2147())
 - menampilkan seluruh antrian (displayQueue_2147())
 - memeriksa apakah antrian kosong (isEmpty_2147())
 - menghitung jumlah elemen dalam antrian (countQueue_2147())
 - membersihkan semua elemen dalam antrian (clearQueue())
 
  Di dalam fungsi main(), program membuat objek dari kelas Queue dan menambahkan dua mahasiswa ke dalam antrian dengan menggunakan fungsi enqueue_2147() dengan menyertakan nama dan NIM mereka. Kemudian, program menampilkan seluruh antrian dan jumlah elemen dalam antrian. Setelah itu, program menghapus satu mahasiswa dari antrian dengan menggunakan fungsi dequeue_2147() dan menampilkan kembali antrian beserta jumlah elemennya. Langkah ini diulang untuk menghapus mahasiswa kedua dari antrian.

## Output:
![Screenshot Soal Unguided 1](ssunguided(2).png)

## Kesimpulan

Queue adalah struktur data yang mengatur penyimpanan dan pengambilan data dengan prinsip FIFO (First-In First-Out), yang berarti data yang pertama dimasukkan akan menjadi yang pertama dikeluarkan. Implementasinya dapat menggunakan array atau linked list, dengan dua pointer utama, yaitu front dan rear. Berbeda dengan struktur data lain seperti stack, penambahan dan penghapusan elemen dalam queue terjadi pada ujung yang berbeda, yaitu front untuk Dequeue dan rear untuk Enqueue. 

Ada beberapa jenis operasi queue, termasuk Simple Queue dan Circular Queue, serta jenis penggunaan seperti Priority Queue dan Double-ended Queue (Dequeue). Prosedur operasi dasar pada queue meliputi enqueue untuk menambahkan data, dequeue untuk mengeluarkan data, peek untuk melihat data tanpa menghapusnya, serta isEmpty, isFull, dan size untuk memeriksa status dan ukuran queue.

## Referensi
[1] Rafsanjani, Malik Akbar Hashemi. "Implementasi Algoritma Pengurutan General Purpose dan Berbasis Komparasi untuk Data Berkategori dalam Waktu Linier Tanpa Paralelisasi", 2021.<br/>
[2] Muhammad Nugraha, Dasar Pemrograman Dengan C++, Materi Paling Dasar untuk Menjadi Programmer Berbagai Platform. Yogyakarta: Deepublish, 2021.<br/>
[3] Meidyan Permata Putri, et al., Algoritma dan Struktur Data. Bandung: Widina Bhakti Persada Bandung, 2022.<br/>

