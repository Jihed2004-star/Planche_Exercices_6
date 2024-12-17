#ifndef ROBOTCHASSEUR_H_H
#define ROBOTCHASSEUR_H_H
#include <string>

#include "Robot.h"

class RobotChasseur : public Robot {
private:
    int portee;

public:
    RobotChasseur(string nom, int x, int y, int portee);
    bool estDansPortee(const Robot& autreRobot) const;
    void tuerRobot(Robot& autreRobot);
};

#endif
