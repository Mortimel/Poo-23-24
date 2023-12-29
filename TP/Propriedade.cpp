//
// Created by BrunoOliveira on 26/12/2023.
//


#include "Propriedade.h"



Propriedade::Propriedade(const string& nome, const string& unidade, double minimo, double maximo)
        : nome(nome), valorMinimo(minimo), valorMaximo(maximo), valor(0.0) {}

Propriedade::~Propriedade() {}

const string& Propriedade::getNome() const {
    return nome;
}

double Propriedade::getValor() const {
    return valor;
}

double Propriedade::getValorMinimo() const {
    return valorMinimo;
}

double Propriedade::getValorMaximo() const {
    return valorMaximo;
}

void Propriedade::setValor(double novoValor) {
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
    cout << "Propriedade: " << nome << "\nValor: " << valor << "\nUnidade: " << unidade
         << "\nValor Mínimo: " << valorMinimo << "\nValor Máximo: " << valorMaximo << endl;
}

string Propriedade::getTipo() const {
    ostringstream oss;
    oss << nome;

    return oss.str();
}

/*
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

*/