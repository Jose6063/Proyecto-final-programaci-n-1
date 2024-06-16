#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <ctime>
#include <conio.h>
#include <string.h>
using namespace std;
//  MENUS
void menu_principal();
void menucaja();
void menuin();
void menuac();
void menureportes();
int ca=0;

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

// ESTRUCTURA BASE DE DATOS
struct est{
char nom[30];
int nit;
};
struct inv{
char product[50];
int code;
int pricec;
int pricev;
};
struct Venta {
    string producto;
    int code;
    int pricec;
    int pricev;
};
int main(){
	menu_principal();
}
void menu_principal(){
	int i;
  for (;;)
  {
  system("cls");
  cout << "     MENU PRINCIPAL DE OPCIONES" << endl;
  cout << "====================================" << endl;
  cout << "1.- Caja" << endl;
  cout << "2.- Atencion al cliente" << endl;
  cout << "3.- Inventario" << endl;
  cout << "4.- Reportes" << endl;
  cout << "5.- Cerrar programa" << endl;
  cout << "Que opcion desea : " ;cin >> i;
  switch (i)
  {
      case 1: menucaja();break;
      case 2: menuac();break;
      case 3: menuin();break;
      case 4: menureportes();break;
      case 5: exit(0);
  }
   cout << "\n";
   system("pause");
  }
}
void menucaja(){
	int i=0;
	  for (;;)
	  {
	  system("cls");
	  cout << "     MENU CAJA" << endl;
	  cout << "====================================" << endl;
	  cout << "1.- Compra" << endl;
	  cout << "2.- Venta" << endl;
	  cout << "3.- Volver menu principal" << endl;
	  cout << "Que opcion desea : " ;cin >> i;
	  switch (i)
	  {
	      case 1: datainventario();break;
	      case 2: venta();break;
	      case 3: menu_principal();break;
	  }
	   cout << "\n";
	   system("pause");
	  }
}

void menuac(){
	int i=0;
	  for (;;)
	  {
	  system("cls");
	  cout << "     MENU DE ATENCION AL CLIENTE" << endl;
	  cout << "====================================" << endl;
	  cout << "1.- Registrar datos" << endl;
	  cout << "2.- Buscar datos por NIT" << endl;
	  cout << "3.- Buscar datos por nombre" << endl;
	  cout << "4.- Generar cliente aleatorio" << endl;
	  cout << "5.- Volver menu principal" << endl;
	  cout << "Que opcion desea : " ;cin >> i;
	  switch (i)
	  {
	      case 1: data();break;
	      case 2: busquedanit();break;
	      case 3: busquedanom();break;
	      case 4: random();break;
	      case 5: menu_principal();break;
	  }
	   cout << "\n";
	   system("pause");
	  }
}
void menuin(){
	int i=0;
	  for (;;)
	  {
	  system("cls");
	  cout << "     MENU INVENTARIO" << endl;
	  cout << "====================================" << endl;
	  cout << "1.- Mostrar inventario" << endl;
	  cout << "2.- Eliminar producto" << endl;
	  cout << "3.- Agregar producto" << endl;
	  cout << "4.- Lista de clientes registrados" << endl;
	  cout << "5.- Imprimir ventas " << endl;
	  cout << "6.- Volver menu principal" << endl;
	  cout << "Que opcion desea : " ;cin >> i;
	  switch (i)
	  {
	      case 1: desplegarinv();break;
	      case 2: eliminarproducto();break;
	      case 3: datainventario();break;
	      case 4: desplegar();break;
		  case 5: imprimirventas();break;
	      case 6: menu_principal();break;
	  }
	   cout << "\n";
	   system("pause");
	  }
}
void menureportes(){
	int i=0;
	  for (;;)
	  {
	  system("cls");
	  cout << "     MENU REPORTES" << endl;
	  cout << "====================================" << endl;
	  cout << "1.- Margen de ganancia desde apertura" << endl;
	  cout << "2.- Numero de clientes que se atendio" << endl;
	  cout << "3.- Numero de clientes registrados total" << endl;
	  cout << "4.- Volver menu principal" << endl;
	  cout << "Que opcion desea : " ;cin >> i;
	  switch (i)
	  {
	      case 1: margen();break;
	      case 2: clientesa();break;
	      case 3: totalregistrados();break;
	      case 4: menu_principal();break;
	  }
	   cout << "\n";
	   system("pause");
	  }
}
/*INTERIOR MENU*/
void data(){
	est fc;
fstream file("factura.dat",ios::out|ios::binary|ios::app); // ios::app guarda los datos
for(int i=0;i<1;i++){
	cout<<"Se�or(s): ";cin>>fc.nom;
	cout<<"NIT/CI: ";cin>>fc.nit;
	file.write((char*)&fc,sizeof(fc));
	}
file.close();
}
void desplegar(){
		
}
void datainventario(){
	inv fi;
fstream file("inventario.dat",ios::out|ios::binary|ios::app); // ios::app guarda los datos
for(int i=0;i<1;i++){
	cout<<"Nombre producto: ";cin>>fi.product;
	cout<<"Codigo: ";cin>>fi.code;
	cout<<"Precio de compra: ";cin>>fi.pricec;
	cout<<"Precio de venta: ";cin>>fi.pricev;
	file.write((char*)&fi,sizeof(fi));
	}
file.close();
}
void desplegarinv(){
		
}



void busquedanit(){
	est fc;
	int o;
	cout<<"Cual NIT desea buscar:";cin>>o;
fstream file("factura.dat",ios::in|ios::binary);
while(file.read((char*)&fc,sizeof(fc))){
	 if (o==fc.nit ){
	 	cout<<"El nombre asociado al NIT: "<<fc.nit<<" es:" <<fc.nom;
	 }
	}
file.close();
}
void busquedanom(){
	est fc;
	string o;
	cout<<"Cual nombre desea buscar:";cin>>o;
fstream file("factura.dat",ios::in|ios::binary);
while(file.read((char*)&fc,sizeof(fc))){
	 if (fc.nom==o){
	 	cout<<"El NIT asociado al nombre: "<<fc.nom<<" es:" <<fc.nit<<endl;
	 }
	}
file.close();
}
void eliminarproducto() {
    
}
void totalregistrados(){
	
}

void venta() {
    est cliente;
    int nitCliente;
    cout << "Ingrese el NIT del cliente: ";
    cin >> nitCliente;
    fstream fileFacturas("factura.dat", ios::in | ios::binary);
    if (!fileFacturas) {
        cerr << "Error al abrir el archivo de facturas." << endl;
        return;
    }
    bool clienteEncontrado = false;
    while (fileFacturas.read(reinterpret_cast<char*>(&cliente), sizeof(cliente))) {
        if (cliente.nit == nitCliente) {
            clienteEncontrado = true;
            cout << "....Nombre: ......." << cliente.nom << endl;
            cout << "..Numero de Nit: .." << cliente.nit << endl;
            break;
        }
    }

    fileFacturas.close();
    if (!clienteEncontrado) {
        cout << "Cliente no encontrado en el archivo de facturas." << endl;
        return;
    }

    fstream fileInventario("inventario.dat", ios::in | ios::out | ios::binary);
    fstream fileVentasTemp("ventas_temp.dat", ios::app | ios::binary);
    fstream fileVentas("ventas.dat", ios::app | ios::binary);
    fstream fileFacturaTemp("factura_temp.dat", ios::out | ios::binary);
    fstream tempFile("temp.dat", ios::out | ios::binary);

    if (!fileInventario || !fileVentasTemp || !fileVentas || !fileFacturaTemp || !tempFile) {
        cerr << "Error al abrir archivos." << endl;
        return;
    }

    while (true) {
        int codigo;
        cout << "Ingrese el c�digo del producto que desea vender (o 'terminar' para finalizar): ";
        cin >> codigo;
        if (cin.fail()) {
            string input;
            cin.clear();
            cin >> input;  // Limpiar el buffer de entrada
            if (input == "terminar") {
                break;
            } else {
                cerr << "Error: Ingrese un c�digo v�lido o 'terminar'." << endl;
                continue;
            }
        }

        inv producto;
        bool encontrado = false;

        // Buscar el producto en el inventario
        while (fileInventario.read(reinterpret_cast<char*>(&producto), sizeof(producto))) {
            if (producto.code == codigo) {
                encontrado = true;

                // Agregar el producto a los archivos de ventas y factura temporal
                fileVentasTemp.write(reinterpret_cast<char*>(&producto), sizeof(producto));
                fileVentas.write(reinterpret_cast<char*>(&producto), sizeof(producto));
                fileFacturaTemp.write(reinterpret_cast<char*>(&producto), sizeof(producto));

                cout << "Venta realizada con �xito:" << endl;
                cout << "Nombre: " << producto.product << ".......";
                cout << "C�digo: " << producto.code << ".......";
                cout << "Precio de Venta: " << producto.pricev << " Bs" << endl;
            } else {
                // Guardar los productos no coincidentes en un archivo temporal
                tempFile.write(reinterpret_cast<char*>(&producto), sizeof(producto));
            }
        }

        if (!encontrado) {
            cout << "Producto no encontrado en el inventario." << endl;
        }

        // Cerrar y limpiar el inventario
        fileInventario.close();
        tempFile.close();
        remove("inventario.dat");
        rename("temp.dat", "inventario.dat");

        // Reabrir el inventario para la pr�xima iteraci�n
        fileInventario.open("inventario.dat", ios::in | ios::out | ios::binary);
    }

    fileVentasTemp.close();
    fileVentas.close();
    fileFacturaTemp.close();
    tempFile.close();

    // Imprimir las ventas del cliente
    cout << "Ventas realizadas para el cliente:" << endl;
    cout << "NIT: " << nitCliente << endl;
    cout << "Nombre: " << cliente.nom << endl;

    fstream fileFacturaTempRead("factura_temp.dat", ios::in | ios::binary);

    if (!fileFacturaTempRead) {
        cerr << "Error al abrir el archivo de facturas temporales." << endl;
        return;
    }

    inv ventaTemp;
	 // Obtener la fecha y hora actual
    time_t now_time = time(NULL);
    tm* parts = localtime(&now_time);

    // Imprimir la fecha y hora actual formateada
    cout << "Fecha y hora: " << asctime(parts);
    while (fileFacturaTempRead.read(reinterpret_cast<char*>(&ventaTemp), sizeof(ventaTemp))) {
        cout << "Producto: " << ventaTemp.product << endl;
 		cout << "Precio de Venta: " << ventaTemp.pricev << " Bs" << endl;
        cout << "--------------------------" << endl;
    }

    fileFacturaTempRead.close();

    // Limpiar el archivo temporal de ventas y de facturas
    ofstream clearFileVentasTemp("ventas_temp.dat", ios::trunc);
    clearFileVentasTemp.close();
    ofstream clearFileFacturaTemp("factura_temp.dat", ios::trunc);
    clearFileFacturaTemp.close();

    // Cerrar los archivos
    fileVentasTemp.close();
    fileVentas.close();
    fileFacturaTemp.close();
    fileInventario.close();
}
void imprimirventas() {
    fstream fileVentas("ventas.dat", ios::in | ios::binary);

    if (!fileVentas) {
        cerr << "Error al abrir el archivo de ventas." << endl;
        return;
    }
    cout << "Ventas Realizadas:" << endl;
	
	inv producto;
    while (fileVentas.read(reinterpret_cast<char*>(&producto), sizeof(producto))) {
        cout << "Nombre: " << producto.product << endl;
        cout << "C�digo: " << producto.code << endl;
        cout << "Precio de Compra: " << producto.pricec << " Bs" << endl;
        cout << "Precio de Venta: " << producto.pricev << " Bs" << endl;
        cout << "--------------------------" << endl;
    }
    fileVentas.close();
}
void clientesa() {
    
}

void margen() {
    
}
// Funci�n para generar aleatoriamente un registro en factura.dat
void random() {
    int numUsuarios;
    cout << "Ingrese la cantidad de usuarios que desea crear aleatoriamente: ";
    cin >> numUsuarios;

    // Inicializar la semilla para la funci�n rand()
    srand(static_cast<unsigned>(time(0)));

    // Abrir el archivo en modo de escritura y agregar al final
    fstream file("factura.dat", ios::out | ios::binary | ios::app);

    if (!file) {
        cerr << "Error al abrir el archivo factura.dat." << endl;
        return;
    }

    for (int i = 0; i < numUsuarios; ++i) {
        est nuevoRegistro;

        // Generar un NIT aleatorio entre 10000000 y 99999999
        nuevoRegistro.nit = rand() % 90000000 + 10000000;

        // Generar un nombre aleatorio
        string nombres[] = {"Juan", "Maria", "Pedro", "Ana", "Carlos", "Laura", "Diego", "Elena", "Francisco", "Isabel",
    "Luis", "Gabriela", "Alejandro", "Carolina", "Sergio", "Valeria", "Manuel", "Sofia", "Jorge", "Camila",
    "Javier", "Natalia", "Miguel", "Paula", "Daniel", "Victoria", "Jose", "Marta", "Oscar", "Andrea",
    "Fernando", "Clara", "Ricardo", "Elena", "Alberto", "Patricia", "Antonio", "Beatriz", "Gabriel", "Monica",
    "Adrian", "Raquel", "Arturo", "Silvia", "Ernesto", "Julia", "Mauricio", "Carmen", "Raul", "Diana",
    "Fabiola", "Roberto", "Renata", "Hector", "Lucia", "Albert", "Rocio", "Cesar", "Alicia", "Martin",
    "Veronica", "Alfredo", "Aurora", "Raul", "Olga", "Hugo", "Eva", "Eduardo", "Yolanda", "Rodrigo",
    "Catalina", "Ramon", "Monica", "Gustavo", "Claudia", "Pablo", "Teresa", "Victor", "Gloria", "Alberto",
    "Sara", "Julio", "Patricia", "Rafael", "Laura", "Agustin", "Cecilia", "Elias", "Adriana", "Alvaro",
    "Florencia", "Ivan", "Dolores", "Mario", "Juana", "Emilio", "Celia", "Diego", "Carmen", "Federico",
    "Beatriz", "Ariel", "Fernanda", "Hernan", "Aurora", "Marcelo", "Rosario", "Santiago", "Ana Maria",
    "Lorenzo", "Marina", "Emiliano", "Liliana", "Nelson", "Rosa", "Teodoro", "Leticia", "Maximiliano", "Virginia",
    "Alonso", "Ines", "Ricardo", "Nancy", "Bautista", "Mercedes", "Raul", "Josefina", "Ezequiel", "Martina",
    "Ciro", "Estela", "Facundo", "Clotilde", "Gaspar", "Consuelo", "Joaquin", "Amparo", "Leandro", "Antonia",
    "Matias", "Rita", "Nicol�s", "Guadalupe", "Octavio", "Graciela", "Pascual", "Fabiola", "Quirino", "Rocio",
    "Sergio", "Olga", "Ulises", "Edelmira", "Valent�n", "Eulalia", "Walter", "Irma", "Xavier", "Julieta",
    "Yago", "Isidora", "Zacar�as", "Jacinta","Gomez", "Rodriguez", "Lopez", "Martinez", "Perez", "Gonzalez", "Sanchez", "Romero", "Serrano", "Torres",
    "Suarez", "Diaz", "Vargas", "Ramos", "Molina", "Ortega", "Fernandez", "Jimenez", "Ruiz", "Alvarez",
    "Navarro", "Gutierrez", "Ramirez", "Herrera", "Flores", "Cabrera", "Marquez", "Castillo", "Dominguez", "Vega",
    "Reyes", "Morales", "Guerrero", "Soto", "Fuentes", "Cruz", "Ortiz", "Ibanez", "Cortes", "Hernandez",
    "Alonso", "Nunez", "Mendez", "Aguilar", "Vila", "Moreno", "Prieto", "Iglesias", "Salas", "Parra",
    "Gallego", "Velasco", "Pinto", "Santos", "Duarte", "Lara", "Mora", "Zamora", "Castro", "Moya",
    "Bravo", "Arias", "Aguilera", "Ferrer", "Benitez", "Rocha", "Salazar", "Navas", "Vicente", "Montes",
    "Pacheco", "Figueroa", "Toro", "Aguayo", "Hidalgo", "Rojas", "Salgado", "Cano", "Bermudez", "Solis",
    "Bustamante", "Vega", "Palacios", "Correa", "Leal", "Roldan", "Chavez", "Crespo", "Miranda", "Osorio",
    "Esteban", "Carrillo", "Valenzuela", "Sepulveda", "Valdes", "Herrero", "Peralta", "Bueno", "Montoya", "Varela",
    "Sandoval", "Medina", "Quintero", "Oliva", "Fierro", "Coronel", "Estrada", "Duque", "Acosta", "Salinas",
    "Villatoro", "Escobar", "Gallardo", "Casas", "Delgado", "Galindo", "Godoy", "Guillen", "Uribe", "Leiva","Alcalde", "Arevalo", "Balbuena", "Bautista", "Calderon", "Davila", "Espinosa", "Fernand"};
		int numNombres = sizeof(nombres) / sizeof(nombres[0]);
        strcpy(nuevoRegistro.nom, nombres[rand() % numNombres].c_str());

        // Escribir el nuevo registro en el archivo
        file.write(reinterpret_cast<char*>(&nuevoRegistro), sizeof(nuevoRegistro));

        cout << "Se ha generado aleatoriamente un nuevo registro en factura.dat." << endl;
    }

    // Cerrar el archivo
    file.close();
}


