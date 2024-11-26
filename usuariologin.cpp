#include "UsuarioLogin.h"
#include <iostream>
#include <regex>

using namespace std;

// Constructor por defecto
UsuarioLogin::UsuarioLogin() : correoElectronico(""), nombreUsuario(""), contrasena("") {}

// Método para registrar al usuario
void UsuarioLogin::registrarUsuario(const string& correo, const string& nombreUsuario, const string& contrasena) {
    this->correoElectronico = correo;
    this->nombreUsuario = nombreUsuario;
    this->contrasena = contrasena;
}

// Método para obtener el correo electrónico
string UsuarioLogin::obtenerCorreoElectronico() const {
    return correoElectronico;
}

// Método para obtener el nombre de usuario
string UsuarioLogin::obtenerNombreUsuario() const {
    return nombreUsuario;
}

// Método para verificar si la contraseña es correcta
bool UsuarioLogin::verificarContrasena(const string& contrasenaIngresada) const {
    return contrasena == contrasenaIngresada;
}

// Método para validar el correo electrónico (solo verifica '@')
bool UsuarioLogin::esCorreoValido(const string& correo) const {
    // Expresión regular simple para verificar si el correo contiene al menos un '@'
    const regex patronCorreo(R"(^.+@.+$)"); // Asegura que haya algo antes y después del '@'
    return regex_match(correo, patronCorreo);
}
