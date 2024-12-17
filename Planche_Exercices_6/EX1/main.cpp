#include <iostream>
#include "Vecteur3D.h"
#include "Vecteur.h"
using namespace std;

int main()
{
    Vecteur v1(2.4,3.6);
    v1.afficher();
    v1.deplacer(1.2,2.3);
    v1.afficher();
    Vecteur3D v2(1.1,2.1,3.1);
    v2.afficher();
    return 0;
}
