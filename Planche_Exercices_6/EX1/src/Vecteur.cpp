#include "Vecteur.h"
#include <iostream>
using namespace std;
Vecteur::Vecteur()
{
    x=0;
    y=0;
    //ctor
}
Vecteur::Vecteur(double x,double y)
{
    this->x=x;
    this->y=y;
    //ctor
}
void Vecteur::afficher(){
    cout<<"( "<<x<<","<<y<<" )"<<endl;
}
void Vecteur::deplacer(double x,double y){
    this->x=this->x+x;
    this->y=this->y+y;
}

Vecteur::~Vecteur()
{
    //dtor
}
