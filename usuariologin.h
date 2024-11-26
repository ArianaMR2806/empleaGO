#ifndef USUARIOLOGIN_H
#define USUARIOLOGIN_H

#include <string>

using namespace std;

class UsuarioLogin {
private:
    string correoElectronico;
    string nombreUsuario;
    string contrasena;

public:
    // Constructor
    UsuarioLogin();

    // Métodos para registrar un usuario
    void registrarUsuario(const string& correo, const string& nombreUsuario, const string& contrasena);

    // Métodos para obtener información del usuario
    string obtenerCorreoElectronico() const;
    string obtenerNombreUsuario() const;
    bool verificarContrasena(const string& contrasenaIngresada) const;

    // Método para validar el correo electrónico (solo verifica '@')
    bool esCorreoValido(const string& correo) const;
};

#endif
