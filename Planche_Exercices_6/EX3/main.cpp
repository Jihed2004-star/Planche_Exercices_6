#include "Voiture.h"
#include "Camion.h"
#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<Vehicule*> parcAuto;

    Voiture voiture1(2020, 20000, 5);
    Camion camion1(2019, 30000, 1500);

    parcAuto.push_back(&voiture1);
    parcAuto.push_back(&camion1);

    for (Vehicule* vehicule : parcAuto) {
        vehicule->afficher();
        vehicule->accelerer();
    }

    return 0;
}
