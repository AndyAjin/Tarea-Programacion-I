#include <iostream>
using namespace std;

int main(){
    char letra;
    cout <<"Ingrese una letra: ";
    cin >> letra;
    cout <<"La letra ingresada es: " << letra << endl;
    cout << letra << letra << letra << endl;
    cout <<"El numero que representa internamente es: " << int(letra) << endl;
    return 0;
}