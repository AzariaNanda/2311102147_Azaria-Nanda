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
