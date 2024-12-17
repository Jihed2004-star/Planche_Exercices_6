#ifndef PION_H
#define PION_H

#include "Piece.h"

class Pion : public Piece {
public:
    Pion(std::string couleur, int x, int y);
    void deplacer(int dx, int dy) override; // Changement ici
    void afficher() const override;
};

#endif
