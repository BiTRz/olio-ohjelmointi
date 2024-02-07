#ifndef ASUNTO_H
#define ASUNTO_H

class Asunto {
private:
    int asukasMaara;
    int neliot;

public:
    Asunto();
    void maarita(int a, int n);
    double laskeKulutus(double hinta);
};

#endif // ASUNTO_H
