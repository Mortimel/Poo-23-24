//
// Created by BrunoOliveira on 29/12/2023.
//

#ifndef TP_SOM_H
#define TP_SOM_H

#include "../Propriedade.h"

class Som : public Propriedade{
public:
    Som(const string& nome, const string& unidade, double minimo, double maximo) :
            Propriedade(nome, unidade, minimo , maximo ){}

};


#endif //TP_SOM_H
