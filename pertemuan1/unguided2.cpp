#include <iostream>

// Mendefinisikan struct untuk anggota boygroup
struct AnggotaBoygroup {
    char nama[50];
    int umur;
    char posisi[20];
};

// Mendefinisikan class untuk biografi boygroup
class BiografiBoygroup {
public:
    // Properti (variabel) dari class BiografiBoygroup
    char namaGrup[50];
    int tahunDebut;
    AnggotaBoygroup anggota[7]; // Maksimal 7 anggota dalam NCT Dream

    // Metode (fungsi) dari class BiografiBoygroup
    void displayInfo() {
        std::cout << "Nama Boygroup: " << namaGrup << std::endl;
        std::cout << "Tahun Debut: " << tahunDebut << std::endl;
        std::cout << "Anggota Boygroup:" << std::endl;

        for (int i = 0; i < 7; ++i) {
            if (anggota[i].nama[0] != '\0') {
                std::cout << "  Anggota " << (i + 1) << ":" << std::endl;
                std::cout << "    Nama: " << anggota[i].nama << std::endl;
                std::cout << "    Umur: " << anggota[i].umur << " tahun" << std::endl;
                std::cout << "    Posisi: " << anggota[i].posisi << std::endl;
            }
        }
    }
};

int main() {
    // Membuat objek dari class BiografiBoygroup
    BiografiBoygroup nctDream;

    // Mengatur nilai properti objek
    strcpy(nctDream.namaGrup, "NCT Dream");
    nctDream.tahunDebut = 2016;

    // Mengatur nilai properti anggota
    strcpy(nctDream.anggota[0].nama, "Mark");
    nctDream.anggota[0].umur = 23;
    strcpy(nctDream.anggota[0].posisi, "Leader");

    strcpy(nctDream.anggota[1].nama, "Renjun");
    nctDream.anggota[1].umur = 22;
    strcpy(nctDream.anggota[1].posisi, "Main Vocal");

    // Memanggil metode untuk menampilkan informasi
    nctDream.displayInfo();

    return 0;
}
