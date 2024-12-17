#include "Enseignant.h"
#include "Etudiant.h"
#include "Contractuel.h"
#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<Personne*> personnes;

    // Création des objets
    Enseignant enseignant("Sonia", 35, "F", "math");
    Etudiant etudiant("Wasim", 20, "M", "info");
    Contractuel contractuel("Fawzi", 30, "M", "phy", "Chimie");

    // Ajout des objets au vecteur
    personnes.push_back(&enseignant);
    personnes.push_back(&etudiant);
    personnes.push_back(&contractuel);

    // Affichage des informations
    for (Personne* personne : personnes) {
        cout << personne->getPersonne() << endl;
    }

    return 0;
}
