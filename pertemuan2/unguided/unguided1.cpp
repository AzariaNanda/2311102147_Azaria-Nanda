#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a_2147; // Deklarasi variabel

    cout << "\n2147==Program Ganjil Genap==2147" << endl;
    cout << "\nInput angka: " << endl;
    cin >> a_2147;

    vector<int> Array_2147; // Deklarasi array sebagai vector

    // Untuk memasukan bilangan array
    for (int i = 0; i < a_2147; i++) {
        cout << "Array " << "[" << i + 1 << "]" << " :";
        int num;
        cin >> num;
        Array_2147.push_back(num);
    }

    // Menampilkan data array yang sudah diinput oleh user
    cout << "Data array: ";
    for (int i = 0; i < a_2147; ++i) { // Melakukan perulangan untuk menampilkan data array
        cout << Array_2147[i] << " ";
    }
    cout << endl;

    // Menampilkan angka genap, jika angkanya habis dibagi 2 maka akan ditampilkan
    cout << "Nomor genap  : ";
    for (int i = 0; i < a_2147; ++i) { // Melakukan perulangan untuk mengecek angka genap
        if (Array_2147[i] % 2 == 0)
            cout << Array_2147[i] << ", ";
    }
    cout << endl;

    // Menampilkan angka ganjil, jika angkanya tidak habis dibagi 2 maka akan ditampilkan
    cout << "Nomor ganjil : ";
    for (int i = 0; i < a_2147; ++i) { // Melakukan perulangan untuk mengecek angka ganjil
        if (Array_2147[i] % 2 != 0)
            cout << Array_2147[i] << ", ";
    }
    cout << endl;

    return 0;
}