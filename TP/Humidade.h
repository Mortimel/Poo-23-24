//
// Created by BrunoOliveira on 29/12/2023.
//

#ifndef TP_HUMIDADE_H
#define TP_HUMIDADE_H

#include "Propriedade.h"

class Humidade : public Propriedade{
public:
    Humidade(int temperatura, int ruido, int fumo, int humidade, int vibracao, int luminosidade, int luz) :
    Propriedade(temperatura = 0, ruido = 0, fumo = 0, humidade = 0, vibracao = 0, luminosidade = 0, luz = 0){}

    double valorMinimo() override;
    double valorMaximo() override;
};


#endif //TP_HUMIDADE_H
