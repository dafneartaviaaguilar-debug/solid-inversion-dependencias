#include "EnviarApp.h"

EnviarApp::EnviarApp()
{
    //ctor
}

EnviarApp::~EnviarApp()
{
    //dtor
}

void EnviarApp::EnviarRecibo(string NombreProducto) const {
    cout << "Producto: " << NombreProducto <<", Imprimiendo el recibo del APP..." << std::endl;
}
