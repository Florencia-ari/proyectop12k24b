//Aqui se encuentra el archivos de implentaci�n de la clase CARRERA que contiene todo el codigo fuente
//del funcionamiento del la clase
#include "Carrera.h"
<<<<<<< HEAD
<<<<<<< HEAD
=======
#include "usuarios.h"
#include "Login.h"
#include "Bitacora.h"
>>>>>>> 7fee22e7c1a780459548acc106d5712411a3308b
=======
#include "usuarios.h"
#include "Login.h"
#include "Bitacora.h"
>>>>>>> 678481e7b31f256476f53bd40df483d8780d6b84
#include <fstream>
#include <iostream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
using namespace std;
<<<<<<< HEAD
<<<<<<< HEAD

// menu CRUD de carreras
=======
=======
>>>>>>> 678481e7b31f256476f53bd40df483d8780d6b84
//Carlos David calder�n Ram�rez      9959-23-848
//Comentado revisado y depurado por:  Evelyn Sof�a Andrade Luna   9959-23-1224
// menu CRUD de carreras



<<<<<<< HEAD
>>>>>>> 7fee22e7c1a780459548acc106d5712411a3308b
=======
>>>>>>> 678481e7b31f256476f53bd40df483d8780d6b84
void CarrerasCRUD::Crudcarrera() {
int choice;
    //int x;
    do {
	system("cls");
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\t|   SISTEMA DE GESTION UMG - CARRERAS      |"<<endl;
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingresar Carrera"<<endl;
	cout<<"\t\t\t 2. Modificar Carrera"<<endl;
	cout<<"\t\t\t 3. Borrar Carrera"<<endl;
	cout<<"\t\t\t 4. Desplegar Carrera"<<endl;
	cout<<"\t\t\t 5. Regresar Menu Anterior"<<endl;
    cout<<"\t\t\t --------------------------------------------"<<endl;
	cout<<"\t\t\t |   Opcion a escoger:[1|2|3|4|5|]           |"<<endl;
	cout<<"\t\t\t --------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
	case 1:
        IngresarCa();
        system("Pause");
		break;
    case 2:
        system("Cls");
        ModificarCa();
		system("Pause");
		break;
    case 3:
        system("Cls");
        BorrarCa();
        system("Pause");
		break;
    case 4:
        DesplegarCa();
		break;
    case 5:
		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
    }while(choice!= 5);
}
<<<<<<< HEAD
<<<<<<< HEAD

// aqui se agregan carreras que son almacenadas

void CarrerasCRUD::IngresarCa() {

=======
// aqui se agregan carreras que son almacenadas
void CarrerasCRUD::IngresarCa() {
    string codigoPrograma="3000";
>>>>>>> 7fee22e7c1a780459548acc106d5712411a3308b
=======
// aqui se agregan carreras que son almacenadas
void CarrerasCRUD::IngresarCa() {
    string codigoPrograma="3000";
>>>>>>> 678481e7b31f256476f53bd40df483d8780d6b84
   system("cls");
    cout<<"\n------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\n-------------------------------------------------Agregar Carrera--------------------------------------------"<<endl;
    Carrera carrera;
    cout << "Ingrese el codigo de la carrera: ";
    cin >> carrera.codigo;
    cin.ignore();

    cout << "Ingrese el nombre de la carrera: ";
    cin.getline(carrera.nombre, 50);

    cout << "Ingrese la facultad de la carrera: ";
    cin.getline(carrera.facultad, 50);

    ofstream archivo("carreras.dat", ios::binary | ios::app);
    archivo.write(reinterpret_cast<const char*>(&carrera), sizeof(Carrera));
    archivo.close();

<<<<<<< HEAD
<<<<<<< HEAD
=======
=======
>>>>>>> 678481e7b31f256476f53bd40df483d8780d6b84

    Bitacora Auditoria;
    string user,pass;

    Auditoria.ingresoBitacora(user,codigoPrograma,"ICA");//ICA = Insertar Carrera

<<<<<<< HEAD
>>>>>>> 7fee22e7c1a780459548acc106d5712411a3308b
=======
>>>>>>> 678481e7b31f256476f53bd40df483d8780d6b84
    cout << "Carrera agregada exitosamente!" << endl;
}
// modificar carreras
void CarrerasCRUD::ModificarCa() {
<<<<<<< HEAD
<<<<<<< HEAD
=======
    string codigoPrograma="3000";
>>>>>>> 7fee22e7c1a780459548acc106d5712411a3308b
=======
    string codigoPrograma="3000";
>>>>>>> 678481e7b31f256476f53bd40df483d8780d6b84
    cout<<"\n------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\n-------------------------------------------------Modificacion de Carreras--------------------------------------------"<<endl;
    int codigo;
    cout << "Ingrese el codigo de la carrera a modificar: ";
    cin >> codigo;

    fstream archivo("carreras.dat", ios::binary | ios::in | ios::out);
    if (!archivo) {
        cout << "No hay carreras registradas." << endl;
        return;
    }

    Carrera carrera;
    bool encontrada = false;
    while (archivo.read(reinterpret_cast<char*>(&carrera), sizeof(Carrera))) {
        if (carrera.codigo == codigo) {
            cout << "Ingrese el nuevo nombre de la carrera: ";
            cin.ignore();
            cin.getline(carrera.nombre, 50);

            cout << "Ingrese la nueva facultad de la carrera: ";
            cin.getline(carrera.facultad, 50);

            archivo.seekp(-static_cast<int>(sizeof(Carrera)), ios::cur);
            archivo.write(reinterpret_cast<const char*>(&carrera), sizeof(Carrera));

            encontrada = true;
            break;
        }
    }

    archivo.close();

<<<<<<< HEAD
<<<<<<< HEAD
=======
=======
>>>>>>> 678481e7b31f256476f53bd40df483d8780d6b84
    Bitacora Auditoria;
    string user,pass;

    Auditoria.ingresoBitacora(user,codigoPrograma,"UCA");//UCA = Update Carrera

<<<<<<< HEAD
>>>>>>> 7fee22e7c1a780459548acc106d5712411a3308b
=======
>>>>>>> 678481e7b31f256476f53bd40df483d8780d6b84
    if (!encontrada) {
        cout << "No se encontr� la carrera con el codigo ingresado." << endl;
    }
    else {
        cout << "Carrera modificada exitosamente!" << endl;
    }

}
// elimina carreras que ya no deseamos que estan registradas
void CarrerasCRUD::BorrarCa() {
<<<<<<< HEAD
<<<<<<< HEAD
=======
    string codigoPrograma="3000";
>>>>>>> 7fee22e7c1a780459548acc106d5712411a3308b
=======
    string codigoPrograma="3000";
>>>>>>> 678481e7b31f256476f53bd40df483d8780d6b84
    int codigo;
    cout<<"\n------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\n-------------------------------------------------Eliminar Carreras--------------------------------------------"<<endl;
    cout << "Ingrese el codigo de la carrera a eliminar: ";
    cin >> codigo;

    ifstream archivo("carreras.dat", ios::binary);
    if (!archivo) {
        cout << "No hay carreras registradas." << endl;

    }

    ofstream archivoTmp("carreras_tmp.dat", ios::binary);
    Carrera carrera;
    bool eliminada = false;
    while (archivo.read(reinterpret_cast<char*>(&carrera), sizeof(Carrera))) {
        if (carrera.codigo != codigo) {
            archivoTmp.write(reinterpret_cast<const char*>(&carrera), sizeof(Carrera));
        } else {
            eliminada = true;
        }
    }

    archivo.close();
    archivoTmp.close();

    remove("carreras.dat");
    rename("carreras_tmp.dat", "carreras.dat");

<<<<<<< HEAD
<<<<<<< HEAD
=======
=======
>>>>>>> 678481e7b31f256476f53bd40df483d8780d6b84

    Bitacora Auditoria;
    string user,pass;

    Auditoria.ingresoBitacora(user,codigoPrograma,"DCA");//DCA = Delete Carrera

<<<<<<< HEAD
>>>>>>> 7fee22e7c1a780459548acc106d5712411a3308b
=======
>>>>>>> 678481e7b31f256476f53bd40df483d8780d6b84
    if (eliminada) {
        cout << "Carrera eliminada exitosamente!" << endl;

    } else {
        cout << "No se encontr� la carrera con el codigo ingresado." << endl;
    }

}
// Nos muestra las carreras registradas
void CarrerasCRUD::DesplegarCa() {
    system("cls");
<<<<<<< HEAD
<<<<<<< HEAD
=======
    string codigoPrograma="3000";
>>>>>>> 7fee22e7c1a780459548acc106d5712411a3308b
=======
    string codigoPrograma="3000";
>>>>>>> 678481e7b31f256476f53bd40df483d8780d6b84
    cout<<"-----------------Despliegue de carreras registradas---------------------"<<endl;
    ifstream archivo("carreras.dat", ios::binary);
    if (!archivo) {
        cout << "No hay carreras registradas." << endl;
        return;
    }

    Carrera carrera;
    while (archivo.read(reinterpret_cast<char*>(&carrera), sizeof(Carrera))) {
        cout << "Codigo: " << carrera.codigo << endl;
        cout << "Nombre: " << carrera.nombre << endl;
        cout << "Facultad: " << carrera.facultad << endl;
        cout << "-----------------------------" << endl;
    }

    archivo.close();

<<<<<<< HEAD
<<<<<<< HEAD
=======
=======
>>>>>>> 678481e7b31f256476f53bd40df483d8780d6b84

    Bitacora Auditoria;
    string user,pass;

    Auditoria.ingresoBitacora(user,codigoPrograma,"RCA");// RCA = Read Carrera

<<<<<<< HEAD
>>>>>>> 7fee22e7c1a780459548acc106d5712411a3308b
=======
>>>>>>> 678481e7b31f256476f53bd40df483d8780d6b84
    cout << "Presione Enter para continuar...";
    cin.ignore();
    cin.get();
}
