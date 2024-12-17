#ifndef PIECE_H
#define PIECE_H

#include <string>

class Piece {
protected:
    std::string couleur;
    int x;
    int y;

public:
    Piece(std::string couleur, int x, int y);
    virtual void deplacer(int dx, int dy) = 0;
    virtual void afficher() const = 0;
};

#endif
