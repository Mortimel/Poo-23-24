//
// Created by BrunoOliveira on 10/11/2023.
//

#include "Zona.h"
#include <iostream>

using namespace std;

Zona::Zona(int id, int linha = 0, int coluna = 0) : id(id), linha(linha), coluna(coluna){}

Zona::~Zona() {
    // Add any necessary cleanup code
}

void Zona::setId(int newId) {
    id = newId;
}

void Zona::setLinhas(int newLinhas) {
    linhas = newLinhas;
}

void Zona::setColunas(int newColunas) {
    colunas = newColunas;
}

void Zona::displayZone() {
    // Add code to display the Zona as needed
}

int Zona::getLinhas() const {
    return linhas;
}

int Zona::getColunas() const {
    return colunas;
}

int Zona::getId() const {
    return id;
}

/*
void Zona::adicionarZona(const int &id, const int &linha, const int &coluna){
    zonas.push_back(new Zona(id, linha, coluna));
}
*/

/*
Zona::Zona(Interface mapa, int id, int linha, int coluna, int linhas, int colunas)
        : mapa(mapa), id(id), linha(linha), coluna(coluna), linhas(linhas), colunas(colunas) {
    // Add a '#' to the mapa window when a new Zona is created
    mapa << move_to(linha, coluna) << "#";
    mapa.refresh();
}
*/


