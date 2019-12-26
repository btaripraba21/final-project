#include<iostream>

using namespace std;

#define pemrograman 8000
#define sastra 7000
#define novel 9000
const int denda = 1000;
int main() {
char nama[30], id_pgw[15], no_tlp[15], nama_plg[31], judul[15], a;
float banyak, status;
int kode, hasil1, hasil2, hasil3, jenis, pilih;
int array[8] = {8}, arr[7] = {7}, ray[9] = {9};
int c = 0;

cout<<"====================================================";
cout<<"\nNAMA       : Btari Prabaningrum & Endah Sulistyo Ningrum";
cout<<"\nNPM        : 1910631250010 & 1910631250014";
cout<<"\nKELAS      : 1A SI";
cout<<"\nMata Kuliah    : Pemrograman";
cout<<"\nProgram        : Tugas Uas / Final Project";
cout<<"\n======================================================";
cout<<endl;
cout<<"\n========PERPUSTAKAAN NINGRUM=========\n";
cout<<"==============Daftar Buku============\n";
cout<<"01. Pemrograman =";
for (int c=0; c<4; c++)
cout<<array[c];
cout<<endl;
cout<<"02. Sastra      =";
for (int c=0; c<4; c++)
cout<<arr[c];
cout<<endl;
cout<<"03. Novel       =";
for (int c=0; c<4; c++)
cout<<ray[c];
cout<<"\==============================\n";
cout<<endl;
cout<<"\n Nama Pegawai : "; cin>> nama;
cout<<"\n ID Pegawai : "; cin>>id_pgw;
cout<<"\n Selamat Datang ";
cout<<"\n Di Perpustakaan Ningrum \n";
cout<<"\n Nama Pelanggan : "; cin>>nama_plg;
cout<<"\n No telepon Pelanggan : "; cin>>no_tlp;
cout<<"\n Banyak Pinjam Buku : "; cin>>banyak;
cout<<"kode BUKU : \n 01. Pemrograman \n 02. Sastra \n 03. Novel";
cout<<"\nKode Buku : "; cin>>kode;
cout<<"Pilih jenis BUKU : \n1. Pemrogram \n2. Sastra \n3. Novel";
cout<<"\nPilih Nomor Di Atas Untuk Menentukan Kode Buku :";cin>>pilih;
switch(pilih){
    case 1:
        if(kode==01) {
            cout<<"\n Tarif Sewa Rp. 8000\n";
            cout<<" Jenis Buku Pemrograman\n";
            cout<<" Penyewa Dengan Nama " <<nama_plg;
            hasil1=banyak*pemrograman;
            cout<<"\n\n Jumlah Bayar Penyewaan Sebesar Rp. " <<hasil1<<endl;
        }else{
            cout<<"\n WARNING!!! \n Kode Buku Yang Anda Masukkan Salah! \n Silahkan Ulangi Kembali!\n";
        }
        break;
    case 2:
        if(kode==02){
            cout<<" Tarif Sewa Rp.7000\n";
            cout<<" Jenis Buku Sastra\n";
            cout<<" Penyewa Dengan Nama " <<nama_plg;
            hasil2=banyak*sastra;
            cout<<"n\n Jumlah Bayar Penyewaan Sebesar Rp. " <<hasil2<<endl;
        }else{
            cout<<"\n WARNING!!! \n Kode Buku Yang Anda Masukkan Salah! \n SIlahkan Ulangi Kembali\n";
        }
        break;
    case 3:
        if(kode==03){
            cout<<" Tarif Sewa Rp. 9000\n";
            cout<<" Jenis Buku Novel\n";
            cout<<" Penyewa Dengan Nama " <<nama_plg;
            hasil3=banyak*novel;
            cout<<"n\n Jumlah Bayar Penyewaan Sebesar Rp. " <<hasil3<<endl;
        }else{
            cout<<"\n WARNING!!! \n Kode Buku Yang Anda Masukkan Salah! \n Silahkan Ulangi Kembali\n";
        }
        break;
        default:
            cout<<"--Mohon Maaf Pilihan Yang Anda Masukkan Tidak Ada--" <<endl;
        }
        do {
            cout<<"\n ==============================";
            cout<<"\n Terimakasih Atas Kunjungannya.";
            cout<<"\n ==============================";
            c++;
        }while (c<3);

return 0;
}
