#include <iostream> // library c++ merakyat;

using namespace std; // biar cout-nya simpel;

int main() {
    cout << "1. Sabun           Rp. 2K      (10 Tersedia)\n"; // pasang menunya :v;
    cout << "2. Shampo          Rp. 5K      (15 Tersedia)\n";
    cout << "3. Pasta Gigi      Rp. 3.5K    (20 Tersedia)\n";
    cout << "4. Sikat Gigi      Rp. 2.5K    (5 Tersedia)\n";
    cout << "5. Handuk          Rp. 4K      (8 Tersedia)\n";
    
    string barang[5] = {"Sabun", "Shampo", "Pasta Gigi", "Sikat Gigi", "Handuk"}; // simpan ke array;
    int harga[5] = {2000, 5000, 3500, 2500, 4000};
    int stock[5] = {10,15,20,5,8};
    int beli[5];
    int hargaTotal = 0;

    for (int i = 0; i < 5; i++) { // perulangan for untuk mencetak beli barang dari sabun ~ handuk;
        cout << "Masukkan Jumlah Beli Untuk Barang " << barang[i] << " : ";
        cin >> beli[i];

        while (beli[i] > stock[i]) { // jika jumlah beli melebihi stock maka akan disuruh mengulang untuk memasukkan jumlahnya;
            cout << "Maaf, Stok Barang " << barang[i] << " Tidak Mencukupi";
            cout << "Masukkan Ulang Jumlah Beli: ";
            cin >> beli[i];
        }
        
        hargaTotal += beli[i] * harga[i]; // rumus total harga;
    }

    cout << "\nTotal Harga: " << hargaTotal << "\n\n"; // cetak hasil akhirnya;
    cout << "Terima Kasih Sudah Berbelanja :D" << endl;
}