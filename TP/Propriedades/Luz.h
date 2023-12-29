//
// Created by BrunoOliveira on 29/12/2023.
//

#ifndef TP_LUZ_H
#define TP_LUZ_H

#include "../Propriedade.h"

class Luz : public Propriedade{
public:
    Luz(const string& nome, const string& unidade, double minimo, double maximo) :
            Propriedade(nome, unidade, minimo, maximo ){}

};


#endif //TP_LUZ_H
