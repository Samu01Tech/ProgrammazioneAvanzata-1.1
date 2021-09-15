#ifndef __PERSONA_H__
#define __PERSONA_H__

using namespace std;


class Persona{
    private:
        string nome, cognome;
        int eta;   
        int* dati;
    public:
        Persona(string n, string c, int e=0);
        Persona();
        //Costruttore di copia
        Persona(const Persona &p);
        ~Persona();
        string getNome() const {return nome;};
        string getCognome() const {return cognome;};
        int getEta() const {return eta;};
        void stampa() const;
};
void stampa1(Persona p);//per copia - const non necessario
void stampa2(const Persona* pp);//per indirizzo
void stampa3(const Persona &p);//per riferimento
#endif