//
// Created by BrunoOliveira on 29/12/2023.
//

#ifndef TP_LUZ_H
#define TP_LUZ_H

#include "../Propriedade.h"

class Luz : public Propriedade{
public:
    Luz(int temperatura, int ruido, int fumo, int humidade, int vibracao, int luminosidade, int luz) :
            Propriedade(temperatura = 0, ruido = 0, fumo = 0, humidade = 0, vibracao = 0, luminosidade = 0, luz = 0){}

    void valorMinimo() override;

    //nao tem valor maximo
    void valorMaximo() override;
};


#endif //TP_LUZ_H
