#include <iostream>
using namespace std;

int main() {

float n1, n2, n3, n4, n5, n6, n7, n8, n9, uangkeluar, uangsisa, uangboros;
string name, apa;
cout <<"==========================================="<<endl;
cout <<"||"<< "       Selamat Datang di MahaKas       ||"<<endl;
cout <<"||"<< "       Yuk hitung pengeluaranmu        ||"<<endl;
cout <<"=========================================="<<endl;



cout<<"Kenalan yuk!!!. Nama kamu siapa?  ";
cin>>name;
cout << "Halo "<<name<<" namaku Guru Kas!!!"<<endl;
cout << "Di sini aku mau memanajemen keuanganmu sebagai mahasiswa :DDD"<<endl;
cout << "=========================================================="<<endl;

cout << "Ketik 'MAU' untuk melanjutkan ";
cin >>apa;
cout << "Sebulan kamu dikasih uang berapa???  "<<"\nIsi dong (dalam ribu) : ";
cin >> n1;
cout << "Kalau pagi kamu biasanya habis uang berapa untuk membeli sarapan?? "<<"\nIsi dong (dalam ribu) : ";
cin >> n2;
cout << "Berapa uang yang kamu keluarin buat makan siang di kampus??"<<"\nIsi dong (dalam ribu) : ";
cin >> n3;
cout << "Terus, kalau makan malam kamu biasanya habis berapa??? "<<"\nIsi dong (dalam ribu) : ";
cin >> n4;
cout << "Untuk keperluan bulanan biasanya habis berapa? "<<"\nIsi dong (dalam ribu) : ";
cin >> n5;
cout << "Biaya sewa kost-kostan kamu sebulan habis berapa?"<<"\nIsi dong (dalam ribu) : ";
cin >> n6;
cout << "Berapa biaya yang kamu keluarkan untuk bayar listrik dan air?"<<"\nIsi dong (dalam ribu) : ";
cin >> n7;
cout << "Berapa biaya yang kamu keluarkan untuk pengisian bahan bakar ?"<<"\nIsi dong (dalam ribu) : ";
cin >> n8;
cout << "Biasanya kalau kamu nongkrong dalam sebulan menghabiskan uang berapa ?"<<"\nIsi dong (dalam ribu) : ";
cin >> n9;

system("cls");

uangkeluar= (n2*30+n3*30+n4*30+n5+n6+n7+n8+n9);
uangsisa= n1-uangkeluar;
uangboros= uangkeluar-n1;

cout << "Guru Kas sudah mengumpulkan pengeluaran "<<name<<" dalam satu bulan nihhh. Ayo kita periksa bersama."<<endl;
cout << "\nBerikut merupakan daftar pengeluaran "<<name<<" dalam satu bulan."<<endl;

cout << "========================================================="<<endl;

cout << "|| 1. Sarapan"<<"\t"<<"\t\t\t   Rp."<<n2*30<<".000  ||"<<endl;
cout << "|| 2. Makan siang"<<"\t\t\t   Rp."<<n3*30<<".000  ||"<<endl;
cout << "|| 3. Makan sore/malam"<<"\t\t\t   Rp."<<n4*30<<".000  ||"<<endl;
cout << "|| 4. Belanja bulanan"<<"\t\t\t   Rp."<<n5<<".000  ||"<<endl;
cout << "|| 5. Biaya kost"<<"\t\t\t   Rp."<<n6<<".000  ||"<<endl;
cout << "|| 6. Listrik dan air"<<"\t\t\t   Rp."<<n7<<".000  ||"<<endl;
cout << "|| 7. Biaya bensin"<<"\t\t\t   Rp."<<n8<<".000  ||"<<endl;
cout << "|| 8. Pengeluaran hiburan"<<"\t\t   Rp."<<n9<<".000  ||"<<endl;


cout << "========================================================="<<endl;

cout << "Pengeluaran "<<name<<" dalam bulan ini sebesar Rp."<<uangkeluar<<".000";


if (uangkeluar<n1)
{
cout << "\n\nWahhh!!! Guru Kas salut dengan "<<name<<" bisa menyisihkan uang sebesar Rp. "<<uangsisa<<".000 per bulannya :DD";
}
else
{
cout<< "\n\nYahhh:( pengeluaran "<<name<<" melebihi uang saku yang diterima setiap bulannya. "<<endl;
cout << "Guru Kas punya saran nih buat "<<name<<" untuk bulan depan "<<name<<" harus mengurangi Rp. "<<uangboros<<".000 untuk pengeluaran";
}
	return 0;
}
