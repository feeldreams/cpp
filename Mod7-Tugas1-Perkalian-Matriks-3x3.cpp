#include <iostream> //Perintah untuk memasukkan file header iostream sebelum proses compile berlangsung
using namespace std; //Mendeklarasikan kepada compiler bahwa kita akan menggunakan semua fungsi di dalamnya

int main(){ //Fungsi utama yang dieksekusi saat program dijalankan
    int satu[3][3], dua[3][3], hasil[3][3]; //Deklarasi variabel satu, dua, hasil (array 2 dimensi) bertipe data integer
    
    for(int i=0;i<3;i++){ //Perulangan for, di mana jika i < 3 maka lakukan aksi di bawahnya
      for(int j=0;j<3;j++){ //Perulangan for, di mana jika j < 3 maka lakukan aksi di bawahnya
        cout << "Masukkan data matriks A[" << i+1 << "][" << j+1 << "] : "; //Output memberitahu user untuk menginput variabel satu
        cin >> satu[i][j]; //Perintah untuk menginput variabel satu
      } //Penutup dari for(int j=0;j<3;j++){
    } //Penutup dari for(int i=0;i<3;i++){
    cout << endl; //Output untuk memisahkan baris
    for(int i=0;i<3;i++){ //Perulangan for, di mana jika i < 3 maka lakukan aksi di bawahnya
      for(int j=0;j<3;j++){ //Perulangan for, di mana jika j < 3 maka lakukan aksi di bawahnya
        cout << "Masukkan data matriks B[" << i+1 << "][" << j+1 << "] : "; //Output memberitahu user untuk menginput variabel dua
        cin >> dua[i][j]; //Perintah untuk menginput variabel dua
      } //Penutup dari for(int j=0;j<3;j++){
    } //Penutup dari for(int i=0;i<3;i++){
    
    //Proses Perkalian
    for(int i=0;i<3;i++){ //Perulangan for, di mana jika i < 3 maka lakukan aksi di bawahnya
      for(int j=0;j<3;j++){ //Perulangan for, di mana jika j < 3 maka lakukan aksi di bawahnya
        hasil[i][j]=satu[i][j]*dua[i][j]; //Memasukkan variabel satu x dua ke variabel hasil (semuanya indeks array 2 dimensi)
      } //Penutup dari for(int j=0;j<3;j++){
    } //Penutup dari for(int i=0;i<3;i++){
    
    cout << "\n\n"; //Output untuk memisahkan baris
    cout << "Output Matriks A" << endl; //Mencetak teks "Output Matriks A" kepada layar
    cout << "================" << endl; //Hanya sebagai output garis bawah
    
    for(int i=0;i<3;i++){ //Perulangan for, di mana jika i < 3 maka lakukan aksi di bawahnya
      for(int j=0;j<3;j++){ //Perulangan for, di mana jika j < 3 maka lakukan aksi di bawahnya
        cout << satu[i][j]; //Perintah untuk mencetak variabel satu
      } //Penutup dari for(int j=0;j<3;j++){
      cout << endl; //Output untuk memisahkan baris
    } //Penutup dari for(int i=0;i<3;i++){
    
    cout << endl; //Output untuk memisahkan baris
    cout << "Output Matriks B" << endl; //Mencetak teks "Output Matriks B" kepada layar
    cout << "================" << endl; //Hanya sebagai output garis bawah
    
    for(int i=0;i<3;i++){ //Perulangan for, di mana jika i < 3 maka lakukan aksi di bawahnya
      for(int j=0;j<3;j++){ //Perulangan for, di mana jika j < 3 maka lakukan aksi di bawahnya
        cout << dua[i][j]; //Perintah untuk mencetak variabel dua
      } //Penutup dari for(int j=0;j<3;j++){
      cout << endl; //Output untuk memisahkan baris
    } //Penutup dari for(int i=0;i<3;i++){
    
    cout << endl; //Output untuk memisahkan baris
    cout << "Hasil Perkalian Matriks A x B" << endl; //Mencetak teks "Hasil Perkalian Matriks A x B" kepada layar
    cout << "=============================" << endl; //Hanya sebagai output garis bawah
    
    for(int i=0;i<3;i++){ //Perulangan for, di mana jika i < 3 maka lakukan aksi di bawahnya
      for(int j=0;j<3;j++){ //Perulangan for, di mana jika j < 3 maka lakukan aksi di bawahnya
        cout << hasil[i][j]; //Perintah untuk mencetak variabel hasil (hasil perkalian matriks A x B)
      } //Penutup dari for(int j=0;j<3;j++){
      cout << endl; //Output untuk memisahkan baris
    } //Penutup dari for(int i=0;i<3;i++){
    
    return 0; //Memberitahu kepada compiler bahwa program telah selesai dieksekusi
} //Penutup dari int main(){
