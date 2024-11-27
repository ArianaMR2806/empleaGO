#include "UsuarioLogin.h"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

// Constructor por defecto
UsuarioLogin::UsuarioLogin() {
    correoElectronico = "";
    nombreUsuario = "";
    contrasena = "";
    tipoUsuario = "";
}

// Registrar un usuario con tipo (Contratador o Candidato)
void UsuarioLogin::registrarUsuario(string correo, string nombreUsuario, string contrasena, string tipoUsuario) {
    this->correoElectronico = correo;
    this->nombreUsuario = nombreUsuario;
    this->contrasena = contrasena;
    this->tipoUsuario = tipoUsuario;

    // Aquí podrías guardar los datos en un archivo o base de datos si lo deseas
}

// Métodos para obtener datos
string UsuarioLogin::obtenerCorreoElectronico() const {
    return correoElectronico;
}

string UsuarioLogin::obtenerNombreUsuario() const {
    return nombreUsuario;
}

string UsuarioLogin::obtenerTipoUsuario() const {
    return tipoUsuario;
}

// Validar si el correo electrónico tiene un formato correcto
bool UsuarioLogin::esCorreoValido(string correo) const {
    return correo.find('@') != string::npos;  // Verifica que contenga un '@'
}

// Verificar si la contraseña ingresada es correcta
bool UsuarioLogin::verificarContrasena(string contrasenaVerificar) const {
    return contrasena == contrasenaVerificar;
}
