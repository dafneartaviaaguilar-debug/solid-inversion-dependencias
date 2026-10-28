#ifndef ENVIORECIBO_H
#define ENVIORECIBO_H
#include <iostream>

using namespace std;

class EnvioRecibo
{
    public:
        EnvioRecibo();
        virtual ~EnvioRecibo();

       virtual void EnviarRecibo(string NombreProducto) const = 0;

};

#endif // ENVIORECIBO_H
