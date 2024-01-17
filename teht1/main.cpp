
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));

    int luku = rand() % 20 + 1;                 //Alusta satunnaisgeneraattori
    int arvaus;

    std::cout << "Arvaa luku 1-20: ";           //Arvotaan luku 1-20 väliltä

    while (true) {
        std::cin >> arvaus;                     //Kysytään pelaajalta arvaus

        if (arvaus < luku) {
            std::cout << "Luku on suurempi. Kokeile uudelleen: ";
        } else if (arvaus > luku){
            std::cout << "Luku on pienempi. Kokeile uudelleen: ";
        } else {
            std::cout << "Oikea vastaus! Voitit pelin!                                                                                            ";
            break;
        }
    }

    return 0;
}

/*
#include <iostream>
#include <cstdlib>
#include <ctime>

int game(int maxnum) {
    srand(time(0)); //Alusta satunnaisgeneraattori

    int haettava_luku = rand() % maxnum + 1;    //Arvotaan luku 1-maxnum väliltä
    int arvaus;
    int arvausten_maara = 0;

    std::cout << "Arvaa luku 1-" << maxnum << ": ";

    while (true) {
        std::cin >> arvaus;                     //Kysytään pelaajan arvaus
        arvausten_maara++;

        if (arvaus < haettava_luku) {
            std::cout << "Luku on suurempi. Kokeile uudelleen: ";
        } else if (arvaus > haettava_luku) {
            std::cout << "Luku on pienempi. Kokeile uudelleen: ";
        }else {
            std::cout << "Oikea Vastaus! Voitit pelin!";
            break;
        }
    }

    return arvausten_maara;
}

int main() {
    srand(time(0));                             //Alusta toinen satunnaisgeneraattori
    int maxnum = rand() % 50 + 1;               //Arvotaan yläraja väliltä 1-50
    int arvausten_maara = game(maxnum);
    std::cout << "\nArvauksia: " << arvausten_maara << std::endl;

    return 0;
}
*/
