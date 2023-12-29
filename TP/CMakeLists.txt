cmake_minimum_required(VERSION 3.23)
project(TP)

set(CMAKE_CXX_STANDARD 20)

add_executable(TP main.cpp Terminal.h Terminal.cpp zona.h zona.cpp Sensor.h Propriedade.h Regras.h Aparelho.h Processador.h Interface.cpp Interface.h habitacao.cpp habitacao.h Aparelho.cpp Aparelhos/Aquecedor.cpp Aparelhos/Aquecedor.h Aparelhos/Aspersor.cpp Aparelhos/Aspersor.h Aparelhos/Refrigerador.cpp Aparelhos/Refrigerador.h Aparelhos/Lampada.cpp Aparelhos/Lampada.h Regras.cpp Propriedade.cpp Processador.cpp Sensor.cpp Propriedades/Temperatura.cpp Propriedades/Temperatura.h Propriedades/Fumo.cpp Propriedades/Fumo.h Propriedades/Vibracao.cpp Propriedades/Vibracao.h Propriedades/Humidade.cpp Propriedades/Humidade.h Propriedades/Radiacao.cpp Propriedades/Radiacao.h Propriedades/Luz.cpp Propriedades/Luz.h Propriedades/Som.cpp Propriedades/Som.h)

target_link_libraries(${PROJECT_NAME} "C:/PDCurses-3.9/wincon/pdcurses.a")