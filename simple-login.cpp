#include <iostream>
using namespace std;

int main() {

    // Username = Dekna
    // pass = Dekna123

    // Membuat sistem login sederhana dengan C++
    // 1. User di suruh memasukan username dan password
    // 2. Dicek dulu, Jika username = Dekna maka dianggap benar, jika tidak akan menampilkan pesan- 
    // -Username atau password anda salah!
    // 3. Cek lagi jika password yang di inputkan benar, maka akan menampilkan pesan-
    // Selamat datang Dekna (Dekna di ambil dari variable username di dalam fungsi if)
    // Jika password tidak Dekna123 maka sistem akan menampilkan pesan-
    // Username atau password anda salah!

    string username;
    string pass;

    cout << "--- Welcome ---\n";
    cout << "Masukan username anda :\n";
    cin >> username;
    cout << endl;
    cout << "Masukan password anda :\n";
    cin >> pass;
    cout << "---------------\n";

    if (username == "Dekna") {
        cout << "";
    } else {
        cout << "Username atau password anda salah!\n";
    }

    if(pass == "Dekna123") {
        cout << "Selamat datang " <<username <<endl;
    }else {
        cout << "Username atau password anda salah!\n";
    }
}