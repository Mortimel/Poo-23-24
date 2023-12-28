//
// Created by BrunoOliveira on 23/11/2023.
//

#ifndef TP_APARELHO_H
#define TP_APARELHO_H

#include <string>
#include "Propriedade.h"
using namespace std;

//TENHO Q IR BUSCAR OS VALORES DAS PROPRIEDADES

class Aparelho{
public:
    Aparelho(const string& tipo, int fumo, int humidade, int luminosidade, int ruido, int tempZona, int vibracao,int estaLigado);
    ~Aparelho();

    //getters
    int getTempZona() const;
    int getRuido() const;
    int getFumo() const;
    int getHumidade() const;
    int getVibracao() const;
    int getLuminosidade() const;
    int getLigado() const;

    virtual void estadoAparelho() const;
    virtual string getTipo() const = 0;
    //virtual bool isLigado();

    //setters
    void setLigado(int newLigado){estaLigado = newLigado;}
    void setTempZona(int newTempZona){tempZona = newTempZona;}
    void setRuido(int newRuido) {ruido = newRuido;}
    void setFumo(int newFumo){fumo = newFumo;}
    void setHumidade(int newHumidade) {humidade = newHumidade;}
    void setVibracao(int newVibracao) {vibracao = newVibracao;}
    void setLuminosidade(int newLuminosidade) {luminosidade = newLuminosidade;}

private:
    string tipo;
    int tempZona;
    int ruido;
    int fumo;
    int humidade;
    int vibracao;
    int luminosidade;
    int estaLigado;
};


#endif //TP_APARELHO_H