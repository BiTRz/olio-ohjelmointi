#include "katutaso.h"
#include <iostream>

Katutaso::Katutaso() : Kerros(){
    std::cout << "Katutaso luotu\n";
}

void Katutaso::maaritaAsunnot(){
    std::cout << "Maaritetaan 2 kpl katutason asuntoja\n";
    as1.maarita(2, 100);
    as2.maarita(2, 100);
}

double Katutaso::laskeKulutus(double hinta) {
    double kulutus =
    as1.laskeKulutus(hinta) +
    as2.laskeKulutus(hinta);
    std::cout << "Katutason kulutus, kun hinta = " << hinta << " on " << kulutus << "\n";
    return kulutus;
}
