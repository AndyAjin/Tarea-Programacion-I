#include <iostream>
using namespace std;

int main() {
    float estatura, peso, IMC;
    cout <<"Ingrese su estatura en metros: ";
    cin >> estatura;
    cout <<"Ingrese su peso en Kilogramos: ";
    cin >> peso;
    IMC = peso/(estatura*estatura);
    cout <<"Su peso Ideal es: " << IMC << endl;
    return 0;
}