#include <iostream>

using namespace std;

/*
    Kalkulator dengan sistem pemilihan operator
*/
int main (){
    
        
    double a,b,hasil;
    char aritmatika, ulang;
    cout << "Selamat Datang di Kalkulator Sederhana \nBy Yudi Prasetyo" << endl;
    cout << "Tekan enter untuk Melanjutkan";
    cin.get();

    while (true ){
        //Memasukkan Input dari User
        cout << "Masukkan Nilai : ";
        cin >> a ;
        
        if(cin.fail()){
            cout << "Input harus angka! Silahkan coba lagi." << endl;
            cin.clear();
            cin.ignore(256, '\n');
            continue;
        }
        
        cout << "Masukkan Operator +, -, /, * : ";
        cin >> aritmatika ;
        cout << "Masukkan Nilai Kedua : ";
        cin >> b ;
        
        // validasi input
        // error handling

        if(cin.fail()){
            cout << "Input harus angka! Silahkan coba lagi." << endl;
            cin.clear();
            cin.ignore(256, '\n');
            continue;
        }

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
        cout << "Coba Lagi? (y/n)";
        cin >> ulang;

        if (ulang =='n'){
            cout << "Terimakasih" << endl;
            break;
            
        }
        else {
            
            system("clear");
        }
    }

        
        cin.ignore();

    return 0;
}