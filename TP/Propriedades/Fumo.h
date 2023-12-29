//
// Created by BrunoOliveira on 29/12/2023.
//

#ifndef TP_FUMO_H
#define TP_FUMO_H
#include "../Propriedade.h"

class Fumo : public Propriedade{
public:
    Fumo(const string& nome, const string& unidade, double minimo, double maximo) : Propriedade(nome, unidade, minimo = 0, maximo = 0){}


};

#endif //TP_FUMO_H
