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

/*
bool Aparelho::isLigado(){
    return estaLigado = 1;
}
*/
int Aparelho::getLigado() const {
    return estaLigado;
}



/*


bool refrigerador::ligado{
    if (ligado = true){
        tempZona = tempZona - 1;
        ruido = ruido + 20;
    }
};

bool lampada::ligado{
    if (ligado = true){
        luminosidade = luminosidade + 900;
    }
};

 /*
class aquecedor : public Aparelho{
     //a se ligado
     // A se desligado
     //?? em 3 instantes
public:
    bool ligado;

private:
   int tempZona = 0;
   int ruido = 0;
};

class aspersor : public Aparelho{
    // s se ligado
     // S se desligado
      //fumo = 0 no segundo instante?????

public:
    bool ligado;

private:
    int humidade = 0;
    int vibracao = 0;
};
class refrigerador : public Aparelho{
    // r se estiver ligado
     // R se estiver desligado
     // ?? em 3 instantes

public:
bool ligado;
private:
int tempZona = 0;
int ruido = 0;
};

 class lampada : public Aparelho{
    // l se ligado
     // L se desligado
     // // enquanto estiver ligado e so 1 vez

public:
    bool ligado;
private:
    int luminosidade = 0;
};

*/
