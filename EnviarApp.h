#ifndef ENVIARAPP_H
#define ENVIARAPP_H
#include "EnvioRecibo.h"
#include <iostream>

using namespace std;

class EnviarApp: public EnvioRecibo
{
    public:
        EnviarApp();
        virtual ~EnviarApp();
        void EnviarRecibo(string NombreProducto) const override;
};


#endif // ENVIARAPP_H
