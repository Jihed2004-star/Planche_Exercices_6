#ifndef VECTEUR3D_H
#define VECTEUR3D_H
#include "Vecteur.h"

class Vecteur3D : public Vecteur
{
    public:
        Vecteur3D();
        Vecteur3D(double x,double y,double z);
        void afficher();
        void deplacer(double x ,double y,double z);
        virtual ~Vecteur3D();

    protected:

    private:
        double z;
};

#endif // VECTEUR3D_H
