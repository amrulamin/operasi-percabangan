#include <iostream>
using namespace std;

int main(){

    cout << "=== Program Pembayaran Amrul ===" << endl;
	int total_belanja;

    cout << "Masukan total belanja: ";
    cin >> total_belanja;

    if(total_belanja > 100000){
        cout << "Selamat! anda dapat hadiah payung catik" << endl;
    }

    cout << "Terimakasih sudah berbelanja di toko kami" << endl;

    return 0;
}
