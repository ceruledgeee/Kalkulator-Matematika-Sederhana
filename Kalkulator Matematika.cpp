#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int pilihan;
    double a, b, hasil;

    do {
        cout << "\nKALKULATOR SEDERHANA\n";
        cout << "1. Penjumlahan\n";
        cout << "2. Pengurangan\n";
        cout << "3. Perkalian\n";
        cout << "4. Pangkat\n";
        cout << "5. Akar Kuadrat\n";
        cout << "6. Pembagian\n";
        cout << "0. Keluar\n";
        cout << "Pilih operasi (0-6): ";
        cin >> pilihan;

        switch(pilihan) {
            case 1:
                cout << "Masukkan dua angka: ";
                cin >> a >> b;
                hasil = a + b;
                cout << "Hasil: " << hasil << endl;
                break;
            case 2:
                cout << "Masukkan dua angka: ";
                cin >> a >> b;
                hasil = a - b;
                cout << "Hasil: " << hasil << endl;
                break;
            case 3:
                cout << "Masukkan dua angka: ";
                cin >> a >> b;
                hasil = a * b;
                cout << "Hasil: " << hasil << endl;
                break;
            case 4:
                cout << "Masukkan angka dan pangkatnya: ";
                cin >> a >> b;
                hasil = pow(a, b);
                cout << "Hasil: " << hasil << endl;
                break;
            case 5:
                cout << "Masukkan angka: ";
                cin >> a;
                if (a < 0)
                    cout << "Akar kuadrat dari bilangan negatif tidak valid.\n";
                else {
                    hasil = sqrt(a);
                    cout << "Hasil: " << hasil << endl;
                }
                break;
            case 6:
                cout << "Masukkan dua angka: ";
                cin >> a >> b;
                if (b == 0)
                    cout << "Error: Pembagian dengan nol tidak diperbolehkan.\n";
                else {
                    hasil = a / b;
                    cout << "Hasil: " << hasil << endl;
                }
                break;
            case 0:
                cout << "Terima kasih telah menggunakan kalkulator.\n";
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }
    } while(pilihan != 0);

    return 0;
}
