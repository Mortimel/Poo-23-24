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

class Propriedade{
private:
    int temperatura;
    int ruido;
    int fumo;
    int humidade;
    int vibracao;
    int luminosidade;
    int luz;
    double valorMin{};
    double valorMax{};

public:
    Propriedade(int temperatura, int ruido, int fumo, int humidade, int vibracao, int luminosidade, int luz);
    ~Propriedade();

    //getters
    double getValorMin() const;
    double getValorMax() const;
    int getTemperatura() const;
    int getRuido() const;
    int getFumo() const;
    int getHumidade() const;
    int getVibracao() const;
    int getLuminosidade() const;

    virtual double valorMinimo();
    virtual double valorMaximo();


    //setters
    void setValorMin(double newValorMin){valorMin = newValorMin;}
    void setValorMax(double newValorMax){valorMax = newValorMax;}
    void setTemperatura(int newTemperatura){temperatura = newTemperatura;}
    void setRuido(int newRuido) {ruido = newRuido;}
    void setFumo(int newFumo){fumo = newFumo;}
    void setHumidade(int newHumidade) {humidade = newHumidade;}
    void setVibracao(int newVibracao) {vibracao = newVibracao;}
    void setLuminosidade(int newLuminosidade) {luminosidade = newLuminosidade;}

};
/*
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
*/
#endif //TP_PROPRIEDADE_H