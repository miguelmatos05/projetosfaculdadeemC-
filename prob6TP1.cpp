#include <iostream>
#include <string>
using namspace std;

int main(){

    string texto;
    char antigo, novo;

    cout << "Digite uma string: ";
    getline(cin, texto);

    cout << "Digite o caractere a substituir: ";
    cin >> antigo;

    cout << "Digite o novo caractere: ";
    cin >> novo

    for(int i=0;  i < texto.length(); i++){
           if (texto[i] == antigo) {
            texto[i] = novo;
        }
    }

    cout << "Nova string: " << texto << endl;

    return 0;




}


