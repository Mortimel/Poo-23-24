//
// Created by BrunoOliveira on 25/12/2023.
//

#include "Lampada.h"

void Lampada::estadoAparelho(){
    if (getLigado() == 1){
        setLuminosidade(getLuminosidade() + 900);
    }else{
        setLuminosidade(getLuminosidade() - 900);
    }
}
