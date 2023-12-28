//
// Created by BrunoOliveira on 25/12/2023.
//

#include "Refrigerador.h"

void Refrigerador::estadoAparelho(){
    if (getLigado() == 1){
        setTempZona(getTempZona() + 1);
        setRuido(getRuido() + 20);
    }else{
        setRuido(getRuido() - 20);
    }
}
