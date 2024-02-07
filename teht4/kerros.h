#ifndef KERROS_H
#define KERROS_H

#include "asunto.h"

class Kerros : public Asunto {
private:
    Asunto as1, as2, as3, as4;

public:
    Kerros();
    virtual void maaritaAsunnot();
    double laskeKulutus(double hinta);
};

#endif // KERROS_H
