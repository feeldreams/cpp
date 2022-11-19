#include<iostream> //Memanggil header yang akan digunakan. iostream digunakan untuk input-output
using namespace std; //Mendeklarasikan kepada compiler bahwa akan menggunakan semua fungsi yang terdapat di dalamnya

float volumeKubus(float s){ //Subprogram fungsi float volumeKubus(float s)
    float kubus = s*s*s; //Memasukkan nilai untuk variabel kubus dari proses s x s x s
    
    return kubus; //Mengembalikan nilai dari variabel kubus
} //Penutup dari float volumeKubus(float s)

float volumeSilinder(float r, float t){  //Subprogram fungsi float volumeSilinder(float r, float t)
    float phi = 3.1415926535898; //Mengisi nilai untuk variabel phi
    float silinder = phi*(r*r)*t; //Memasukkan nilai untuk variabel silinder dari proses phi x (r x r) x t
    
    return silinder; //Mengembalikan nilai dari variabel silinder
} //Penutup dari float volumeSilinder(float r, float t)

float volumeKerucut(float r, float t){  //Subprogram fungsi float volumeKerucut(float r, float t)
    float phi = 3.1415926535898; //Mengisi nilai untuk variabel phi
    float kerucut = (phi*r*r*t)/3; //Memasukkan nilai untuk variabel kerucut dari proses phi x r x r x t / 3
    
    return kerucut; //Mengembalikan nilai dari variabel kerucut
} //Penutup dari float volumeKerucut(float r, float t)

int main() { //Fungsi utama saat program pertama kali dijalankan
    float t, r, s, kubus, silinder, kerucut; //Deklarasi variabel dari tipe data float
    int pilihan; //Deklarasi variabel dari tipe data integer
    
    /* Output pertama kali saat program dieksekusi */
    cout << "Pilih yang Ingin Dihitung:" << endl;
    cout << "1. Volume Kubus" << endl;
    cout << "2. Volume Silinder" << endl;
    cout << "3. Volume Kerucut" << endl;
    cout << endl; //Output pemisah
    cout << "Pilih [ 1 / 2 / 3 ] = ";
    
    cin >> pilihan; //Input variabel pilihan
    cout << endl; //Output pemisah
    
    if(pilihan==1){ //Pengkondisian apakah variabel pilihan sama dengan 1
    	//Output setelah memasukkan nilai 1
    	cout << "-----------------------" << endl;
    	cout << "Menghitung Volume Kubus\n";
    	cout << "-----------------------\n" << endl;
        cout << "Masukkan sisi kubus: ";
        cin >> s; //Input variabel s
        kubus = volumeKubus(s); //Memasukkan nilai untuk variabel kubus dari pemanggilan volumeKubus()
        cout << "\nVolume Kubus = " << kubus; //Output variabel kubus
    } else if(pilihan==2) { //Pengkondisian apakah variabel pilihan sama dengan 2
    	//Output setelah memasukkan nilai 2
    	cout << "---------------------------" << endl;
    	cout << "Menghitung Volume Silinder\n";
    	cout << "---------------------------\n" << endl;
        cout << "Masukkan panjang jari-jari: ";
        cin >> r; //Input variabel r
        cout << "Masukkan nilai tinggi : ";
        cin >> t; //Input variabel t
        silinder = volumeSilinder(r,t); //Memasukkan nilai untuk variabel silinder dari pemanggilan volumeSilinder()
        cout << "\nVolume Silinder = " << silinder << " m^3"; //Output variabel silinder
    } else if(pilihan==3){ //Pengkondisian apakah variabel pilihan sama dengan 3
    	//Output setelah memasukkan nilai 3
    	cout << "-------------------------" << endl;
    	cout << "Menghitung Volume Kerucut\n";
    	cout << "-------------------------\n" << endl;
        cout << "Masukkan panjang jari-jari: ";
        cin >> r; //Input variabel r
        cout << "Masukkan nilai tinggi : ";
        cin >> t; //Input variabel t
        kerucut = volumeKerucut(r,t); //Memasukkan nilai untuk variabel kerucut dari pemanggilan volumeKerucut()
        cout << "\nVolume Kerucut = " << kerucut << " m^3"; //Output variabel kerucut
        
    } else { //Apabila semua kondisi di atas tidak terpenuhi maka lakukan aksi di bawah
        cout << "Anda memilih yang tidak ada dalam daftar!!!" << endl; //Output untuk memberitahu bahwa hasil input tidak ada dalam pilihan
    } //Penutup dari else {

    return 0; //Untuk memberitahu kepada compiler bahwa program telah selesai dieksekusi
} //Penutup dari int main(){
