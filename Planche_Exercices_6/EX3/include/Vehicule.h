#ifndef VEHICULE_H
#define VEHICULE_H

#include <string>

class Vehicule {
protected:
    static int numeroSerie;
    int numeroVehicule;
    int annee;
    double prix;

public:
    Vehicule(int annee, double prix);
    virtual void accelerer() = 0;
    void afficher() const;
};

#endif
