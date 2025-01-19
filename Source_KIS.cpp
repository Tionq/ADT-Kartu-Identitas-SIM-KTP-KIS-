// JUDUL 

/*
TUGAS
Abstract Data Type
Dokumen: KIS
Dasar Pemrograman A11.4104
Valentio Titan Sugiyarto    
A11.2024.15676
*/

#include <iostream>
using namespace std;

// KAMUS
struct Nama
{
    string namaDepan;
    string namaTengah;
    string namaBelakang;
};

struct Tanggal
{
    string tglLahir;
    string blnLahir;
    string thnLahir;
};

struct Alamat
{
    string jalan;
};

struct KIS
{
    string noKIS;
    Nama nama;
    Alamat alamat;
    Tanggal tanggal;
    string nik;
    string faskes;
};

char lanjut;
struct KIS kis;

// DESKRIPSI
int main() {
    do {
        cout << "MENCETAK KIS" << endl;

        // Input Nomor Kartu
        cout << "Masukkan Nomor KIS: ";
        getline (cin, kis.noKIS);


        // Input NAMA
        // Input Nama Depan
        cout << "Masukkan Nama Depan: ";
        getline (cin, kis.nama.namaDepan);

        // Input Nama Tengah
        cout << "Masukkan Nama Tengah:(ENTER jika kosong): ";
        getline (cin, kis.nama.namaTengah);
        
        // Input Nama Belakang
        cout << "Masukkan Nama Belakang:(ENTER jika kosong): ";
        getline (cin, kis.nama.namaBelakang);


        // Input ALAMAT
        cout << "Masukkan Alamat: ";
        getline (cin, kis.alamat.jalan);

        // Input Tempat/Tanggal Lahir
        // Input Tanggal Lahir
        cout << "Masukkan Tanggal Lahir(1-31): ";
        getline (cin, kis.tanggal.tglLahir);
        
        // Input Bulan Lahir
        cout << "Masukkan Bulan Lahir(01-12): ";
        getline (cin, kis.tanggal.blnLahir);

        // Input Tahun Lahir
        cout << "Masukkan Tahun Lahir: ";
        getline (cin, kis.tanggal.thnLahir);


        // Input NIK
        cout << "Masukkan NIK: ";
        getline (cin, kis.nik);


        // Input Faskes Tingkat
        cout << "Masukkan Faskes Tingkat I: ";
        getline (cin, kis.faskes);



        // CETAK KIS
        cout << "===============================================" << endl;
        cout << "Kartu Indonesia Sehat" << endl;
        cout << "|||||||||||||||||||||||" << endl;
        cout << "Nomor Kartu        : " << kis.noKIS << endl;
        cout << "Nama               : " << kis.nama.namaDepan << " " << kis.nama.namaTengah << " " << kis.nama.namaBelakang << endl;
        cout << "Alamat             : " << kis.alamat.jalan;
        cout << "Tanggal Lahir      : " << kis.tanggal.tglLahir << "-" <<kis.tanggal.blnLahir << "-" << kis.tanggal.thnLahir << endl;
        cout << "NIK                : " << kis.nik << endl;
        cout << "Faskes Tingkat I   : " << kis.faskes << endl;
        cout << "===============================================" << endl;

        // Opsi Ulang Program
        cout <<"Ingin Cetak KIS lainnya?(y/n): ";
        cin >> lanjut;

    } while (lanjut == 'Y' || lanjut == 'y');

    cout << "Terima Kasih Telah Menggunakan Aplikasi Kami!";

    return 0;
}