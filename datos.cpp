#include <iostream>
#include "datos.h"
using namespace std;

void registrarCliente(Cliente &cliente) {
    cout << "\n--- Registro de Cliente ---" << endl;
    cout << "Nombre: ";
    cin.ignore();
    cin.getline(cliente.nombre, 50);
    cout << "Email: ";
    cin.getline(cliente.email, 50);
    cout << "Cantidad de personas en la mesa: ";
    cin >> cliente.cantidadClientes;
    cin.ignore();
    cout << "Alergias alimentarias: ";
    cin.getline(cliente.alergias, 100);
    cout << "Número de mesa (1 al 20): ";
    cin >> cliente.numeroMesa;
}

void mostrarCliente(const Cliente &cliente) {
    cout << "\n--- Datos del Cliente ---" << endl;
    cout << "Nombre: " << cliente.nombre << endl;
    cout << "Email: " << cliente.email << endl;
    cout << "Personas en la mesa: " << cliente.cantidadClientes << endl;
    cout << "Alergias: " << cliente.alergias << endl;
    cout << "Mesa: " << cliente.numeroMesa << endl;
}
