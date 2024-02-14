#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    eka = new Katutaso();
    toka = new Kerros();
    kolmas = new Kerros();
    std::cout << "Kerrostalo luotu" << std::endl;
    std::cout << "Maaritellaan koko kerrostalon kaikki asunnot" << std::endl;
    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();
}

Kerrostalo::~Kerrostalo()
{
    delete eka;
    delete toka;
    delete kolmas;
}

double Kerrostalo::laskeKulutus(double hinta)
{
    double katutasonKulutus = eka->laskeKulutus(hinta);
    double kerrostenKulutus = toka->laskeKulutus(hinta) + kolmas->laskeKulutus(hinta);
    return katutasonKulutus + kerrostenKulutus;
}
