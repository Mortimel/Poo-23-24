//
// Created by BrunoOliveira on 25/12/2023.
//

#include "Aquecedor.h"

void Aquecedor::estadoAparelho() {
    if (getLigado() == 1) {
        if (getTempZona() < 50) {
            for (int i = 0; i < 4; ++i) {
                setTempZona(getTempZona() + 1);
            }
            setRuido(getRuido() + 5);
        } else {
            setRuido(getRuido() - 5);
        }
    }
}
