#include <iostream>
using namespace std;

void cetakdata(string nama, string nisn, string jurusan, string tinggibadan)
{
    cout << "masukan nisn anda : " << endl;
    cin >>nisn;
    cout << "masukan nama anda : " << endl;
    cin >>nama;
    cout << "masukan jurusan anda : " << endl;
    cin >>jurusan;
    
    cout << "tinggibadan : " << endl;
    cin >>tinggibadan;


}

int main(){
    string nama = "adam";
    string jurusan = "PPLG";
    string nisn = "uknown";
    string tinggibadan = "160cm";


   cetakdata(nama,nisn,jurusan,tinggibadan);

   return 0; 
}

