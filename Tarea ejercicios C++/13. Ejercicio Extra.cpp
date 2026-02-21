#include <iostream>
using namespace std;

int main() {
    string nombre;
    int edad;
    float altura;
    double precio;
    char apellido;
    cout <<"Ingrese su nombre: ";
    cin >> nombre;
    cout <<"Ingrese su edad: ";
    cin >> edad;
    cout <<"Ingrese su altura: ";
    cin >> altura;
    cout <<"Ingrese el precio de algun producto: ";
    cin >> precio;
    cout <<"Ingrese la inicial de su apellido: ";
    cin >> apellido;

    cout << "Resumen de sus datos:\n"
    <<"Nombre: " << nombre
    <<"\nEdad: " << edad
    <<"\nAltura: " << altura
    <<"\nPrecio de su Producto: " << precio
    <<"\nInicial de su Apellido: " << apellido
    << endl;
    return 0;
}