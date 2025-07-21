#include <iostream>
#include <cstring>
#include "menu.h"
using namespace std;

void mostrarMenu() {
    cout << "----------------------------\n";
    cout << "     MENÚ DEL RESTAURANTE\n";
    cout << "----------------------------\n";
    cout << "1. Comida Vegetariana - S/ 25.00\n";
    cout << "2. Comida Tradicional - S/ 35.00\n";
    cout << "3. Comida Asiática    - S/ 30.00\n";
    cout << "4. Comida Italiana    - S/ 20.00\n";
}

void tomarPedido(Pedido &pedido) {
    mostrarMenu();
    cout << "\nSeleccione el tipo de comida (1-4): ";
    cin >> pedido.tipoComida;

    switch (pedido.tipoComida) {
        case 1:
            pedido.precioPlato = 25.00;
            strcpy(pedido.plato, "Comida Vegetariana");
            break;
        case 2:
            pedido.precioPlato = 35.00;
            strcpy(pedido.plato, "Comida Tradicional");
            break;
        case 3:
            pedido.precioPlato = 30.00;
            strcpy(pedido.plato, "Comida Asiática");
            break;
        case 4:
            pedido.precioPlato = 20.00;
            strcpy(pedido.plato, "Comida Italiana");
            break;
        default:
            cout << "Opción no válida. Se asignará precio 0." << endl;
            pedido.precioPlato = 0.00;
            strcpy(pedido.plato, "Desconocido");
    }

    char quiereBebida;
    cout << "¿Desea una bebida? (s/n): ";
    cin >> quiereBebida;
    if (quiereBebida == 's' || quiereBebida == 'S') {
        pedido.precioBebida = 8.00;
        strcpy(pedido.bebida, "Bebida estándar");
    } else {
        pedido.precioBebida = 0.00;
        strcpy(pedido.bebida, "Sin bebida");
    }
}

