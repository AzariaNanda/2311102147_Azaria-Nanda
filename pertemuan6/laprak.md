# <h1 align="center">Laporan Praktikum Modul Stack</h1>
<p align="center">Azaria Nanda Putri - 2311102147</p>

## Dasar Teori

#### Kelebihan dan kekurangan dalam menggunakan Stack:
    
- Kelebihan Hash table meliputi efisiensi waktu operasi seperti insert, delete, dan search yang cepat dengan waktu rata-rata O(1). Selain itu, hash table ideal untuk data dengan frekuensi operasi yang tinggi dan menggunakan algoritma hashing untuk mempercepat pencarian data. Selain efisien dalam penggunaan memori dengan efisiensi tinggi, hash table juga memiliki teknik-teknik seperti open hashing, separate chaining, dan closed hashing untuk mengurangi kemungkinan collision dalam penyimpanan data.

![Screenshot Soal Unguided 1](ssdasarteori(1).png)

- Kekurangan menggunakan Hash table memiliki kekurangan seperti kemungkinan collision yang memperlambat pencarian dan memakan lebih banyak memori, serta penggunaan memori yang lebih besar karena menggunakan array. Proses hashing dan pengelolaannya mengonsumsi lebih banyak prosesor, waktu, dan kompleksitas algoritma dibandingkan dengan data biasa, termasuk saat operasi penambahan, penghapusan, dan pengujian data.

![Screenshot Soal Unguided 1](ssdasarteori(2).png) 

## Guided 

### 1. Latihan Stack

```C++

```
kode diatas adalah program C++ dengan hash map. Program ini merupakan contoh sederhana dari hash table yang digunakan untuk menyimpan pasangan kunci dan nilainya. Program ini menggunakan library iostream dan memiliki ukuran hash table sebesar 10 dengan MAX_SIZE. Fungsi hash_func bertugas untuk menghasilkan indeks hash dari kunci yang diberikan. Setiap Node dalam hash table dapat menyimpan data dan memiliki pointer yang menunjukkan ke node berikutnya. Class HashTable menyediakan fungsi-fungsi seperti insert, get, remove, dan traverse untuk mengatur data dalam hash table. Dalam bagian main, program membuat objek ht dari class HashTable untuk melakukan berbagai operasi tersebut.
Berikut merupakan hasil output dari program di atas adalah:</br>
Get key 1: 10 </br>
Get key 4: -1 </br>
3 : 30 </br>
2 : 20 </br>
1 : 10 </br>

## Unguided 

### 1. Soal Stack
 Buatlah program untuk menentukan apakah kalimat tersebut yang diinputkan dalam program stack adalah palindrom/tidak. Palindrom kalimat yang dibaca dari depan dan belakang sama. Jelaskan bagaimana cara kerja programnya!
 ![Screenshot Soal Unguided 1](ssunguided(1).png)


```C++

```
## Output:

### Menambah Data Mahasiswa
![Screenshot Soal Unguided 1](Unguided1(1).png)


### 2.Soal Stack
 Buatlah program untuk melakukan pembalikan terhadap kalimat menggunakan stack dengan minimal 3 kata. Jelaskan output program dan source codenya beserta operasi/fungsi yang dibuat?
 
 ![Screenshot Soal Unguided 1](ssunguided(2).png)

```C++

```
## Output:

### Menambah Data Mahasiswa
![Screenshot Soal Unguided 1](Unguided1(1).png)


## Kesimpulan

Hash table adalah struktur data yang memungkinkan penyimpanan dan akses data dengan efisiensi tinggi. Kelebihannya meliputi efisiensi waktu operasi seperti insert, delete, dan search yang cepat dengan waktu rata-rata O(1). Selain itu, hash table ideal untuk data dengan frekuensi operasi yang tinggi dan menggunakan algoritma hashing untuk mempercepat pencarian data. Selain efisien dalam penggunaan memori, hash table juga memiliki teknik-teknik seperti open hashing, separate chaining, dan closed hashing untuk mengurangi kemungkinan collision dalam penyimpanan data.

## Referensi
[1] Hussain Anwar," Cara Jitu Mahir C++ untuk Pemula". Jakarta: Elex media, 2020.<br/>
[2] Mulyana, A. (2023). E-Books Cara Mudah Mempelajari Algoritma dan Struktur Data.
[3] Rafsanjani, Malik Akbar Hashemi. "Implementasi Algoritma Pengurutan General Purpose dan Berbasis Komparasi untuk Data Berkategori dalam Waktu Linier Tanpa Paralelisasi" (2021).<br/>
[4] Nugraha, Muhammad. "Dasar Pemrograman Dengan C++, Materi Paling Dasar untuk Menjadi Programmer Berbagai Platform" (2021)<br/>
[5] Prof. Galih Satria. "Struktur data dan Algoritma pemrograman dalam C++ dan Phyton". Jakarta: Elex media (2019)<br/>

