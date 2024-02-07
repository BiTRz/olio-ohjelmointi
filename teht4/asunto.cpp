#include "Asunto.h"
#include <iostream>

Asunto::Asunto() {
    std::cout << "Asunto luotu\n";
}

void Asunto::maarita(int a, int n) {
    asukasMaara = a;
    neliot = n;
    std::cout << "Asunto maaritetty asukkaita= " << asukasMaara << " nelioita= " << neliot << "\n";
}

double Asunto::laskeKulutus(double hinta) {
    double kulutus = asukasMaara * neliot * hinta;
    std::cout << "asunnon kulutus, kun hinta= " << hinta << " on " << kulutus << "\n";
    return kulutus;
}
