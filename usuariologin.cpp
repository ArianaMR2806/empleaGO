#ifndef USUARIOLOGIN_H
#define USUARIOLOGIN_H

#include <string>
using namespace std;

class UsuarioLogin {
private:
    string correoElectronico;
    string nombreUsuario;
    string contrasena;
    string tipoUsuario;  // "Contratador" o "Candidato"

public:
    // Constructor por defecto
    UsuarioLogin();

    // Métodos para registrar al usuario
    void registrarUsuario(string correo, string nombreUsuario, string contrasena, string tipoUsuario);

    // Métodos para obtener datos del usuario
    string obtenerCorreoElectronico() const;
    string obtenerNombreUsuario() const;
    string obtenerTipoUsuario() const;

    // Métodos de validación
    bool esCorreoValido(string correo) const;

    // Verificación de contraseña
    bool verificarContrasena(string contrasenaVerificar) const;
};

#endif
