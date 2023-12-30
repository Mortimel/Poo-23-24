//
// Created by BrunoOliveira on 29/12/2023.
//

#ifndef TP_TEMPERATURA_H
#define TP_TEMPERATURA_H

#include "../Propriedade.h"

class Temperatura : public Propriedade{
public:
    Temperatura(const string& nome, const string& unidade, double minimo, double maximo, double valor) :
            Propriedade(nome, unidade, minimo, maximo, valor){}

};


#endif //TP_TEMPERATURA_H
