#include <iostream>

using namespace std;

int SomaNaturais(int n){

    int n=0;

        for(int i = 1; i <= n; i++) {
        soma += i;
    }
    
    return soma;
}


int main(){

    int n;

    cout << "Enter an integer:";
    cin >> n;
    
    cout << "Result: " << somaNaturais(n) << endl;
    
    return 0;
}

