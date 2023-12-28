//
// Created by BrunoOliveira on 23/11/2023.
//

#ifndef TP_PROCESSADOR_H
#define TP_PROCESSADOR_H

#include <string>
#include "Regras.h"


class Processador{
public:
    Processador();
    ~Processador();
    void adicionaRegra();
    void removerRegra();

private:
    std::string comando;
    int id;
};




#endif //TP_PROCESSADOR_H