//
// Created by BrunoOliveira on 24/12/2023.
//

#include "Aparelho.h"
using namespace std;
#include <sstream>

//falta meter no id
Aparelho::Aparelho(const string& tipo, int fumo = 0, int humidade = 0, int luminosidade = 0, int ruido = 0, int tempZona = 0, int vibracao = 0,int estaLigado = 0) : tipo(tipo), fumo(fumo), humidade(humidade), luminosidade(luminosidade), ruido(ruido), tempZona(tempZona), vibracao(vibracao), estaLigado(1){
}


Aparelho::~Aparelho() {
}


string Aparelho::getTipo() const {
    ostringstream oss;
    oss << tipo;

    return oss.str();
}

int Aparelho::getFumo() const {
    return fumo;
}

int Aparelho::getHumidade() const {
    return humidade;
}

int Aparelho::getLuminosidade() const {
    return luminosidade;
}

int Aparelho::getRuido() const {
    return ruido;
}

int Aparelho::getTempZona() const {
    return tempZona;
}

int Aparelho::getVibracao() const {
    return vibracao;
}


int Aparelho::getLigado() const {
    return estaLigado;
}

/*
bool Aparelho::isLigado(){
    return estaLigado = 1;
}
*/


