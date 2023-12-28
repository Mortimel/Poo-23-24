//
// Created by BrunoOliveira on 26/12/2023.
//


#include "Regras.h"

Regra::Regra(int identificador) : id(identificador), resultado(false) {}

bool Regras::avaliar(const double valorSensor, const std::string& operador, const double valorLimite1, const double valorLimite2) {
    if (operador == "igual_a") {
        resultado = (valorSensor == valorLimite1);
    } else if (operador == "menor_que") {
        resultado = (valorSensor < valorLimite1);
    } else if (operador == "maior_que") {
        resultado = (valorSensor > valorLimite1);
    } else if (operador == "entre") {
        resultado = (valorSensor >= valorLimite1 && valorSensor <= valorLimite2);
    } else if (operador == "fora") {
        resultado = !(valorSensor >= valorLimite1 && valorSensor <= valorLimite2);
    } else {
        std::cerr << "Operador de regra desconhecido: " << operador << std::endl;
        resultado = false;
    }

    return resultado;
}

int Regra::obterId() const {
    return id;
}

const vector<string>& Regra::obterOperadores() const {
    return regra;
}