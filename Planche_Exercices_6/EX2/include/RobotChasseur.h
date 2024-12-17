#ifndef ROBOTCHASSEUR_H
#define ROBOTCHASSEUR_H

#include "Robot.h"

class RobotChasseur : public Robot {
private:
    int portee;

public:
    RobotChasseur(std::string nom, int x, int y, int portee);
    bool estDansPortee(const Robot& autreRobot) const;
    void tuerRobot(Robot& autreRobot);
};

#endif
