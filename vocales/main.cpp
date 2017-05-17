/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Joshy
 *
 * Created on 14 de mayo de 2017, 11:22 PM
 */

#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;
int vocales(char*);

int main() {
    char cadena[50];
    cout<<"Ingrese la cadena: "; cin.getline(cadena,50);
    cout<<"Numero de vocales: "<<vocales(cadena)<<endl;
}

int vocales(char*i){
    int contador = 0;
    while(*i){
        switch(tolower(*i)){
            case 'a': case 'e': case 'i': case 'o': case 'u':
            contador++;
        }
        i++;
    }
    return contador;
}

