#include "Pion.h"
#include <iostream>

Pion::Pion(std::string couleur, int x, int y) : Piece(couleur, x, y) {}

void Pion::deplacer(int dx, int dy) {
    if (dx == 0 && dy == 1) {
        y += dy;
        if (y > 8) {
            std::cout << "Le pion " << couleur << " a dépassé la limite de l'échiquier." << std::endl;
        }
    }
}

void Pion::afficher() const {
    std::cout << "Pion " << couleur << " à la position (" << x << ", " << y << ")" << std::endl;
}
