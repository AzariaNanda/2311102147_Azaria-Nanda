#include <iostream>
#include <vector>
using namespace std;

// Mendefinisikan struct untuk Kamar
struct Kamar {
    int nomor_kamar;
    int lantai;
};
// Mendefinisikan class untuk Rumah Kos
class RumahKos {
    private:
        vector<Kamar> kamar; // Menggunakan vector untuk menyimpan kamar
    public:
        void tambahKamar(int nomor_kamar, int lantai) {
            // Menambahkan kamar ke Rumah Kos
            kamar.push_back({nomor_kamar, lantai});
        }

        void tampilkanKamar() {
            // Menampilkan semua kamar di Rumah Kos
            for(const auto& k : kamar) {
                cout << "Nomor Kamar: " << k.nomor_kamar << ", Lantai: " << k.lantai << endl;
            }
        }
};
int main() {
    RumahKos kosan;
    kosan.tambahKamar(1, 1);
    kosan.tambahKamar(2, 1);
    kosan.tambahKamar(3, 1);
    kosan.tambahKamar(4, 1);
    kosan.tambahKamar(5, 1);
    kosan.tambahKamar(6, 2);
    kosan.tambahKamar(7, 2);
    kosan.tambahKamar(8, 2);
    kosan.tambahKamar(9, 2);
    kosan.tambahKamar(10, 2);
    kosan.tampilkanKamar();
    return 0;
}