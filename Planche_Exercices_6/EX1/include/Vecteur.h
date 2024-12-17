#ifndef VECTEUR_H
#define VECTEUR_H

using namespace std;
class Vecteur
{
    public:
        Vecteur();
        Vecteur(double x,double y);
        void afficher();
        void deplacer(double x ,double y);
        virtual ~Vecteur();

    protected:
        double x;
        double y;
    private:

};

#endif // VECTEUR_H
