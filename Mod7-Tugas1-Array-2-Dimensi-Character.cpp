#include <iostream> //Perintah untuk memasukkan file header iostream sebelum proses compile berlangsung
using namespace std; //Mendeklarasikan kepada compiler bahwa kita akan menggunakan semua fungsi di dalamnya

int main(){ //Fungsi utama yang dieksekusi saat program dijalankan
    int baris, kolom; //Deklarasi variabel dari tipe data integer
    
    cout << "Input baris: "; //Output pertama kali untuk memberitahu user menginput variabel baris
	cin >> baris; //Perintah untuk menginput variabel baris
	cout << "Input kolom: "; //Output untuk memberitahu user menginput variabel kolom
	cin >> kolom; //Perintah untuk menginput variabel kolom
	
	char matriks[baris][kolom]; //Membuat variabel indeks array 2 dimensi 'matriks' yang di dalamnya mengambil isi dari variabel baris dan kolom

    cout << endl; //Output untuk baris baru
    
    for(int i=0; i < baris; i++){ //Perulangan for, di mana jika i < baris maka lakukan aksi di bawahnya
        for(int j=0; j < kolom; j++){ //Perulangan for, di mana jika j < kolom maka lakukan aksi di bawahnya
            cout << "Tab[" << i+1 << "][" << j+1 << "] : "; //Output untuk memberitahu user menginput variabel matriks
            cin >> matriks[i][j]; //Menginput indeks array dari variabel matriks
        } //Penutup dari for(int j=0; j < kolom; j++){
        cout << endl; //Output untuk baris baru
    } //Penutup dari for(int i=0; i < baris; i++){
    
    cout << "Hasil Input Matriks " << baris << "x" << kolom << endl; //Output Judul Hasil Akhir
    cout << "=======================" << endl; //Hanya sebagai output garis bawah
    
    for(int i=0; i < baris; i++){ //Perulangan for, di mana jika i < baris maka lakukan aksi di bawahnya
        for(int j=0; j < kolom; j++){ //Perulangan for, di mana jika j < kolom maka lakukan aksi di bawahnya
            cout << matriks[i][j]; //Mencetak variabel matriks
        } //Penutup dari for(int j=0; j < kolom; j++){
        cout << endl; //Output untuk baris baru
    } //Penutup dari for(int i=0; i < baris; i++){
    
    return 0; //Memberitahu kepada compiler bahwa program telah selesai dieksekusi
} //Penutup dari int main(){
