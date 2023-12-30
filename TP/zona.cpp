//
// Created by BrunoOliveira on 10/11/2023.
//

#include "Propriedades/Fumo.h"
#include "Propriedades/Humidade.h"
#include "Propriedades/Luz.h"
#include "Propriedades/Radiacao.h"
#include "Propriedades/Som.h"
#include "Propriedades/Temperatura.h"
#include "Propriedades/Vibracao.h"

#include "Zona.h"
#include <iostream>

using namespace std;

Zona::Zona(int id, int linhas, int colunas) : id(id), linhas(linhas), colunas(colunas){}

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


vector<Propriedade *> Zona::getVecPropriedade() const
{
    return propriedades;
}

//falta adicionar propriedade trivial
void Zona::criarPropriedade()
{
    propriedades.push_back(new Temperatura("Temperatura", "graus celsius", -273, 100, 20));
    propriedades.push_back(new Fumo("Fumo", " Obscuracao", 0, 100, 0));
    propriedades.push_back(new Humidade("Humidade", "%", 0, 100, 0));
    propriedades.push_back(new Luz("Luz", "Lumens", 0, 10000, 1000));
    propriedades.push_back(new Radiacao("Radiacao", "Becquerel", 0, 100, 0));
    propriedades.push_back(new Som("Som", "Decibeis", 0, 100, 0));
    propriedades.push_back(new Vibracao("Vibracao", "Hertz", 0, 100, 0));
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


