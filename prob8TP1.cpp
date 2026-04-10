#include <iostream>
#include <fstream>
#include <string>

using namespace std;


void print_file(string f){
    ifstream file(f);
    string linha;

     if (file.is_open()) {
        while (getline(file, linha)) {
            cout << linha << endl;
        }
        file.close();
    } else {
        cout << "Erro ao abrir o ficheiro." << endl;
    }
}


void count_characters(string f) {


     ifstream file(f);
    char c;
    int contador = 0;

    if (file.is_open()) {
        while (file.get(c)) {
            contador++;
        }
        file.close();
        cout << "The total number of characters is " << contador << endl;
    } else {
        cout << "Erro ao abrir o ficheiro." << endl;
    }
}

int main() {

    string ficheiro = "grocery_list.txt";

    print_file(ficheiro);
    count_characters(ficheiro);

    return 0;
}


