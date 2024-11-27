#include "usuarioem.h"
#include <iostream>
#include <fstream>

using namespace std;

// Constructor por defecto
Empresa::Empresa() {
    nombre = "";
    nit = "";
    logotipo = "";
}

// Métodos para establecer los datos
void Empresa::setNombre(string nombre) {
    this->nombre = nombre;
}

void Empresa::setNit(string nit) {
    this->nit = nit;
}

void Empresa::setLogotipo(string logotipo) {
    this->logotipo = logotipo;
}

// Métodos para obtener los datos
string Empresa::getNombre() const {
    return nombre;
}

string Empresa::getNit() const {
    return nit;
}

string Empresa::getLogotipo() const {
    return logotipo;
}

// Método para registrar la empresa en un archivo
void Empresa::registrarEmpresa() const {
    ofstream archivo("empresa_registrada.txt", ios::out);

    if (archivo.is_open()) {
        archivo << "Nombre de la Empresa: " << nombre << endl;
        archivo << "NIT de la Empresa: " << nit << endl;
        archivo << "Logotipo de la Empresa: " << logotipo << endl;
        archivo.close();
        cout << "Registro de empresa exitoso. La informacion ha sido guardada en 'empresa_registrada.txt'.\n";
    }
    else {
        cout << "Error al abrir el archivo para guardar la informacion.\n";
    }
}

// Método estático para mostrar la información registrada de la empresa
void Empresa::mostrarInformacionEmpresa() {
    ifstream archivo("empresa_registrada.txt", ios::in);
    string linea;

    if (archivo.is_open()) {
        cout << "Informacion de la Empresa Registrada:\n";
        while (getline(archivo, linea)) {
            cout << linea << endl;
        }
        archivo.close();
    }
    else {
        cout << "No se pudo abrir el archivo de la empresa.\n";
    }
}
