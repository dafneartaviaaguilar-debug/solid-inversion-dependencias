#include <iostream>
#include "EnvioRecibo.h"
#include "EnviarEmail.h"
#include "EnviarApp.h"
#include "Producto.h"
#include "AdmProducto.h"

using namespace std;

int main() {
    cout << "Inversion de Dependencia\n" << endl;

    EnvioRecibo* enviaremail = new EnviarEmail();
    EnvioRecibo* enviarapp = new EnviarApp();

    Producto producto1;
    producto1.setNombre("Producto 1");
    producto1.setPrecio(100);

    AdmProducto admproducto;
    admproducto.setProducto(producto1);


    admproducto.Compra(enviaremail);


    admproducto.Compra(enviarapp);

    return 0;
}

