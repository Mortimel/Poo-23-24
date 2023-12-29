//
// Created by BrunoOliveira on 23/11/2023.
//

#ifndef TP_REGRAS_H
#define TP_REGRAS_H

#include <string>
#include "Sensor.h"

using namespace std;


#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <fstream>
#include <vector>
#include "Terminal.h"

using namespace std;

class Regras {
private:
    int id;
    bool resultado;
    double valorMin;
    double valorMax;
    string operador;
    vector<string> regra = {"igual_a", "menor_que", "maior_que", "entre", "fora"};

public:
    Regras(const std::string& operador, double limite1, double limite2);

    //getters
    int obterId() const;
    double getValorMin() const;
    double getValorMax() const;

    //setters
    void setValorMin(double newValorMin) { valorMin = newValorMin;}
    void setValorMax(double newValorMax) { valorMax = newValorMax;}


    bool avaliar(double valorSensor, vector<string> operador, double valorLimite1, double valorLimite2);
    const vector<string> obterOperadores();
};

#endif //TP_REGRAS_H