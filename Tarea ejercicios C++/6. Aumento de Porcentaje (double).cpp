#include <iostream>
using namespace std;

int main() {
    double monto, incremento, resultado;
    cout <<"Ingrese un monto inicial: ";
    cin >> monto;
    cout <<"Ingrese el porcentaje que quiere aumentar: ";
    cin >> incremento;
    resultado = monto + (monto * incremento/100);
    cout <<"El monto final con el aumento es: " << resultado << endl;
    return 0;
} 