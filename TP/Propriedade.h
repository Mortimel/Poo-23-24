//
// Created by BrunoOliveira on 23/11/2023.
//

#ifndef TP_PROPRIEDADE_H
#define TP_PROPRIEDADE_H

#include <string>


#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Propriedade {
private:
    string chave;
    string unidade;
    double valor;
    double valorMinimo;
    double valorMaximo;

public:
    Propriedade(const string& nome, const string& unidade, double minimo, double maximo);
    ~Propriedade();

    const string& obterChave() const;
    double obterValor() const;
    double obterValorMinimo() const;
    double obterValorMaximo() const;

    void definirValor(double novoValor);
    bool validarValor(double novoValor) const;
    void mostrarInformacoes() const;
};

#endif //TP_PROPRIEDADE_H