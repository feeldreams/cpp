#include <iostream> //Perintah untuk memasukkan file header iostream sebelum proses compile berlangsung
using namespace std; //Mendeklarasikan kepada compiler bahwa kita akan menggunakan semua fungsi di dalamnya

int main(){ //Fungsi utama yang dieksekusi saat program dijalankan
	int index, n, hasil=0; //Deklarasi variabel index, n, hasil dari tipe data integer
	
	cout << "Masukkan jumlah digit NIM Anda: "; //Output pertama kali untuk memberitahu user menginput variabel n
	cin >> n; //Perintah untuk menginput variabel n
	
	int nilai[n]; //Membuat variabel indeks array nilai yang di dalamnya mengambil isi dari variabel n
	
	cout << endl; //Output untuk baris baru
	
	for(index=0; index < n; index++){ //Perulangan index sebanyak n
		cout << "Masukkan NIM digit ke " << index+1 << " : "; //Output untuk memberitahu user menginput variabel nilai
		cin >> nilai[index]; //Menginput indeks array dari variabel nilai
		hasil += nilai[index]; //Mengisi nilai untuk variabel hasil dengan pertambahan variabel nilai[index]
	} //Penutup dari for(index=0; index < n; index++){
	
	cout << endl; //Output untuk baris baru
	cout << "Jumlah seluruh elemen array : " << hasil << endl; //Mencetak variabel hasil
	
	return 0; //Memberitahu kepada compiler bahwa program telah selesai dieksekusi
} //Penutup dari int main(){
