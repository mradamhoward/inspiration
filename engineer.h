//
// Created by Adam on 2021-03-11.
//

#ifndef UNTITLED_ENGINEER_H
#define UNTITLED_ENGINEER_H

#endif //UNTITLED_ENGINEER_H

#include "person.h"

class Engineer : public Person {
public:
    Engineer();
    Engineer(std::string nameVar, int age, double balance, float height, long seconds);

    enum EngineerType {
        Mechanical,
        Software,
        Electronic,
        Electrical,
        Aerospace,
        Automotive,
        Robotic,
    };

    void printJobTitle() const;
    void setJobTitle(std::string job) override;
    void setYearsExperience(int a) const;
    int getYearsExperience();

    static inline double calculateArea(int width, int height){
        return width * height;
    }

    inline bool checkIsQualified(){
        return isQualified;
    }

    inline void setEngType(std::string type){
        if(type == "mech"){
            engType = EngineerType::Mechanical;
        } else if (type == "soft"){
            engType = EngineerType::Software;
        } else if (type == "electronic"){
            engType = EngineerType::Electronic;
        } else if (type == "electrical"){
            engType = EngineerType::Electrical;
        } else if (type == "aero"){
            engType = EngineerType::Aerospace;
        } else if (type == "auto"){
            engType = EngineerType::Automotive;
        } else if (type == "robo"){
            engType = EngineerType::Robotic;
        }
    }

    inline void setAnotherPerson(Person* per){
        anotherPersonPtr = per;
    }

private:
    mutable int yearsExperience;
    const bool isQualified = true;
    EngineerType engType;
    Person* anotherPersonPtr;
};

