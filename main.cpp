#include <iostream>
#include <cmath>
#include <string>
using namespace std;

<<<<<<< HEAD

unsigned long long faktorial(int n, bool& overflow) {
    if (n > 20) {
=======
// Fungsi untuk menghitung Faktorial secara efisien
unsigned long long faktorial(int n, bool &overflow)
{
    if (n > 20)
    { // Faktorial lebih besar dari 20 sudah overflow
>>>>>>> 5f07d7c3111b97fda2cb4e9bd0bfb493a94df825
        overflow = true;
        return 0;
    }

    unsigned long long hasil = 1;
    for (int i = 1; i <= n; ++i)
    {
        hasil *= i;
<<<<<<< HEAD
        if (hasil > 1e18) { 
=======
        if (hasil > 1e18)
        { // Cek overflow secara manual
>>>>>>> 5f07d7c3111b97fda2cb4e9bd0bfb493a94df825
            overflow = true;
            return 0;
        }
    }
    return hasil;
}

<<<<<<< HEAD
unsigned long long kombinasi(int n, int r, bool& overflow) {
    if (r > n) return 0;
    r = min(r, n - r); 
=======
// Fungsi untuk menghitung Kombinasi C(n, r) dengan pembatalan faktor
unsigned long long kombinasi(int n, int r, bool &overflow)
{
    if (r > n)
        return 0;
    r = min(r, n - r); // Menjaga r tetap kecil untuk optimisasi
>>>>>>> 5f07d7c3111b97fda2cb4e9bd0bfb493a94df825
    unsigned long long hasil = 1;

    for (int i = 0; i < r; ++i)
    {
        hasil *= (n - i);
<<<<<<< HEAD
        if (hasil > 1e18) { 
=======
        if (hasil > 1e18)
        { // Cek overflow
>>>>>>> 5f07d7c3111b97fda2cb4e9bd0bfb493a94df825
            overflow = true;
            return 0;
        }
        hasil /= (i + 1);
    }
    return hasil;
}

unsigned long long permutasi(int n, int r, bool& overflow) {
    if (r > n) return 0;
    unsigned long long hasil = 1;

    for (int i = 0; i < r; ++i)
    {
        hasil *= (n - i);
        if (hasil > 1e18) { 
            overflow = true;
            return 0;
        }
    }
    return hasil;
}

void tampilkanPeringatan(const string& jenis, const string& objek, int total, int pilih) {
    cout << "\n PERINGATAN !\n";
    cout << "Perhitungan " << jenis << " untuk " << objek << " menghasilkan nilai yang terlalu besar untuk dihitung.\n";
    cout << "Karena keterbatasan sistem yang dibuat(Lebih dari Tipe Data).\n";
    cout << "Mungkin angka yang diinputkan bisa diganti ke angka yang lebih kecil.\n";

    if (jenis == "Faktorial") {
        cout << "Artinya, kamu sedang mencoba menghitung " << total << "! (faktorial dari " << total << "),\n";
        cout << "yang merupakan jumlah cara menyusun " << total << " objek dalam urutan tertentu.\n";
    }
    else if (jenis == "Kombinasi")
    {
        cout << "Artinya, kamu sedang mencoba menghitung C(" << total << ", " << pilih << "),\n";
        cout << "yang merupakan jumlah cara memilih " << pilih << " objek dari " << total << " objek tanpa memperhatikan urutan.\n";
    }
    else if (jenis == "Permutasi")
    {
        cout << "Artinya, kamu sedang mencoba menghitung P(" << total << ", " << pilih << "),\n";
        cout << "yang merupakan jumlah cara memilih " << pilih << " objek dari " << total << " objek dengan memperhatikan urutan.\n";
    }
    cout << "Pertimbangkan untuk menggunakan angka yang lebih kecil agar hasilnya tidak melebihi kapasitas tipe data.\n\n";
}

void caraPenggunaan() {
    int pilihanPenjelasan;
    cout << "Pilih bagian yang ingin dijelaskan:\n";
    cout << "1. Kombinasi\n2. Permutasi\n3. Faktorial\n4. Kembali\n";
    cin >> pilihanPenjelasan;

    switch (pilihanPenjelasan) {
        case 1:
    cout << "\n### Kombinasi (C(n, r)) ###\n";
    cout << "Kombinasi digunakan untuk menghitung jumlah cara memilih 'r' objek dari total 'n' objek tanpa memperhatikan urutan.\n";
    cout << "Contoh: Jika ada 50 siswa dan kita ingin memilih 4 siswa untuk tim, berapa banyak cara kita bisa memilihnya?\n";
    cout << "Ini dihitung menggunakan rumus kombinasi C(50, 4) = 50! / (4! * (50 - 4)!)\n";
    
    cout << "\nContoh Studi Kasusnya:\n";
    cout << "Misalkan kita memiliki 50 siswa dan kita ingin memilih 4 siswa untuk membentuk tim.\n";
    cout << "Dalam hal ini, urutan pemilihan tidak penting, hanya berapa banyak siswa yang dipilih.\n";
    cout << "Kombinasi digunakan untuk menghitung jumlah cara memilih 4 siswa dari 50 siswa, tanpa memperhatikan urutan.\n";
    cout << "Jika urutan penting, maka kita akan menggunakan permutasi.\n";
    break;

        // Studi Kasus
        cout << "\nContoh Studi Kasusnya:\n";
        cout << "Misalkan kita memiliki 50 siswa dan kita ingin memilih 4 siswa untuk membentuk tim.\n";
        cout << "Dalam hal ini, urutan pemilihan tidak penting, hanya berapa banyak siswa yang dipilih.\n";
        cout << "Kombinasi digunakan untuk menghitung jumlah cara memilih 4 siswa dari 50 siswa, tanpa memperhatikan urutan.\n";
        cout << "Jika urutan penting, maka kita akan menggunakan permutasi.\n";
        break;

    cout << "\nContoh Studi Kasusnya:\n";
    cout << "Misalkan ada 5 pemain yang ingin dipilih untuk berlomba dan kita perlu memilih 3 pemain untuk berlomba.\n";
    cout << "Urutan pemilihan penting, karena kita mungkin memilih pemain untuk posisi tertentu (misalnya: posisi pertama, kedua, dan ketiga).\n";
    cout << "Permutasi digunakan untuk menghitung jumlah cara memilih 3 pemain dari 5 pemain dengan memperhatikan urutan.\n";
    cout << "Jika urutan tidak penting, maka kita akan menggunakan kombinasi.\n";
    break;

        // Studi Kasus
        cout << "\nContoh Studi Kasusnya:\n";
        cout << "Misalkan ada 5 pemain yang ingin dipilih untuk berlomba dan kita perlu memilih 3 pemain untuk berlomba.\n";
        cout << "Urutan pemilihan penting, karena kita mungkin memilih pemain untuk posisi tertentu (misalnya: posisi pertama, kedua, dan ketiga).\n";
        cout << "Permutasi digunakan untuk menghitung jumlah cara memilih 3 pemain dari 5 pemain dengan memperhatikan urutan.\n";
        cout << "Jika urutan tidak penting, maka kita akan menggunakan kombinasi.\n";
        break;

    cout << "\nContoh Studi Kasusnya:\n";
    cout << "Misalkan kita memiliki 6 buku dan kita ingin mengetahui berapa banyak cara kita bisa menyusunnya di rak.\n";
    cout << "Karena urutan penyusunan buku sangat penting (posisi pertama, kedua, ketiga, dll.), kita menggunakan faktorial untuk menghitung jumlah cara menyusunnya.\n";
    cout << "Faktorial sering digunakan untuk menghitung jumlah urutan atau susunan objek ketika urutan itu penting.\n";
    cout << "Contoh lain adalah menghitung jumlah cara mengatur posisi dalam lomba: berapa banyak cara kita dapat menyusun 6 peserta lomba?\n";
    break;

        // Studi Kasus
        cout << "\nContoh Studi Kasusnya:\n";
        cout << "Misalkan kita memiliki 6 buku dan kita ingin mengetahui berapa banyak cara kita bisa menyusunnya di rak.\n";
        cout << "Karena urutan penyusunan buku sangat penting (posisi pertama, kedua, ketiga, dll.), kita menggunakan faktorial untuk menghitung jumlah cara menyusunnya.\n";
        cout << "Faktorial sering digunakan untuk menghitung jumlah urutan atau susunan objek ketika urutan itu penting.\n";
        cout << "Contoh lain adalah menghitung jumlah cara mengatur posisi dalam lomba: berapa banyak cara kita dapat menyusun 6 peserta lomba?\n";
        break;

    case 4:
        cout << "Kembali ke menu utama.\n";
        break;
    default:
        cout << "Pilihan tidak valid. Silakan pilih 1-4.\n";
        break;
    }
}

int main()
{
    string objek;
    int total, pilih, jenisPerhitungan;
    bool overflow = false;

    int pilihanMenu;
    do
    {
        cout << "=== Kalkulator Kombinatorial ===\n";
        cout << "( Main Menu )\n";
        cout << "1. Mulai\n";
        cout << "2. Cara Penggunaan\n";
        cout << "3. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihanMenu;

        if (pilihanMenu == 1) {
            cout << "\nPilih jenis perhitungan yang ingin dilakukan:\n";
            cout << "1. Kombinasi (C)\n2. Permutasi (P)\n3. Faktorial (n!)\nPilih Fungsi: ";
            cin >> jenisPerhitungan;

            if (jenisPerhitungan == 1) {
                cout << "Apa nama objek yang mau kamu dihitung?: ";
                cin >> objek;

                cout << "Berapa total " << objek << " yang tersedia? ";
                cin >> total;

                cout << "Berapa " << objek << " yang ingin dipilih? ";
                cin >> pilih;

                unsigned long long hasilKombinasi = kombinasi(total, pilih, overflow);
                if (overflow)
                {
                    tampilkanPeringatan("Kombinasi", objek, total, pilih);
                }
                else
                {
                    cout << "C(" << total << ", " << pilih << ") = " << hasilKombinasi << endl;
                    cout << "Artinya: Dari " << total << " " << objek << ", terdapat " << hasilKombinasi
                         << " cara untuk memilih " << pilih << " " << objek << " tanpa memperhatikan urutan.\n";
                }
            } else if (jenisPerhitungan == 2) {
                cout << "Apa nama objek yang mau kamu dihitung?: ";
                cin >> objek;

                cout << "Berapa total " << objek << " yang tersedia? ";
                cin >> total;

                cout << "Berapa " << objek << " yang ingin dipilih? ";
                cin >> pilih;

                unsigned long long hasilPermutasi = permutasi(total, pilih, overflow);
                if (overflow)
                {
                    tampilkanPeringatan("Permutasi", objek, total, pilih);
                }
                else
                {
                    cout << "P(" << total << ", " << pilih << ") = " << hasilPermutasi << endl;
                    cout << "Artinya: Dari " << total << " " << objek << ", terdapat " << hasilPermutasi
                         << " cara untuk memilih " << pilih << " " << objek << " dengan memperhatikan urutan.\n";
                }
            } else if (jenisPerhitungan == 3) {
                cout << "Apa nama objek yang mau kamu dihitung?: ";
                cin >> objek;

                cout << "Berapa jumlah total " << objek << "? ";
                cin >> total;

                unsigned long long hasilFaktorial = faktorial(total, overflow);
                if (overflow)
                {
                    tampilkanPeringatan("Faktorial", objek, total, pilih); // Peringatan untuk faktorial
                }
                else
                {
                    cout << total << "! = " << hasilFaktorial << endl;
                    cout << "Artinya: Terdapat " << hasilFaktorial << " cara untuk menyusun " << total
                         << " " << objek << " dalam urutan.\n";
                }
            }
            else
            {
                cout << "Pilihan tidak valid.\n";
            }
        } else if (pilihanMenu == 2) {
            caraPenggunaan();
        }
        else if (pilihanMenu == 3)
        {
            cout << "Terima kasih! Sarannya dong banh.\n";
        }
        else
        {
            cout << "Pilihan tidak valid. Silakan pilih menu yang tersedia.\n";
        }
    } while (pilihanMenu != 3);

    return 0;
}
