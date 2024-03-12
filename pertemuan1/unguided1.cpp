#include <iostream>

using namespace std;

// Deklarasi struct untuk data siswa
struct Siswa {
    float nilai;
};

// Fungsi untuk menghitung rata-rata nilai
float hitungRataRata(Siswa siswa[], int jumlahSiswa) {
    float total = 0;
    for (int i = 0; i < jumlahSiswa; i++) {
        total += siswa[i].nilai;
    }
    return total / jumlahSiswa;
}

// Fungsi untuk menentukan status kenaikan kelas
string kenaikanKelas(float rataRata) {
    if (rataRata >= 75) {
        return "Selamat, siswa Naik kelas!";
    } else {
        return "Tidak Naik Kelas";
    }
}

// Fungsi untuk input nilai siswa
void inputNilai(Siswa siswa[], int jumlahSiswa) {
    for (int i = 0; i < jumlahSiswa; i++) {
        cout << "Masukkan nilai siswa ke-" << (i + 1) << ": ";
        cin >> siswa[i].nilai;
    }
}

int main() {
    char ulangi;
    int jumlahSiswa;

    do {
        cout << "\n|================================|" << endl;
        cout << "|  PROGRAM NILAI KENAIKAN KELAS  |" << endl;
        cout << "|================================|" << endl;
        cout << "|Azaria Nanda Putri|" << endl;
        cout << "|====2311102147====|" << endl;
        cout << "|==================|" << endl;
        cout << "\nMasukkan Jumlah Siswa: ";
        cin >> jumlahSiswa;

        // Membuat array dari struct Siswa
        Siswa nilaiSiswa[jumlahSiswa];

        // Memanggil fungsi inputNilai dengan parameter struct Siswa
        inputNilai(nilaiSiswa, jumlahSiswa);

        // Memanggil fungsi hitungRataRata dengan parameter struct Siswa
        float rataRataNilai = hitungRataRata(nilaiSiswa, jumlahSiswa);

        // Memanggil fungsi kenaikanKelas dengan parameter rata-rata nilai
        string status = kenaikanKelas(rataRataNilai);

        cout << "================================" << endl;
        cout << "Rata-rata nilai siswa yang diperoleh: " << rataRataNilai << endl;
        cout << "Apakah siswa Naik kelas? " << status << endl;
        cout << "\nSiswa yang tidak naik kelas:\n";

        // Loop untuk menampilkan siswa yang tidak naik kelas
        bool adaSiswaTidakNaikKelas = false;
        for (int i = 0; i < jumlahSiswa; i++) {
            if (nilaiSiswa[i].nilai < 75) {
                cout << "Siswa ke-" << (i + 1) << ": " << nilaiSiswa[i].nilai << endl;
                adaSiswaTidakNaikKelas = true;
            }
        }

        // Menampilkan pesan jika tidak ada siswa yang tidak naik kelas
        if (!adaSiswaTidakNaikKelas) {
            cout << "Tidak ada siswa yang tidak naik kelas.\n";
        }

        cout << "Anda ingin mengulang program? (Yes/No): ";
        cin >> ulangi;

    } while (ulangi == 'y' || ulangi == 'Y');

    return 0;
}