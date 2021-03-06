#include <iostream>
#include <memory>
#include <regex>
#include "engineer.h"
#include "regex_practice.h"

#define GRADE 90


int main() {
    //Initialization of object data
    Engineer e("Adam Howard", 25, 35.32, 170.4, 543003002);
    e.setJobTitle("Software Engineer");
    e.printJobTitle();
    e.setYearsExperience(10);
    std::cout << e.getYearsExperience() << "\n";
    e.printDetails();
    e.addQualification("JC");
    e.addQualification("LC");
    e.addQualification("BSC");
    e.printQualifications();
    e.addSubjectGrade("Problem Solving & Programming", GRADE);
    e.addSubjectGrade("Databases", 70);
    e.addSubjectGrade("Distributed Systems Programming", 67);
    e.printSubjectGrades();

    std::cout << "Area: " << e.calculateArea(2,3) << "\n";

    //Allocate engineer object on heap and perform basic computation, using a smart pointer
    std::unique_ptr<Engineer> engineerHeap(new Engineer("Mike Dynamic", 37, 322, 3232, 1000000000));
    engineerHeap->printName();
    engineerHeap->printDetails();
    engineerHeap->setJobTitle("C++ Engineer");
    engineerHeap->addQualification("LC");
    engineerHeap->addQualification("BSc");
    engineerHeap->addQualification("MSc");
    engineerHeap->addQualification("PhD");
    engineerHeap->printQualifications();
    engineerHeap->addSubjectGrade("Maths", 75);
    engineerHeap->printSubjectGrades();

    //Basic regex example
    RegexPractice rp;
    rp.PrintMatches();
    rp.PrintMatches2();
    rp.PrintMatches3();
    rp.PrintMatches4();
    rp.PrintMatches5();
    rp.owlReplace();
    rp.USOrgs();


    //Enter menu loop
    while(true){
        std::cout << "Enter the option: \n";
        std::cout << "1: Set name: \n";
        std::cout << "2: Print name: \n";
        std::cout << "3: Set age: \n";
        std::cout << "4: Print age: \n";
        std::cout << "5: Set balance: \n";
        std::cout << "6: Print balance: \n";
        std::cout << "7: Set height: \n";
        std::cout << "8: Print height: \n";
        std::cout << "9: Set seconds alive: \n";
        std::cout << "10: Print seconds alive: \n";
        std::cout << "11: Add Qualifications: \n";
        std::cout << "12: Print Qualifications: \n";
        std::cout << "13: Add Subject Grades: \n";
        std::cout << "14: Print Subject Grades: \n";

        int choice = 0;
        std::cin >> choice;

        switch(choice) {
            case 1: {
                std::cin.ignore();
                std::cout << "Enter name: ";
                std::string name;
                std::getline(std::cin, name);
                e.setName(name);
                break;
            }
            case 2: {
                std::cout << e.getName() << "\n";
                break;
            }
            case 3: {
                std::cout << "Enter age: ";
                int age;
                std::cin >> age;
                e.setAge(age);
                break;
            }
            case 4: {
                std::cout << e.getAge() << " years old\n";
                break;
            }
            case 5: {
                std::cout << "Enter balance: ";
                double bal;
                std::cin >> bal;
                e.setBalance(bal);
                break;
            }
            case 6: {
                std::cout << e.getBalance() << " euro\n";
                break;
            }
            case 7: {
                std::cout << "Enter height: ";
                float h;
                std::cin >> h;
                e.setPreciseHeight(h);
                break;
            }
            case 8: {
                std::cout << e.getPreciseHeight() << "cm \n";
                break;
            }
            case 9: {
                std::cout << "Enter seconds alive: ";
                long sec;
                std::cin >> sec;
                e.setSecondsAlive(sec);
                break;
            }
            case 10: {
                std::cout << e.getSecondsAlive() << "seconds alive\n";
                break;
            }
            case 11: {
                std::cout << "Add qualifications\n";
                std::string input;
                while (true) {
                    std::cout << "Enter the qualification to add: (type exit to stop)\n";
                    std::getline(std::cin, input);
                    if (input != "exit") {
                        e.addQualification(input);
                    } else {
                        break;
                    }
                };
                break;
            }
            case 12: {
                e.printQualifications();
                break;
            }
            case 13: {
                e.printQualifications();
                break;
            }
            case 14: {
                e.printSubjectGrades();
                break;
            }
        }
    }





    return 0;
}
