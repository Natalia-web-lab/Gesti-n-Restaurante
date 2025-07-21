#include <iostream>
#include <cstdlib>
#include "descuento.h"
using namespace std;


void mostrarOpcionesDescuento() {
    cout << "---------------------\n";
    cout << " PROMOCIONES TEMÁTICAS\n";
    cout << "---------------------\n";
    cout << "1) Navidad (20% en postres)\n";
    cout << "2) Año Nuevo (30% en platos)\n";
    cout << "3) Halloween (1 postre gratis)\n";
    cout << "Seleccione una promoción: ";
}

float aplicarDescuentoTematico(float preciosPlatos[], int cantPlatos, float preciosPostres[], int cantPostres) {
    int opcion;
    float descuentoTotal = 0.0;

    cin >> opcion;
    system("cls");

    switch (opcion) {
        case 1: 
            cout << " PROMOCIÓN DE NAVIDAD\n";
            cout << "Recibes un descuento del 20% en postres.\n\n";
            for (int i = 0; i < cantPostres; i++) {
                float original = preciosPostres[i];
                float descuento = original * 0.2;
                preciosPostres[i] -= descuento;
                descuentoTotal += descuento;
                cout << "- Postre #" << i+1 << ": Antes: S/ " << original << "  Ahora: S/ " << preciosPostres[i] << endl;
            }
            break;

        case 2: 
            cout << " PROMOCIÓN DE AÑO NUEVO\n";
            cout << "Recibes un descuento del 30% en platos.\n\n";
            for (int i = 0; i < cantPlatos; i++) {
                float original = preciosPlatos[i];
                float descuento = original * 0.3;
                preciosPlatos[i] -= descuento;
                descuentoTotal += descuento;
                cout << "- Plato #" << i+1 << ": Antes: S/ " << original << "  Ahora: S/ " << preciosPlatos[i] << endl;
            }
            break;

        case 3: 
            cout << " PROMOCIÓN DE HALLOWEEN\n";
            cout << "¡Recibes 1 postre gratis!\n";
            if (cantPostres > 0) {
                float gratis = preciosPostres[0];
                preciosPostres[0] = 0.0;
                descuentoTotal += gratis;
                cout << "- Postre #1 ahora cuesta: S/ 0.00 (gratis)\n";
            }
            break;

        default:
            cout << "Opción de promoción inválida.\n";
            break;
    }

    system("pause");
    return descuentoTotal;
}
