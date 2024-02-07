#include <iostream>
#include "Asunto.h"
#include "katutaso.h"
#include "kerros.h"
#include "kerrostalo.h"

int main() {
    Katutaso katutaso;
    Asunto asunto;
    Kerros kerros;
    Kerrostalo kerrostalo;
    katutaso.maaritaAsunnot();
    asunto.maarita(2, 100);    // Asukkaita on aina 2 ja asunnon neliömäärä on aina 100
    kerros.maaritaAsunnot();
    kerrostalo.maaritaAsunnot();
    asunto.laskeKulutus(1); // Testaa kulutuksen laskemista
    kerros.laskeKulutus(1);
    kerrostalo.laskeKulutus(1);
    return 0;
}
/*
class Asunto {
private:
    int asukasMaara;
    int neliot;

public:
    void maarita(int a, int n) {
        asukasMaara = a;
        neliot = n;
    }

    double laskeKulutus(double param) {
        return asukasMaara * neliot * param; // Esimerkkilaskenta, voit muokata sitä todellisen kaavan mukaan
    }
};

class Katutaso : public Asunto {
private:
    Asunto as1, as2;

public:
    void maaritaAsunnot() {
        as1.maarita(3, 50); // Esimerkkiarvot
        as2.maarita(4, 60); // Esimerkkiarvot
    }

    double laskeKulutus(double param) {
        return as1.laskeKulutus(param) + as2.laskeKulutus(param);
    }
};

class Kerros : public Asunto {
private:
    Asunto as1, as2, as3, as4;

public:
    void maaritaAsunnot() {
        // Määritetään esimerkkiarvot asunnoille
        as1.maarita(2, 40);
        as2.maarita(3, 50);
        as3.maarita(4, 60);
        as4.maarita(5, 70);
    }

    double laskeKulutus(double param) {
        return (as1.laskeKulutus(param) +
                (as2.laskeKulutus(param)) +
                (as3.laskeKulutus(param)) +
                (as4.laskeKulutus(param)));
    }
};

class Kerrostalo{
private:
    Katutaso eka;
    Kerros toka,kolmas;

public:
    double laskeKulutus(double param){
        return eka.laskeKulutus(param)+toka.laskeKulutus(param)+kolmas.laskeKulutus(param);
    }
};
*/
