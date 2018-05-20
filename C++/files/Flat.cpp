#include "Flat.h"
#include <iostream>

flat::flat(double area, double valor, char arcond, char internet_tv, char lavanderia, char limpeza, char recep_24h):imovel(area, valor, arcond, internet_tv, lavanderia, limpeza, recep_24h){
    this -> area = area;
    this -> valor = valor;
    this -> arcond = arcond;
    this -> internet_tv = internet_tv;
    this -> lavanderia = lavanderia;
    this -> limpeza = limpeza;
    this -> recep_24h = recep_24h;
}

