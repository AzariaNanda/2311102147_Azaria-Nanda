# <h1 align="center">Laporan Praktikum Modul Algoritma Searching</h1>
<p align="center">Azaria Nanda Putri - 2311102147</p>

## Dasar Teori
    
Algortima sequential searching adalah pencarian data semantik menggunakan teknologi array
satu dimensi untuk melakukan proses pencarian tanpa melalui semua elemen array secara berurutan, sehingga
tidak perlu dilakukan pengurutan data terlebih dahulu. Singkatnya Searching adalah proses mencari data dalam sebuah array dengan memeriksa setiap indeks menggunakan teknik perulangan. Ada dua metode dalam algoritma pencarian, yaitu:

### a. Sequential Search
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

### b. Binary Search
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

Program menggunakan loop for untuk memeriksa setiap elemen dalam array data. Jika elemen pada indeks i sama dengan nilai cari, maka ketemu diubah menjadi true dan loop dihentikan menggunakan break.setelah itu Program akan mencetak pesan "Program Sequential Search" dan isi array.
- Jika nilai cari ditemukan (ketemu bernilai true), program mencetak indeks di mana nilai tersebut ditemukan.
- Jika nilai cari tidak ditemukan, program mencetak pesan bahwa data tidak ditemukan

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
- Fungsi clearQueue(): Digunakan untuk menghapus semua elemen dari antrian. Fungsi ini menghapus satu per satu elemen dari antrian sampai antrian menjadi kosong. Di dalam fungsi main(), terdapat contoh penggunaan objek dari kelas Queue. 

Beberapa data ditambahkan ke dalam antrian menggunakan fungsi enqueue_2147(), kemudian antrian ditampilkan menggunakan fungsi displayQueue_2147(). Setelah itu, elemen pertama dari antrian dihapus menggunakan fungsi dequeue_2147(), dan kemudian antrian ditampilkan kembali. Proses ini diulang untuk menghapus elemen kedua dari antrian, dan kemudian menampilkan hasilnya.

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
Program di atas adalah implementasi dari sebuah antrian (queue) menggunakan linked list dalam bahasa C++. Antrian ini dirancang untuk menyimpan data mahasiswa beserta NIM mereka. Struktur data Node digunakan untuk menyimpan informasi tentang setiap mahasiswa, yaitu nama dan NIM, serta pointer ke node berikutnya dalam antrian. Kelas Queue memiliki fungsi-fungsi untuk operasi dasar pada antrian seperti:
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

