#include "Pion.h"
#include <iostream>

Pion::Pion(std::string couleur, int x, int y) : Piece(couleur, x, y) {}

void Pion::deplacer(int dx, int dy) {
    if (dx == 0 && dy == 1) {
        y += dy;
        if (y > 8) {
            std::cout << "Le pion " << couleur << " a d�pass� la limite de l'�chiquier." << std::endl;
        }
    }
}

void Pion::afficher() const {
    std::cout << "Pion " << couleur << " � la position (" << x << ", " << y << ")" << std::endl;
}
