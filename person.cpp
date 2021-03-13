//
// Created by Adam on 2021-03-11.
//

#include "person.h"

Person::Person(std::string nameVar) : name(nameVar){

}

Person::Person() : name(""){

}

Person::~Person(){

}

Person::Person(std::string nameVar, int age, double balance, float height, long seconds) : name(nameVar), age(age), balance(balance), preciseHeight(height), secondsAlive(seconds) {

}

void Person::printName() const {
    std::cout << name;
}

std::string Person::getName() {
    return name;
}

void Person::setName(std::string nm) {
    name = nm;
}

void Person::setAge(int ag){
    age = ag;
}

int Person::getAge(){
    return age;
}

void Person::setBalance(double bal){
    balance = bal;
}

double Person::getBalance(){
    return balance;
}

void Person::setPreciseHeight(float h){
    preciseHeight = h;
}

float Person::getPreciseHeight(){
    return preciseHeight;
}

void Person::setSecondsAlive(long s){
    secondsAlive = s;
}

long Person::getSecondsAlive(){
    return secondsAlive;
}

void Person::printDetails() const{
    std::cout << "Name: " << name << "\n"  << "Age: " << age << "\n"  << "Balance: "  << balance << "\n"  << "Height: "  << preciseHeight << "\n" << "Seconds Alive: " << secondsAlive << "\n" << std::endl;
}

void Person::addSubjectGrade(std::string subject, int grade){
    subjectGrade.insert({subject, grade});
}
void Person::addQualification(std::string qual){
    qualifications.push_back(qual);
}
std::vector<std::string> Person::getQualifications(){
    return qualifications;
}

void Person::printQualifications() const {
    std::cout << name << " Qualifications: \n";

    for(std::string q : qualifications){
        std::cout << q << "\n";
    }

    std::cout << std::endl;
}

void Person::printSubjectGrades() const {
    std::cout << name << "'s Subject & Grades: \n" << std::endl;
    std::cout.clear();
    std::cout.flush();

    for(auto p :subjectGrade){
        std::cout << p.first << " " << p.second << "\n";
    }
}

void Person::setJobTitle(std::string job) {
    jobTitle = job;
}