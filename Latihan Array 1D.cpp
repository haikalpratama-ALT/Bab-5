#include <iostream>
using namespace std;
int main (){
	int n;
	cout << "Masukkan jumlah data : "; cin >> n;
	int arr[100];
	for (int i = 0; i < n; i++) cin >> arr[i];
	int mx = arr[0];
	for (int i = 1; i < n; i++) if (arr[i] > mx) mx = arr[i];
	cout << "Nilai Maks : " << mx << "\n";
	return 0;
}
