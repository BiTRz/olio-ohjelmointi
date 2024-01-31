#include <iostream>
#include <string>
/*
class Chef {
public:
    Chef(std::string name) : name(name) {
        std::cout << "Chef " << name << " konstruktori" << std::endl;
    }

    ~Chef() {
        std::cout << "Chef " << name << " destruktori" << std::endl;
    }

    void makeSalad() {
        std::cout << "Chef " << name << " makes salad" << std::endl;
    }

    void makeSoup() {
        std::cout <<"Chef "<< name <<" makes soup"<<std::endl;
    }

private:
    std::string name;
};

class ItalianChef : public Chef {
public:
    ItalianChef(std::string name) : Chef(name) {}

    void makePasta() {

        };

};

int main() {
    Chef gordon("Gordon Ramsay");
    gordon.makeSalad();
    gordon.makeSoup();

    Chef anthony("Anthony Bourdain");
    anthony.makeSalad();
    anthony.makeSoup();

    return 0;
}
*/

/*class Chef {
public:
    Chef(std::string name) : name(name) {
        std::cout << "Chef " << name << " konstruktori" << std::endl;
    }

    ~Chef() {
        std::cout << "Chef " << name << " destruktori" << std::endl;
    }

    void makeSalad() {
        std::cout << "Chef " << name << " makes salad" << std::endl;
    }

    void makeSoup() {
        std::cout <<"Chef "<< name <<" makes soup"<<std::endl;
    }

protected:
    std::string name;
};

class ItalianChef : public Chef {


public:
    ItalianChef(std::string name) : Chef(name) {
        std::cout << "Chef " << name << " konstruktori" << std::endl;
    }

    ~ItalianChef() {
        std::cout << "Chef " << name << " destruktori" << std::endl;
    }

    std::string getName() {
        return name;
    }

    void makePasta() {
        std::cout << "Chef " << name << " makes pasta" << std::endl;
    }
};

int main() {
    Chef jyrki("Jyrki");
    ItalianChef mario("Mario");

    jyrki.makeSalad();
    mario.makePasta();
    jyrki.makeSoup();

    return 0;
}
*/
class Chef {
public:
    Chef(std::string name) : name(name) {
        std::cout << "Chef " << name << " konstruktori" << std::endl;
    }

    ~Chef() {
        std::cout << "Chef " << name << " destruktori" << std::endl;
    }

    void makeSalad() {

    }

    void makeSoup() {
    }

protected:
    std::string name;
};
class ItalianChef : public Chef {
private:
    int vesi;
    int jauhot;

public:
    ItalianChef(std::string name, int secretVesi, int secretJauhot)
        : Chef(name), vesi(secretVesi), jauhot(secretJauhot) {
        std::cout << "Chef " << name << " konstruktori" << std::endl;
        std::cout << "Chef " << name << " uses jauhot = " << jauhot << std::endl;
        std::cout << "Chef " << name << " uses vesi = " << vesi << std::endl;
    }

    ~ItalianChef() {
        std::cout << "Chef " << name << " destruktori" << std::endl;
    }

    void makePasta() {
        std::cout << "Chef " << name << " makes pasta with special recipe" << std::endl;
    }
};

int main() {

    ItalianChef mario("Mario", 250, 100);

    mario.makePasta();

    return 0;
}
