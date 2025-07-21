
#include <iostream>
#include "datos.h"
#include "menu.h"
#include "descuento.h"
#include "pago.h"
using namespace std;

int main() {
    Cliente cliente;
    Pedido pedido;
    float totalSinDescuento = 0.0;
    float descuento = 0.0;
    bool clienteRegistrado = false;
    bool pedidoHecho = false;
    bool descuentoAplicado = false;
    int opcion;

    do {
        cout << "\n==== Menú Principal del Restaurante ====" << endl;
        cout << "1. Registrar datos del cliente" << endl;
        cout << "2. Realizar pedido (plato y bebida)" << endl;
        cout << "3. Aplicar descuento" << endl;
        cout << "4. Imprimir boleta de pago" << endl;
        cout << "5. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                registrarCliente(cliente);
                clienteRegistrado = true;
                break;

            case 2:
                if (!clienteRegistrado) {
                    cout << "Debe registrar los datos del cliente primero." << endl;
                } else {
                    tomarPedido(pedido);
                    totalSinDescuento = pedido.precioPlato + pedido.precioBebida;
                    pedidoHecho = true;
                }
                break;

            case 3:
                if (!pedidoHecho) {
                    cout << "Debe realizar el pedido primero." << endl;
                } else {
                    mostrarOpcionesDescuento();
                    int opcionDescuento;
                    cout << "Seleccione una opción de descuento: ";
                    cin >> opcionDescuento;
                  descuento = aplicarDescuentoTematico(&pedido.precioPlato, 1, &pedido.precioBebida, 1);
                    descuentoAplicado = true;
                }
                break;

            case 4:
                if (!clienteRegistrado || !pedidoHecho) {
                    cout << "Debe registrar cliente y realizar pedido primero." << endl;
                } else {
                    mostrarCliente(cliente);
                    cout << "\n--- Pedido ---" << endl;
                    cout << "Plato:  " << pedido.plato << " - S/." << pedido.precioPlato << endl;
                    cout << "Bebida: " << pedido.bebida << " - S/." << pedido.precioBebida << endl;
                    mostrarPagoFinal(totalSinDescuento, descuento);
                }
                break;

            case 5:
                cout << "Gracias por su visita. ¡Hasta pronto!" << endl;
                break;

            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
        }

    } while (opcion != 5);

    return 0;
}