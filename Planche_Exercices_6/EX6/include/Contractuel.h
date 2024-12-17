#ifndef CONTRACTUEL_H
#define CONTRACTUEL_H

#include "Enseignant.h"
#include "Etudiant.h"

class Contractuel : public Enseignant, public Etudiant {
public:
    Contractuel(std::string nom, int age, std::string sexe, std::string charge, std::string filiere);
    std::string getPersonne() const override; // Utilisation de override
};

#endif
