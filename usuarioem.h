#ifndef EMPRESA_H
#define EMPRESA_H

#include <string>
using namespace std;

class Empresa {
private:
    string nombre;        // Nombre de la empresa
    string nit;           // Número de NIT
    string logotipo;      // Ruta del logotipo (archivo de imagen)

public:
    // Constructor por defecto
    Empresa();

    // Métodos para obtener los datos
    void setNombre(string nombre);
    void setNit(string nit);
    void setLogotipo(string logotipo);

    string getNombre() const;
    string getNit() const;
    string getLogotipo() const;

    // Método para registrar la empresa en un archivo
    void registrarEmpresa() const;

    // Método para mostrar la información registrada
    static void mostrarInformacionEmpresa();
};

#endif

