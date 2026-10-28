#include "AdmProducto.h"

AdmProducto::AdmProducto()
{
    //ctor
}

AdmProducto::~AdmProducto()
{
    //dtor
}

void AdmProducto::Compra(EnvioRecibo *enviorecibo) {
    enviorecibo->EnviarRecibo(producto.getNombre());
}


const Producto &AdmProducto::getProducto() const {
    return producto;
}

void AdmProducto::setProducto(const Producto &producto) {
    AdmProducto::producto = producto;
}
