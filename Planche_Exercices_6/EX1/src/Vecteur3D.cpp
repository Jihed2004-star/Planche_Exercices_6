#include "Vecteur3D.h"
#include "Vecteur.h"
#include <iostream>
using namespace std;
Vecteur3D::Vecteur3D()
{
    x=0;
    y=0;
    z=0;
}
Vecteur3D::Vecteur3D(double x,double y,double z1)
{
    this->x=x;
    this->y=y;
    z=z1;
    //ctor
}
void Vecteur3D::deplacer(double x,double y,double z1){
    this->x=this->x+x;
    this->y=this->y+y;
    z=z+z1;
}
void Vecteur3D::afficher(){
    cout<<"( "<<x<<","<<y<<","<<z<<" )"<<endl;
}
Vecteur3D::~Vecteur3D()
{
    //dtor
}
