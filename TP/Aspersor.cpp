//
// Created by BrunoOliveira on 25/12/2023.
//

#include "Aspersor.h"

void Aspersor::estadoAparelho(){
    if (getLigado() == 1){
        if(getHumidade() < getHumidade() * 0.75){
            setHumidade(getHumidade() + (getHumidade() * 0.5));
        }
        setVibracao(getVibracao() + 100);
        setRuido(0);
    }else{
        setVibracao(getVibracao() - 100);
    }
}
