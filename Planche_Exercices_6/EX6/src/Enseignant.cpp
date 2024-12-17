#include "Enseignant.h"

Enseignant::Enseignant(std::string nom, int age, std::string sexe, std::string charge)
    : Personne(nom, age, sexe), charge(charge) {}

std::string Enseignant::getCharge() const {
    return charge;
}

void Enseignant::setCharge(std::string charge) {
    this->charge = charge;
}

std::string Enseignant::getPersonne() const {
    return Personne::getPersonne() + ", Charge: " + charge;
}
