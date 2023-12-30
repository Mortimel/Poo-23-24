//
// Created by BrunoOliveira on 29/12/2023.
//

#ifndef TP_VIBRACAO_H
#define TP_VIBRACAO_H

#include "../Propriedade.h"

class Vibracao : public Propriedade{
public:
    Vibracao(const string& nome, const string& unidade, double minimo, double maximo, double valor) :
    Propriedade(nome, unidade, minimo , maximo, valor ){}

};


#endif //TP_VIBRACAO_H
