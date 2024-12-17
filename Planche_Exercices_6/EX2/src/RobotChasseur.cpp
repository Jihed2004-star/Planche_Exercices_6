#include "RobotChasseur.h"
#include <iostream>

RobotChasseur::RobotChasseur(std::string nom, int x, int y, int portee) : Robot(nom, x, y), portee(portee) {}

bool RobotChasseur::estDansPortee(const Robot& autreRobot) const {
    int distance = std::sqrt(std::pow(x - autreRobot.getX(), 2) + std::pow(y - autreRobot.getY(), 2));
    return distance < portee;
}

void RobotChasseur::tuerRobot(Robot& autreRobot) {
    if (estDansPortee(autreRobot) && !autreRobot.estMortStatus()) {
        autreRobot.tuer();
        std::cout << autreRobot.getNom() << " est mort." << std::endl;
    }
}
