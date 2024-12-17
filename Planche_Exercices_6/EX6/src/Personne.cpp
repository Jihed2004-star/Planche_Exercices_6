#include "Personne.h"

Personne::Personne(std::string nom, int age, std::string sexe)
    : nom(nom), age(age), sexe(sexe) {}

std::string Personne::getNom() const {
    return nom;
}

void Personne::setNom(std::string nom) {
    this->nom = nom;
}

int Personne::getAge() const {
    return age;
}

void Personne::setAge(int age) {
    this->age = age;
}

std::string Personne::getSexe() const {
    return sexe;
}

void Personne::setSexe(std::string sexe) {
    this->sexe = sexe;
}

std::string Personne::getPersonne() const {
    return "Nom: " + nom + ", Age: " + std::to_string(age) + ", Sexe: " + sexe;
}
