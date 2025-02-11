#include "main.h"

// motors
pros::Motor intake11W(4,pros::v5::MotorGears::blue);
pros::Motor lb(-5,pros::v5::MotorGears::red, pros::v5::MotorUnits::counts);

//pneumatics
pros::adi::Pneumatics Clamp1('A',false);
pros::adi::Pneumatics Doinker1('D',false);