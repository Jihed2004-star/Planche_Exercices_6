#include "Roi.h"
#include <iostream>

Roi::Roi(std::string couleur, int x, int y) : Piece(couleur, x, y) {}

void Roi::deplacer(int dx, int dy) {
    if (abs(dx) <= 1 && abs(dy) <= 1) {
        x += dx;
        y += dy;
        if (x < 1 || x > 8 || y < 1 || y > 8) {
            std::cout << "Le roi " << couleur << " a dépassé la limite de l'échiquier." << std::endl;
            x -= dx;
            y -= dy;
        }
    }
}

void Roi::afficher() const {
    std::cout << "Roi " << couleur << " à la position (" << x << ", " << y << ")" << std::endl;
}
