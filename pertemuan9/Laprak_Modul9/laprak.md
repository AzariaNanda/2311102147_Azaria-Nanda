# <h1 align="center">Laporan Praktikum Modul Graph dan Pohon</h1>
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

#### Representasi Graph dengan Matriks
![Screenshot Soal Unguided 1](ssunguided(3).png)

#### Representasi Graph dengan Linked List
![Screenshot Soal Unguided 1](ssunguided(5).png)

![Screenshot Soal Unguided 1](ssunguided(4).png)

### Tree atau Pohon
Pohon (tree) adalah struktur data yang sangat umum dan kuat yang menyerupai pohon di alam. Pohon terdiri dari satu set node yang terhubung dan tertaut dalam grafik terurut, di mana setiap node memiliki paling banyak satu simpul induk, dan dapat memiliki nol atau lebih simpul anak dengan urutan tertentu. Struktur data pohon digunakan untuk menyimpan data hirarkis seperti struktur keluarga, skema pertandingan, dan struktur organisasi. Dengan analogi yang kuat dengan pohon di alam, struktur data pohon memungkinkan penyimpanan dan manipulasi data dengan cara yang terstruktur dan terorganisir. Istilah dalam struktur data tree dapat dirangkum 
sebagai berikut :

![Screenshot Soal Unguided 1](ssunguided(6).png)

#### Operasi pada Tree 
- *Create*: Ini seperti kita sedang membuat ruang kosong untuk menaruh elemen-elemen baru. Jika kita membayangkan sebuah rumah, Create adalah seperti membuka pintu masuk ke dalam rumah yang masih kosong, siap untuk diisi dengan perabotan atau dekorasi.
  
- *Clear*: Bayangkan kita sedang membersihkan seluruh isi rumah dari perabotan, dekorasi, dan barang-barang lainnya. Clear dalam binary tree adalah seperti membereskan seluruh node yang ada di dalamnya, membuatnya kembali kosong seperti semula.
  
- *isEmpty*: Fungsinya seperti mengecek apakah rumah tersebut kosong atau tidak. Jika rumah kosong, kita mungkin harus melakukan pembangunan kembali. Dalam binary tree, isEmpty menunjukkan apakah tree tersebut tidak memiliki node sama sekali atau tidak.
  
- *Insert*: Ketika kita ingin menambahkan kursi atau meja baru ke dalam rumah, kita memasukkannya ke dalam ruangan yang tepat. Insert pada binary tree adalah cara kita menambahkan node baru ke dalam struktur, pastikan ditempatkan di tempat yang sesuai dengan aturan struktur pohon biner.
  
- *Find*: Ini adalah seperti kita mencari-cari di dalam rumah untuk menemukan informasi tentang sebuah barang atau ruangan. Dalam binary tree, Find membantu kita menemukan informasi tentang root, parent, left child, atau right child dari suatu node.
  
- *Update*: Bayangkan kita ingin mengganti sofa lama dengan yang baru di dalam rumah. Update pada binary tree adalah cara kita mengubah nilai atau isi dari suatu node yang sudah ada dengan nilai baru.
  
- *Retrieve*: Ketika kita ingin mengetahui informasi detail tentang sebuah barang di rumah, Retrieve membantu kita untuk mengetahui isi dari node yang ditunjuk oleh pointer current.
  
- *Delete Sub*: Jika kita ingin membersihkan atau menghapus seluruh isi sebuah kamar di rumah, Delete Sub pada binary tree membantu kita untuk menghapus sebuah subtree (node beserta seluruh descendant-nya) yang ditunjuk pointer current.
  
- *Characteristic*: Ini adalah seperti kita sedang mengukur atau mengetahui berbagai karakteristik rumah seperti ukuran, tinggi, atau panjang rata-rata. Dalam binary tree, characteristic membantu kita mengetahui ukuran (jumlah node), tinggi (jumlah level dari root ke leaf terjauh), serta rata-rata panjang (ukuran dibagi tinggi) dari pohon biner tersebut.
  
- *Traverse*: Ini adalah seperti kita sedang melakukan perjalanan atau eksplorasi di seluruh ruang rumah untuk melihat setiap detailnya. Dalam binary tree, Traverse membantu kita mengunjungi seluruh node-node pada tree dengan cara traversal tertentu seperti pre-order, in-order, atau post-order.

Terdapat 3 metode traversal yang dibahas dalam modul ini yakni Pre-Order, In-Order, dan Post-Order:
#### Pre-Order 
Penelusuran secara pre-order memiliki alur:<br/>
    a. Cetak data pada simpul root<br/>
    b. Secara rekursif mencetak seluruh data pada subpohon kiri<br/>
    c. Secara rekursif mencetak seluruh data pada subpohon kanan<br/>
#### In-Order 
Penelusuran secara in-order memiliki alur:<br/>
    a. Secara rekursif mencetak seluruh data pada subpohon kiri<br/>
    b. Cetak data pada root<br/>
    c. Secara rekursif mencetak seluruh data pada subpohon kanan<br/>
#### Post Order 
Penelusuran secara in-order memiliki alur:<br/>
    a. Secara rekursif mencetak seluruh data pada subpohon kiri<br/> 
    b. Secara rekursif mencetak seluruh data pada subpohon kanan <br/>
    c. Cetak data pada root<br/>

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
Program ini mengimplementasikan struktur data pohon biner dalam C++. Program ini mencakup berbagai fungsi untuk memanipulasi pohon biner, seperti membuat node, menambahkan node ke kiri atau kanan, memperbarui nilai node, menampilkan data node, dan mencari node tertentu. Selain itu, program ini juga menyediakan metode untuk menelusuri pohon dengan tiga cara (pre-order, in-order, dan post-order) serta menghitung ukuran dan tinggi pohon. Fungsi lain termasuk menghapus seluruh pohon atau subpohon tertentu, serta menampilkan karakteristik pohon seperti ukuran dan rata-rata node per level. Pada bagian akhir program, terdapat demonstrasi penggunaan berbagai fungsi ini dengan membangun sebuah pohon, melakukan beberapa operasi pada node, dan menampilkan hasil penelusuran serta karakteristik pohon.

## Unguided 

## 1. Buatlah program graph dengan menggunakan inputan user untuk menghitung jarak dari sebuah kota ke kota lainnya. Yang memiliki output program seperti dibawah ini :

```C++
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int MAX_CITIES = 10; //Maksimal banyak data yang dapat ditampung pada variabel MAX_CITIES untuk struct Graph

struct Graph {
    string cityNames[MAX_CITIES]; // Banyaknya data string yang dapat disimpan dalam string sesuai dengan kapasitas MAX_CITIES
    int adjacencyMatrix[MAX_CITIES][MAX_CITIES]; // Menggunakan array 2 dimensi, dengan ukuran maksimal sesuai MAX_CITIES
    int numCities; // Variabel yang digunakan untuk menyimpan jumlah kota dalam graph
};

void printMatrix(const Graph& graph) {
    cout << setw(10) << " ";
    for (int i = 0; i < graph.numCities; i++) {
        cout << setw(10) << graph.cityNames[i];
    }
    cout << endl;

    for (int i = 0; i < graph.numCities; i++) {
        cout << setw(10) << graph.cityNames[i];
        for (int j = 0; j < graph.numCities; j++) {
            cout << setw(10) << graph.adjacencyMatrix[i][j];
        }
        cout << endl;
    }
}

int main() {
    Graph graph;
    cout << "\n===== Aplikasi Jarak Antar Kota =====" << endl;
    cout << "Silahkan masukan jumlah simpul: ";
    cin >> graph.numCities;
    cin.ignore(); // Mengabaikan karakter newline yang tersisa

    for (int i = 0; i < graph.numCities; i++) {
        cout << "Simpul " << i + 1 << ": ";
        getline(cin, graph.cityNames[i]);
    }

    cout << "Silahkan masukan bobot antar simpul" << endl;
    for (int i = 0; i < graph.numCities; i++) {
        for (int j = 0; j < graph.numCities; j++) {
            cout << graph.cityNames[i] << " ---> " << graph.cityNames[j] << " = ";
            cin >> graph.adjacencyMatrix[i][j];
        }
    }

    cout << endl;
    printMatrix(graph);

    return 0;
}
```
Program C++ di atas adalah representasi graf yang menghitung jarak antar kota berdasarkan input manual dari pengguna. Program ini mendeklarasikan variabel MAX_CITIES dengan kapasitas maksimal 10 kota. Struktur `Graph` menyimpan nama kota sebagai string, matriks ketetanggaan dua dimensi, dan jumlah kota. Fungsi `printMatrix` digunakan untuk menampilkan data graf dengan dua loop `for`. Loop pertama iterasi melalui semua kota, menampilkan nama kota dengan lebar 10 karakter. Loop kedua menampilkan nama kota dan elemen matriks ketetanggaan, yang menunjukkan hubungan antar kota. Pada fungsi `main`, program mendeklarasikan struktur `Graph` bernama `graph`, meminta jumlah kota dari pengguna, dan mengabaikan karakter newline dengan `cin.ignore`. Dua loop `for` berikutnya meminta input nama kota dan bobot antar kota. Akhirnya, program menampilkan data graf menggunakan fungsi `printMatrix` dengan parameter `graph`.

## Output:
![Screenshot Soal Unguided 1](ssunguided(7).png)

## 2. Modifikasi guided tree diatas dengan program menu menggunakan input data tree dari user dan berikan fungsi tambahan untuk menampilkan node child dan descendant dari node yang diinput kan!

```C++
#include <iostream>
using namespace std;

struct Pohon {
    char data;
    Pohon *left, *right, *parent; // pointer
};
Pohon *root;

void init() {
    root = NULL;
}
bool isEmpty() {
    return root == NULL;
}
Pohon *newPohon(char data) {
    Pohon *node = new Pohon();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    node->parent = NULL;
    return node;
}
void buatNode(char data) {
    if (isEmpty()) {
        root = newPohon(data);
        cout << "\nNode " << data << " berhasil dibuat menjadi root." << endl;
    } else {
        cout << "\nPohon sudah dibuat" << endl;
    }
}
Pohon *insertLeft(char data, Pohon *node) {
    if (isEmpty()) {
        cout << "\nBuat pohonnya dulu!" << endl;
        return NULL;
    } else {
        if (node->left != NULL) {
            cout << "\nNode " << node->data << " sudah ada child kiri!" << endl;
            return NULL;
        } else {
            Pohon *baru = newPohon(data);
            baru->parent = node;
            node->left = baru;
            cout << "\nNode " << data << " berhasil ditambahkan ke child kiri " << node->data << endl;
            return baru;
        }
    }
}
Pohon *insertRight(char data, Pohon *node) {
    if (isEmpty()) {
        cout << "\nBuat pohonnya dulu!" << endl;
        return NULL;
    } else {
        if (node->right != NULL) {
            cout << "\nNode " << node->data << " sudah ada di child kanan!" << endl;
            return NULL;
        } else {
            Pohon *baru = newPohon(data);
            baru->parent = node;
            node->right = baru;
            cout << "\nNode " << data << " berhasil ditambahkan ke child kanan " << node->data << endl;
            return baru;
        }
    }
}
void update(char data, Pohon *node) {
    if (isEmpty()) {
        cout << "\nBuat pohonya dulu!" << endl;
    } else {
        if (!node)
            cout << "\nNode yang mau diganti gak ada!!" << endl;
        else {
            char temp = node->data;
            node->data = data;
            cout << "\nNode " << temp << " berhasil diubah menjadi " << data << endl;
        }
    }
}
void retrieve(Pohon *node) {
    if (isEmpty()) {
        cout << "\nBuat pohonnya dulu!" << endl;
    } else {
        if (!node)
            cout << "\nNode yang ditunjuk gak ada!" << endl;
        else {
            cout << "\nData node : " << node->data << endl;
        }
    }
}
void find(Pohon *node) {
    if (isEmpty()) {
        cout << "\nBuat Pohonnya dulu!" << endl;
    } else {
        if (!node)
            cout << "\nNode yang ditunjuk gak ada!" << endl;
        else {
            cout << "\nData Node : " << node->data << endl;
            cout << "Root : " << root->data << endl;
            if (!node->parent)
                cout << "Parent : (tidak punya parent)" << endl;
            else
                cout << "Parent : " << node->parent->data << endl;
            if (node->parent != NULL && node->parent->left != node && node->parent->right == node)
                cout << "Sibling : " << node->parent->left->data << endl;
            else if (node->parent != NULL && node->parent->right != node && node->parent->left == node)
                cout << "Sibling : " << node->parent->right->data << endl;
            else
                cout << "Sibling : (tidak punya sibling)" << endl;
            if (!node->left)
                cout << "Child Kiri : (tidak punya Child kiri)" << endl;
            else
                cout << "Child Kiri : " << node->left->data << endl;
            if (!node->right)
                cout << "Child Kanan : (tidak punya Child kanan)" << endl;
            else
                cout << "Child Kanan : " << node->right->data << endl;
        }
    }
}
void showChild(Pohon *node) {
    if (isEmpty()) {
        cout << "\n Buat treenya dulu!" << endl;
    } else {
        if (!node) {
            cout << "\nNode yang ditunjuk gak ada!" << endl;
        } else {
            cout << "\nNode " << node->data << " Child: " << endl;
            if (node->left)
                cout << " Child Kiri : " << node->left->data << endl;
            else
                cout << "Child Kiri : (tidak punya Child kiri)" << endl;
            if (node->right)
                cout << "Child Kanan : " << node->right->data << endl;
            else
                cout << "Child Kanan : (tidak punya Child kanan)" << endl;
        }
    }
}
void preOrder(Pohon *node) {
    if (node != NULL) {
        cout << " " << node->data << ", ";
        preOrder(node->left);
        preOrder(node->right);
    }
}

void showDescendants(Pohon *node) {
    if (isEmpty()) {
        cout << "\nBuat pohonnya dulu!" << endl;
    } else {
        if (!node) {
            cout << "\nNode yang ditunjuk gak ada!" << endl;
        } else {
            cout << "\nKeturunan dari node " << node->data << " : ";
            preOrder(node);
            cout << endl;
        }
    }
}
void inOrder(Pohon *node) {
    if (node != NULL) {
        inOrder(node->left);
        cout << " " << node->data << ", ";
        inOrder(node->right);
    }
}
void postOrder(Pohon *node) {
    if (node != NULL) {
        postOrder(node->left);
        postOrder(node->right);
        cout << " " << node->data << ", ";
    }
}
void deleteTree(Pohon *node) {
    if (node != NULL) {
        if (node != root) {
            if (node->parent->left == node)
                node->parent->left = NULL;
            else if (node->parent->right == node)
                node->parent->right = NULL;
        }
        deleteTree(node->left);
        deleteTree(node->right);
        if (node == root) {
            delete root;
            root = NULL;
        } else {
            delete node;
        }
    }
}
void deleteSub(Pohon *node) {
    if (isEmpty()) {
        cout << "\nBuat pohonnya dulu!" << endl;
    } else {
        deleteTree(node->left);
        deleteTree(node->right);
        cout << "\nNode cabang pohon " << node->data << " berhasil dihapus." << endl;
    }
}
void clear() {
    if (isEmpty()) {
        cout << "\nBuat pohon dulu!!" << endl;
    } else {
        deleteTree(root);
        cout << "\nPohon berhasil dihapus." << endl;
    }
}
int size(Pohon *node) {
    if (!node) {
        return 0;
    } else {
        return 1 + size(node->left) + size(node->right);
    }
}
int height(Pohon *node) {
    if (!node) {
        return 0;
    } else {
        int heightKiri = height(node->left);
        int heightKanan = height(node->right);
        if (heightKiri >= heightKanan) {
            return heightKiri + 1;
        } else {
            return heightKanan + 1;
        }
    }
}
void characteristic() {
    int s = size(root);
    int h = height(root);
    cout << "\nUkuran Pohon : " << s << endl;
    cout << "Berat Pohon : " << h << endl;
    if (h != 0)
        cout << "Rata-rata simpul pohon : " << s / h << endl;
    else
        cout << "Rata-rata simpul pohon : 0" << endl;
}

int main() {
    int choice;
    char Azaria_2311102147, parentData, direction;
    Pohon *parentNode, *tempNode;
    
    do {
        cout << "\n=================================\n";
        cout << "   Program Binary Tree Azaria  \n";
        cout << "=================================\n";
        cout << "1. Buat Node\n";
        cout << "2. Insert Left\n";
        cout << "3. Insert Right\n";
        cout << "4. Update Node\n";
        cout << "5. Retrieve Node\n";
        cout << "6. Find Node\n";
        cout << "7. Show Child\n";
        cout << "8. Show Descendants\n";
        cout << "9. Clear Tree\n";
        cout << "10. Tree Characteristics\n";
        cout << "11. Exit\n";
        cout << "=================================\n";
        cout << "Masukkan pilihan: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukkan data: ";
                cin >> Azaria_2311102147;
                buatNode(Azaria_2311102147);
                break;
            case 2:
                cout << "Masukkan data: ";
                cin >> Azaria_2311102147;
                cout << "Masukkan parent data: ";
                cin >> parentData;
                parentNode = root;
                while (parentNode && parentNode->data != parentData) {
                    cout << "Arahkan ke kiri (l) atau kanan (r) dari " << parentNode->data << "?: ";
                    cin >> direction;
                    if (direction == 'l')
                        parentNode = parentNode->left;
                    else
                        parentNode = parentNode->right;
                }
                insertLeft(Azaria_2311102147, parentNode);
                break;
            case 3:
                cout << "Masukkan data: ";
                cin >> Azaria_2311102147;
                cout << "Masukkan parent data: ";
                cin >> parentData;
                parentNode = root;
                while (parentNode && parentNode->data != parentData) {
                    cout << "Arahkan ke kiri (l) atau kanan (r) dari " << parentNode->data << "?: ";
                    cin >> direction;
                    if (direction == 'l')
                        parentNode = parentNode->left;
                    else
                        parentNode = parentNode->right;
                }
                insertRight(Azaria_2311102147, parentNode);
                break;
            case 4:
                cout << "Masukkan data baru: ";
                cin >> Azaria_2311102147;
                cout << "Masukkan data node yang ingin di-update: ";
                cin >> parentData;
                tempNode = root;
                while (tempNode && tempNode->data != parentData) {
                    cout << "Arahkan ke kiri (l) atau kanan (r) dari " << tempNode->data << "?: ";
                    cin >> direction;
                    if (direction == 'l')
                        tempNode = tempNode->left;
                    else
                        tempNode = tempNode->right;
                }
                update(Azaria_2311102147, tempNode);
                break;
            case 5:
                cout << "Masukkan data node yang ingin di-retrieve: ";
                cin >> Azaria_2311102147;
                tempNode = root;
                while (tempNode && tempNode->data != Azaria_2311102147) {
                    cout << "Arahkan ke kiri (l) atau kanan (r) dari " << tempNode->data << "?: ";
                    cin >> direction;
                    if (direction == 'l')
                        tempNode = tempNode->left;
                    else
                        tempNode = tempNode->right;
                }
                retrieve(tempNode);
                break;
            case 6:
                cout << "Masukkan data node yang ingin di-find: ";
                cin >> Azaria_2311102147;
                tempNode = root;
                while (tempNode && tempNode->data != Azaria_2311102147) {
                    cout << "Arahkan ke kiri (l) atau kanan (r) dari " << tempNode->data << "?: ";
                    cin >> direction;
                    if (direction == 'l')
                        tempNode = tempNode->left;
                    else
                        tempNode = tempNode->right;
                }
                find(tempNode);
                break;
            case 7:
                cout << "Masukkan data node yang ingin di-show child: ";
                cin >> Azaria_2311102147;
                tempNode = root;
                while (tempNode && tempNode->data != Azaria_2311102147) {
                    cout << "Arahkan ke kiri (l) atau kanan (r) dari " << tempNode->data << "?: ";
                    cin >> direction;
                    if (direction == 'l')
                        tempNode = tempNode->left;
                    else
                        tempNode = tempNode->right;
                }
                showChild(tempNode);
                break;
            case 8:
                cout << "Masukkan data node yang ingin di-show descendants: ";
                cin >> Azaria_2311102147;
                tempNode = root;
                while (tempNode && tempNode->data != Azaria_2311102147) {
                    cout << "Arahkan ke kiri (l) atau kanan (r) dari " << tempNode->data << "?: ";
                    cin >> direction;
                    if (direction == 'l')
                        tempNode = tempNode->left;
                    else
                        tempNode = tempNode->right;
                }
                showDescendants(tempNode);
                break;
            case 9:
                clear();
                break;
            case 10:
                characteristic();
                break;
            case 11:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
        }
    } while (choice != 11);

    return 0;
}
```
Program ini mengimplementasikan struktur data pohon biner dengan berbagai operasi seperti membuat node, menyisipkan node di kiri dan kanan, memperbarui node, mengambil data node, mencari node dan menampilkan informasi, menampilkan anak dan keturunan dari node, serta menghapus pohon atau sub pohon. Program ini menyediakan menu interaktif yang memungkinkan pengguna untuk memilih operasi yang diinginkan, dengan validasi sederhana untuk memastikan operasi dilakukan pada node yang ada. Operasi traversal seperti pre-order, in-order, dan post-order juga disertakan, bersama dengan fungsi untuk menghitung ukuran, tinggi, dan menampilkan karakteristik pohon.

## Output:
![Screenshot Soal Unguided 1](ssunguided(8).png)
![Screenshot Soal Unguided 1](ssunguided(9).png)
![Screenshot Soal Unguided 1](ssunguided(10).png)
![Screenshot Soal Unguided 1](ssunguided(11).png)
![Screenshot Soal Unguided 1](ssunguided(12).png)


## Kesimpulan
Graf dan pohon adalah dua konsep dasar dalam teori graf yang digunakan untuk mewakili hubungan antara entitas. Graf adalah struktur data non-linear yang terdiri dari node atau vertex yang terhubung oleh sisi. Graf dapat berarah atau tidak berarah, tergantung pada apakah sisi memiliki arah atau tidak. Pada sisi lain, pohon adalah suatu jenis graf yang terhubung, tidak berarah, dan tidak memiliki sirkuit. Setiap node dalam pohon terhubung ke setiap node lainnya dengan jalan yang unik, dan tidak ada lebih dari satu jalan antara dua node. Graf pohon digunakan dalam berbagai aplikasi, seperti file system, XML document, dan lain-lain, sedangkan hutan adalah kumpulan pohon yang tidak saling terhubung dalam sebuah graf asiklik tak berarah.

### Perbedaan Graph dan Tree 
- Tidak Terdapat Cycle: Tree tidak memiliki siklus (cycle), sedangkan Graph dapat memiliki siklus.
- Tidak Ada Root: Graph tidak memiliki akar (root), sedangkan Tree memiliki akar yang disebut root.
- Struktur Data: Tree adalah struktur data yang tidak linear (non-linear) yang digunakan untuk merepresentasikan hubungan data yang bersifat hierarkis antara elemen-elemen. Graph, sebaliknya, adalah kumpulan noktah (simpul) di dalam bidang dua dimensi yang dihubungkan dengan sekumpulan garis (sisi).

#### Istilah-istilah: Istilah-istilah yang terkait dengan Graph meliputi:</br>
- Vertex (Simpul): Himpunan node/titik pada sebuah Graph.
- Edge (Sisi): Garis yang menghubungkan tiap node/vertex.
- Weight (Bobot): Nilai yang diasosiasikan dengan setiap sisi yang menunjukkan hubungan antara dua simpul.

#### Jenis Graph: Graph dapat dibedakan menjadi:
- Graph Tak Berarah (Undirected Graph): Urutan simpul dalam sebuah busur tidak dipentingkan.
- Graph Berarah (Directed Graph): Urutan simpul mempunyai arti.
- Graph Berbobot (Weighted Graph): Setiap busur memiliki nilai yang menunjukkan hubungan antara dua simpul.
- Penggunaan: Graph digunakan untuk merepresentasikan objek-objek diskrit dan hubungan antara objek-objek tersebut, serta untuk memecahkan berbagai masalah dengan bantuan algoritma yang sesuai.

## Referensi
[1] Meidyan Permata Putri, et al., Algoritma dan Struktur Data. Bandung: Widina Bhakti Persada Bandung, 2022.<br/>

