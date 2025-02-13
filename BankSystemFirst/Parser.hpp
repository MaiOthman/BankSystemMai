//
//  Parser.hpp
//  BankSystemFirst
//
//  Created by Mai Mahmoud on 13.02.25.
//

#ifndef Parser_hpp
#define Parser_hpp

#include <stdio.h>
#include <vector>
#include <string>
#include <stdio.h>
#include "Client.hpp"
#include "Employee.hpp"
#include "Admin.hpp"
using namespace std;


class Parser{
public:
    static vector<string> split(string line);
    static Client parseToClient(string line);
    static Employee parseToEmployee(string line);
    static Admin parseToAdmin(string line);
};
#endif /* Parser_hpp */
