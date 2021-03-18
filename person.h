//
// Created by Adam on 2021-03-11.
//

#ifndef UNTITLED_PERSON_H
#define UNTITLED_PERSON_H

#endif //UNTITLED_PERSON_H
#include <iostream>
#include <vector>
#include <map>

class Person {
public:
    Person();
    Person(std::string nameVar);
    Person(std::string nameVar, int age, double balance, float height, long seconds);

    ~Person();

    void printName() const;
    void printDetails() const;
    void setName(std::string nm);
    std::string getName();
    void setAge(int age);
    int getAge();
    void setBalance(double balance);
    double getBalance();
    void setPreciseHeight(float preciseHeight);
    float getPreciseHeight();
    void setSecondsAlive(long secondsAlive);
    long getSecondsAlive();
    void addSubjectGrade(std::string subject, int grade);
    void addQualification(std::string qual);
    std::vector<std::string> getQualifications();
    void printQualifications() const;
    void printSubjectGrades() const;

    virtual void setJobTitle(std::string job);

protected:
    std::string name;
    int age;
    double balance;
    float preciseHeight;
    long secondsAlive;
    std::vector<std::string> qualifications;
    std::map<std::string, int> subjectGrade;
    std::string jobTitle;
};
