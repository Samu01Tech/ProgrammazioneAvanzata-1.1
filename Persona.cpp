#include <iostream>
#include "Persona.h"
using namespace std;

//Costruttore con parametri
Persona::Persona(string n, string c, int e){
    nome=n; cognome=c; eta=e;
    cout << "Costruttore specifico" << endl;
    stampa();
}

//Costruttore a zero parametri
Persona::Persona(){
    nome = "ND";
    cognome = "ND";
    eta = 0;
    cout << "Costruttore generico" << endl;
    stampa();
}

//Costruttore di copia
Persona::Persona(const Persona &p){
    nome = p.nome; cognome = p.cognome; eta = p.eta;
    cout << "Costruzione di copia" << endl;
    stampa();
}


//Distruttore
Persona::~Persona(){
    //cout << "Distrutto: " << nome << endl;
    printf("\x1B[31mDistrutto: %s\033[0m\n", nome.c_str());
    //stampa();
}

//Stampa
void Persona::stampa()const{
    cout << "Nome: " << nome << " Cognome: " << cognome << " Eta: " << eta << endl;
}

//Stampa1
void stampa1(const Persona p){
    cout << "Nome: " << p.getNome() << " Cognome: " << p.getCognome() << " Eta: " << p.getEta() << endl;
}