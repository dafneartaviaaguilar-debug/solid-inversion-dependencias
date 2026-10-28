#include "EnviarEmail.h"

EnviarEmail::EnviarEmail()
{
    //ctor
}

EnviarEmail::~EnviarEmail()
{
    //dtor
}

void EnviarEmail::EnviarRecibo(string NombreProducto) const {
    cout << "Producto: " << NombreProducto <<", Enviando por correo el recibo..." << endl;

}
