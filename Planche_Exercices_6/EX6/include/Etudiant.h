#ifndef ETUDIANT_H
#define ETUDIANT_H

#include "Personne.h"

class Etudiant : public virtual Personne {
private:
    std::string filiere;

public:
    Etudiant(std::string nom, int age, std::string sexe, std::string filiere);
    std::string getFiliere() const;
    void setFiliere(std::string filiere);
    std::string getPersonne() const override; // Utilisation de override
};

#endif
