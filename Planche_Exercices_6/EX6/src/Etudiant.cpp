#include "Etudiant.h"

Etudiant::Etudiant(std::string nom, int age, std::string sexe, std::string filiere)
    : Personne(nom, age, sexe), filiere(filiere) {}

std::string Etudiant::getFiliere() const {
    return filiere;
}

void Etudiant::setFiliere(std::string filiere) {
    this->filiere = filiere;
}

std::string Etudiant::getPersonne() const {
    return Personne::getPersonne() + ", Filiere: " + filiere;
}
