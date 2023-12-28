cmake_minimum_required(VERSION 3.23)
project(TP)

set(CMAKE_CXX_STANDARD 20)

add_executable(TP main.cpp Terminal.h Terminal.cpp zona.h zona.cpp Sensor.h Propriedade.h Regras.h Aparelho.h Processador.h Interface.cpp Interface.h habitacao.cpp habitacao.h Aparelho.cpp Aquecedor.cpp Aquecedor.h Aspersor.cpp Aspersor.h Refrigerador.cpp Refrigerador.h Lampada.cpp Lampada.h Regras.cpp Propriedade.cpp)

target_link_libraries(${PROJECT_NAME} "C:/PDCurses-3.9/wincon/pdcurses.a")