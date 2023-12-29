//
// Created by BrunoOliveira on 29/12/2023.
//

#ifndef TP_VIBRACAO_H
#define TP_VIBRACAO_H

#include "Propriedade.h"

class Vibracao : public Propriedade{
public:
    Vibracao(int temperatura, int ruido, int fumo, int humidade, int vibracao, int luminosidade, int luz) :
            Propriedade(temperatura = 0, ruido = 0, fumo = 0, humidade = 0, vibracao = 0, luminosidade = 0, luz = 0){}

    void valorMinimo() override;
};


#endif //TP_VIBRACAO_H
