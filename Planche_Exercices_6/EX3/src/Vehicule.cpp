#include "Vehicule.h"
#include <iostream>


using namespace std;
int Vehicule::numeroSerie = 1;

Vehicule::Vehicule(int annee, double prix) : annee(annee), prix(prix) {
    numeroVehicule = numeroSerie;
    numeroSerie++;
    if (numeroSerie > 10000) {
        numeroSerie = 1;
    }
}

void Vehicule::afficher() const {
    cout << numeroSerie << " TUN " << numeroVehicule << " " << annee << " " << prix << endl;
}
