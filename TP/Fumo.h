//
// Created by BrunoOliveira on 29/12/2023.
//

#ifndef TP_FUMO_H
#define TP_FUMO_H
#include "Propriedade.h"

class Fumo : public Propriedade{
public:
    Fumo(int temperatura, int ruido, int fumo, int humidade, int vibracao, int luminosidade, int luz) :
            Propriedade(temperatura = 0, ruido = 0, fumo = 0, humidade = 0, vibracao = 0, luminosidade = 0, luz = 0){}

    void valorMinimo() override;
    void valorMaximo() override;
};

#endif //TP_FUMO_H
