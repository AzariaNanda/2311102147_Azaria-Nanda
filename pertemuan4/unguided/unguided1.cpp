#include <iostream>
#include <iomanip>

using namespace std;

// Deklarasi struct node
struct Node
{
    string Nama_147;
    long long int NIM_147;
    Node *next;
};

Node *head = nullptr; // Deklarasi head
Node *tail = nullptr; // Deklarasi tail

// Inisialisasi Node
void Inisialisasi_147()
{
    head = nullptr;
    tail = nullptr;
}

// Pengecekkan apakah linked list kosong
bool isEmpty_147()
{
    return head == nullptr;
}

// Tambah depan
void InsertDepan_147(string nama_147, long long int nim_147)
{
    Node *baru = new Node();
    baru->Nama_147 = nama_147;
    baru->NIM_147 = nim_147;
    baru->next = nullptr;

    if (isEmpty_147())
    {
        head = tail = baru;
    }
    else
    {
        baru->next = head;
        head = baru;
    }
}

// Tambah belakang
void insertBelakang_147(string nama_147, long long int nim_147)
{
    Node *baru = new Node();
    baru->Nama_147 = nama_147;
    baru->NIM_147 = nim_147;
    baru->next = nullptr;

    if (isEmpty_147())
    {
        head = tail = baru;
    }
    else
    {
        tail->next = baru;
        tail = baru;
    }
}

// Hitung jumlah list
int hitungList_147()
{
    Node *hitung = head;
    int jumlah = 0;
    while (hitung != nullptr)
    {
        jumlah++;
        hitung = hitung->next;
    }
    return jumlah;
}

// Tambah tengah
void insertTengah_147(string nama_147, long long int nim_147, int posisi)
{
    if (posisi < 1 || posisi > hitungList_147())
    {
        cout << "Posisi di luar jangkauan" << endl;
        return;
    }
    else if (posisi == 1)
    {
        cout << "Posisi bukan posisi tengah" << endl;
        return;
    }
    else
    {
        Node *baru = new Node();
        baru->Nama_147 = nama_147;
        baru->NIM_147 = nim_147;

        Node *bantu = head;
        for (int i = 1; i < posisi - 1; i++)
        {
            bantu = bantu->next;
        }

        baru->next = bantu->next;
        bantu->next = baru;
    }
}

// Hapus depan
void hapusDepan_147()
{
    if (!isEmpty_147())
    {
        Node *hapus = head;
        if (head->next != nullptr)
        {
            head = head->next;
        }
        else
        {
            head = tail = nullptr;
        }
        delete hapus;
    }
    else
    {
        cout << "Linked list masih kosong" << endl;
    }
}

// Hapus belakang
void hapusBelakang_147()
{
    if (!isEmpty_147())
    {
        Node *hapus = tail;
        if (head != tail)
        {
            Node *bantu = head;
            while (bantu->next != tail)
            {
                bantu = bantu->next;
            }
            tail = bantu;
            tail->next = nullptr;
        }
        else
        {
            head = tail = nullptr;
        }
        delete hapus;
    }
    else
    {
        cout << "Linked list masih kosong" << endl;
    }
}

// Hapus tengah
void hapusTengah_147(int posisi)
{
    if (posisi < 1 || posisi > hitungList_147())
    {
        cout << "Posisi di luar jangkauan" << endl;
        return;
    }
    else if (posisi == 1)
    {
        cout << "Posisi bukan posisi tengah" << endl;
        return;
    }
    else
    {
        Node *hapus, *bantu;
        bantu = head;
        for (int i = 1; i < posisi - 1; i++)
        {
            bantu = bantu->next;
        }
        hapus = bantu->next;
        bantu->next = hapus->next;
        delete hapus;
    }
}

// Ubah depan
void ubahDepan_147(string nama_147, long long int nim_147)
{
    if (!isEmpty_147())
    {
        head->Nama_147 = nama_147;
        head->NIM_147 = nim_147;
    }
    else
    {
        cout << "Linked list masih kosong" << endl;
    }
}

// Ubah tengah
void ubahTengah_147(string nama_147, long long int nim_147, int posisi)
{
    if (!isEmpty_147())
    {
        if (posisi < 1 || posisi > hitungList_147())
        {
            cout << "Posisi di luar jangkauan" << endl;
            return;
        }
        else if (posisi == 1)
        {
            cout << "Posisi bukan posisi tengah" << endl;
            return;
        }
        else
        {
            Node *bantu = head;
            for (int i = 1; i < posisi; i++)
            {
                bantu = bantu->next;
            }
            bantu->Nama_147 = nama_147;
            bantu->NIM_147 = nim_147;
        }
    }
    else
    {
        cout << "Linked list masih kosong" << endl;
    }
}

// Ubah belakang
void ubahBelakang_147(string nama_147, long long int nim_147)
{
    if (!isEmpty_147())
    {
        tail->Nama_147 = nama_147;
        tail->NIM_147 = nim_147;
    }
    else
    {
        cout << "Linked list masih kosong" << endl;
    }
}

// Hapus list
void clearList_147()
{
    Node *bantu = head;
    while (bantu != nullptr)
    {
        Node *hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }
    head = tail = nullptr;
    cout << "List berhasil terhapus!" << endl;
}

// Tampilkan list
void tampilList_147()
{
    if (!isEmpty_147())
    {
        cout << "------------ 2147 TAMPILKAN 2147 ---------------" << endl;
        cout << "----------------------------------------" << endl;
        cout << left << setw(20) << "| Nama" << "| NIM" << endl;
        cout << "----------------------------------------" << endl;
        Node *bantu = head;
        while (bantu != nullptr)
        {
            cout << left << setw(20) << "| " + bantu->Nama_147 << "| " << bantu->NIM_147 << endl;
            bantu = bantu->next;
        }

        cout << "----------------------------------------" << endl;
    }
    else
    {
        cout << "------------ 2147 TAMPILKAN 2147 ---------------" << endl;
        cout << "----------------------------------------" << endl;
        cout << left << setw(20) << "| Nama" << "| NIM" << endl;
        cout << "----------------------------------------" << endl;
        cout << left << setw(20) << "| (NULL)" << "| (NULL) " << endl;
        cout << "----------------------------------------" << endl;
    }
}

int main()
{
    string nama_147;
    long long int nim_147;
    int posisi;

    Inisialisasi_147();

    cout << "========== PROGRAM SINGLE LINKED LIST NON-CIRCULAR ==========" << endl;

    while (true)
    {
        cout << "|-------------------------|" << endl; 
        cout << "|1. menambah data di depan|" << endl; 
        cout << "|-------------------------|" << endl;       
        cout << "|2. menambah data di Belakang|" << endl;
        cout << "|-------------------------|" << endl;       
        cout << "|3. menambah data di Tengah|" << endl;
        cout << "|-------------------------|" << endl;       
        cout << "|5. mengubah data di belakang|" << endl;
        cout << "|-------------------------|" << endl;       
        cout << "|6. mengubah data di Tengah|" << endl;
        cout << "|-------------------------|" << endl;       
        cout << "|7. menghapus data di depan|" << endl;
        cout << "|-------------------------|" << endl;       
        cout << "|8. menghapus data di belakang|" << endl;
        cout << "|-------------------------|" << endl;       
        cout << "|9. menghapus data di tengah|" << endl;
        cout << "|-------------------------|" << endl;       
        cout << "|10.Hapus List|" << endl;
        cout << "|-------------------------|" << endl;       
        cout << "|11. Menampilkan Data|" << endl;
        cout << "|-------------------------|" << endl;       
        cout << "|0. Keluar|" << endl;
        cout << "------------------------------------------" << endl;
        int pilihan;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            cout << "Masukkan Nama: ";
            cin >> nama_147;   
            cout << "Masukkan NIM: ";
            cin >> nim_147;
            InsertDepan_147(nama_147, nim_147);     
            cout << "Data [" << nama_147 << "] berhasil ditambahkan di depan! " << endl;
            break;

        case 2:
            cout << "Masukkan Nama: ";  
            cin >> nama_147;
            cout << "Masukkan NIM: ";
            cin >> nim_147;       
            insertBelakang_147(nama_147, nim_147);
            cout << "Data [" << nama_147 << "] berhasil ditambahkan di belakang! " << endl;
            break;

        case 3:
            cout << "Masukkan posisi: ";
            cin >> posisi;
            cout << "Masukkan nama: ";
            cin >> nama_147;
            cout << "Masukkan NIM: ";
            cin >> nim_147;
            insertTengah_147(nama_147, nim_147, posisi);
            cout << "Data [" << nama_147 << "] berhasil ditambahkan di posisi ke-" << posisi << "!" << endl;
            break;

        case 4:
            cout << "Masukkan nama: ";
            cin >> nama_147;
            cout << "Masukkan NIM: ";
            cin >> nim_147;
            ubahDepan_147(nama_147, nim_147);
            cout << "Data depan berhasil diubah!" << endl;
            break;

        case 5:
            cout << "Masukkan nama: ";
            cin >> nama_147;
            cout << "Masukkan NIM: ";
            cin >> nim_147;
            ubahBelakang_147(nama_147, nim_147);
            cout << "Data belakang berhasil diubah!" << endl;
            break;

        case 6:
            cout << "Masukkan posisi: ";
            cin >> posisi;
            cout << "Masukkan nama: ";
            cin >> nama_147;
            cout << "Masukkan NIM: ";
            cin >> nim_147;
            ubahTengah_147(nama_147, nim_147, posisi);
            cout << "Data di posisi ke-" << posisi << " berhasil diubah!" << endl;
            break;

        case 7:
            hapusDepan_147();
            cout << "Data depan berhasil dihapus!" << endl;
            break;

        case 8:
            hapusBelakang_147();
            cout << "Data belakang berhasil dihapus!" << endl;
            break;

        case 9:
            cout << "Masukkan posisi: ";
            cin >> posisi;
            hapusTengah_147(posisi);
            cout << "Data di posisi ke-" << posisi << " berhasil dihapus!" << endl;
            break;

        case 10:
            clearList_147();
            cout << "Semua data berhasil dihapus!" << endl;
            break;

        case 11:
            tampilList_147();
            break;

        case 0:
            cout << "Program selesai!" << endl;
            return 0;

        default:
            cout << "Pilihan tidak tersedia!" << endl;
            break;
        }
    }

    return 0;
}