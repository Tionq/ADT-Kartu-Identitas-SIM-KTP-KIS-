// JUDUL 
/* 
TUGAS
Abstract Data Type
Dokumen: KTP
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

struct TTL
{
    string tempat;
    string tanggal;
    string bulan;
    string tahun;
};

struct Alamat
{
    string jalan;
    string rt;
    string rw;
    string kelurahan;
    string kecamatan;
    string kota;
    string provinsi;
};

struct KTP
{
    string nik;
    Nama nama;
    TTL ttl;
    string gender;
    string golongan;
    Alamat alamat;
    string agama;
    string status;
    string pekerjaan;
    string kewarganegaraan;
    string masaKTP;
};

string lanjut;
struct KTP ktp;

// DESKRIPSI
int main() {
    do {
        // Tampilan Awal
        cout << "MENCETAK KTP" << endl;
        
        // Input NIK
        cout << "Masukkan NIK: ";
        getline (cin, ktp.nik);


        // Input NAMA
        // Input Nama Depan
        cout << "Masukkan Nama Depan: ";
        getline (cin, ktp.nama.namaDepan);

        // Input Nama Tengah
        cout << "Masukkan Nama Tengah (ENTER untuk lewati): ";
        getline (cin, ktp.nama.namaTengah);

        // Input Nama Belakang
        cout << "Masukkan Nama Belakang (ENTER untuk lewati): ";
        getline (cin, ktp.nama.namaBelakang);


        // Input Tempat/Tgl Lahir
        // Input Tempat Lahir
        cout << "Masukkan Tempat Lahir: ";
        getline (cin, ktp.ttl.tempat);

        // Input Tanggal Lahir
        cout << "Masukkan Tanggal Lahir (1-31): ";
        getline (cin, ktp.ttl.tanggal);

        // Input Bulan Lahir
        cout << "Masukkan Bulan Lahir (01-12): ";
        getline (cin, ktp.ttl.bulan);

        // Input Tahun Lahir
        cout << "Masukkan Tahun Lahir: ";
        getline (cin, ktp.ttl.tahun);


        // Input Jenis Kelamin
        cout << "Masukkan Jenis Kelamin (LAKI-LAKI/PEREMPUAN): ";
        getline (cin, ktp.gender);


        // Input Golongan Darah
        cout << "Masukkan Golongan Darah (O,A,B,AB): ";
        getline (cin, ktp.golongan);


        // Input ALAMAT
        // Input Nama Jalan
        cout << "Masukkan Nama Jalan: ";
        getline (cin, ktp.alamat.jalan);

        // Input RT
        cout << "Masukkan RT (000): ";
        getline (cin, ktp.alamat.rt);

        // Input RW
        cout << "Masukkan RW (000): ";
        getline (cin, ktp.alamat.rw);

        // Input Kelurahan/Desa
        cout << "Masukkan Kelurahan/Desa: ";
        getline (cin, ktp.alamat.kelurahan);

        // Input Kecamatan
        cout << "Masukkan Kecamatan: ";
        getline (cin, ktp.alamat.kecamatan);

        // Input Kota/Kabupaten
        cout << "Masukkan Kota/Kabupaten: ";
        getline (cin, ktp.alamat.kota);

        // Input Provinsi
        cout << "Masukkan Provinsi: ";
        getline (cin, ktp.alamat.provinsi);


        // Input Agama
        cout << "Masukkan Agama: ";
        getline (cin, ktp.agama);


        // Input Status Perkawinan
        cout << "Masukkan Status Perkawinan(Belum kawin, Kawin, Cerai hidup, Cerai mati): ";
        getline (cin, ktp.status);


        // Input Pekerjaan
        cout << "Masukkan Pekerjaan: ";
        getline (cin, ktp.pekerjaan);


        // Input Kewarganegaraan
        cout << "Masukkan Kewarganegaraan: ";
        getline (cin, ktp.kewarganegaraan);


        // Input Masa Berlaku KTP
        cout << "Masukkan Masa Berlaku KTP: ";
        getline (cin, ktp.masaKTP);


        // CETAK KTP
        cout << "=====================================================" << endl;
        cout << "PROVINSI " << ktp.alamat.provinsi << endl;
        cout << "Kota/Kabupaten "<< ktp.alamat.kota << endl;
        cout << "NIK                : " << ktp.nik << endl;
        cout << "Nama               : " << ktp.nama.namaDepan << " " << ktp.nama.namaTengah << " " << ktp.nama.namaBelakang << endl;
        cout << "Tempat/Tgl Lahir   : " << ktp.ttl.tempat << ", " << ktp.ttl.tanggal << "-" << ktp.ttl.bulan << "-" << ktp.ttl.tahun << endl;
        cout << "Jenis Kelamin      : " << ktp.gender << "      " << "Gol. Darah    : " << ktp.golongan << endl;
        cout << "Alamat             : " << ktp.alamat.jalan << endl;
        cout << "       RT/RW       : " << ktp.alamat.rt << "/" << ktp.alamat.rw << endl;
        cout << "       Kel/Desa    : " << ktp.alamat.kelurahan << endl;
        cout << "       Kecamatan   : " << ktp.alamat.kecamatan << endl;
        cout << "Agama              : " << ktp.agama << endl;
        cout << "Status/Perkawinan  : " << ktp.status << endl;
        cout << "Pekerjaan          : " << ktp.pekerjaan << endl;
        cout << "Kewarganegaraan    : " << ktp.kewarganegaraan << endl;
        cout << "Berlaku Hingga     : " << ktp.masaKTP << endl;
        cout << "=====================================================" << endl;

        // Opsi Ulang Program
        cout << "Ingin Mencetak KTP Lagi? (y/n): ";
        cin >> lanjut;

    } while (lanjut == "y" || lanjut == "Y");

    // Tampilan Akhir
    cout << "Terima Kasih Telah Menggunakan Aplikasi Kami!";

    return 0;
}