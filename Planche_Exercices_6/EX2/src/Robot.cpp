#include "Robot.h"
#include <iostream>

Robot::Robot(std::string nom, int x, int y) : nom(nom), x(x), y(y), estMort(false) {}

void Robot::deplacer(int v, int w) {
    x = v;
    y = w;
}

void Robot::afficher() const {
    std::cout << "Nom: " << nom << ", Position: (" << x << ", " << y << "), Est Mort: " << (estMort ? "Oui" : "Non") << std::endl;
}

bool Robot::estMortStatus() const {
    return estMort;
}

void Robot::tuer() {
    estMort = true;
}

int Robot::getX() const {
    return x;
}

int Robot::getY() const {
    return y;
}
string Robot::getNom() const {
    return nom;
}
