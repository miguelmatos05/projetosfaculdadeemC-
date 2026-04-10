#include <iostream>
#include <string>
using namespace std;


int main(){

    string s1,s2,s3;

    cout << "Digite a primeira string: ";
    cin >> s1;

    cout << "Digite a segunda string: ";
    cin >> s2;

    s3=s1+s2;

    cout << "String concetanada: " << s3 << endl;

    cout << "Total de caracteres: " << s3.length() << endl;


    cout << "Segundo caractere: " << s3[1] << endl;

    return 0;
}




