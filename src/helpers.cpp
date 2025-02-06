#include "main.h"

void setIntake(int intakePower){
    intake11W.move(intakePower);
}

//lb
void setlb(int lbpower){
    lb.move(lbpower);
}

ez::PID lbPID{0.5,0,0,0,"LadyBrown"};

void lbWait(){
    while(lbPID.exit_condition(lb,true) == ez::RUNNING){
        pros::delay(ez::util::DELAY_TIME);
    }
}

void lbTask(){
    pros::delay(2000);
    while (true)
    {
        setlb(lbPID.compute(lb.get_position()));
        pros::delay(10);
    }
}

/*
lbPID.target_set(500);
liftWait();
*/