#include<iostream> //Memanggil header yang akan digunakan. iostream digunakan untuk input-output
using namespace std; //Mendeklarasikan kepada compiler bahwa akan menggunakan semua fungsi yang terdapat di dalamnya

float fungsiReam(float celc){ //Subprogram fungsi float fungsiReam(float celc)
    float ream = 4*celc/5; //Memasukkan nilai untuk variabel ream dari proses 4 x celc / 5
    
    return ream; //Mengembalikan nilai dari variabel ream
} //Penutup dari float fungsiReam(float celc)

float fungsiFahr(float celc){ //Subprogram fungsi float fungsiFahr(float celc)
    float fahr = 9*celc/5+32; //Memasukkan nilai untuk variabel fahr dari proses 9 x celc / 5 + 32
    
    return fahr; //Mengembalikan nilai dari variabel fahr
} //Penutup dari float fungsiFahr(float celc)

int main() { //Fungsi utama saat program pertama kali dijalankan
    float celc, ream, fahr; //Deklarasi variabel dari tipe data float
    int pil; //Deklarasi variabel dari tipe data integer
    
    cout << "Suhu Celcius = "; //Output pertama kali saat program dieksekusi
    cin >> celc; //Input variabel celc
    
    /* Output Kedua */
    cout << "Akan dikonversikan ke: " << endl;
    cout << "1. Reamur" << endl;
    cout << "2. Fahrenheit" << endl;
    cout << "Pilih [ 1 / 2 ] = ";
    
    cin >> pil; //Input variabel pil
    cout << endl; //Output pemisah
    
    if(pil==1){ //Pengkondisian apakah variabel pil sama dengan 1
    	/* Aksi apabila kondisi terpenuhi */
        ream = fungsiReam(celc); //Memasukkan nilai untuk variabel ream dari pemanggilan fungsiReam()
        cout << "Reamur = " << ream; //Output variabel ream
    } else { //Apabila kondisi tidak terpenuhi maka lakukan aksi di bawah
    	/* Aksi apabila kondisi tidak terpenuhi */
        fahr = fungsiFahr(celc); //Memasukkan nilai untuk variabel fahr dari pemanggilan fungsiFahr()
        cout << "Fahrenheit = " << fahr; //Output variabel fahr
    } //Penutup dari else {
    
    return 0; //Untuk memberitahu kepada compiler bahwa program telah selesai dieksekusi
} //Penutup dari int main();
