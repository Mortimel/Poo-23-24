//
// Created by BrunoOliveira on 28/12/2023.
//

#include "sensor.h"

Sensor::Sensor(const string& nome, Propriedade* propriedade)
        : nome(nome), propriedade(propriedade) {}

void Sensor::medirPropriedade(double valor) {
    // Método para medir a propriedade associada ao sensor
    propriedade->setValor(valor);
}

double Sensor::obterLeituraPropriedade() const {
    // Método para obter a leitura atual da propriedade associada ao sensor
    return propriedade->getValor();
}

string Sensor::obterNomePropriedade() const {
    // Método para obter o nome da propriedade associada ao sensor
    return propriedade->getNome();
}