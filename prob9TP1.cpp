//funcao para obter o numero 
int getNum(int badNum)
{
 int number = 0;
 do {
 cout << "Enter a number other than " << badNum << endl;
 //pede ao utilizador para digitar um numero diferente do badnum
if (cin >> number) {
 return number;
 }
 cin.clear();
 cin.ignore(1000, '\n');
 cout << "\nInvalid input.\n\n";
 } while (true);
}