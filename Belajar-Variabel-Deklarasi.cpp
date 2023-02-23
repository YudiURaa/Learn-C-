#include <iostream>
#include <math.h>
#include <unistdh.h>

using namespace std; // using namespace membuat kata std sebagai penyebut, menjadi tidak perlu lagi ditulis dalam std

int main(){
    /*
    A adalah Contoh penggunaan variabel standar CPP
    int (Interger) adalah sebuah deklarasi yang menyatakan a sebagai variabel
    */ 

    int a;
    a = 10;
    cout << a << std::endl;
    
    int b;
    cout << "Masukkan Nilai Anda : ";
    cin >> b;
    cout << "Nilai yang anda masukkan adalah : ";    
    cout << b << endl;

    int c; // c disini sebagai program penjumlahan sangat sederhana
    cout << "Maka Jika Dijumlahkan akan menghasilkan : ";
    sleep(2);
    cout << a + b << endl;

    printf("Selamat Belajar");


}
