//
// Created by BrunoOliveira on 29/12/2023.
//

#ifndef TP_HUMIDADE_H
#define TP_HUMIDADE_H

#include "../Propriedade.h"

class Humidade : public Propriedade{
public:
    Humidade(const string& nome, const string& unidade, double minimo, double maximo) :
    Propriedade(nome, unidade, minimo, maximo ){}

};


#endif //TP_HUMIDADE_H
