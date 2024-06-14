#include <cstdlib>
#include <iostream>
#include <cstring>
#include <string>
#include <ctime>
#include <conio.h>
#include <string.h>

using namespace std;

// MENUS
void menu_principal();
void menucaja();
void menuin();
void menuac();
void menureportes();
int ca = 0;

int o = 3;

// INTERIOR MENU
void data();
void desplegar();
void datainventario();
void desplegarinv();
void busquedanit();
void busquedanom();
void eliminarproducto();
void totalregistrados();
void venta();
void imprimirventas();
void clientesa();
void margen();
void random();


int main() {
    menu_principal();
}

void menu_principal() {
    int i;
    for (;;) {
        system("cls");
        cout << "     MENU PRINCIPAL DE OPCIONES" << endl;
        cout << "====================================" << endl;
        cout << "1.- Caja" << endl;
        cout << "2.- Atencion al cliente" << endl;
        cout << "3.- Inventario" << endl;
        cout << "4.- Reportes" << endl;
        cout << "5.- Cerrar programa" << endl;
        cout << "Que opcion desea : "; cin >> i;
        switch (i) {
            case 1: menucaja(); break;
            case 2: menuac(); break;
            case 3: menuin(); break;
            case 4: menureportes(); break;
            case 5: exit(0);
        }
        cout << "\n";
        system("pause");
    }
}

void menucaja() {
    int i = 0;
    for (;;) {
        system("cls");
        cout << "     MENU CAJA" << endl;
        cout << "====================================" << endl;
        cout << "1.- Compra" << endl;
        cout << "2.- Venta" << endl;
        cout << "3.- Volver menu principal" << endl;
        cout << "Que opcion desea : "; cin >> i;
        switch (i) {
            case 1: datainventario(); break;
            case 2: venta(); break;
            case 3: menu_principal(); break;
        }
        cout << "\n";
        system("pause");
    }
}

void menuac() {
    int i = 0;
    for (;;) {
        system("cls");
        cout << "     MENU DE ATENCION AL CLIENTE" << endl;
        cout << "====================================" << endl;
        cout << "1.- Registrar datos" << endl;
        cout << "2.- Buscar datos por NIT" << endl;
        cout << "3.- Buscar datos por nombre" << endl;
        cout << "4.- Generar cliente aleatorio" << endl;
        cout << "5.- Volver menu principal" << endl;
        cout << "Que opcion desea : "; cin >> i;
        switch (i) {
            case 1: data(); break;
            case 2: busquedanit(); break;
            case 3: busquedanom(); break;
            case 4: random(); break;
            case 5: menu_principal(); break;
        }
        cout << "\n";
        system("pause");
    }
}

void menuin() {
    int i = 0;
    for (;;) {
        system("cls");
        cout << "     MENU INVENTARIO" << endl;
        cout << "====================================" << endl;
        cout << "1.- Mostrar inventario" << endl;
        cout << "2.- Eliminar producto" << endl;
        cout << "3.- Agregar producto" << endl;
        cout << "4.- Lista de clientes registrados" << endl;
        cout << "5.- Imprimir ventas " << endl;
        cout << "6.- Volver menu principal" << endl;
        cout << "Que opcion desea : "; cin >> i;
        switch (i) {
            case 1: desplegarinv(); break;
            case 2: eliminarproducto(); break;
            case 3: datainventario(); break;
            case 4: desplegar(); break;
            case 5: imprimirventas(); break;
            case 6: menu_principal(); break;
        }
        cout << "\n";
        system("pause");
    }
}

void menureportes() {
    int i = 0;
    for (;;) {
        system("cls");
        cout << "     MENU REPORTES" << endl;
        cout << "====================================" << endl;
        cout << "1.- Margen de ganancia desde apertura" << endl;
        cout << "2.- Numero de clientes que se atendio" << endl;
        cout << "3.- Numero de clientes registrados total" << endl;
        cout << "4.- Volver menu principal" << endl;
        cout << "Que opcion desea : "; cin >> i;
        switch (i) {
            case 1: margen(); break;
            case 2: clientesa(); break;
            case 3: totalregistrados(); break;
            case 4: menu_principal(); break;
        }
        cout << "\n";
        system("pause");
    }
}

/* INTERIOR MENU */
void data() {
    // Implementación de la función
}

void desplegar() {
    // Implementación de la función
}

void datainventario() {
    // Implementación de la función
}

void desplegarinv() {
    // Implementación de la función
}

void busquedanit() {
    // Implementación de la función
}

void busquedanom() {
    // Implementación de la función
}

void eliminarproducto() {
    // Implementación de la función
}

void totalregistrados() {
    // Implementación de la función
}

void venta() {
    // Implementación de la función
}

void imprimirventas() {
    // Implementación de la función
}

void clientesa() {
    // Implementación de la función
}

void margen() {
    // Implementación de la función
}

void random() {
    // Implementación de la función
}

