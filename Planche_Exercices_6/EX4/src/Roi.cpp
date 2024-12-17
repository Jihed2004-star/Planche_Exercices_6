#include "Roi.h"
#include <iostream>

Roi::Roi(std::string couleur, int x, int y) : Piece(couleur, x, y) {}

void Roi::deplacer(int dx, int dy) {
    if (abs(dx) <= 1 && abs(dy) <= 1) {
        x += dx;
        y += dy;
        if (x < 1 || x > 8 || y < 1 || y > 8) {
            std::cout << "Le roi " << couleur << " a d�pass� la limite de l'�chiquier." << std::endl;
            x -= dx;
            y -= dy;
        }
    }
}

void Roi::afficher() const {
    std::cout << "Roi " << couleur << " � la position (" << x << ", " << y << ")" << std::endl;
}
