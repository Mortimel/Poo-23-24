//
// Created by BrunoOliveira on 23/11/2023.
//

#ifndef TP_REGRAS_H
#define TP_REGRAS_H

#include <string>
#include "Sensor.h"


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
    std::vector<std::string> regra = {"igual_a", "menor_que", "maior_que", "entre", "fora"};

public:
    Regra(int identificador);

    bool avaliar(const double valorSensor, const string& operador, const double valorLimite1, const double valorLimite2 = 0.0);


    int obterId() const;

    const std::vector<std::string>& obterOperadores() const;
};

#endif //TP_REGRAS_H