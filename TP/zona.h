//
// Created by BrunoOliveira on 10/11/2023.
//

#ifndef TP_ZONA_H
#define TP_ZONA_H


#include <vector>
#include <string>
#include <iostream>
#include "Propriedade.h"
#include "Processador.h"
#include "Aparelho.h"
#include "Sensor.h"
#include <fstream>
#include <sstream>


using namespace std;

class Zona {
public:
    Zona(int id, int linha, int coluna);
    ~Zona();

    void setId(int newId);
    void setLinhas(int newLinhas);
    void setColunas(int newColunas);
    void displayZone();
    int getLinhas() const;
    int getColunas() const;
    int getId() const;

    void adicionarSensor();
    void adicionarAparelho();
    void adicionarProcessador();

private:
    int id;
    int linha;
    int coluna;
    int linhas;
    int colunas;
    WINDOW mapa;
    std::vector<Zona*> zonas;
};

#endif //TP_ZONA_H