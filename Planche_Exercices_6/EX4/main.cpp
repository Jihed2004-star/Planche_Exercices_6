#include "Pion.h"
#include "Roi.h"
#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<Piece*> echiquier;

    Pion pion1("blanc", 4, 2);
    Pion pion2("noir", 5, 3);
    Roi roi("blanc", 4, 4);

    echiquier.push_back(&pion1);
    echiquier.push_back(&pion2);
    echiquier.push_back(&roi);

    for (Piece* piece : echiquier) {
        piece->afficher();
    }

    pion1.deplacer(0, 1); // Déplacement du pion 1
    pion2.deplacer(0, 1); // Déplacement du pion 2
    roi.deplacer(1, 1);   // Déplacement du roi

    cout << "Apres deplacement:" << endl;

    for (Piece* piece : echiquier) {
        piece->afficher();
    }

    return 0;
}
