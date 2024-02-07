#ifndef KATUTASO_H
#define KATUTASO_H

#include "kerros.h"

class Katutaso : public Kerros {
private:
    Asunto as1, as2;

public:
    Katutaso();
    void maaritaAsunnot();
    double laskeKulutus(double hinta);
};

#endif // KATUTASO_H
