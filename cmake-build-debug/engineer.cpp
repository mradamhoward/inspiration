//
// Created by Adam on 2021-03-11.
//

#include "engineer.h"

Engineer::Engineer() : yearsExperience(0){}

Engineer::Engineer(std::string nameVar, int age, double balance, float height, long seconds) : yearsExperience(0), Person(nameVar, age, balance, height, seconds) {

};

void Engineer::setJobTitle(std::string job) {
    Person::jobTitle = job;
}

void Engineer::printJobTitle() const {
    std::cout << Person::jobTitle << "\n" << std::endl;
}

int Engineer::getYearsExperience(){
    return yearsExperience;
}

void Engineer::setYearsExperience(int a) const{
    yearsExperience = a;
}