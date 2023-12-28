//
// Created by BrunoOliveira on 26/12/2023.
//


#include "Propriedade.h"
#include <iostream>

Propriedade::Propriedade(const string& nome, const string& unidade, double minimo, double maximo)
        : chave(nome), valorMinimo(minimo), valorMaximo(maximo), valor(0.0) {}

Propriedade::~Propriedade() {}

const string& Propriedade::obterChave() const {
    return chave;
}

double Propriedade::obterValor() const {
    return valor;
}

double Propriedade::obterValorMinimo() const {
    return valorMinimo;
}

double Propriedade::obterValorMaximo() const {
    return valorMaximo;
}

void Propriedade::definirValor(double novoValor) {
    if (validarValor(novoValor)) {
        valor = novoValor;
    } else {
        cout << "Valor fora dos limites permitidos." << endl;
    }
}

bool Propriedade::validarValor(double novoValor) const {
    return (novoValor >= valorMinimo && novoValor <= valorMaximo);
}

void Propriedade::mostrarInformacoes() const {
    cout << "Propriedade: " << chave << "\nValor: " << valor << "\nUnidade: " << unidade
         << "\nValor Mínimo: " << valorMinimo << "\nValor Máximo: " << valorMaximo << endl;
}