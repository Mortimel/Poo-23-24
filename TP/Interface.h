//
// Created by BrunoOliveira on 25/11/2023.
//

#ifndef TP_INTERFACE_H
#define TP_INTERFACE_H


#include "zona.h"
#include "Terminal.h"
#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstring>

using namespace term;


class Interface{
public:
    Interface(Terminal &t);
    ~Interface();

    void validaComandos(string comando);
    bool leFicheiro(string fileName);
    void menuInterface(Terminal &t);

private:
    Terminal &t;
    Zona *z;
    Window comandos;
    Window mapa;
    Window out;
};


#endif //TP_INTERFACE_H
