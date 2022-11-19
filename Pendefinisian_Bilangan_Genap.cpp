#include<iostream> //Memanggil header yang akan digunakan. iostream digunakan untuk input-output
using namespace std; //Mendeklarasikan kepada compiler bahwa akan menggunakan semua fungsi yang terdapat di dalamnya

int isGenap(int a){ //Subprogram fungsi int isGenap(int a)
	bool genap; //Deklarasi variabel genap dari tipe data boolean
    if(a%2==0){ //Pengkondisian apakah variabel a%2 sama dengan 0
        genap = true; //Aksi apabila kondisi terpenuhi
    } else { //Apabila kondisi tidak terpenuhi maka lakukan aksi di bawah
        genap = false; //Aksi apabila kondisi tidak terpenuhi
    } //Penutup dari else {
    return genap; //Mengembalikan nilai dari variabel genap
} //Penutup dari int isGenap(int a){

int main() { //Fungsi utama saat program pertama kali dijalankan
    int a; //Deklarasi variabel a dari tipe data integer
    bool genap; //Deklarasi variabel genap dari tipe data boolean
    
    cout << "Masukkan Angka: "; //Output pertama kali saat program dieksekusi
    cin >> a; //Input variabel a
    cout << endl; //Output pemisah baris
    
    genap = isGenap(a); //Memasukkan nilai untuk variabel genap dari pemanggilan fungsi isGenap()
    
    if(genap==true){ //Pengkondisian apakah variabel genap sama dengan true
        cout << a << " Adalah Bilangan Genap"; //Aksi apabila kondisi terpenuhi
    } else { //Apabila kondisi tidak terpenuhi maka lakukan aksi di bawah
        cout << a << " Bukan Bilangan Genap"; //Aksi apabila kondisi tidak terpenuhi
    } //Penutup dari else {
    
    return 0; //Untuk memberitahu kepada compiler bahwa program telah selesai dieksekusi
} //Penutup dari int main();
