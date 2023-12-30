//
// Created by BrunoOliveira on 29/12/2023.
//

#ifndef TP_RADIACAO_H
#define TP_RADIACAO_H
#include "../Propriedade.h"

class Radiacao : public Propriedade{
public:
    Radiacao(const string& nome, const string& unidade, double minimo, double maximo, double valor) :
            Propriedade(nome, unidade, minimo , maximo, valor ){}

};


#endif //TP_RADIACAO_H
