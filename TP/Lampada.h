//
// Created by BrunoOliveira on 25/12/2023.
//

#ifndef TP_LAMPADA_H
#define TP_LAMPADA_H

#include "Aparelho.h"

class Lampada : public Aparelho{
public:
    Lampada(const string& tipo,int fumo, int humidade,int luminosidade, int ruido,int tempZona,int vibracao, int estaLigado) : Aparelho(tipo, fumo = 0,humidade = 0, luminosidade , ruido , tempZona , vibracao, estaLigado)
    {}

    void estadoAparelho() override;
    string getTipo() const override{ return "l"; }

};


#endif //TP_LAMPADA_H
