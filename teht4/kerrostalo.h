#ifndef KERROSTALO_H
#define KERROSTALO_H

#include "katutaso.h"
#include "kerros.h"

class Kerrostalo {
private:
    Katutaso katutaso;
    Kerros kerros1, kerros2;

public:
    Kerrostalo();
    void maaritaAsunnot();
    double laskeKulutus(double hinta);
};

#endif // KERROSTALO_H
