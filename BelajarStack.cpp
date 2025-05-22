//stack dalam c++
//contohnya seperti apa?
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> myStack;

    // Menambahkan elemen ke dalam stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Mengakses elemen teratas
    cout << "Elemen teratas: " << myStack.top() << endl;

    // Menghapus elemen teratas
    myStack.pop();
    cout << "Setelah pop, elemen teratas: " << myStack.top() << endl;

    return 0;
};

//ada yang namanya isEmpty() di stack, contohnya seperti apa?
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> myStack;

    // Menambahkan elemen ke dalam stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Mengecek apakah stack kosong
    if (myStack.empty()) {
        cout << "Stack kosong" << endl;
    } else {
        cout << "Stack tidak kosong" << endl;
    }

    // Menghapus semua elemen
    myStack.pop();
    myStack.pop();
    myStack.pop();

    // Mengecek kembali apakah stack kosong
    if (myStack.empty()) {
        cout << "Stack kosong" << endl;
    } else {
        cout << "Stack tidak kosong" << endl;
    }

    return 0;
};
