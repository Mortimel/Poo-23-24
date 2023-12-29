//
// Created by BrunoOliveira on 29/12/2023.
//

#ifndef TP_RADIACAO_H
#define TP_RADIACAO_H
#include "Propriedade.h"

class Radiacao : public Propriedade{
public:
    Radiacao(int temperatura, int ruido, int fumo, int humidade, int vibracao, int luminosidade, int luz) :
            Propriedade(temperatura = 0, ruido = 0, fumo = 0, humidade = 0, vibracao = 0, luminosidade = 0, luz = 0){}

    void valorMinimo() override;
   // double valorMaximo() override;
};


#endif //TP_RADIACAO_H
