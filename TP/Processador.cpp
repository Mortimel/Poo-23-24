//
// Created by BrunoOliveira on 28/12/2023.
//

#include "Processador.h"
#include "Regras.h"

Processador::Processador(const string& comando) : comando(comando) {}

Processador::~Processador() {
    for (Regras* regra : regras) {
        delete regra;
    }
}

void Processador::adicionarRegra(const int id){
    regras.push_back(new Regras(id));
}

void Processador::executar(const vector<double>& valoresSensores) const {
    bool todasAsRegrasVerdadeiras = true;

    for (Regras *regra : regras) {
        if (!regra->avaliar(valoresSensores[regra->obterId()], regra->obterOperadores(), 100, 100)) {
            todasAsRegrasVerdadeiras = false;
            break;
        }
    }
    if (todasAsRegrasVerdadeiras) {
        cout << "Comando executado: " << comando << endl;
    }
}
