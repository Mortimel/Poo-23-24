//
// Created by BrunoOliveira on 23/11/2023.
//

#ifndef TP_SENSOR_H
#define TP_SENSOR_H


#include <string>
#include "Propriedade.h"

class Sensor {
public:
    Sensor(const string& nome, Propriedade* propriedade);
    void medirPropriedade(double valor);
    double obterLeituraPropriedade() const;
    string obterNomePropriedade() const;

private:
    string nome;
    Propriedade* propriedade;
};


#endif //TP_SENSOR_H