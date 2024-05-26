# <h1 align="center">Laporan Praktikum Modul Graf dan Pohon</h1>
<p align="center">Azaria Nanda Putri - 2311102147</p>

## Dasar Teori
Graf dan pohon adalah dua konsep dasar dalam teori graf yang digunakan untuk mewakili hubungan antara entitas. Graf adalah struktur data non-linear yang terdiri dari node atau vertex yang terhubung oleh sisi. Graf dapat berarah atau tidak berarah, tergantung pada apakah sisi memiliki arah atau tidak. Pada sisi lain, pohon adalah suatu jenis graf yang terhubung, tidak berarah, dan tidak memiliki sirkuit. Setiap node dalam pohon terhubung ke setiap node lainnya dengan jalan yang unik, dan tidak ada lebih dari satu jalan antara dua node. Graf pohon digunakan dalam berbagai aplikasi, seperti file system, XML document, dan lain-lain, sedangkan hutan adalah kumpulan pohon yang tidak saling terhubung dalam sebuah graf asiklik tak berarah.

### Graf
Graf atau graph adalah struktur data yang digunakan untuk merepresentasikan hubungan antara objek dalam bentuk node atau vertex dan sambungan antara node tersebut dalam bentuk sisi atau edge. Graph terdiri dari kumpulan simpul untuk menyimpan data, diantara dua buah simpul terdapat hubungan saling keterkaitan yang secara matematis dapat dinyatakan sebagai : G = (V, E) 
Dimana G adalah Graph, V adalah simpul atau vertex dan E sebagai sisi atau edge. 

![Screenshot Soal Unguided 1](ssunguided(1).png)

#### Jenis-jenis Graph

![Screenshot Soal Unguided 1](ssunguided(2).png)

Jenis-jenis graf yang umum dikenal meliputi:<br/>
1. *Graf Sederhana*: Graf ini tidak memiliki sisi ganda atau gelang. Setiap sisi hanya menghubungkan dua simpul dan setiap pasangan simpul terhubung oleh satu sisi saja.
2. *Graf Tak-Sederhana*: Graf ini bisa memiliki sisi ganda atau gelang. Sisi ganda berarti ada lebih dari satu sisi yang menghubungkan sepasang simpul, sementara gelang adalah sisi yang menghubungkan simpul ke dirinya sendiri.
3. *Graf Teratur*: Graf ini memiliki sifat di mana setiap simpul memiliki jumlah sisi yang sama. Misalnya, jika setiap simpul memiliki tiga sisi yang menghubungkannya dengan simpul lain, maka graf tersebut disebut graf 3-teratur.
4. *Graf Bipartisi*: Graf ini dapat dibagi menjadi dua kelompok simpul, di mana tidak ada sisi yang menghubungkan simpul-simpul dalam kelompok yang sama. Sisi-sisi hanya menghubungkan simpul dari kelompok yang berbeda.

Selain itu, graf juga dapat dibedakan berdasarkan arah tepinya:<br/>
1. *Graf Tak Berarah  (Undirected graph)*: Graf ini tidak memiliki arah pada sisi-sisinya. Artinya, jika ada sisi yang menghubungkan dua simpul, kita bisa bergerak di antara kedua simpul tersebut dalam kedua arah.
2. *Graf Berarah  (Directed Graph)*: Graf ini memiliki arah pada sisi-sisinya. Setiap sisi memiliki arah tertentu, sehingga kita hanya bisa bergerak dari satu simpul ke simpul lainnya sesuai arah yang ditentukan oleh sisi tersebut.

Graf juga dapat dikategorikan berdasarkan adanya bobot pada sisi-sisinya:<br/> 
1. *Graf Berbobot (Weighted Graph)*: Graf ini memiliki bobot atau nilai pada setiap sisi yang menghubungkan simpul. Bobot ini bisa merepresentasikan jarak, biaya, atau nilai lainnya yang relevan dalam konteks penggunaan graf tersebut.
2. *Graf Tidak Berbobot (Unweighted Graph)*: Graf ini tidak memiliki bobot pada sisi-sisinya. Sisi-sisi hanya menunjukkan hubungan antar simpul tanpa memberikan informasi tambahan mengenai jarak atau biaya.


Berikut adalah contoh soal untuk pencarian sekuensial beserta penjelasannya:

### Tree atau Pohon
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

### 1. Latihan Graph

```C++
#include <iostream>
#include <iomanip>

using namespace std;

string simpul[7] = {
    "Ciamis", "Bandung", "Bekasi", "Tasikmalaya", "Cianjur", "Purwokerto", "Yogyakarta"
};

int busur[7][7] = {
    {0, 7, 8, 0, 0 ,0 ,0},
    {0, 0, 5, 0, 0 , 15, 0},
    {0, 6, 0, 0 , 5, 0, 0},
    {0, 5, 0, 0, 2, 4, 0},
    {23, 0, 0, 10, 0, 0, 8},
    {0, 0, 0, 0, 7, 0, 3},
    {0, 0, 0, 0, 9, 4, 0}
};

void tampilGraph(){
    for (int baris = 0; baris < 7; baris++){
        cout << " " << setiosflags(ios::left) << setw(15) << simpul[baris] <<": ";
        for (int kolom = 0; kolom < 7; kolom++){
            if (busur[baris][kolom] != 0){
                cout << " " << simpul[kolom] << "(" << busur[baris][kolom] << ")";
            }
        }cout << endl;
    }
}

int main(){
    tampilGraph();
    return 0;
}
```
Program di atas adalah program C++ yang mendefinisikan dan menampilkan graf berarah menggunakan representasi matriks ketetanggaan. Program ini menggunakan dua array: simpul yang menyimpan nama-nama kota dan busur yang menyimpan bobot busur yang menghubungkan kota-kota tersebut. Fungsi 'tampilGraph' mencetak graf dengan menampilkan setiap kota dan koneksi-koneksinya beserta bobot masing-masing. Misalnya, jika ada busur dari "Ciamis" ke "Bandung" dengan bobot 7, maka itu akan ditampilkan sebagai "Bandung(7)". Program ini menampilkan informasi ini untuk semua kota yang ada di array simpul dan menampilkan hasilnya saat program dijalankan.

### 2. Latihan Tree

```C++
#include <iostream>
#include <iomanip>

using namespace std;

struct Pohon
{
    char data;
    Pohon *left, *right, *parent;
};

Pohon *root, *baru;

void init()
{
    root = NULL;
}

bool isEmpty()
{
    return root == NULL;
}

void buatNode(char data)
{
    if (isEmpty())
    {
        root = new Pohon();
        root->data = data;
        root->left = NULL;
        root->right = NULL;
        root->parent = NULL;
        cout << "\n Node " << data << " berhasil dibuat sebagai root."
             << endl;
    }
    else
    {
        cout << "\n Tree sudah ada!" << endl;
    }
}

Pohon *insertLeft(char data, Pohon *node)
{
    if (isEmpty())
    {
        cout << "\n Buat tree terlebih dahulu!" << endl;
        return NULL;
    }
    else
    {
        if (node->left != NULL)
        {
            cout << "\n Node " << node->data << " sudah ada child kiri !" << endl;
            return NULL;
        }
        else
        {
            Pohon *baru = new Pohon();
            baru->data = data;
            baru->left = NULL;
            baru->right = NULL;
            baru->parent = node;
            node->left = baru;
            cout << "\n Node " << data << " berhasil ditambahkan kechild kiri " << baru->parent->data << endl;
            return baru;
        }
    }
}

Pohon *insertRight(char data, Pohon *node)
{
    if (isEmpty())
    {
        cout << "\n Buat tree terlebih dahulu!" << endl;
        return NULL;
    }
    else
    {
        if (node->right != NULL)
        {
            cout << "\n Node " << node->data << " sudah ada child kanan !" << endl;
            return NULL;
        }
        else
        {
            Pohon *baru = new Pohon();
            baru->data = data;
            baru->left = NULL;
            baru->right = NULL;
            baru->parent = node;
            node->right = baru;
            cout << "\n Node " << data << " berhasil ditambahkan ke child kanan " << baru->parent->data << endl;
            return baru;
        }
    }
}

void update(char data, Pohon *node)
{
    if (isEmpty())
    {
        cout << "\n Buat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (!node)
        {
            cout << "\n Node yang ingin diganti tidak ada!!" << endl;
        }
        else
        {
            char temp = node->data;
            node->data = data;
            cout << "\n Node " << temp << " berhasil diubah menjadi "
                 << data << endl;
        }
    }
}

void retrieve(Pohon *node)
{
    if (isEmpty())
    {
        cout << "\n Buat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (!node)
        {
            cout << "\n Node yang ditunjuk tidak ada!" << endl;
        }
        else
        {
            cout << "\n Data node : " << node->data << endl;
        }
    }
}

void find(Pohon *node)
{
    if (isEmpty())
    {
        cout << "\n Buat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (!node)
        {
            cout << "\n Node yang ditunjuk tidak ada!" << endl;
        }
        else
        {
            cout << "\n Data Node : " << node->data << endl;
            cout << " Root : " << root->data << endl;
            if (!node->parent)
                cout << " Parent : (tidak punya parent)" << endl;
            else
                cout << " Parent : " << node->parent->data << endl;
            if (node->parent != NULL && node->parent->left != node &&
                node->parent->right == node)
                cout << " Sibling : " << node->parent->left->data << endl;
            else if (node->parent != NULL && node->parent->right != node && node->parent->left == node)
                cout << " Sibling : " << node->parent->right->data << endl;
            else
                cout << " Sibling : (tidak punya sibling)" << endl;
            if (!node->left)
                cout << " Child Kiri : (tidak punya Child kiri)" << endl;
            else
                cout << " Child Kiri : " << node->left->data << endl;
            if (!node->right)
                cout << " Child Kanan : (tidak punya Child kanan)" << endl;
            else
                cout << " Child Kanan : " << node->right->data << endl;
        }
    }
}

// Penelusuran (Traversal)
// preOrder
void preOrder(Pohon *node = root)
{
    if (isEmpty())
    {
        cout << "\n Buat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (node != NULL)
        {
            cout << " " << node->data << ", ";
            preOrder(node->left);
            preOrder(node->right);
        }
    }
}

// inOrder
void inOrder(Pohon *node = root)
{
    if (isEmpty())
    {
        cout << "\n Buat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (node != NULL)
        {
            inOrder(node->left);
            cout << " " << node->data << ", ";
            inOrder(node->right);
        }
    }
}

// postOrder
void postOrder(Pohon *node = root)
{
    if (isEmpty())
    {
        cout << "\n Buat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (node != NULL)
        {
            postOrder(node->left);
            postOrder(node->right);
            cout << " " << node->data << ", ";
        }
    }
}

// Hapus Node Tree
void deleteTree(Pohon *node)
{
    if (isEmpty())
    {
        cout << "\n Buat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (node != NULL)
        {
            if (node != root)
            {
                node->parent->left = NULL;
                node->parent->right = NULL;
            }
            deleteTree(node->left);
            deleteTree(node->right);
            if (node == root)
            {
                delete root;
                root = NULL;
            }
            else
            {
                delete node;
            }
        }
    }
}

// Hapus SubTree
void deleteSub(Pohon *node)
{
    if (isEmpty())
    {
        cout << "\n Buat tree terlebih dahulu!" << endl;
    }
    else
    {
        deleteTree(node->left);
        deleteTree(node->right);
        cout << "\n Node subtree " << node->data << " berhasil dihapus." << endl;
    }
}

void clear()
{
    if (isEmpty())
    {
        cout << "\n Buat tree terlebih dahulu!!" << endl;
    }
    else
    {
        deleteTree(root);
        cout << "\n Pohon berhasil dihapus." << endl;
    }
}

// Cek Size Tree
int size(Pohon *node = root)
{
    if (isEmpty())
    {
        cout << "\n Buat tree terlebih dahulu!!" << endl;
        return 0;
    }
    else
    {
        if (!node)
        {
            return 0;
        }
        else
        {
            return 1 + size(node->left) + size(node->right);
        }
    }
}

// Cek Height Level Tree
int height(Pohon *node = root)
{
    if (isEmpty())
    {
        cout << "\n Buat tree terlebih dahulu!" << endl;
        return 0;
    }
    else
    {
        if (!node)
        {
            return 0;
        }
        else
        {
            int heightKiri = height(node->left);
            int heightKanan = height(node->right);
            if (heightKiri >= heightKanan)
            {
                return heightKiri + 1;
            }
            else
            {
                return heightKanan + 1;
            }
        }
    }
}

// Karakteristik Tree
void characteristic()
{
    cout << "\n Size Tree : " << size() << endl;
    cout << " Height Tree : " << height() << endl;
    cout << " Average Node of Tree : " << size() / height() << endl;
}

int main()
{
    buatNode('A');
    Pohon *nodeB, *nodeC, *nodeD, *nodeE, *nodeF, *nodeG, *nodeH, *nodeI, *nodeJ;
    nodeB = insertLeft('B', root);
    nodeC = insertRight('C', root);
    nodeD = insertLeft('D', nodeB);
    nodeE = insertRight('E', nodeB);
    nodeF = insertLeft('F', nodeC);
    nodeG = insertLeft('G', nodeE);
    nodeH = insertRight('H', nodeE);
    nodeI = insertLeft('I', nodeG);
    nodeJ = insertRight('J', nodeG);
    update('Z', nodeC);
    update('C', nodeC);
    retrieve(nodeC);
    find(nodeC);

    cout << "\n PreOrder :" << endl;
    preOrder(root);
    cout << "\n"<< endl;

    cout << " InOrder :" << endl;
    inOrder(root);
    cout << "\n" << endl;

    cout << " PostOrder :" << endl;
    postOrder(root);
    cout << "\n" << endl;

    characteristic();
    deleteSub(nodeE);
    cout << "\n PreOrder :" << endl;
    preOrder();
    cout << "\n" << endl;

    characteristic();
}
```
Program ini adalah implementasi dari algoritma Binary Search untuk mencari sebuah nilai dalam array yang telah diurutkan menggunakan algoritma Selection Sort.
- Array pada 'dataArray' berisi data yang akan dicari, data ini akan diurutkan menggunakan algoritma Selection Sort sebelum dilakukan pencarian.
- Mengurutkan array dataArray menggunakan algoritma Selection_Sort().
- Melakukan pencarian nilai cari dalam array yang telah diurutkan menggunakan algoritma Binary Search.
- Jika nilai ditemukan, akan menampilkan indeks tempat nilai ditemukan.
- Jika nilai tidak ditemukan, akan menampilkan pesan bahwa nilai tidak ditemukan.
- Menampilkan data awal yang belum diurutkan.
- Meminta input dari pengguna untuk nilai yang dicari.
- Mengurutkan data menggunakan Selection_Sort().
- Menampilkan data yang telah diurutkan.
- Melakukan pencarian menggunakan BinarySearch().
- Menahan tampilan layar dengan _getche() sebelum program selesai. 

Program ini memanfaatkan dua algoritma yang berbeda: Selection Sort untuk mengurutkan data dan Binary Search untuk mencari data. Ini adalah contoh yang baik tentang bagaimana algoritma berbeda dapat digabungkan untuk menyelesaikan masalah tertentu. 

## Unguided 

## 1. Buatlah sebuah program untuk mencari sebuah huruf pada sebuah kalimat yang sudah di input dengan menggunakan Binary Search!

```C++
#include <iostream>
#include <conio.h>  // Jika menggunakan Windows. Untuk sistem operasi lain, perlu mencari pengganti dari _getche()
#include <cstring>

using namespace std;

// Fungsi untuk melakukan pencarian binary pada array karakter
int binarySearch_2147(char arr[], int indices[], int size, char target) {
    int left = 0;
    int right = size - 1;

    // Melakukan binary search selama left tidak melebihi right
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Jika huruf target berada di tengah array
        if (arr[mid] == target)
            return indices[mid];

        // Jika huruf target berada di sebelah kiri tengah array
        if (arr[mid] > target)
            right = mid - 1;

        // Jika huruf target berada di sebelah kanan tengah array
        else
            left = mid + 1;
    }

    // Jika huruf target tidak ditemukan
    return -1;
}
// Fungsi untuk melakukan selection sort pada array karakter
void selectionSort_2147(char arr[], int indices[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIdx = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        // Menukar elemen minimum dengan elemen pertama
        swap(arr[i], arr[minIdx]);
        swap(indices[i], indices[minIdx]);
    }
}

int main() {
    string sentence;
    char target;
    cout << "147--Azaria Nanda Binary Search--147" << endl;
    cout << "Masukkan kalimat: ";
    getline(cin, sentence);

    // Membuat array untuk menyimpan karakter dan indeks asli mereka
    int len = sentence.size();
    char charArray[100];
    int indices[100];
    int size = 0;

    for (int i = 0; i < len; ++i) {
        if (sentence[i] != ' ') {  // Mengabaikan spasi
            charArray[size] = sentence[i];
            indices[size] = i;
            ++size;
        }
    }

    // Mengurutkan array karakter menggunakan selection sort
    selectionSort_2147(charArray, indices, size);

    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> target;

    // Mencari huruf dalam array yang telah diurutkan
    int index = binarySearch_2147(charArray, indices, size, target);

    if (index != -1) {
        cout << "Huruf '" << target << "' ditemukan pada indeks ke-" << index << " dalam kalimat." << endl;
    } else {
        cout << "Huruf '" << target << "' tidak ditemukan dalam kalimat." << endl;
    }

    _getche();  // Hanya untuk Windows. Jika menggunakan OS lain, gunakan pengganti sesuai kebutuhan
    return 0;
}
```
Program ini ditulis dalam bahasa C++ dan bertujuan untuk mencari posisi suatu huruf dalam sebuah kalimat yang diinput oleh pengguna. Program ini menggunakan metode pencarian biner (binary search) setelah terlebih dahulu mengurutkan karakter dalam kalimat menggunakan metode selection sort. Berikut adalah deskripsi rinci dari setiap bagian program:

Fungsi Utama pada program yaitu binarySearch_2147 untuk melakukan pencarian biner pada array karakter yang sudah diurutkan, pada binarySearch_2147 juga terdapat fungsi utama yang tidak kalah penting, yaitu:
- arr[]: Array karakter yang akan dicari.
- indices[]: Array yang menyimpan indeks asli dari setiap karakter sebelum diurutkan.
- size: Ukuran dari array arr[].
- target: Karakter yang akan dicari.
- Fungsi ini mengembalikan indeks asli dari target jika ditemukan dalam kalimat. Jika tidak ditemukan, fungsi mengembalikan -1.

Fungsi selectionSort_2147 ini melakukan pengurutan array karakter menggunakan metode selection sort.
- arr[]: Array karakter yang akan diurutkan.
- indices[]: Array yang menyimpan indeks asli dari setiap karakter.
- size: Ukuran dari array arr[]. 
Setelah itu program meminta pengguna memasukkan kalimat, dan program mencetak posisi asli huruf jika ditemukan atau pesan jika tidak ditemukan, serta menunggu input pengguna sebelum berakhir dengan `_getche()`. Jika huruf ditemukan, program mencetak posisi asli dari huruf tersebut dalam kalimat. Jika tidak ditemukan, program mencetak pesan bahwa huruf tidak ditemukan. 

## Output:
![Screenshot Soal Unguided 1](ssunguided(1).png)

## 2. Buatlah sebuah program yang dapat menghitung banyaknya huruf vocal dalam sebuah kalimat!

```C++
#include <iostream>
#include <string>
using namespace std;

// Fungsi untuk memeriksa apakah sebuah karakter adalah vokal
bool isVowel_2147(char ch) {
    // Konversi karakter menjadi huruf kecil
    ch = tolower(ch);
    // Periksa apakah karakter adalah salah satu dari 'a', 'e', 'i', 'o', 'u'
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

// Fungsi untuk menghitung banyaknya huruf vokal dalam sebuah kalimat
int countVowels_2147(const string &sentence) {
    int count = 0;
    for (char ch : sentence) {
        if (isVowel_2147(ch)) {
            count++;
        }
    }
    return count;
}
int main() {
    string sentence;
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, sentence); // Membaca input kalimat dari pengguna

    int vowelCount = countVowels_2147(sentence);
    cout << "Banyaknya huruf vokal dalam kalimat adalah: " << vowelCount << endl;

    return 0;
}
```
Program ini ditulis dalam bahasa C++ untuk menghitung jumlah huruf vokal dalam sebuah kalimat yang diinput oleh pengguna. Program menggunakan
- fungsi isVowel_2147 untuk memeriksa apakah sebuah karakter adalah vokal dengan mengonversinya menjadi huruf kecil dan memeriksa apakah karakter tersebut termasuk dalam 'a', 'e', 'i', 'o', atau 'u'.
- Fungsi countVowels_2147 iterasi melalui setiap karakter dalam kalimat, menggunakan isVowel_2147 untuk menghitung jumlah vokal. 
Setelah itu program meminta pengguna memasukkan kalimat, kemudian menghitung dan menampilkan jumlah huruf vokal dalam kalimat tersebut.

## Output:
![Screenshot Soal Unguided 1](ssunguided(2).png)

##  3. Diketahui data = 9, 4, 1, 4, 7, 10, 5, 4, 12, 4. Hitunglah berapa banyak angka 4 dengan menggunakan algoritma Sequential Search!

```C++
#include <iostream>

using namespace std;

int main(){
    int n = 10;
    int data[n] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int target = 4;
    int count = 0;

    // Melakukan pencarian sequential untuk menghitung banyaknya angka 4
    for (int i = 0; i < n; i++) {
        if (data[i] == target) {
            count++;
        }
    }
    cout << "--Program Sequential Search Azaria Nanda Putri--" << endl;
    cout << "data : {9, 4, 1, 4, 7, 10, 5, 4, 12, 4}" << endl;
    cout << "Angka " << target << " ditemukan sebanyak " << count << " kali." << endl;

return 0;
}
```
Program diatas adalah program sederhana yang ditulis dalam bahasa C++ dan bertujuan untuk menghitung berapa kali angka 4 muncul dalam array data yang telah ditentukan sebelumnya. Dengan menggunakan sequential search, program iterasi melalui seluruh elemen dalam array dan menghitung setiap kemunculan angka 4. Hasilnya kemudian dicetak sebagai output bersama dengan pesan yang menjelaskan berapa kali angka 4 muncul dalam array.

## Ouput
![Screenshot Soal Unguided 1](ssunguided(5).png)

## Kesimpulan
- Algortima Sequential Search adalah metode pencarian data semantik yang menggunakan teknologi array satu dimensi untuk melakukan proses pencarian tanpa perlu melakukan pengurutan data terlebih dahulu. Dalam pencarian ini, setiap elemen array dibaca satu per satu dari indeks terkecil hingga terbesar, atau sebaliknya. Proses berhenti saat data ditemukan atau mencapai akhir array. Algoritma ini sederhana dan cocok untuk data yang acak atau tidak terurut. 

- Sedangkan Binary Search adalah algoritma pencarian yang cocok untuk data terurut. Pencarian dilakukan dengan membandingkan data yang dicari dengan data di tengah, dan prosesnya berlanjut pada bagian kiri atau kanan dari data tengah tergantung pada hasil perbandingan. Binary Search efisien karena membagi data menjadi dua setiap iterasi, namun memerlukan data terurut sebelumnya.

## Referensi
[1] Kartiko Ardi Widodo, Suryo Adi Wibowo, dan Nurlaily Vendyansyah. "PENERAPAN SEQUENTIAL SEARCH UNTUK 
PENGELOLAAN DATA BARANG", Vol. 15 No. 1 Mei 2021, <br/>
[2] Wafiqah Setyawati Wahyuni, Septi Andryana, Ben Rahman. "PENGGUNAAN ALGORITMA SEQUENTIAL SEARCHING PADA 
APLIKASI PERPUSTAKAAN BERBASIS WEB ", JIPI (Jurnal Ilmiah Penelitian dan Pembelajaran Informatika) Volume 07, Nomor 02, Juni 2022.<br/>
[3] Meidyan Permata Putri, et al., Algoritma dan Struktur Data. Bandung: Widina Bhakti Persada Bandung, 2022.<br/>

