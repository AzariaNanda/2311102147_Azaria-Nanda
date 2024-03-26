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