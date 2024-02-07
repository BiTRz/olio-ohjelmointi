#include "kerrostalo.h"
#include <iostream>

Kerrostalo::Kerrostalo() : katutaso(), kerros1(), kerros2() {
    std::cout << "kerrostalo luotu\n";
}

void Kerrostalo::maaritaAsunnot() {
    std::cout << "Maaritellaan koko kerrostaloon kaikki asunnot\n";
    katutaso.maaritaAsunnot();
    kerros1.maaritaAsunnot();
    kerros2.maaritaAsunnot();
}

double Kerrostalo::laskeKulutus(double hinta) {
    double kulutus =
    katutaso.laskeKulutus(hinta) +
    kerros1.laskeKulutus(hinta) +
    kerros2.laskeKulutus(hinta);
    std::cout << "kerrostalon kulutus, kun hinta=" << hinta << " on " << kulutus << "\n";
        return kulutus;
}
