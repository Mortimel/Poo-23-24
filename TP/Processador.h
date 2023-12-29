//
// Created by BrunoOliveira on 23/11/2023.
//

#ifndef TP_PROCESSADOR_H
#define TP_PROCESSADOR_H



#include <string>
#include "Regras.h"
#include <vector>


class Processador{
private:
    string comando;
    vector<Regras*> regras;

public:
    Processador(const string& comando);
    ~Processador();

    void adicionarRegra(const std::string& operador, double limite1, double limite2);
    void executar(const vector<double>& valoresSensores) const;
};




#endif //TP_PROCESSADOR_H