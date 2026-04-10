#include <iostream>

using namespace std;

int primos(){


  if (n <= 1) {
        return false;
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main(){

       int n;

    cout << "Enter an integer: ";
    cin >> n;

    if (ehPrimo(n)) {
        cout << "The number is prime" << endl;
    } else {
        cout << "The number is not prime" << endl;
    }

    return 0;
}

