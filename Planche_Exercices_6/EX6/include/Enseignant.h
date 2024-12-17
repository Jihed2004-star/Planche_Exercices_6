#ifndef ENSEIGNANT_H
#define ENSEIGNANT_H

#include "Personne.h"

class Enseignant : public virtual Personne {
private:
    std::string charge;

public:
    Enseignant(std::string nom, int age, std::string sexe, std::string charge);
    std::string getCharge() const;
    void setCharge(std::string charge);
    std::string getPersonne() const override; // Utilisation de override
};

#endif
