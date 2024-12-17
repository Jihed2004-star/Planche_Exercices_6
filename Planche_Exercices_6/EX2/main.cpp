#include "RobotChasseur.h"
#include <vector>

int main() {
    RobotChasseur robotChass1("Optimus", 2, 3, 25);
    robotChass1.deplacer(35, 22);
    robotChass1.afficher();

    std::vector<Robot> robots;
    robots.emplace_back("Megatron", 10, 10);
    robots.emplace_back("Starscream", 30, 20);
    robots.emplace_back("Soundwave", 5, 5);
    robots.emplace_back("Bumblebee", 40, 30);
    robots.emplace_back("Ironhide", 15, 25);

    for (Robot& robot : robots) {
        robotChass1.tuerRobot(robot);
    }

    return 0;
}
