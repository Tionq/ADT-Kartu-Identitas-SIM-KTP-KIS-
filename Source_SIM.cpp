// JUDUL 
/*
TUGAS
Abstract Data Type
Dokumen: SIM
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
    string tempat;
    string tglLahir;
    string blnLahir;
    string thnLahir;
};

struct Alamat
{
    string jalan;
    string rt;
    string rw;
    string kelurahan;
    string kota;
};

struct SIM
{
    string golonganSIM;
    string noSIM;
    Nama nama;
    Tanggal tanggal;
    string gender;
    Alamat alamat;
    string pekerjaan;
    string provinsi;
};

struct SIM sim;
char lanjut;


// DESKRIPSI
int main() {
    do {
        cout << "MENCETAK SIM" << endl;

        // Input Golongan SIM 
        cout << "Masukkan Golongan SIM: ";
        getline (cin, sim.golonganSIM);


        // Input Nomor SIM
        cout << "Masukkan Nomor SIM: ";
        getline (cin, sim.noSIM);


        // Input NAMA
        // Input Nama Depan
        cout << "Masukkan Nama Depan: ";
        getline (cin, sim.nama.namaDepan);

        // Input Nama Tengah
        cout << "Masukkan Nama Tengah:(ENTER jika kosong): ";
        getline (cin, sim.nama.namaTengah);
        
        // Input Nama Belakang
        cout << "Masukkan Nama Belakang:(ENTER jika kosong): ";
        getline (cin, sim.nama.namaBelakang);


        // Input Tempat/Tanggal Lahir
        // Input Tempat Lahir
        cout << "Masukkan Tempat Lahir: ";
        getline (cin, sim.tanggal.tempat);

        // Input Tanggal Lahir
        cout << "Masukkan Tanggal Lahir(1-31): ";
        getline (cin, sim.tanggal.tglLahir);
        
        // Input Bulan Lahir
        cout << "Masukkan Bulan Lahir(01-12): ";
        getline (cin, sim.tanggal.blnLahir);

        // Input Bulan Lahir
        cout << "Masukkan Tahun Lahir: ";
        getline (cin, sim.tanggal.thnLahir);


        // Input Jenis Kelamin
        cout << "Masukkan Jenis Kelamin(PRIA/WANITA): ";
        getline (cin, sim.gender);


        // Input ALAMAT
        // Input Nama Jalan
        cout << "Masukkan Nama Jalan: ";
        getline (cin, sim.alamat.jalan);

        // Input RT
        cout << "Masukkan RT(000): ";
        getline (cin, sim.alamat.rt);

        // Input RW
        cout << "Masukkan RW(000): ";
        getline (cin, sim.alamat.rw);

        // Input Kelurahan
        cout << "Masukkan Kelurahan: ";
        getline (cin, sim.alamat.kelurahan);

        // Input Kota
        cout << "Masukkan Kota/Kabupaten: ";
        getline (cin, sim.alamat.kota);


        // Input Pekerjaan
        cout << "Masukkan Pekerjaan: ";
        getline (cin, sim.pekerjaan);

        // Input Provinsi
        cout << "Masukkan Provinsi: ";
        getline (cin, sim.provinsi);


        // CETAK SIM
        cout << "===============================================" << endl;
        cout << "INDONESIA" << endl;
        cout << "SURAT IZIN MENGEMUDI       DRIVING LICENSE" << endl;
        cout << sim.golonganSIM << endl;
        cout << sim.noSIM << endl;
        cout << "1. Nama            : " << sim.nama.namaDepan << " " << sim.nama.namaTengah << " " << sim.nama.namaBelakang << endl;
        cout << "2. Tempat/Tgl Lahir: " << sim.tanggal.tempat << ", " << sim.tanggal.tglLahir << "-" << sim.tanggal.blnLahir << "-" << sim.tanggal.thnLahir<< endl;
        cout << "3. Jenis Kelamin   : " << sim.gender << endl; 
        cout << "4. Alamat          : " << sim.alamat.jalan << " " << sim.alamat.rt << "/" << sim.alamat.rw << " " << sim.alamat.kota << endl;
        cout << "5. Pekerjaan       : " << sim.pekerjaan << endl;
        cout << "6. Provinsi        : " << sim.provinsi << endl;
        cout << "===============================================" << endl;
        cout <<"Ingin Cetak SIM lainnya?(y/n): ";
        cin >> lanjut;

    } while (lanjut == 'Y' || lanjut == 'y');

    cout << "Terima Kasih Telah Menggunakan Aplikasi Kami!";
    return 0;
}