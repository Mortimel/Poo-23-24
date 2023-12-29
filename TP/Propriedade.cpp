//
// Created by BrunoOliveira on 26/12/2023.
//


#include "Propriedade.h"
#include <iostream>

Propriedade::Propriedade(int temperatura, int ruido, int fumo, int humidade, int vibracao, int luminosidade, int luz) : temperatura(temperatura), ruido(ruido), fumo(fumo), humidade(humidade),
                         vibracao(vibracao), luminosidade(luminosidade), luz(luz){}

Propriedade::~Propriedade() {
}

int Propriedade::getFumo() const {
    return fumo;
}

int Propriedade::getHumidade() const {
    return humidade;
}

int Propriedade::getLuminosidade() const {
    return luminosidade;
}

int Propriedade::getRuido() const {
    return ruido;
}

int Propriedade::getTemperatura() const {
    return temperatura;
}

int Propriedade::getVibracao() const {
    return vibracao;
}

double Propriedade::getValorMin() const{
    return valorMin;
}

double Propriedade::getValorMax() const{
    return valorMax;
}



/*
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

 */