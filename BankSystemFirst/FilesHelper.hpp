//
//  FilesHelper.hpp
//  BankSystemFirst
//
//  Created by Mai Mahmoud on 13.02.25.
//

#ifndef FilesHelper_hpp
#define FilesHelper_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include "Person.hpp"
#include "Client.hpp"
#include "Employee.hpp"
#include "Admin.hpp"
#include "Parser.hpp"
#include "global.hpp"

using namespace std;
class FilesHelper{
public:
    static void saveLast(string fileName, int id);
    static int getLast(string fileName);
    static void saveClient(Client c);
    static void saveEmployee(Employee e);
    static void saveAdmin(Admin a);
    static void getClients();
    static void getEmployees();
    static void  getAdmins();
    static void clearFile(string fileName, string lastIdFile);
};

#endif /* FilesHelper_hpp */
