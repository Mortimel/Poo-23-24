//
// Created by BrunoOliveira on 25/12/2023.
//

#ifndef TP_AQUECEDOR_H
#define TP_AQUECEDOR_H

#include "Aparelho.h"

class Aquecedor : public Aparelho{
public:
    Aquecedor(const string& tipo,int fumo, int humidade,int luminosidade, int ruido,int tempZona,int vibracao, int estaLigado) : Aparelho(tipo, fumo = 0,humidade = 0, luminosidade = 0, ruido, tempZona, vibracao = 0, estaLigado)
    {}

    void estadoAparelho() override;
    string getTipo() const override{ return "a"; }



};

#endif //TP_AQUECEDOR_H


