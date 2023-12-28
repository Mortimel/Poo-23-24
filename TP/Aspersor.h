//
// Created by BrunoOliveira on 25/12/2023.
//

#ifndef TP_ASPERSOR_H
#define TP_ASPERSOR_H

#include "Aparelho.h"

class Aspersor : public Aparelho{
public:
    Aspersor(const string& tipo,int fumo, int humidade,int luminosidade, int ruido,int tempZona,int vibracao, int estaLigado) : Aparelho(tipo, fumo,humidade, luminosidade = 0, ruido = 0, tempZona = 0, vibracao, estaLigado)
    {}

    void estadoAparelho() override;
    string getTipo() const override{ return "s"; }

};

#endif //TP_ASPERSOR_H
