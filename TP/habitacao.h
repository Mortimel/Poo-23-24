//
// Created by BrunoOliveira on 26/11/2023.
//

#ifndef TP_HABITACAO_H
#define TP_HABITACAO_H


#include "zona.h"

class Habitacao {
public:
    Habitacao(int numLinhas, int numColunas);
    ~Habitacao();

    void adicionarZona(Zona zona);
    void removerZona(string idZona);

    void listarZonas() const;

private:
    int numLinhas;
    int numColunas;

    bool posicaoValida(int linha, int coluna) const;
};

#endif //TP_HABITACAO_H