#include <iostream>    //pengarah kepada compiler untuk meletakan kode dari file kedalam header iostream
#include <time.h>  	  //Mendefinisikan fungsi tanggal dan waktu penanganan
using namespace std;  //mendeklarasikan kepada compiler bahwa akan menggunakan semua fungsi yang terdapat dalam namespace std (standar)

//variabel global
int pil, pilx, ketemu = 0, Alvi, Dea, Rayya, Vira;  		 //mendeklarasikan variabel menggunakan tipe data integer
string minimarket, iniPilihan[5], dipilih, toko, adaStock, member, infotoko;  								 //mendeklarasikan variabel menggunakan tipe data string
float diskon, harga, total, hitungdiskon, totalharga, tunai, kembalian;  //mendeklarasikan variabel menggunakan tipe data float
time_t now = time(0);
char* infotanggal = ctime(&now);

void pilihanMinimarket(string minimarket, string iniPilihan[3]){  //subrogram prosedur
	for(int i=1; i <= 3; i++){ //proses perulangan dengan sifat increment
		cout << i << ". " << minimarket << " " << iniPilihan[i] << endl; //aksi dari perulangan
	} //akhir dari perulangan
} //akhir dari subprogram prosedur

int pilihanToko(){ //subrogram fungsi
	cout << "\n\nAnda ingin beli Oreo x Blackpink di minimarket mana?\n" << endl;   //fungsi keluaran untuk menampilkan tulisan
	cout << "========================================" << endl;    //fungsi keluaran untuk menampilkan tulisan
    cout << "||    1. Alfamart                     ||" << endl;    //fungsi keluaran untuk menampilkan tulisan
    cout << "||    2. Indomaret                    ||" << endl;    //fungsi keluaran untuk menampilkan tulisan
    cout << "========================================\n" << endl;  //fungsi keluaran untuk menampilkan tulisan
	cout << "Masukkan pilihan: ";    //fungsi keluaran untuk menampilkan tulisan
	cin >> pil;		//fungsi masukkan untuk menyimpan data dalam suatu variabel
	cout << endl;	//untuk baris baru atau enter
	
	system("CLS"); //Untuk clear output sebelumnya
	
	//pengkondisian
	if(pil==1){  		//menentukan kondisi benar atau tidak, jika kondisi benar maka perintah akan dikerjakan
		cout << "-----------------------------\n";         //fungsi keluaran untuk menampilkan data
    	cout << "|   Anda Memilih Alfamart   |" << endl;  //fungsi keluaran untuk menampilkan tulisan
    	cout << "-----------------------------\n";        //fungsi keluaran untuk menampilkan data
		pilx = 1;   //melakukan perintah dari kondisi
	} else if(pil==2){	//menentukan kondisi selanjutnya benar atau tidak, jika kondisi benar maka perintah akan dikerjakan
		cout << "------------------------------\n";    		//fungsi keluaran untuk menampilkan data
    	cout << "|   Anda Memilih Indomaret   |" << endl;	//fungsi keluaran untuk menampilkan tulisan
    	cout << "------------------------------\n";			//fungsi keluaran untuk menampilkan data
		pilx = 2;	//melakukan perintah dari kondisi
	} else {			//menentukan kondisi akhir, maka perintah akan diabaikan
		cout << " ----------------------------------------\n";			//fungsi keluaran untuk menampilkan data
		cout << " | Pilihan Anda tidak ada dalam daftar! | " << endl;	//fungsi keluaran untuk menampilkan tulisan
		cout << " ----------------------------------------\n";			//fungsi keluaran untuk menampilkan data
		return pilihanToko();  //fungsi yang tidak mengembalikan nilai
	} //akhir dari pengkondisian
	
	cout << "\n===================================================" << endl;
	
	//pengkondisian
	if(pilx==1){		//menentukan kondisi benar atau tidak, jika kondisi benar maka perintah akan dikerjakan
		cout << "\nAnda ingin beli Oreo x Blackpink di Alfamart mana?\n" << endl;   //fungsi keluaran untuk menampilkan tulisan
		
		minimarket = "Alfamart";
		iniPilihan[1] = "Pamayahan";
		iniPilihan[2] = "Mitra Usaha";
		iniPilihan[3] = "Pasar Bangkir";
		
		pilihanMinimarket(minimarket, iniPilihan);		//pemanggil subprogram
	} else {					//menentukan kondisi benar atau tidak, jika kondisi benar maka perintah akan dikerjakan
		cout << "\nAnda ingin beli Oreo x Blackpink di Indomaret mana?\n" << endl;	//fungsi keluaran untuk menampilkan tulisan
		
		minimarket = "Indomaret";
		iniPilihan[1] = "Lohbener";
		iniPilihan[2] = "Pamayahan";
		iniPilihan[3] = "Celeng";
		
		pilihanMinimarket(minimarket, iniPilihan);		//pemanggil subprogram
	} //akhir dari pengkondisian
	cout << "\nMasukkan pilihan: ";		//fungsi keluaran untuk menampilkan tulisan
	cin >> pil;		//fungsi masukkan untuk menyimpan data dalam suatu variabel
	cout << endl;	//untuk baris baru atau enter
	
	system("CLS"); //Untuk clear output sebelumnya
	
	//pengkondisian
	if(pilx==1){	//menentukan kondisi benar atau tidak, jika kondisi benar maka perintah akan dikerjakan
	    toko = "Alfamart ";  //proses dari variabel untuk menampilkan tulisan
	    infotoko = " " + toko;
	    
	    if(pil==1){		//menentukan kondisi pertama benar atau tidak, jika kondisi benar maka perintah akan dikerjakan
	        dipilih += iniPilihan[1];		//untuk Pengisian dan Penambahan
	        ketemu = 1; //memasukkan nilai 1 pada variabel ketemu
	    } else if(pil==2){	//menentukan kondisi kedua benar atau tidak, jika kondisi benar maka perintah akan dikerjakan
		    dipilih += iniPilihan[2];	//untuk Pengisian dan Penambahan
	    } else if(pil==3){	//menentukan kondisi ketiga benar atau tidak, jika kondisi benar maka perintah akan dikerjakan
		    dipilih += iniPilihan[3];	//untuk Pengisian dan Penambahan
		    ketemu = 1; //memasukkan nilai 1 pada variabel ketemu
	    } else {			//menentukan kondisi akhir, maka perintah akan diabaikan
	        cout << " ----------------------------------------\n";			//fungsi keluaran untuk menampilkan data
			cout << " | Pilihan Anda tidak ada dalam daftar! | " << endl;	//fungsi keluaran untuk menampilkan tulisan
			cout << " ----------------------------------------\n";			//fungsi keluaran untuk menampilkan data
	        return pilihanToko();
	    }
	
	} else if(pilx==2){			//menentukan kondisi benar atau tidak, jika kondisi benar maka perintah akan dikerjakan
	    toko = "Indomaret ";	//proses dari variabel untuk menampilkan tulisan
	    infotoko = toko;
	    
	    if(pil==1){			//menentukan kondisi pertama benar atau tidak, jika kondisi benar maka perintah akan dikerjakan
	        dipilih += iniPilihan[1];		//untuk Pengisian dan Penambahan
	        ketemu = 1; //memasukkan nilai 1 pada variabel ketemu
	    } else if(pil==2){	//menentukan kondisi kedua benar atau tidak, jika kondisi benar maka perintah akan dikerjakan
		    dipilih += iniPilihan[2];		//untuk Pengisian dan Penambahan
		    ketemu = 1; //memasukkan nilai 1 pada variabel ketemu
	    } else if(pil==3){	//menentukan kondisi ketiga benar atau tidak, jika kondisi benar maka perintah akan dikerjakan
		    dipilih += iniPilihan[3];		//untuk Pengisian dan Penambahan
	    } else {			//menentukan kondisi akhir, maka perintah akan diabaikan
	        cout << " ----------------------------------------\n";			//fungsi keluaran untuk menampilkan data
			cout << " | Pilihan Anda tidak ada dalam daftar! | " << endl;	//fungsi keluaran untuk menampilkan tulisan
			cout << " ----------------------------------------\n";			//fungsi keluaran untuk menampilkan data
	        return pilihanToko();
	    }
	} //akhir dari pengkondisian
	
	cout << "Anda Memilih " << toko << dipilih << endl;	//fungsi keluaran atau output data
	cout << "==================================\n";				//fungsi keluaran untuk menampilkan data
	
	if(ketemu >= 1){	//menentukan kondisi benar atau tidak, jika kondisi benar maka perintah akan dikerjakan
		adaStock = "Stock tersedia!";		//proses dari variabel untuk menampilkan tulisan
	} else {	//menentukan kondisi akhir
		adaStock = "Stock tidak ada!";	//proses dari variabel untuk menampilkan tulisan
	}

    cout << endl; //untuk baris baru atau enter
    
    cout << "Stock Oreo x Blackpink di " << toko << dipilih << " : "<< endl;	//fungsi keluaran untuk menampilkan tulisan
    cout << "\n-----------------------\n";			//fungsi keluaran untuk menampilkan data
    cout << "|   " << adaStock << "   |" << endl;	//fungsi keluaran untuk menampilkan data
    cout << "-----------------------\n";			//fungsi keluaran untuk menampilkan data
    
    if(ketemu < 1){		//menentukan kondisi benar atau tidak, jika kondisi benar maka perintah akan dikerjakan
    	cout << "\n\nSilakan Cari di Minimarket Lain !!" << endl;	//fungsi keluaran untuk menampilkan tulisan
    	cout << "==================================\n";				//fungsi keluaran untuk menampilkan data
		dipilih.clear();		//mereset nilai variabel dipilih
		return pilihanToko(); 	//untuk mengembalikan nilai
	} //akhir dari pengkondisian
	
} 	//akhir dari subrogram fungsi

void infoHarga(){
    cout << "\n -----------" << endl;
    cout << "| Informasi |" << endl;
    cout << "==============================================================" << endl;	//fungsi keluaran untuk menampilkan data
    cout << "||                                                          ||" << endl;		//fungsi keluaran untuk menampilkan tulisan
    cout << "||    Harga Satuan : Rp.16.900                              ||" << endl;		//fungsi keluaran untuk menampilkan tulisan
    cout << "||    Pembelian 5 Oreo x Blackpink Mendapatkan Diskon 5%    ||" << endl;		//fungsi keluaran untuk menampilkan tulisan
    cout << "||             DISKON TIDAK BERLAKU KELIPATAN               ||" << endl;		//fungsi keluaran untuk menampilkan tulisan
    cout << "||                                                          ||" << endl;		//fungsi keluaran untuk menampilkan tulisan
    cout << "||    Memiliki Member Mendapatkan Tambahan Diskon 7%        ||" << endl;		//fungsi keluaran untuk menampilkan tulisan
    cout << "||                                                          ||" << endl;		//fungsi keluaran untuk menampilkan tulisan
    cout << "==============================================================\n" << endl;	//fungsi keluaran untuk menampilkan data
    cout << "Masukkan Jumlah Pembelian : ";		//fungsi keluaran untuk menampilkan tulisan
    cin >> pil;		//fungsi masukkan untuk menyimpan data dalam suatu variabel
}

float penentuanMember(float diskon){ //subprogram fungsi
	cout << "\nApakah Memiliki Member? [ya/tidak] : ";		//fungsi keluaran untuk menampilkan tulisan
    cin >> member;			//fungsi masukkan untuk menyimpan data dalam suatu variabel
    if (member=="ya"){		//menentukan kondisi benar atau tidak, jika kondisi benar maka perintah akan dikerjakan
        diskon = 0.07;		//aksi dari suatu kondisi
        if(pil>=5){			//menentukan kondisi benar atau tidak, jika kondisi benar maka perintah akan dikerjakan
            diskon = diskon + 0.05; //aksi dari suatu kondisi
        }
    } else {			//menentukan kondisi benar atau tidak, jika kondisi benar maka perintah akan dikerjakan
        diskon = 0;		//aksi dari suatu kondisi
        if(pil>=5){		//menentukan kondisi benar atau tidak, jika kondisi benar maka perintah akan dikerjakan
            diskon = diskon + 0.05;	//aksi dari suatu kondisi
        }
    } 
    return diskon; //fungsi untuk mengembalikan nilai
} 	//akhir dari subrogram fungsi

float penentuanAkhir(){
    harga = 16900;						//menentukan hasil dari variabel "harga"
    total = harga*pil;					//menentukan hasil dari variabel "total" dengan rumus perkalian
    hitungdiskon = total*diskon;		//menentukan hasil dari variabel "hitungdiskon" dengan rumus perkalian
    totalharga = total - hitungdiskon;	//menentukan hasil dari variabel "totalharga" dengan rumus pengurangan
    
    cout << "\n ------------------------" << endl;
    cout << "| Rincian Pembelian Oreo |" << endl;
    cout << "=====================================\n" << endl;		//fungsi keluaran untuk menampilkan data
    cout << "Total Harga              = Rp. " << total << endl;	//fungsi keluaran untuk menampilkan tulisan
    cout << "Diskon yang Didapatkan   = " << diskon*100 << "%" << endl;	//fungsi keluaran untuk menampilkan tulisan
    cout << "Total yang Harus dibayar = Rp. " << totalharga << endl;	//fungsi keluaran untuk menampilkan tulisan
    cout << "\n=====================================\n" << endl;		//fungsi keluaran untuk menampilkan data
    cout << "Masukkan Tunai (cash) : Rp. ";		//fungsi keluaran untuk menampilkan tulisan
    cin >> tunai;		//fungsi masukkan untuk menyimpan data dalam suatu variabel
    
    if(tunai >= totalharga){
    	kembalian = tunai - totalharga;  //proses menentukan hasil variabel "kembalian" dengan rumus pengurangan
	} else {
		cout << "\n --------------------------------------------------------\n";			//fungsi keluaran untuk menampilkan data
		cout << " | Tunai (cash) tidak boleh kurang dari total harga ya! |" << endl;
		cout << " --------------------------------------------------------\n";			//fungsi keluaran untuk menampilkan data
		return penentuanAkhir();
	}
    
    cout << "\n=====================================\n\n" << endl;		//fungsi keluaran untuk menampilkan data
    
    system("CLS"); //Untuk clear output sebelumnya
    
	//output struk pembelian
    cout << " ------------------------------\n";		//fungsi keluaran untuk menampilkan data
    cout << " |      STRUK PEMBELIAN       |" << endl; 	//fungsi keluaran untuk menampilkan tulisan
    cout << " |      OREO x BLACKPINK      |" << endl;	//fungsi keluaran untuk menampilkan tulisan
    cout << " ------------------------------\n";		//fungsi keluaran untuk menampilkan data
    cout << " |         MINIMARKET         |\n";		//fungsi keluaran untuk menampilkan tulisan
    cout << " |         " << infotoko << "         |\n";	//fungsi keluaran untuk menampilkan tulisan
    cout << " ==============================\n";		//fungsi keluaran untuk menampilkan data
    cout << "  Harga Satuan       Rp. " << harga << endl;	//fungsi keluaran untuk menampilkan tulisan
    cout << "  Total Item     " << pil << "   Rp. " << total << endl;	//fungsi keluaran untuk menampilkan tulisan
    cout << " ------------------------------\n";		//fungsi keluaran untuk menampilkan data
    cout << "  Diskon (" << diskon*100 << "%" << ")" << endl;	//fungsi keluaran untuk menampilkan tulisan
    cout << "  Anda Hemat         Rp. " << hitungdiskon << endl;	//fungsi keluaran untuk menampilkan tulisan
    cout << " ------------------------------\n";		//fungsi keluaran untuk menampilkan data
    cout << "  Total              Rp. " << totalharga << endl;			//fungsi keluaran untuk menampilkan tulisan
    cout << "  Tunai              Rp. " << tunai << endl;				//fungsi keluaran untuk menampilkan tulisan
    cout << "  Kembalian          Rp. " << kembalian << endl;			//fungsi keluaran untuk menampilkan tulisan
    cout << " ==============================\n";				//fungsi keluaran untuk menampilkan data
    cout << "    " << infotanggal; //fungsi keluaran untuk menampilkan data
    cout << " ------------------------------\n";		//fungsi keluaran untuk menampilkan data
    
    cout << "\n --------------------------------------------------------\n";		//fungsi keluaran untuk menampilkan data
    cout << " |                   TERIMAKASIH!                       |" << endl; 	//fungsi keluaran untuk menampilkan tulisan
    cout << " |            SILAKAN DATANG KEMBALI YA ^_^             |" << endl; 	//fungsi keluaran untuk menampilkan tulisan
    cout << " --------------------------------------------------------\n\n";		//fungsi keluaran untuk menampilkan data
}

int main() { 	//awalan dari deklarasi fungsi main
	cout << "========================= PROGRAM MENCARI OREO X BLACKPINK DI MINIMARKET YANG ADA DI LOHBENER =========================" << endl;	//fungsi keluaran untuk menampilkan tulisan
	cout << endl;  //untuk baris baru atau enter
	cout << "Akhir-akhir ini banyak remaja yang mencari Oreo yang berkolaborasi dengan girl grup korea yaitu Blackpink. \n";	//fungsi keluaran untuk menampilkan tulisan
	cout << "Makanan ringan tersebut hanya tersedia di minimarket seperti Alfamart dan Indomaret tetapi stok-nya terbatas \n";	//fungsi keluaran untuk menampilkan tulisan
	cout << "(limited edition).";	//fungsi keluaran untuk menampilkan tulisan
	
	pilihanToko(); //pemanggil subprogram proses pemilihan minimarket dan penentuan stok
    
    infoHarga(); //memanggil subprogram informasi harga dan masukkan jumlah pembelian
    
    diskon = penentuanMember(diskon);  	//menentukan hasil dari variabel "diskon" dari pemanggil subrogram
    
    penentuanAkhir(); //proses menentukan total harga
    
    string kembali;
    cout << "Apakah Anda ingin kembali ke Menu Utama? (y/n) : ";
    cin >> kembali;
	if(kembali=="y"){
		system("CLS"); //Untuk clear output sebelumnya
		return main();
	} else {
		return 0;  //memberitahu compiler bahwa program telah selesai dieksekusi
	}
    
} //akhir dari eksekusi main
