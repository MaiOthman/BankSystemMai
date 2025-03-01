//
//  DataSourceInterface.hpp
//  BankSystemFirst
//
//  Created by Mai Mahmoud on 13.02.25.
//

#ifndef DataSourceInterface_hpp
#define DataSourceInterface_hpp

#include <stdio.h>
#include "Client.hpp"
#include "Person.hpp"
#include "Employee.hpp"
#include "Admin.hpp"

class DataSource{
    virtual void addClient(Client &client)=0;
    virtual void addEmployee(Employee &employee) = 0;
    virtual void addAdmin(Admin &admin) = 0;
    virtual  vector<Client> getAllClients()=0;
    virtual  vector<Employee>getAllEmployees()=0;
    virtual vector<Admin>getAllAdmins() = 0;
    virtual void removeAllClients() = 0;
    virtual void removeAllEmployees() = 0;
    virtual void removeAllAdmins() = 0;
};
#endif /* DataSourceInterface_hpp */
