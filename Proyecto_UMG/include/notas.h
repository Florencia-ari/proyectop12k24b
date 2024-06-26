//creado por Diana Mishel Loeiza Ramirez 9959-23-3457
#ifndef NOTAS_H
#define NOTAS_H


#include<stdlib.h>// Incluye funciones para el manejo de memoria dinamica, control de procesos y conversiones de cadena.
#include<cstdlib>// Incluye funciones para el control de procesos y conversiones de cadena.
#include<conio.h>// Incluye funciones para el manejo de la consola.
#include<iomanip>
#include"usuarios.h"// Incluye funciones para formatear la salida.


using namespace std;// Se utiliza el espacio de nombres estandar.

// Definici�n de la estructura aulas que representa la informaci�n de un aula.
struct notas
{

    int codigoEstudiante; // Variable para almacenar el c�digo del estudiante
    char nombreEstudiante [45]; // Variable para almacenar el nombre del estudiante
    char nombreCurso[45]; // Variable para almacenar el nombre del curso
        int np1; // Nota parcial 1
    int np2; // Nota parcial 2
    int za;  // Nota de ZA
    int ef;  // Nota de EF
    int nf;  // Nota final
};

class NotaCrud {
public:
    void CrudNota();
    void IngresarNota();
    void ModificarNota();
    void BorrarNota();
    void DesplegarNotas();
    void RegistrarBitacora(string usuario, string accion);
     void DesplegarNotasPorCurso(const string& nombreCursoDeseado); // Nuevo m�todo para desplegar notas por curso
    void LeerNotasPorNombre(const char* nombre);
    bool validarAlumno(int codigoEstudiante);

};

#endif // NOTAS_H
