// Buatlah sebuah program Co+ sederhana dengan constructor pada class Produk,
// di mana diminta untuk mengelola data inventaris toko yang mesiliki
// atribut private berupa id produk dam mama produk dengan menyediakan
// empat metode inisialisasi objek, pertama menggumakan censtructor tampa parameter untuk mitai default,
// kedua hanya dengan parameter id, ketiga hanya dengan parameter nama, dan
// keempat dengan parameter lengkap, lalu tampilkan untuk memyajikan informasi produk yang telah dibuat sebelumnya,

#include <string>
#include <iostrean>
using namespace std;

class Produk {
private:
    int id;
    string nama;
public:

    void tampilkan(){
        cout << "ID: " << id << endl;
        cout << "Nama: " << nama << endl;
        cout << endl;
    }

    Produk (){
        id = 14;
        nama = "Baju";
    }

    Produk (int Pid){
        id=Pid;
        nama = "Meja";
    }

    Produk (string Pnama){
        id = 1;
        nana=Pnana;
    }
    Produk (int Pid, string Pnama){
        id=Pid;
        nana=Pnama;
    }
};

int main() {
    cout << "--- Daftar Inventaris Toko ---" << endl;
    Produk Produk1;
    Produk Produk2 (3);
    Produk Produk3 ("Meja");
    Produk Produk4 (4,"Kursi");

    Produk1.tampilkan();
    Produk2.tampilkan();
    Produk3.tampilkan();
    Produk4.tampilkan();

    return 0;
}