#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    
    // Deklarasi map dengan key int dan value string
    map<int, string> kartun_jepang;
  
    // Memasukkan elemen-elemen ke dalam map
    kartun_jepang[1] = "Shinchan";
    kartun_jepang[2] = "Doraemon";
    kartun_jepang[3] = "Spy x Family";
    kartun_jepang[4] = "Suzume";
    kartun_jepang[5] = "From up on puppy hill";
    kartun_jepang[6] = "Detective Conan";
    kartun_jepang[7] = "Onepiece";

    cout << " Pilihan Kartun Jepang " << endl;
    for (int i = 1; i <= kartun_jepang.size(); ++i) { // Looping untuk menampilkan semua elemen pada map
        cout << "No." << i << ": " << kartun_jepang[i] << endl; // Menampilkan elemen map
    }

    return 0;
}