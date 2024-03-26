//Coding by Azaria Nanda Putri - 2311102147

#include <iostream>
#include <iomanip>

using namespace std;

//Deklarasi Struct Node
struct Node {
    string Nama_2147;
    int Umur_2147;
    Node* next;
};

Node* head;
Node* tail;

//Inisialisasi Node
void init_2147() {
    head = NULL;
    tail = NULL;
}

// Pengecekan
bool Empty_2147() {
    if (head == NULL)
        return true;
    else
        return false;
}

//Tambah Depan
void InsertDepan_2147(string nama, int umur) {
    //Buat Node baru
    Node* baru = new Node;
    baru->Nama_2147 = nama;
    baru->Umur_2147 = umur;
    baru->next = NULL;

    if (Empty_2147() == true) {
        head = tail = baru;
        tail->next = NULL;
    }
    else {
        baru->next = head;
        head = baru;
    }
}

//Tambah Belakang
void InsertBelakang_2147(string nama, int umur) {
    //Buat Node baru
    Node* baru = new Node;
    baru->Nama_2147 = nama;
    baru->Umur_2147 = umur;
    baru->next = NULL;

    if (Empty_2147() == true) {
        head = tail = baru;
        tail->next = NULL;
    }
    else {
        tail->next = baru;
        tail = baru;
    }
}

//Hitung Jumlah List
int HitungList_2147() {
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
void InsertTengah_2147(string nama, int umur, int posisi) {
    if (posisi < 1 || posisi > HitungList_2147()) {
        cout << "Posisi diluar jangkauan!" << endl;
    }
    else if (posisi == 1) {
        cout << "Posisi tidak berada ditengah!" << endl;
    }
    else {
        Node* baru, * bantu;
        baru = new Node();
        baru->Nama_2147 = nama;
        baru->Umur_2147 = umur;

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
void HapusDepan_2147() {
    Node* hapus;

    if (Empty_2147() == false) {
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
        cout << "List masih kosong!" << endl;
    }
}

//Hapus Belakang
void HapusBelakang_2147() {
    Node* hapus;
    Node* bantu;

    if (Empty_2147() == false) {
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
        cout << "List masih kosong!" << endl;
    }
}

//Hapus Tengah
void HapusTengah_2147(int posisi) {
    Node* hapus, * bantu, * bantu2;

    if (posisi < 1 || posisi > HitungList_2147()) {
        cout << "Posisi diluar jangkauan" << endl;
    }
    else if (posisi == 1) {
        cout << "Posisi tidak ditengah" << endl;
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
void UbahDepan_2147(string nama, int umur) {
    if (Empty_2147() == false) {
        head->Nama_2147 = nama;
        head->Umur_2147 = umur;
    }
    else {
        cout << "apakah ini sama?" << endl;
    }
}

//Ubah Tengah
void UbahTengah_2147(string nama, int umur, int posisi) {
    Node* bantu;

    if (Empty_2147() == false) {
        if (posisi < 1 || posisi > HitungList_2147()) {
            cout << "Posisi diluar jangkauan" << endl;
        }
        else if (posisi == 1) {
            cout << "Posisi tidak ditengah" << endl;
        }
        else {
            bantu = head;
            int nomor = 1;

            while (nomor < posisi) {
                bantu = bantu->next;
                nomor++;
            }

            bantu->Nama_2147 = nama;
            bantu->Umur_2147 = umur;
        }
    }
    else {
        cout << "List masih kosong!" << endl;
    }
}

//Ubah Belakang
void UbahBelakang_2147(string nama, int umur) {
    if (Empty_2147() == false) {
        tail->Nama_2147 = nama;
        tail->Umur_2147 = umur;
    }
    else {
        cout << "List masih kosong!" << endl;
    }
}

//Hapus List
void HapusList_2147() {
    Node* bantu, * hapus;
    bantu = head;

    while (bantu != NULL) {
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }

    head = tail = NULL;
    cout << "Bagus, listnya sudah terhapus" << endl;
}

//Tampilkan List
void Tampil_2147() {
    Node* bantu;
    bantu = head;

    cout << left << setw(15) << "-Nama-" << right << setw(4) << "-Usia-" << endl; // Supaya rapi

    if (Empty_2147() == false) {
        while (bantu != NULL) {
            cout << left << setw(15) << bantu->Nama_2147 << right << setw(4) << bantu->Umur_2147 << endl; // Supaya lurus di output
            bantu = bantu->next;
        }

        cout << endl;
    }
    else {
        cout << "List masih kosong!" << endl;
    }
}

int main() {
    init_2147(); // Inisialisasi Linked List
    cout << "\n 2147   Program penyimpanan nama dan usia Mahasiswa   2147 " << endl; // Menampilkan point a 
    InsertDepan_2147("Karin", 18);
    InsertDepan_2147("Hoshino", 18);
    InsertDepan_2147("Akechi", 20); 
    InsertDepan_2147("Yusuke", 19);
    InsertDepan_2147("Michael", 18);
    InsertDepan_2147("Jane", 20);
    InsertDepan_2147("John", 19);
    InsertDepan_2147("Nanda", 19);
    Tampil_2147 ();

    // Poin b
    cout << " 2147   (B) Menghapus data 'Akechi'   2132 " << endl;
    HapusTengah_2147(6);
    Tampil_2147();

    // Poin c
    cout << " 2147   (C) Menambah data 'Futaba 18' diantara John & Jane   2132 " << endl;
    InsertTengah_2147("Futaba", 18, 3);
    Tampil_2147();

    // Poin d
    cout << " 2147   (D) Menambah data 'Igor 20' di awal   2132 " << endl;
    InsertDepan_2147("Igor", 20);
    Tampil_2147();

    // Poin e & f
    cout << " 2147   (E) Mengubah data 'Michael' menjadi 'Reyn (18)'   2132 " << endl;
    cout << "-=-=-= (F) Tampilan Akhir! =-=-=-" << endl;
    UbahTengah_2147("Reyn", 18, 6);
    Tampil_2147();

    return 0;
}