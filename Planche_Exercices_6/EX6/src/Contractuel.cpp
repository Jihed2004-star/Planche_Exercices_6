#include "Contractuel.h"

Contractuel::Contractuel(std::string nom, int age, std::string sexe, std::string charge, std::string filiere)
    : Personne(nom, age, sexe), Enseignant(nom, age, sexe, charge), Etudiant(nom, age, sexe, filiere) {}

std::string Contractuel::getPersonne() const {
    return Enseignant::getPersonne() + ", Filiere: " + Etudiant::getFiliere();
}
