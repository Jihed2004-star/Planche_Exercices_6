#ifndef PERSONNE_H
#define PERSONNE_H

#include <string>

class Personne {
protected:
    std::string nom;
    int age;
    std::string sexe;

public:
    Personne(std::string nom, int age, std::string sexe);
    std::string getNom() const;
    void setNom(std::string nom);
    int getAge() const;
    void setAge(int age);
    std::string getSexe() const;
    void setSexe(std::string sexe);
    virtual std::string getPersonne() const; // Méthode virtuelle pour permettre le polymorphisme
};

#endif
