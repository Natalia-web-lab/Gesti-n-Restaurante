#include <iostream>
#include "pago.h"
using namespace std;

float calcularDescuento(float total, int opcionTematica) {
    float descuento = 0.0;

    switch (opcionTematica) {
        case 1: // Navidad
            descuento = total * 0.20; 
            break;
        case 2: 
            descuento = total * 0.30; 
            break;
        case 3: 
            descuento = 0.0; 
            break;
        default:
            descuento = 0.0;
            break;
    }

    return descuento;
}

void mostrarPagoFinal(float totalSinDescuento, float descuentoAplicado) {
    float totalFinal = totalSinDescuento - descuentoAplicado;

    cout << "\n-----------------------------" << endl;
    cout << "RESUMEN DEL PAGO FINAL" << endl;
    cout << "-----------------------------" << endl;
    cout << "Total antes del descuento: S/. " << totalSinDescuento << endl;
    cout << "Descuento aplicado:       S/. " << descuentoAplicado << endl;
    cout << "Total final a pagar:      S/. " << totalFinal << endl;
    cout << "-----------------------------" << endl;
}
