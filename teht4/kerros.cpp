#include "kerros.h"
#include <iostream>

Kerros::Kerros() : Asunto(){
    std::cout << "Kerros luotu\n";
}


void Kerros::maaritaAsunnot() {
    std::cout << "Maaritetaan 4 kpl kerroksen asuntoja\n";
    as1.maarita(2, 100);
    as2.maarita(2, 100);
    as3.maarita(2, 100);
    as4.maarita(2, 100);
}

double Kerros::laskeKulutus(double hinta)
{
    double kulutus =
    as1.laskeKulutus(hinta) +
    as2.laskeKulutus(hinta) +
    as3.laskeKulutus(hinta) +
    as4.laskeKulutus(hinta);
    std::cout << "Kerroksen kulutus, kun hintaa= " << hinta << " on " << kulutus << "\n";
    return kulutus;
}
