//
// Created by BrunoOliveira on 25/12/2023.
//

#ifndef TP_REFRIGERADOR_H
#define TP_REFRIGERADOR_H

#include "Aparelho.h"

class Refrigerador : public Aparelho{
    /* r se estiver ligado
     * R se estiver desligado
     * ?? em 3 instantes
     */
public:
    Refrigerador(const string& tipo,int fumo, int humidade,int luminosidade, int ruido,int tempZona,int vibracao, int estaLigado) : Aparelho(tipo, fumo = 0,humidade = 0, luminosidade = 0, ruido, tempZona, vibracao = 0, estaLigado)
    {}

    void estadoAparelho() override;
    string getTipo() const override{ return "r"; }

};


#endif //TP_REFRIGERADOR_H
