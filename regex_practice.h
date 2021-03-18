//
// Created by Adam on 2021-03-18.
//

#include <regex>
#include <iostream>

#ifndef UNTITLED_REGEX_PRACTICE_H
#define UNTITLED_REGEX_PRACTICE_H

#endif //UNTITLED_REGEX_PRACTICE_H

//This code is from Derek Banas C++ tutorial on YouTube.
//https://www.youtube.com/watch?v=9K4N6MO_R1Y

class RegexPractice {
public:
    std::string to_match = "The ape was at the apex";
    std::smatch matches;
    std::regex reg {"(ape[^ ]?)"};

    std::string str2 = "I picked the pickle";
    std::regex reg2 {"(pick([^ ]+)?)"};

    std::string str3 = "Cat rat mat fat pat";
    std::regex reg3 {"([crmfp]at)"};
    std::regex reg4 {"([C-Fc-f]at)"};
    std::regex reg5 {"([^Cr]at)"};




    inline void PrintMatches(){
        std::cout << "String to match: " << to_match << "\n";

        std::cout << std::boolalpha;
        while(std::regex_search(to_match, matches, reg)){
            std::cout << "Is there a match: " << matches.ready() << "\n";
            std::cout << "Are there no matches: " << matches.empty() << "\n";
            std::cout << "Number of matches: " << matches.size() << "\n";
            std::cout << matches.str(1);"\n";
            to_match = matches.suffix().str();
            std::cout << "\n";
        }
    }

    inline void PrintMatches2(){
        std::cout << "String to match: " << str2 << "\n";

        std::sregex_iterator currentMatch(str2.begin(), str2.end(), reg2);
        std::sregex_iterator lastMatch;

        while(currentMatch != lastMatch){
            std::smatch match = *currentMatch;
            std::cout << match.str() << "\n";
            currentMatch++;
        }

        std::cout << "\n";
    }

    inline void PrintMatches3(){
        std::cout << "String to match: " << str3 << "\n";

        std::sregex_iterator currentMatch(str3.begin(), str3.end(), reg3);
        std::sregex_iterator lastMatch;

        while(currentMatch != lastMatch){
            std::smatch match = *currentMatch;
            std::cout << match.str() << "\n";
            currentMatch++;
        }

        std::cout << "\n";
    }

    inline void PrintMatches4(){
        std::cout << "String to match: " << str3 << "\n";

        std::sregex_iterator currentMatch(str3.begin(), str3.end(), reg4);
        std::sregex_iterator lastMatch;

        while(currentMatch != lastMatch){
            std::smatch match = *currentMatch;
            std::cout << match.str() << "\n";
            currentMatch++;
        }

        std::cout << "\n";
    }

    inline void PrintMatches5(){
        std::cout << "String to match: " << str3 << "\n";

        std::sregex_iterator currentMatch(str3.begin(), str3.end(), reg5);
        std::sregex_iterator lastMatch;

        while(currentMatch != lastMatch){
            std::smatch match = *currentMatch;
            std::cout << match.str() << "\n";
            currentMatch++;
        }

        std::cout << "\n";
    }

    inline void owlReplace(){
        std::string owlFood = std::regex_replace(str3, reg5, "Owl");
        std::cout << owlFood << "\n";
    }

    inline void USOrgs(){
        std::string matchStr = "F.B.I. I.R.S. CIA";
        std::regex reg7 {R"([^ ]\..\..\.)"};

        std::sregex_iterator currentMatch(matchStr.begin(), matchStr.end(), reg7);
        std::sregex_iterator lastMatch;

        while(currentMatch != lastMatch){
            std::smatch match = *currentMatch;
            std::cout << match.str() << "\n";
            currentMatch++;
        }
    }



};