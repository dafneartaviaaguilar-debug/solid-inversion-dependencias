#ifndef ENVIAREMAIL_H
#define ENVIAREMAIL_H
#include "EnvioRecibo.h"
#include <iostream>

using namespace std;

class EnviarEmail: public EnvioRecibo
{
    public:
        EnviarEmail();
        virtual ~EnviarEmail();

    void EnviarRecibo(string NombreProduto) const override;
};


#endif // ENVIAREMAIL_H
