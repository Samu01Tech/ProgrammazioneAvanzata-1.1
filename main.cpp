#include <iostream>
#include "Persona.h"
using namespace std;

int main() {
    Persona p1("Mario", "Rossi", 18);

    Persona p2("Gianna", "Verdi");

    Persona p3;

    stampa1(p1);
    stampa2(&p2);
    stampa3(p3);
    
    return 0;
}
