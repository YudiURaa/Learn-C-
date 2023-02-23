#include <iostream>
#include <limits>

using namespace std;

int main(){
    int a; // interger merupakan data yang terbatas pada 4bytes
    a = 200;
    cout << sizeof a << " byte" << endl;
    cout << std::numeric_limits<int>::max() << endl;
    cout << std::numeric_limits<int>::min() << endl;
    return 0;

//Macam - Macam Tipe Data :
    //Double, tipe data nomor beserta desimal
    const double Price = 12; 
    double GPA = 21;

    // Single Character 
    char grade = 'A';
    char initial = 'B';

    // Boolean ( True atau False)
    bool A = false;
}