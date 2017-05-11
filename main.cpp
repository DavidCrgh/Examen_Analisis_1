#include <iostream>

using namespace std;

int mcdEuclides(int a, int b, int* i);

int main() {

    int i = 0;
    int a,b,mcd;

    while (true) {
        i = 0;
        cout << "Inserte un a: ";
        cin >> a;
        cout << "Inserte un b: ";
        cin >> b;
        mcd = mcdEuclides(a,b,&i);

        cout << "MCD de a = " << a << " y b = " << b << " es: " << mcd << endl;
        cout << "Iteraciones realizadas: " << i << endl << endl;
    }
}

int mcdEuclides(int a, int b, int* i){
    int t = 0;

    while(b != 0){
        t = b;
        b = a % b;
        a = t;
        *i = *i + 1;
    }
    return a;
}