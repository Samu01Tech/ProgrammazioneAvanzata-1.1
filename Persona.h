#ifndef __PERSONA_H__
#define __PERSONA_H__

using namespace std;


class Persona{
    private:
        string nome, cognome;
        int eta;   
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
void stampa1(const Persona p);//const non necessario
#endif