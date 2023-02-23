#include <iostream>

using namespace std;

/*
    Kalkulator dengan sistem pemilihan operator
*/
int main (){

    double a,b,hasil;
    char aritmatika;
    cout << "Selamat Datang di Kalkulator Sederhana \nBy Yudi Prasetyo" << endl;
    cout << "Tekan enter untuk Melanjutkan";
    cin.get();

    //Memasukkan Input dari User
    cout << "Masukkan Nilai : ";
    cin >> a ;
    cout << "Masukkan Operator +, -, /, * : ";
    cin >> aritmatika ;
    cout << "Masukkan Nilai Kedua : ";
    cin >> b ;
    cout << "\nHasil Perhitungan : ";
    cout << a <<" " << aritmatika << " " << b ;

    // Pemilihan Operator 
    if (aritmatika == '+'){
        hasil = a + b;
    } else if (aritmatika == '-'){
        hasil = a - b;
    } else if (aritmatika == '/'){
        hasil = a / b;
    } else if (aritmatika == '*'){
        hasil = a * b;
    } else {
        cout << "\nOperator Yang Anda Masukkan Salah, Silahkan Coba Lagi :)";
    }

    cout << " = " << hasil << endl;
    cin.get();
    cin.ignore();

    return 0;
}