# <h1 align="center">Laporan Praktikum Modul Array</h1>
<p align="center">Azaria Nanda Putri - 2311102147</p>

## Dasar Teori

    
    
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
Kode di atas digunakan untuk menjalankan single linked list. Struct node ini dideklarasikan dengan int data dan Node* next. Inisialisasi node nya juga dengan prosedur void init(), head dan tailnya dideklarasikan NULL. Ada juga fungsi bool isEmpty() untuk mengecek apakah kosong atau tidak. Berikut ini adalah fungsi-fungsi yang akan dipanggil dalam int main():
- void insertDepan(int nilai)</br>
    Digunakan untuk menambahkan data di depan
- void insertBelakang(int nilai)</br>
    Digunakan untuk menambahkan data di belakang
- int hitungList()</br>
    Digunakan untuk menghitung jumlah data yang ada
- void insertTengah(int data, int posisi)</br>
    Digunakan untuk menambahkan data sesuai posisi yang diinginkan user
- void hapusDepan()</br>
    Digunakan untuk menghapus data di depan
- void hapusBelakang()</br>
    Digunakan untuk menghapus data di belakang
- void hapusTengah(int posisi)</br>
    Digunakan untuk menghapus data sesuai posisi yang diinginkan user
- void ubahDepan(int data)</br>
    Digunakan untuk mengubah data di depan
- void ubahTengah(int data, int posisi)</br>
    Digunakan untuk mengubah data sesuai posisi yang diinginkan user
- void ubahBelakang(int data)</br>
    Digunakan untuk mengubah data di belakang
- void clearList()</br>
    Digunakan untuk menghapus seluruh data
- void tampil()</br>
    Digunakan untuk menampilkan data</br>
<p>Lalu, di dalam int main() dideklarasikan fungsi-fungsi tersebut. Hasil akhir pada pendeklarasian tersebut adalah 111.</p>

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
Kode di atas digunakan untuk menjalankan double linked list. Dalam class public Node, terdapat int data, Node* prev, dan Node* next. Lalu dalam class public DoublyLinkedList terdapat Node* head dan Node* tail, di mana terdapat juga fungsi DoublyLinkedList() untuk mendeklarasikan head & node sebagai nullptr. Dalam program ini, terdapat fungsi-fungsi yang akan dideklrasikan pada int main(), yaitu:
- void push(int data)</br>
    Digunakan untuk menambahkan data di depan
- void pop()</br>
    Digunakan untuk menghapuskan data di depan
- bool update(int oldData, int newData)</br>
    Digunakan untuk mengubah data sesuai data lama yang diinput user
- void deleteAll()</br>
    Digunakan untuk menghapus seluruh data
- void display()</br>
    Digunakan untuk menampilkan data</br>
<p>Lalu, dalam int main(), dideklarasikan fungsi DoublyLinkedList list dan menu untuk user memilih fungsi mana yang ingin dijalankan. Opsi 1 akan menjalankan fungsi push(), opsi 2 menjalankan fungsi pop(), opsi 3 menjalankan fungsi update(), opsi 4 menjalankan fungsi deleteAll(), opsi 5 menjalankan fungsi display(), dan opsi terakhir akan mengakhiri program. Program ini akan mengalami looping karena perulangan while selama input user bersifat true.</p>

## Unguided 

### 1. Buatlah program untuk menampilkan output seperti berikut dengan data yang diinputkan oleh user!
![Screenshot Unguided Q1](Unguided_Q1.png)

```C++
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a_2147;

    cout << "\n2147==Program Ganjil Genap==2147" << endl;
    cout << "\nInput angka: " << endl;
    cin >> a_2147;

    vector<int> Array_2147; 

    for (int i = 0; i < a_2147; i++) {
        cout << "Array " << "[" << i + 1 << "]" << " :";
        int num;
        cin >> num;
        Array_2147.push_back(num);
    }
    cout << "Data array: ";
    for (int i = 0; i < a_2147; ++i) { 
        cout << Array_2147[i] << " ";
    }
    cout << endl;
    cout << "Nomor genap  : ";
    for (int i = 0; i < a_2147; ++i) { 
        if (Array_2147[i] % 2 == 0)
            cout << Array_2147[i] << ", ";
    }
    cout << endl;
    cout << "Nomor ganjil : ";
    for (int i = 0; i < a_2147; ++i) { 
        if (Array_2147[i] % 2 != 0)
            cout << Array_2147[i] << ", ";
    }
    cout << endl;

    return 0;
}
```
#### Output:
![Screenshot Unguided Q1](output_Unguided1.png)

kode berikut merupakan kode sederhana yang memisahkan bilangan ganjil dan genap dari input pengguna. Langkah-langkahnya termasuk deklarasi header file yang diperlukan, inisialisasi variabel untuk menyimpan jumlah bilangan yang dimasukkan, penginputan bilangan, penyimpanan bilangan dalam vektor, pencetakan kembali bilangan, pencetakan bilangan genap dan ganjil, serta pengakhiran eksekusi. Program ini mengilustrasikan penggunaan vektor dan loop dalam C++ untuk memproses input pengguna.

### 2. Buatlah program input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya diinputkan oleh user!

```C++
#include <iostream>
using namespace std;

int main()
{
   
    int ukurax_2147, ukurany_2147, ukuranz_2147;
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

Kode di atas menggunakan C++ untuk menunjukkan penggunaan array tiga dimensi yang memungkinkan penyimpanan data dalam tiga dimensi dengan tiga indeks. Setelah pengguna memasukkan ukuran x, y, dan z, program membuat array sesuai dengan ukuran yang dimasukkan. Dengan perulangan bersarang, pengguna diminta memasukkan nilai untuk setiap elemen array, yang kemudian dicetak oleh program. Akhirnya, program berakhir dengan mengembalikan nilai 0, memberikan kemampuan kepada pengguna untuk mengelola array tiga dimensi sesuai kebutuhan.

### 3. Buatlah program menu untuk mencari nilai maksimum, minimum dan nilai rata – rata dari suatu array dengan input yang dimasukkan oleh user!

```C++
#include <iostream>

using namespace std;

void maksimum(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "Nilai maksimum " << max << endl;
}

void minimum(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    cout << "Nilai minimum " << min << endl;
}

void rata_rata(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    double average = static_cast<double>(sum) / size;
    cout << "Rata-rata array: " << average << endl;
}
int main() {
    int size, pilihan;
    cout << "Masukkan ukuran array: ";
    cin >> size;
    int Array[size];
    cout << "\nMasukkan " << size << " angka\n";
    for (int i = 0; i < size; i++) {
        cout << "Array[" << i + 1 << "]: ";
        cin >> Array[i];
    }
    cout << "\nData array: ";
    for (int i = 0; i < size; i++) {
        cout << Array[i] << ", ";
    }
    do {cout << "\n\nOperator Array\n";
        cout << "1. Maksimum\n";
        cout << "2. Minimum\n";
        cout << "3. Rata-rata\n";
        cout << "4. Keluar\n";
        cout << "Masukkan pilihan Anda: ";
        cin >> pilihan;
        switch (pilihan) {
            case 1:
                maksimum(Array, size);
                break;
            case 2:
                minimum(Array, size);
                break;
            case 3:
                rata_rata(Array, size);
                break;
            case 4:
                cout << "Terima kasih telah menggunakan program!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }
    } while (pilihan != 4);
    return 0;
}
```
#### Output:
![Screenshot Unguided Q1](output_Unguided3-1.png)
![Screenshot Unguided Q1](output_Unguided3.png)

kode diatas digunakan untuk melakukan operasi seperti mencari nilai maksimum, minimum, dan rata-rata. Pengguna memasukkan angka ke dalam sebuah array, Setelah memasukkan ukuran array dan angka-angka, program memberikan opsi operasi kepada pengguna. Fungsi terpisah digunakan untuk setiap operasi, dan pengguna diberi opsi untuk melakukan operasi lain atau keluar. Program berakhir dengan pesan terima kasih setelah pengguna memilih untuk keluar. Ini memberikan pengguna kemampuan untuk mengelola dan melakukan operasi pada array angka dengan sederhana.

## Kesimpulan
Array adalah suatu struktur yang terdiri dari sejumlah elemen yang memiliki tipe data yang sama. Elemen-elemen array tersusun secara sekuensial dalam memori komputer. Array dapat berupa satu dimensi, dua dimensi, tiga dimensi, ataupun banyak dimensi.

    -Array satu dimensi tidak lain adalah kumpulan elemen-elemen identik yang tersusun dalam satu baris. Elemen-elemen tersebut memiliki tipe data yang sama, tetapi isi dari elemen tersebut boleh berbeda.

    -Array dua dimensi, sering digambarkan sebagai matriks yang memiliki perluasan dari array satu dimensi. Jika array satu dimensi hanya memiliki satu baris dengan beberapa elemen kolom, maka array dua dimensi memiliki beberapa baris dan beberapa kolom elemen yang memiliki tipe yang sama.

    -Array multidimensi, kita bisa menjelaskannya sebagai kumpulan array, di mana setiap array berada di dalam array lainnya. Pendeklarasian array multidimensi ini pada dasarnya serupa dengan pendeklarasian array satu dimensi, dengan menambahkan tanda kurung siku [] sesuai dengan jumlah dimensi yang diinginkan.

## Referensi
[1] Indrajani Martin., Pemrograman Objek Dengan C++. Jakarta: Elex media, 2019.<br/>
[2] Ira Siregar., Gemar Belajar Struktur Data. Jakarta: Buku kita, 2019.
[3] Dr. Joseph Teguh Santoso., Struktur Data dan ALgoritma. Semarang: Yayasan Prima Agus Teknik, 2021.

