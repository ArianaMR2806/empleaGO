#include "Candidato.h"
#include <iostream>
#include <fstream>

using namespace std;

// Constructor por defecto
Candidato::Candidato() {
    nombreCompleto = "";
    profesion = "";
    curriculumVitae = "";
    correoElectronico = "";
    telefono = "";
    direccion = "";
}

// Método para registrar la información del candidato
void Candidato::registrarInformacion(string nombreCompleto, string profesion, string curriculumVitae,
                                      string correoElectronico, string telefono, string direccion) {
    this->nombreCompleto = nombreCompleto;
    this->profesion = profesion;
    this->curriculumVitae = curriculumVitae;
    this->correoElectronico = correoElectronico;
    this->telefono = telefono;
    this->direccion = direccion;
}

// Métodos para obtener la información del candidato
string Candidato::obtenerNombreCompleto() const {
    return nombreCompleto;
}

string Candidato::obtenerProfesion() const {
    return profesion;
}

string Candidato::obtenerCurriculumVitae() const {
    return curriculumVitae;
}

string Candidato::obtenerCorreoElectronico() const {
    return correoElectronico;
}

string Candidato::obtenerTelefono() const {
    return telefono;
}

string Candidato::obtenerDireccion() const {
    return direccion;
}

// Método para mostrar la información registrada
void Candidato::mostrarInformacion() const {
    cout << "\n--- Información del Candidato ---\n";
    cout << "Nombre Completo: " << nombreCompleto << endl;
    cout << "Profesión: " << profesion << endl;
    cout << "Correo Electrónico: " << correoElectronico << endl;
    cout << "Teléfono: " << telefono << endl;
    cout << "Dirección: " << direccion << endl;
    cout << "Currículum Vitae: " << curriculumVitae << endl;
}
