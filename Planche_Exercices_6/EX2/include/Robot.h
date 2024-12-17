#ifndef ROBOT_H
#define ROBOT_H

#include <string>
#include <cmath>
using namespace std;
class Robot {
protected:
    std::string nom;
    int x, y;
    bool estMort;

public:
    Robot(std::string nom, int x, int y);
    void deplacer(int v, int w);
    void afficher() const;
    bool estMortStatus() const;
    void tuer();
    int getX() const;
    int getY() const;
    string getNom() const;
};

#endif
