#include "Producto.h"

Producto::Producto()
{
    //ctor
}

Producto::~Producto()
{
    //dtor
}


const string &Producto::getNombre() const {
    return Nombre;
}

void Producto::setNombre(const string &Nombre) {
    Producto::Nombre = Nombre;
}

double Producto::getPrecio() const {
    return Precio;
}

void Producto::setPrecio(double precio) {
    Producto::Precio = Precio;
}
