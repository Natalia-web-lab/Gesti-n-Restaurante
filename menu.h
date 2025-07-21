#ifndef MENU_H
#define MENU_H

struct Pedido {
    int tipoComida;     
    float precioPlato;
    float precioBebida;
    
    char plato[50];     
    char bebida[50]; 
};

void mostrarMenu();
void tomarPedido(Pedido &pedido);

#endif
