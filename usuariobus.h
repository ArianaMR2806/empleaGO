#ifndef CANDIDATO_H
#define CANDIDATO_H

#include <string>
using namespace std;

class Candidato {
private:
    string nombreCompleto;
    string profesion;
    string curriculumVitae;
    string correoElectronico;
    string telefono;
    string direccion;

public:
    // Constructor por defecto
    Candidato();

    // Métodos para registrar la información del candidato
    void registrarInformacion(string nombreCompleto, string profesion, string curriculumVitae,
                               string correoElectronico, string telefono, string direccion);

    // Métodos para obtener la información del candidato
    string obtenerNombreCompleto() const;
    string obtenerProfesion() const;
    string obtenerCurriculumVitae() const;
    string obtenerCorreoElectronico() const;
    string obtenerTelefono() const;
    string obtenerDireccion() const;

    // Método para mostrar la información registrada del candidato
    void mostrarInformacion() const;
};

#endif
