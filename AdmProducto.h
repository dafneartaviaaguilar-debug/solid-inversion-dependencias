#ifndef ADMPRODUCTO_H
#define ADMPRODUCTO_H
#include "EnvioRecibo.h"
#include "Producto.h"

class AdmProducto
{
    private:
    Producto producto;
    public:
        AdmProducto();
        virtual ~AdmProducto();
        const Producto &getProducto() const;

        void setProducto(const Producto &producto);

        void Compra (EnvioRecibo* enviorecibo);

};


#endif // ADMPRODUCTO_H
