#include <iostream>
#include <vector>
#include <string>
#include <utility> 

using namespace std;

int main() {
    int N = 8; 
    vector<pair<string, int > > transaksi;
    string namaBarang;
    int harga;

    cout << "Masukkan " << N << " transaksi (namaBarang harga):" << endl;

    for (int i = 0; i < N; i++) {
        cin >> namaBarang >> harga;
        transaksi.push_back(make_pair(namaBarang, harga));
    }

    cout << "\nDaftar Transaksi:" << endl;
    for (int i = 0; i < transaksi.size(); i++) {
        cout << transaksi[i].first << " " << transaksi[i].second << endl;
    }

    return 0;
}

