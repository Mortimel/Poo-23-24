//
// Created by BrunoOliveira on 25/11/2023.
//

#include "Interface.h"


Interface::Interface(Terminal &t) : t(t),mapa(0, 0, 120, 45), out(120,0, 58, 45),comandos(0, 45, 178, 5) {
}

Interface::~Interface() {
}

void Interface::menuInterface(Terminal &t){
  string cmd;
  while(cmd != "exit"){
      comandos << "Espera de comandos: \n";
      out << "\nOutput:\n";
      comandos >> cmd;
      validaComandos(cmd);
      comandos << "\n";
      comandos.clear();
  }
}


void Interface::validaComandos(string comando) {
    //vai ser mudado para vetores para facilitar
    istringstream iss(comando);
    string comando_inicial;
    string parametro1;
    string parametro2;
    string parametro3;
    string parametro4;
    string parametro5;
    string temp;
    iss >> comando_inicial;


    if (comando_inicial == "prox") {
        out << "comando prox validado";
    }
    if (comando_inicial == "avanca") {
        iss >> parametro1;
        if (parametro1.empty()) {
            out << "Comando avanca invalido";
        }
        out << "Comando avanca valido com n: " + parametro1;
    }
    if (comando_inicial == "hnova") {
        iss >> parametro1;
        iss >> parametro2;
        if (parametro1.empty() || parametro2.empty()) {
            out << "comando hnova nao validado";
        }
        out << "comando hnova validado com n linhas: " + (parametro1) + " e n colunas: " + (parametro2);
    }
    if (comando_inicial == "hrem") {
        out << "Comando hrem valido";
    }
    if (comando_inicial == "znova") {
        iss >> parametro1;
        iss >> parametro2;
        if (parametro1.empty() || parametro2.empty()) {
            out << "Comando znova invalido";
        } else if (stoi(parametro1) < 2 || stoi(parametro2) < 2 || stoi(parametro1) > 4 || stoi(parametro2) > 4) {
            out << "O tamanho da zona deve ser entre 2x2 e 4x4!";
        } else
            out << "Comando znova valido na linha: " + parametro1 + " e na coluna: " + parametro2;
    }
    if (comando_inicial == "zrem") {
        iss >> parametro1;
        if (parametro1.empty()) {
            out << "Comando zrem invalido";
        }else out << "Comando zrem valido no id: " + parametro1;
    }
    if(comando_inicial == "zlista") {
        out << "Comando zlista valido";
    }
    if(comando_inicial == "zcomp") {
        iss >> parametro1;
        if (parametro1.empty()) {
            out << "Comando zcomp invalido";
        }else out << "Comando zcomp valido no id: " + parametro1;
    }
    if(comando_inicial == "zprops") {
        iss >> parametro1;
        if (parametro1.empty()) {
            out << "Comando zprops invalido";
        }else out << "Comando zprops valido no id: " + parametro1;
    }
    if(comando_inicial == "pmod") {
        iss >> parametro1;
        iss >> parametro2;
        iss >> parametro3;
        if (parametro1.empty() || parametro2.empty() || parametro3.empty()) {
            out << "Comando pmod invalido";
        }else out << "Comando pmod valido no id: " + parametro1 + " com nome: " + parametro2 + " e valor: " + parametro3;
    }
    if(comando_inicial == "cnovo") {
        iss >> parametro1;
        iss >> parametro2;
        iss >> parametro3;
        if (parametro1.empty() || parametro2.empty() || parametro3.empty()) {
            out << "Comando cnovo invalido";
        }
        if (parametro2.compare("s") == 0) {
            out << "Comando cnovo id: " + parametro1 + " sensor do tipo: " + parametro3;
        }
        if (parametro2.compare("p") == 0) {
            out << "Comando cnovo id: " + parametro1 + " processador (comando a enviar): " + parametro3;
        }
        if (parametro2.compare("a") == 0) {
            out << "Comando cnovo id: " + parametro1 + " aparelho do tipo: " + parametro3;
        } else {
            out << "Comando cnovo invalido";
        }
    }
    if(comando_inicial == "crem") {
        iss >> parametro1;
        iss >> parametro2;
        iss >> parametro3;
        if (parametro1.empty() || parametro2.empty() || parametro3.empty()) {
            out << "Comando crem invalido";
        }
        if(parametro2.compare("s") == 0){
            out << "Comando crem id: " + parametro1 + " sensor com id: " + parametro3;
        }
        if(parametro2.compare("p") == 0){
            out << "Comando crem id: " + parametro1 + " processador com id: " + parametro3;
        }
        if(parametro2.compare("a") == 0){
            out << "Comando crem id: " + parametro1 + " aparelho com id: " + parametro3;
        }
        else {
            out << "Comando crem invalido";
        }
    }
    if(comando_inicial == "rnova") {
        iss >> parametro1;
        iss >> parametro2;
        iss >> parametro3;
        iss >> parametro4;
        iss >> parametro5;
        if (parametro1.empty() || parametro2.empty() || parametro3.empty() || parametro4.empty() || parametro5.empty()) {
            out << "Comando rnova invalido";
        }
        out << "Comando rnova valido no id: " + parametro1 + " com processador de regras id: " + parametro2 + " com a regra: " + parametro3 + " com id sensor: " + parametro4 + " com argumentos: " + parametro5;
    }
    if(comando_inicial == "pmuda") {
        iss >> parametro1;
        iss >> parametro2;
        iss >> parametro3;
        if (parametro1.empty() || parametro2.empty() || parametro3.empty()) {
            out << "Comando pmuda invalido";
        }
        out << "Comando pmuda valido no id: " + parametro1 + " com processador de regras id: " + parametro2 + " e comando: " + parametro3;
    }
    if(comando_inicial == "rlista") {
        iss >> parametro1;
        iss >> parametro2;
        if (parametro1.empty() || parametro2.empty()) {
            out << "Comando rlista invalido";
        }
        out << "Comando rlista valido no id: " + parametro1 + " com processador de regras id: " + parametro2;
    }
    if(comando_inicial == "rrem") {
        iss >> parametro1;
        iss >> parametro2;
        iss >> parametro3;
        if (parametro1.empty() || parametro2.empty() || parametro3.empty()) {
            out << "Comando rrem invalido";
        }
        out << "Comando rrem valido no id: " + parametro1 + " com processador de regras id: " + parametro2 + " e regra com id: " + parametro3;
    }
    if(comando_inicial == "asoc") {
        iss >> parametro1;
        iss >> parametro2;
        iss >> parametro3;
        if (parametro1.empty() || parametro2.empty() || parametro3.empty()) {
            out << "Comando asoc invalido";
        }
        out << "Comando asoc valido no id: " + parametro1 + " com processador de regras id: " + parametro2 + " e aparelho com id: " + parametro3;
    }
    if(comando_inicial == "ades") {
        iss >> parametro1;
        iss >> parametro2;
        iss >> parametro3;
        if (parametro1.empty() || parametro2.empty() || parametro3.empty()) {
            out << "Comando ades invalido";
        }
        out << "Comando ades valido no id: " + parametro1 + " com processador de regras id: " + parametro2 + " e aparelho com id: " + parametro3;
    }
    if(comando_inicial == "acom") {
        iss >> parametro1;
        iss >> parametro2;
        iss >> parametro3;
        if (parametro1.empty() || parametro2.empty() || parametro3.empty()) {
            out << "Comando acom invalido";
        }
        out << "Comando acom valido no id: " + parametro1 + " com aparelho id: " + parametro2 + " e comando: " + parametro3;
    }
    if(comando_inicial == "psalva") {
        iss >> parametro1;
        iss >> parametro2;
        iss >> parametro3;
        if (parametro1.empty() || parametro2.empty() || parametro3.empty()) {
            out << "Comando psalva invalido";
        }
        out << "Comando psalva valido no id: " + parametro1 + " com processador de regras id: " + parametro2 + " e nome: " + parametro3;
    }
    if(comando_inicial == "prepoe") {
        iss >> parametro1;
        if (parametro1.empty()) {
            out << "Comando prepoe invalido";
        }
        out << "Comando prepoe valido com nome: " + parametro1 + "\n";
    }
    if(comando_inicial == "prem") {
        iss >> parametro1;
        if (parametro1.empty()) {
            out << "Comando prem invalido \n";
        }
        out << "Comando prem valido com nome: " + parametro1 + "\n";
    }
    if(comando_inicial == "plista") {
        out << "Comando plista valido \n";
    }
    if(comando_inicial == "exec") {
        iss >> parametro1;
        if (parametro1.empty()) {
            out << "\nComando exec invalido\n";
        }else {
            leFicheiro(parametro1);
            out << "\nComando exec valido com nome de ficheiro: " + parametro1 + "\n";
        }
    }
    if(comando_inicial == "clear"){
        out.clear();
    }
}

bool Interface::leFicheiro(string fileName) {
    string texto;
    ifstream file;

    file.open(fileName);

    if (file){
        while(getline(file, texto)){
            validaComandos(texto);
        }
        file.ignore('\n');
    }
    else {
        out << "\nO ficheiro nao existe!\n";
        return false;
    }
    file.close();
    return true;

}






