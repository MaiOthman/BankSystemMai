//
//  FileManager.hpp
//  BankSystemFirst
//
//  Created by Mai Mahmoud on 13.02.25.
//

#ifndef FileManager_hpp
#define FileManager_hpp
#include <stdio.h>
#include "FilesHelper.hpp"
#include "DataSourceInterface.hpp"
#include <fstream>
using namespace std;

class FileManager: public DataSource{
public:
    FileManager();
    void addClient(Client &client);
    void addEmployee(Employee &employee);
    void addAdmin(Admin &admin);
    vector<Client> getAllClients();
    vector<Employee>getAllEmployees();
    vector<Admin>getAllAdmins();
    void removeAllClients();
    void removeAllEmployees();
    void removeAllAdmins();
};

#endif /* FileManager_hpp */
