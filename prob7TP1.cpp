#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

    int numero, tentativa, tentativas=0;

    srand(time(0));
    numero = rand() % 100 + 1;

    cout << "Jogo: Adivinhe o numero (1 a 100)" << endl;

do{

      cout << "Digite a sua tentativa: ";
        cin >> tentativa;

        tentativas++;

        if (tentativa > numero) {
            cout << "O numero é menor." << endl;
        }
        else if (tentativa < numero) {
            cout << "O numero é maior." << endl;
        }
        else {
            cout << "Parabens! Acertou no numero." << endl;
        }

     } while (tentativa != numero);

    cout << "Numero de tentativas: " << tentativas << endl;

    return 0;
}

