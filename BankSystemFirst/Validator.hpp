//
//  Validator.hpp
//  BankSystemFirst
//
//  Created by Mai Mahmoud on 13.02.25.
//
#ifndef Validator_hpp
#define Validator_hpp
#include <stdio.h>
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Validator{

public:
    static bool isValidName(string name){
        for(auto i:name){
            if(isalpha(i) == 0){
                return false;
            }
        }
        if(name.size()<5 || name.size()>20){
            return false;
        }
        return true;
    }
    static bool isValidPassword(string password){
        if(password.size()<8 || password.size()>20){
            return false;
        }
        return true;
    }
    static bool isBalance(double balance){
        if(balance < 1500){
            return false;
        }
        return true;
    }
};

#endif /* Validator_hpp */

