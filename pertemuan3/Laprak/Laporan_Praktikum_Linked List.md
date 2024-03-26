# <h1 align="center">Laporan Praktikum Modul Linked List</h1>
<p align="center">Azaria Nanda Putri - 2311102147</p>

## Dasar Teori
Linked list adalah kumpulan elemen yang terhubung melalui pointer. Setiap elemen memiliki pointer yang menyimpan alamat memori, bisa berupa data atau pointer lain. Elemen pertama disebut head, dan jika kosong, head menunjuk ke NULL. Elemen terakhir disebut tail dengan pointer yang menunjuk ke NULL. Linked list memungkinkan penyimpanan data dengan alokasi memori dinamis, dan mudah dalam penambahan serta penghapusan elemen, namun ia memiliki kelemahan dalam akses acak yang lambat dan kebutuhan ruang ekstra untuk pointer. Linked list sering digunakan untuk data yang sering mengalami perubahan dan membutuhkan fleksibilitas dalam operasi penambahan atau penghapusan. Selain itu, linked list juga sering digunakan dalam implementasi struktur data lain seperti stack, queue, dan graph.

- Single Linked List</br>
    Dalam Single Linked List, operasi umum meliputi penambahan dan penghapusan simpul di awal atau akhir, serta pencarian dan pengambilan nilai pada simpul tertentu. Karena hanya memerlukan satu pointer per simpul, Single Linked List lebih efisien dalam penggunaan memori dibandingkan Double Linked List dan Circular Linked List. Circular Linked List memiliki penunjuk next pada node terakhir yang selalu merujuk ke node pertama.

- Double linked list </br>
   Double Linked List adalah struktur data Linked List dengan tambahan pointer prev pada setiap simpul, yang menunjuk ke simpul sebelumnya. Dengan fitur ini, operasi penghapusan dan penambahan pada simpul dapat dilakukan secara efisien. Setiap simpul memiliki tiga elemen: elemen data, pointer next, dan pointer prev. Keuntungannya adalah kemampuan melakukan operasi penambahan dan penghapusan simpul dengan efisien serta traversal mudah dari depan dan belakang. Namun, Double Linked List menggunakan memori lebih banyak dan memerlukan waktu eksekusi lebih lama dibandingkan Single Linked List dalam operasi penambahan dan penghapusan.
    
    
## Guided 

### 1. Latihan Single Linked List

```C++
// Latihan Single Linked List

#include <iostream>
using namespace std;

///PROGRAM SINGLE LINKED LIST NON-CIRCULAR
//Deklarasi Struct Node
struct Node {
    int data;
    Node* next;
};

Node* head;
Node* tail;

//Inisialisasi Node
void init() {
    head = NULL;
    tail = NULL;
}

// Pengecekan
bool isEmpty() {
    if (head == NULL)
        return true;
    else
        return false;
}

//Tambah Depan
void insertDepan(int nilai) {
    //Buat Node baru
    Node* baru = new Node;
    baru->data = nilai;
    baru->next = NULL;

    if (isEmpty() == true) {
        head = tail = baru;
        tail->next = NULL;
    }
    else {
        baru->next = head;
        head = baru;
    }
}

//Tambah Belakang
void insertBelakang(int nilai) {
    //Buat Node baru
    Node* baru = new Node;
    baru->data = nilai;
    baru->next = NULL;

    if (isEmpty() == true) {
        head = tail = baru;
        tail->next = NULL;
    }
    else {
        tail->next = baru;
        tail = baru;
    }
}

//Hitung Jumlah List
int hitungList() {
    Node* hitung;
    hitung = head;
    int jumlah = 0;

    while (hitung != NULL) {
        jumlah++;
        hitung = hitung->next;
    }

    return jumlah;
}

//Tambah Tengah
void insertTengah(int data, int posisi) {
    if (posisi < 1 || posisi > hitungList()) {
        cout << "Posisi diluar jangkauan" << endl;
    }
    else if (posisi == 1) {
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else {
        Node* baru, * bantu;
        baru = new Node();
        baru->data = data;

        // tranversing
        bantu = head;
        int nomor = 1;

        while (nomor < posisi - 1) {
            bantu = bantu->next;
            nomor++;
        }

        baru->next = bantu->next;
        bantu->next = baru;
    }
}

//Hapus Depan
void hapusDepan() {
    Node* hapus;

    if (isEmpty() == false) {
        if (head->next != NULL) {
            hapus = head;
            head = head->next;
            delete hapus;
        }
        else {
            head = tail = NULL;
        }
    }
    else {
        cout << "List kosong!" << endl;
    }
}

//Hapus Belakang
void hapusBelakang() {
    Node* hapus;
    Node* bantu;

    if (isEmpty() == false) {
        if (head != tail) {
            hapus = tail;
            bantu = head;

            while (bantu->next != tail) {
                bantu = bantu->next;
            }

            tail = bantu;
            tail->next = NULL;
            delete hapus;
        }
        else {
            head = tail = NULL;
        }
    }
    else {
        cout << "List kosong!" << endl;
    }
}

//Hapus Tengah
void hapusTengah(int posisi) {
    Node* hapus, * bantu, * bantu2;

    if (posisi < 1 || posisi > hitungList()) {
        cout << "Posisi di luar jangkauan" << endl;
    }
    else if (posisi == 1) {
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else {
        int nomor = 1;
        bantu = head;

        while (nomor <= posisi) {
            if (nomor == posisi - 1) {
                bantu2 = bantu;
            }

            if (nomor == posisi) {
                hapus = bantu;
            }

            bantu = bantu->next;
            nomor++;
        }

        bantu2->next = bantu;
        delete hapus;
    }
}

//Ubah Depan
void ubahDepan(int data) {
    if (isEmpty() == false) {
        head->data = data;
    }
    else {
        cout << "List masih kosong!" << endl;
    }
}

//Ubah Tengah
void ubahTengah(int data, int posisi) {
    Node* bantu;

    if (isEmpty() == false) {
        if (posisi < 1 || posisi > hitungList()) {
            cout << "Posisi di luar jangkauan" << endl;
        }
        else if (posisi == 1) {
            cout << "Posisi bukan posisi tengah" << endl;
        }
        else {
            bantu = head;
            int nomor = 1;

            while (nomor < posisi) {
                bantu = bantu->next;
                nomor++;
            }

            bantu->data = data;
        }
    }
    else {
        cout << "List masih kosong!" << endl;
    }
}

//Ubah Belakang
void ubahBelakang(int data) {
    if (isEmpty() == false) {
        tail->data = data;
    }
    else {
        cout << "List masih kosong!" << endl;
    }
}

//Hapus List
void clearList() {
    Node* bantu, * hapus;
    bantu = head;

    while (bantu != NULL) {
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }

    head = tail = NULL;
    cout << "List berhasil terhapus!" << endl;
}

//Tampilkan List
void tampil() {
    Node* bantu;
    bantu = head;

    if (isEmpty() == false) {
        while (bantu != NULL) {
            cout << bantu->data << ends;
            bantu = bantu->next;
        }

        cout << endl;
    }
    else {
        cout << "List masih kosong!" << endl;
    }
}

int main() {
    init();
    insertDepan(3);
    tampil();
    insertBelakang(5);
    tampil();
    insertDepan(2);
    tampil();
    insertDepan(1);
    tampil();
    hapusDepan();
    tampil();
    hapusBelakang();
    tampil();
    insertTengah(7, 2);
    tampil();
    hapusTengah(2);
    tampil();
    ubahDepan(1);
    tampil();
    ubahBelakang(8);
    tampil();
    ubahTengah(11, 2);
    tampil();

    return 0;
}
```
Kode di atas digunakan untuk menjalankan single linked list. Struct node dideklarasikan dengan int data dan Node* next, serta inisialisasi node dilakukan melalui prosedur void init() dengan head dan tailnya dideklarasikan NULL. Fungsi bool isEmpty() juga disediakan untuk mengecek apakah linked list kosong atau tidak. Dalam int main(), berbagai fungsi akan dipanggil untuk operasi-operasi seperti penambahan dan penghapusan data, serta modifikasi data di berbagai posisi. Fungsi-fungsi tersebut antara lain: insertDepan(), insertBelakang(), hitungList(), insertTengah(), hapusDepan(), hapusBelakang(), hapusTengah(), ubahDepan(), ubahTengah(), ubahBelakang(), clearList(), dan tampil(). Setelah pendeklarasian fungsi-fungsi tersebut di int main(), hasil akhir dari kode tersebut adalah 111.

### 2. Latihan Double Linked List

```C++
// Latihan Double Linked List
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;
};

class DoublyLinkedList {
public:
    Node* head;
    Node* tail;

    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void push(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->prev = nullptr;
        newNode->next = head;

        if (head != nullptr) {
            head->prev = newNode;
        }
        else {
            tail = newNode;
        }

        head = newNode;
    }

    void pop() {
        if (head == nullptr) {
            return;
        }

        Node* temp = head;
        head = head->next;

        if (head != nullptr) {
            head->prev = nullptr;
        }
        else {
            tail = nullptr;
        }

        delete temp;
    }

    bool update(int oldData, int newData) {
        Node* current = head;

        while (current != nullptr) {
            if (current->data == oldData) {
                current->data = newData;
                return true;
            }
            current = current->next;
        }

        return false;
    }

    void deleteAll() {
        Node* current = head;

        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }

        head = nullptr;
        tail = nullptr;
    }

    void display() {
        Node* current = head;

        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }

        cout << endl;
    }
};

int main() {
    DoublyLinkedList list;

    while (true) {
        cout << "1. Add data" << endl;
        cout << "2. Delete data" << endl;
        cout << "3. Update data" << endl;
        cout << "4. Clear data" << endl;
        cout << "5. Display data" << endl;
        cout << "6. Exit" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int data;
                cout << "Enter data to add: ";
                cin >> data;
                list.push(data);
                break;
            }
            case 2: {
                list.pop();
                break;
            }
            case 3: {
                int oldData, newData;
                cout << "Enter old data: ";
                cin >> oldData;
                cout << "Enter new data: ";
                cin >> newData;

                bool updated = list.update(oldData, newData);

                if (!updated) {
                    cout << "Data not found" << endl;
                }
                break;
            }
            case 4: {
                list.deleteAll();
                break;
            }
            case 5: {
                list.display();
                break;
            }
            case 6: {
                return 0;
            }
            default: {
                cout << "Invalid choice" << endl;
                break;
            }
        }
    }

    return 0;
}
```
Kode tersebut adalah implementasi dari double linked list yang terdiri dari dua kelas utama: Node dan DoublyLinkedList. Dalam kelas Node, terdapat tiga atribut: int data, Node* prev, dan Node* next. Sedangkan kelas DoublyLinkedList memiliki dua pointer: Node* head dan Node* tail. Konstruktor DoublyLinkedList() berfungsi untuk menginisialisasi head dan tail dengan nullptr. Program ini dilengkapi dengan beberapa fungsi, yaitu push(), pop(), update(), deleteAll(), dan display(), yang didefinisikan dalam fungsi main(). Dalam main(), objek DoublyLinkedList list dideklarasikan dan menu ditampilkan untuk memungkinkan pengguna melakukan operasi seperti penambahan, penghapusan, pembaruan, penghapusan semua data, dan penampilan data. Program ini berjalan dalam loop while yang terus berlangsung selama input dari pengguna valid (true).

## Unguided 

### 1. Buatlah program menu Single Linked List Non-Circular untuk menyimpan Nama dan Usia mahasiswa, dengan menggunakan inputan dari user. Lakukan operasi berikut:</br> ㅤa. Masukkan data sesuai urutan berikut. (Gunakan insert depan, belakang atau tengah). Data pertama yang  dimasukkan adalah nama dan usia anda.</br> ㅤb. Hapus data Akechi</br> ㅤc. Tambahkan data berikut diantara John dan Jane: "Futaba 18"</br> ㅤd. Tambahkan data berikut di awal: "Igor 20"</br> ㅤe. Ubah data Michael menjadi: "Reyn 18"</br> ㅤf. Tampilkan seluruh data

```C++
//Coding by Azaria Nanda Putri - 2311102147

//Coding Milik Mahija Danadyaksa Sadtomo (2311102157)

#include <iostream> 
#include <iomanip> 

using namespace std; 

//Deklarasi Struct Node yang berisi nama dan umur
struct Node {
    string nama_2147;
    int umur_2147;
    Node* next; // Pointer ke node selanjutnya
};

Node* head; 
Node* tail; 

//Inisialisasi Node (head dan tail)
void init() {
    head = NULL;
    tail = NULL;
}

// Pengecekan apakah list kosong atau tidak
bool isEmpty() {
    if (head == NULL)
        return true;
    else
        return false;
}


void insertDepan(string nama, int umur) {
    //Buat Node baru
    Node* baru = new Node;
    baru->nama_2147 = nama;
    baru->umur_2147 = umur;
    baru->next = NULL;

    if (isEmpty() == true) {
        head = tail = baru;
        tail->next = NULL;
    }
    else {
        baru->next = head;
        head = baru;
    }
}

//Tambah Belakang
void insertBelakang(string nama, int umur) {

    //Buat Node baru
    Node* baru = new Node;
    baru->nama_2147 = nama;
    baru->umur_2147 = umur;
    baru->next = NULL;

    if (isEmpty() == true) {
        head = tail = baru;
        tail->next = NULL;
    }
    else {
        tail->next = baru;
        tail = baru;
    }
}

//Hitung Jumlah List
int hitungList() {
    Node* hitung;
    hitung = head;
    int jumlah = 0;

    while (hitung != NULL) {
        jumlah++;
        hitung = hitung->next;
    }

    return jumlah;
}

//Tambah Tengah
void insertTengah(string nama,int umur, int posisi) {
    if (posisi < 1 || posisi > hitungList()) {
        cout << "Posisi diluar jangkauan" << endl;
    }
    else if (posisi == 1) {
        cout << "Posisi ga di tengah" << endl;
    }
    else {
        Node* baru, * bantu;
        baru = new Node();
        baru->nama_2147 = nama;
        baru->umur_2147 = umur;

        // tranversing 
        bantu = head;
        int nomor = 1;

        while (nomor < posisi - 1) {
            bantu = bantu->next;
            nomor++;
        }

        baru->next = bantu->next;
        bantu->next = baru;
    }
}

//Hapus Depan
void hapusDepan() {
    Node* hapus;

    if (isEmpty() == false) {
        if (head->next != NULL) {
            hapus = head;
            head = head->next;
            delete hapus;
        }
        else {
            head = tail = NULL;
        }
    }
    else {
        cout << "Listnya kosong!" << endl;
    }
}

//Hapus Belakang
void hapusBelakang() {
    Node* hapus;
    Node* bantu;

    if (isEmpty() == false) {
        if (head != tail) {
            hapus = tail;
            bantu = head;

            while (bantu->next != tail) {
                bantu = bantu->next;
            }

            tail = bantu;
            tail->next = NULL;
            delete hapus;
        }
        else {
            head = tail = NULL;
        }
    }
    else {
        cout << "Listnya kosong!" << endl;
    }
}

//Hapus Tengah
void hapusTengah(int posisi) {
    Node* hapus, * bantu, * bantu2;

    if (posisi < 1 || posisi > hitungList()) {
        cout << "Posisi di luar jangkauan" << endl;
    }
    else if (posisi == 1) {
        cout << "Posisi gak di tengah" << endl;
    }
    else {
        int nomor = 1;
        bantu = head;

        while (nomor <= posisi) {
            if (nomor == posisi - 1) {
                bantu2 = bantu;
            }

            if (nomor == posisi) {
                hapus = bantu;
            }

            bantu = bantu->next;
            nomor++;
        }

        bantu2->next = bantu;
        delete hapus;
    }
}

//Ubah Tengah
void ubahTengah(string nama,int umur, int posisi) {
    Node* bantu;

    if (isEmpty() == false) {
        if (posisi < 1 || posisi > hitungList()) {
            cout << "Posisi di luar jangkauan" << endl;
        }
        else if (posisi == 1) {
            cout << "Posisi bukan posisi tengah" << endl;
        }
        else {
            bantu = head;
            int nomor = 1;

            while (nomor < posisi) {
                bantu = bantu->next;
                nomor++;
            }

            bantu->nama_2147 = nama;
            bantu->umur_2147 = umur;
        }
    }
    else {
        cout << "Listnya masih kosong!" << endl;
    }
}


//Hapus List
void clearList() {
    Node* bantu, * hapus;
    bantu = head;

    while (bantu != NULL) {
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }

    head = tail = NULL;
    cout << "list berhasil dihapus!" << endl;
}

//Tampilkan List
void tampil() {
    Node* bantu;
    bantu = head;

    cout<< left << setw(20) << "Nama" << setw(20) << "Umur" << endl;
    if (isEmpty() == false) {
        while (bantu != NULL) {
            cout << left << setw(20) << bantu->nama_2147 << setw(20) << bantu->umur_2147 << endl;
            bantu = bantu->next;
        }

        cout << endl;
    }
    else {
        cout << "List masih kosong!" << endl;
    }
}

int main() {
    init();

    // Tampilan awal

    insertDepan("Karin", 18);
    insertDepan("Hoshino", 18);
    insertDepan("Akechi", 20);
    insertDepan("Yusuke", 19);
    insertDepan("Michael", 18);
    insertDepan("Jane", 20);
    insertDepan("John", 19);
    insertDepan("Nanda", 19);
    tampil();

    while (true)
    {
        cout << "\n2147 DAFTAR DATA MAHASISWA\n" << endl;
        cout << "1. menambah data di depan" << endl;
        cout << "2. menambah data di  Belakang" << endl;
        cout << "3. menambah data di  Tengah" << endl;
        cout << "4. menghapus data di depan" << endl;
        cout << "5. menghapus data di belakang" << endl;
        cout << "6. menghapus data di tengah" << endl;
        cout << "7. mengubah data di tengah" << endl;
        cout << "8. Hapus Semua" << endl;
        cout << "9. Menampilkan Data" << endl;
        cout << "10. Exit" << endl;
        int choice;
        cout << "\nMasukkan pilihan:  ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            string nama;
            int umur;
            cout << "Masukkan nama: ";
            cin >> nama;
            cout << "Masukkan umur: ";
            cin >> umur;
            insertDepan(nama, umur);
            cout << "Data berhasil ditambahkan" << endl;
            break;
        }
        case 2:
        {
            string nama;
            int umur;
            cout << "Masukkan nama: ";
            cin >> nama;
            cout << "Masukkan umur: ";
            cin >> umur;
            insertBelakang(nama, umur);
            cout << "Data berhasil ditambahkan" << endl;
            break;
        }
        case 3:
        {
            string nama;
            int umur, posisi;
            cout << "Masukkan nama: ";
            cin >> nama;
            cout << "Masukkan umur: ";
            cin >> umur;
            cout << "Masukkan posisi: ";
            cin >> posisi;
            insertTengah(nama, umur, posisi);
            cout << "Data berhasil ditambahkan" << endl;
            break;
        }
        case 4:
        {
            hapusDepan();
            cout << "Data berhasil dihapus" << endl;
            break;
        }
        case 5:
        {
            hapusBelakang();
            cout << "Data berhasil dihapus" << endl;
            break;
        }
        case 6:
        {
            int posisi;
            cout << "Masukkan posisi: ";
            cin >> posisi;
            hapusTengah(posisi);
            cout << "Data berhasil dihapus" << endl;
            break;
        }
        case 7:
        {
            string nama;
            int umur, posisi;
            cout << "Masukkan nama: ";
            cin >> nama;
            cout << "Masukkan umur: ";
            cin >> umur;
            cout << "Masukkan posisi: ";
            cin >> posisi;
            ubahTengah(nama, umur, posisi);
            cout << "Data berhasil diubah" << endl;
            break;
        }
        case 8:
        {
            clearList();
            break;
        }
        case 9:
        {
            tampil();
            break;
        }
        case 10:
        {
            return 0;
        }
        default:
        {
            cout << "Pilihan tidak sesuai!" << endl;
            break;
        }
        }
    }
    // // Tampilan setelah menghapus akechi di posisi 6
    // cout<<"===== B) Hapus 'Akechi' (B =====\n";
    // hapusTengah(6);
    // tampil();

    // // Tampilan setelah menambahkan futaba di posisi 3
    // cout<<"===== C) Insert 'Futaba' (C =====\n";
    // insertTengah("Futaba", 18, 3);
    // tampil();

    // // Tampilan setelah menambahkan igor di depan
    // cout<<"===== D) Insert 'Igor' (D =====\n";
    // insertDepan("Igor", 20);
    // tampil();

    // // Tampilan setelah mengubah michael menjadi reyn
    // cout<<"===== E) Ubah 'Michael' menjadi 'Reyn'(E =====\n";
    // ubahTengah("Reyn", 18, 6);

    // // Tampilan terakhir
    // cout<<"===== F) Tampilan Seluruh Data (F =====\n";
    // tampil();

    return 0;
}
```
#### Output:
![Screenshot Unguided Q1](output_unguided1(1).png)
![Screenshot Unguided Q1](output_unguided1(2).png)
![Screenshot Unguided Q1](output_unguided1(3).png)
![Screenshot Unguided Q1](output_unguided1(4).png)
![Screenshot Unguided Q1](output_unguided1(5).png)
![Screenshot Unguided Q1](output_unguided1(6).png)

Kode di atas adalah implementasi single linked list dengan node yang memiliki integer data dan pointer next. Inisialisasi menggunakan void init(), dan pointer head dan tail diatur nullptr. Fungsi bool IsEmpty() memeriksa apakah linked list kosong. Fungsi lainnya meliputi: insertDepan(int value), insertBelakang(int value), jumlah(), insertTengah(int value, int posisi), hapusDepan(), hapusBelakang(), hapusTengah(int posisi), tampil(), ubahDepan(int value), ubahBelakang(int value), dan ubahTengah(int value, int posisi). Pada main(), program inisialisasi linked list, lalu menampilkan data, menghapus 'Akechi', menambah 'Futaba (18)' dan 'Igor (20)', mengubah 'Michael' menjadi 'Reyn (18)', dan menampilkan data lagi.


### 2. Modifikasi Guided Double Linked List dilakukan dengan penambahan operasi untuk menambah data, menghapus, dan update di tengah / di urutan tertentu yang diminta. Selain itu, buatlah agar tampilannya menampilkan Nama Produk dan Harga. </br>Case:</br> ㅤ1. Tambahkan produk Azarine dengan harga 65000 diantara Somethinc dan Skintific</br> ㅤ2. Hapus produk Wardah</br> ㅤ3. Update produk Hanasui menjadi Cleora dengan harga 55000</br> ㅤ4. Tampilkan menu, di mana tampilan akhirnya akan menjadi seperti dibawah ini:

```C++
#include<iostream>
#include<iomanip>

using namespace std;

const string MENU_UTAMA = 
    "--- TOKO SKINCARE PURWOKERTO BY AZARIA NANDA ^-^ ---\n"
    "1. Tambah data\n"
    "2. Hapus data\n"
    "3. Update data\n"
    "4. Tambah data urutan tertentu\n"
    "5. Hapus data urutan tertentu\n"
    "6. Hapus seluruh data\n"
    "7. Tampilkan data\n"
    "8. exit\n"
    "Pilihan anda = ";

const string PESAN_TAMBAH = "- Tambah Data Produk -\n";
const string PESAN_HAPUS = "- Hapus Data Produk Pertama -\n";
const string PESAN_UPDATE = "- Update Data Produk -\n";
const string PESAN_TAMBAH_URUTAN = "- Tambah Data Urutan Tertentu -\n";
const string PESAN_HAPUS_URUTAN = "- Hapus Data Urutan Tertentu -\n";
const string PESAN_HAPUS_SEMUA = "- Hapus Seluruh Data -\n";
const string PESAN_TAMPIL = "- Tampilkan Data -\n";

struct node{
    string barang_147;
    int harga_147;
    node *prev;
    node *next;
};

node *head;
node *tail;

//prosedur inisialisasi 
void Inisialisasi_147(){
    head = nullptr;
    tail = nullptr;
}

//prosedur tambah node
void TambahNode_147(string produk_147, int harga_147, int posisi_147){
    if(posisi_147 < 1 ){
        cout << "Node yang ingin ditambah diluar jangkauan" << endl;
    } else if(posisi_147 == 1){
        node *baru = new node;
        baru->barang_147 = produk_147;
        baru->harga_147 = harga_147;
        baru->next = head;
        baru->prev = nullptr;
        if(head != nullptr){
            head->prev = baru;
        } else {
            tail = baru;
        }
        head = baru;
    } else {
        node *current = head;
        node *baru = new node;
        baru->barang_147 = produk_147;
        baru->harga_147 = harga_147;
        baru->next = nullptr;
        baru->prev = nullptr;
        int hitung_147 = 1;
        while(hitung_147 < posisi_147 - 1){
            hitung_147++;
            current = current->next;
        }
        baru->next = current->next;
        baru->prev = current;
        if(current->next != nullptr){
            current->next->prev = baru;
        } else {
            tail = baru;
        }
        current->next = baru;
    }
}

//prosedur hapus node
void HapusNode_147(int posisi_147){
    if(posisi_147 < 1){
        cout << "Posisi node yang ingin dihapus diluar jangkauan" << endl;
    } else if(posisi_147 == 1){
        node *current = head;  // Simpan node pertama
        head = head->next;     // Geser head ke node berikutnya
        if(head != nullptr) {
            head->prev = nullptr;  // Tetapkan nullptr ke prev dari node baru pertama
        }
        delete current;  // Hapus node pertama
    } else {
        node *current = head;
        int hitung_147 = 1;
        while(hitung_147 < posisi_147){
            hitung_147++;
            current = current->next;
        }
        current->prev->next = current->next;
        if(current->next != nullptr){
            current->next->prev = current->prev;
        } else {
            tail = current->prev;
        }
        delete current;
    }
}

//fungsi update data
bool UpdateData_147(string ProdukLama_147, string ProdukBaru_147, int HargaBaru_147){
    node *current = head;
    while (current != nullptr){
        if(current->barang_147 == ProdukLama_147){
            current->barang_147 = ProdukBaru_147;
            current->harga_147 = HargaBaru_147;
            return true;
        }
        current = current->next;
    }
    return false;
}

//prosedur hapus semua data
void HapusSemua_147(){
    node *current = head;
    while(current != nullptr){
        node *temp = current;
        current = current->next;
        delete temp;
    }
    head = nullptr;
    tail = nullptr;
}

//prosedur tampilkan data
void TampilData_147(){
    node *current = head;
    if(head != nullptr){
        cout << left << setw(20) << "- Nama Produk -" << right << setw(5) << "- Harga -" << endl; 
        while(current != nullptr){
            cout << left << setw(20) << current->barang_147 << right << setw(7) << current->harga_147 << endl; 
            current = current->next;
        }
    }
    cout << endl;
}

int main(){
    int pilih_147, HargaBaru_147, PosisiProduk_147;
    string ProdukBaru_147, ProdukLama_147;
    char yakin_147;
    Inisialisasi_147();
    cout << "--- DAFTAR PRODUK SKINCARE ---" << endl;
    TambahNode_147("Hanasui", 30000, 1 );
    TambahNode_147("Wardah", 50000, 1);
    TambahNode_147("Skintific", 100000, 1);
    TambahNode_147("Somethinc", 150000, 1);
    TambahNode_147("Originote", 60000, 1);
    TampilData_147();

    while (true) {
    cout << MENU_UTAMA;
    cin >> pilih_147;
    cout << endl;

    switch(pilih_147){
        case 1 :
            cout << PESAN_TAMBAH << endl;
            cout << "Masukkan nama produk yang ingin ditambahkan = ";
            cin >> ProdukBaru_147;
            cout << "Masukkan harga produk = "; 
            cin >> HargaBaru_147;
            TambahNode_147(ProdukBaru_147, HargaBaru_147, 1);
            cout << "Produk telah ditambahkan" << endl;
            cout << endl;
            break;
        case 2 :
            cout << PESAN_HAPUS << endl;
            HapusNode_147(1);
            cout << "Data produk ke-1 telah dihapus" << endl;
            cout << endl;
            break;
        case 3 :
            cout << PESAN_UPDATE << endl;
            cout << "Masukkan produk lama yang ingin diganti = ";
            cin >> ProdukLama_147;
            cout << "Masukkan nama produk baru = "; cin >> ProdukBaru_147;
            cout << "Masukkan harga produk baru = "; cin >> HargaBaru_147;
            UpdateData_147(ProdukLama_147, ProdukBaru_147, HargaBaru_147);
            cout << "Produk telah diupdate" << endl;
            cout << endl;
            break;
        case 4 :
            cout << PESAN_TAMBAH_URUTAN << endl;
            cout << "Masukkan nama produk yang ingin ditambahkan = "; 
            cin >> ProdukBaru_147;
            cout << "Masukkan harga produk baru = "; 
            cin >> HargaBaru_147;
            cout << "Masukkan posisi produk dalam database = "; 
            cin >> PosisiProduk_147;
            TambahNode_147(ProdukBaru_147, HargaBaru_147, PosisiProduk_147);
            cout << "Produk telah ditambahkan" << endl;
            cout << endl;
            break;
        case 5 :
            cout << PESAN_HAPUS_URUTAN << endl;
            cout << "Masukkan urutan produk yang ingin dihapus = "; 
            cin >> PosisiProduk_147;
            HapusNode_147(PosisiProduk_147);
            cout << "Data produk urutan ke-" << PosisiProduk_147 << " telah dihapus" << endl;
            cout << endl;
            break;
        case 6 :
            cout << PESAN_HAPUS_SEMUA << endl;
            cout << "Apakah anda yakin ingin menghapus semua produk? [y/n] = "; 
            cin >> yakin_147;
            if(yakin_147 == 'y' || yakin_147 == 'Y'){
            HapusSemua_147();
            cout << "Semua data produk telah dihapus" << endl;
            } else if(yakin_147 == 'n' || yakin_147 == 'N'){
                cout << "Aksi dibatalkan" << endl;
            }
            cout << endl;
            break;
        case 7 :
            cout << PESAN_TAMPIL << endl;
            TampilData_147();
            cout << endl;
            break;
        case 8 :
            cout << "Anda keluar dari program" << endl;
            return 0;
        default :
            cout << "Pilihan yang anda input tidak tersedia" << endl;
            break;
        }
    }
    return 0;
}
```
#### Output:
![Screenshot Unguided Q1](output_Unguided2(1).png)
![Screenshot Unguided Q1](output_Unguided2(2).png)
![Screenshot Unguided Q1](output_Unguided2(3).png)


Kode tersebut adalah program sederhana dalam bahasa C++ yang mengimplementasikan sebuah aplikasi manajemen produk perawatan kulit. Program ini memungkinkan pengguna untuk menambah, menghapus, memperbarui, menampilkan, serta menghapus semua data produk. Program memiliki menu utama dengan pilihan-pilihan yang sesuai dengan fungsi-fungsi tersebut. Program menggunakan struktur data linked list untuk menyimpan data produk, di mana setiap node dalam linked list menyimpan nama produk, harga produk, serta pointer ke node sebelumnya dan node berikutnya.

## Kesimpulan
Linked list adalah kumpulan elemen yang saling terhubung melalui pointer, di mana setiap elemen terhubung dengan elemen lainnya melalui sebuah pointer. Pointer adalah variabel yang menyimpan alamat memori dari variabel lain, yang bisa berupa data atau pointer lainnya. Oleh karena itu, setiap elemen dalam linked list selalu mengandung pointer. Secara umum, linked list terdiri dari beberapa elemen, di mana salah satu elemen pertama memiliki karakteristik khusus dan tidak digunakan untuk menyimpan data. Elemen ini dikenal dengan sebutan elemen kepala atau Head. Berikut adalah contoh sederhana dari linked list dengan satu elemen kepala dan beberapa elemen lainnya.


## Referensi
[1] Indrajani Martin., Pemrograman Objek Dengan C++. Jakarta: Elex media, 2019.<br/>
[2] Dr. Joseph Teguh Santoso., Struktur Data dan ALgoritma. Semarang: Yayasan Prima Agus Teknik, 2021.

