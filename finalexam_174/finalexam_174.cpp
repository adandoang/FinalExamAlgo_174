// 1.
#include <iostream>
#include <string>
using namespace std;
class Node {
public:
	//isi disini
	string produk;
	string namaProduk;
	Node* next;
};
class ManajemenProduk {
private:
	Node* head;
public:
	ManajemenProduk() {
		head = NULL;
	}
	void tambahProduk() {
		string nama;
		int jumlah;
		string tipe;
		cout << "========== TAMBAH PRODUK ==========" << endl;
		cout << "Nama Produk : ";
		getline(cin, nama);
		cout << "Jumlah Produk : ";
		cin >> jumlah;
		cin.ignore(); // Membersihkan buffer input
		cout << "Tipe Produk : ";
		getline(cin, tipe);
		//isi disini
		Node* current = head;
		Node* last = NULL;
		
		cout << "Produk berhasil ditambahkan!" << endl;
	}
	void tampilkanSemuaProduk() {
		cout << "========== SEMUA DATA PRODUK ==========" << endl;
		if (head == NULL) {
			cout << "Belum ada data produk yang tersimpan." << endl;
		}
		else {
			Node* current = head;
			//isi disini
			Node* last = NULL;
		}
	}
	void cariProdukByNama() {
		cout << "========== CARI PRODUK BERDASARKAN NAMA ==========" << endl;
		if (head == NULL) {
			cout << "Belum ada data produk yang tersimpan." << endl;
		}
		else {
			string targetNama;
			cout << "Nama Produk yang dicari: ";
			getline(cin, targetNama);
			Node* current = head;
			int posisi = 0;
			while (current != NULL) {
				posisi++;
				//isi disini
				if (current != NULL) {
					cout << "produk : " << current->produk << ", Nama produk: " << current->namaProduk << endl;
					return;
				}
			}
			if (current == NULL) {
				cout << "Nama produk " << targetNama << " TIDAK DITEMUKAN" <<
					endl;
			}
		}
	}
	void algorithmaSortByJumlahProduk() {
		if (head == NULL || head->next == NULL) {
			return; // Tidak perlu sorting jika hanya terdapat 0 atau 1 node
		}
		Node* current;
		Node* last = NULL;
		current = head;
		//isi disini
		return;
	}
};
int main() {
	ManajemenProduk manajemenProduk;
	int pilihan;
	do {
		cout << "========== APLIKASI MANAJEMEN DATA PRODUK ==========" << endl;
		cout << "1. Tambah Produk" << endl;
		cout << "2. Tampilkan Semua Produk" << endl;
		cout << "3. Cari Produk berdasarkan Nama" << endl;
		cout << "4. Urutkan Produk berdasarkan Jumlah" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			manajemenProduk.tambahProduk();
			break;
		case 2:
			manajemenProduk.tampilkanSemuaProduk();
			break;
		case 3:
			manajemenProduk.cariProdukByNama();
			break;
		case 4:
			manajemenProduk.algorithmaSortByJumlahProduk();
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}// 2. Singlelinkedlist,  // 3. I.	Allocate memory for the new node.
//    II.	Assign value to the data field of the new node.
//	  III.	Make the next field of the new node point to NULL.
//    IV.	If the queue is empty, execute the following steps :
//       a.Make 10 to the new node
//       b.Make 15 to the new node
//       c.Exit
//       d.Make the next field of 15 to the new node.
//    V.	Make 15 to the new node.
// 4. saat datanya bersifat tumpukan, jadi data yg terakhir masuk dialah yang pertama keluar, berbeda dengan queue yang dimana datanya bersifat 
//    antrian atau barisan, jadi data yang pertama kali masuk dialah yang pertama kali keluar
// 5. a. 5
//    b. in order traversal membaca dari leftchild ke root ke rightchild, jadi dari 50 lanjut ke bawah paling kiri 48 lalu seterusnya kebawah 
//       dan jika tidak ada leftchild lanjutan maka dia naik ke parent lalu turun lagi ke bagian kanannya contoh ada pada angka 20 jika tidak ada 
//       leftchild lanjutan maka dia akan kembali ke 30 dan lanjut ke 32 dan seterusnya ke kanan
