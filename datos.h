#ifndef DATOS_H
#define DATOS_H

struct Cliente {
    char nombre[50];
    char email[50];
    int cantidadClientes;
    char alergias[100];
    int numeroMesa;
};

void registrarCliente(Cliente &cliente);
void mostrarCliente(const Cliente &cliente);

#endif
