#include "Voiture.h"
#include <iostream>
using namespace std;
Voiture::Voiture(int annee, double prix, int nombrePlaces) : Vehicule(annee, prix), nombrePlaces(nombrePlaces) {}

void Voiture::accelerer() {
    cout << "Je peux atteindre 200km/h" << endl;
}
