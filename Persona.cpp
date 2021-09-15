#include <iostream>
#include "Persona.h"
using namespace std;

//Costruttore con parametri
Persona::Persona(string n, string c, int e){
    nome=n; cognome=c; eta=e; dati = new int[5];
    dati[0] = 1;
    dati[1] = 2;
    dati[2] = 3;
    dati[3] = 4;
    dati[4] = 5;
    //cout << "Costruttore specifico" << endl;
    stampa();
}

//Costruttore a zero parametri
Persona::Persona(){
    nome = "ND";
    cognome = "ND";
    eta = 0;
    dati = NULL;
    //cout << "Costruttore generico" << endl;
    stampa();
}

//Costruttore di copia
Persona::Persona(const Persona &p){
    //copia superficiale
    nome = p.nome; cognome = p.cognome; eta = p.eta;
    //copia profonda
    if(p.dati == NULL) dati = NULL;
    else {
        dati = new int[5];
        for(int i=0; i<5; i++) dati[i] = p.dati[i];
    }
    cout << "Costruzione di copia" << endl;
    stampa();
}


//Distruttore
Persona::~Persona(){
    //cout << "Distrutto: " << nome << endl;
    printf("\x1B[31mDistrutto: %s\033[0m\n", nome.c_str());
    //stampa();
    if(dati != NULL) delete [] dati;
}

//Stampa
void Persona::stampa()const{
    cout << "Nome: " << nome << " Cognome: " << cognome << " Eta: " << eta << endl;
    if(dati != NULL){
        for (int i=0; i<5; i++){
            cout << "[" << dati[i] << "]";
        }
    }
    cout << endl;
}

//Stampa1
void stampa1(const Persona p){
    //cout << "Nome: " << p.getNome() << " Cognome: " << p.getCognome() << " Eta: " << p.getEta() << endl;
    p.stampa(); //migliore
}
//Stampa2
void stampa2(const Persona* pp){
   pp->stampa();
}
//Stampa3
void stampa3(const Persona &p){
    p.stampa();
}