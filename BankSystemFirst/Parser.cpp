//
//  Parser.cpp
//  BankSystemFirst
//
//  Created by Mai Mahmoud on 13.02.25.
//

#include "Parser.hpp"
 vector<string> Parser::split(string line){
    char del = '&';
    vector<string> personVector;
    auto start = 0;
    auto end = line.find(del);
    cout << end;
    while(end!=string::npos){
        personVector.push_back(line.substr(start, end-start));
        start = end+1;
        end = line.find(del, start);
    }
    personVector.push_back(line.substr(start));
    return personVector;
}
Client Parser::parseToClient(string line){
    Client parsedClient;
    vector<string> clientVector;
    clientVector = split(line);
 
    if(!clientVector.empty() && clientVector.size() == 4){
        parsedClient.setName(clientVector[1]);
        parsedClient.setPassword(clientVector[2]) ;
        parsedClient.setBalance(stod(clientVector[3]));
        parsedClient.setIdClient(stoi(clientVector[0]));
    } else {
        cout << "Please enter a valid client" << endl;
    }
    return parsedClient;
}
 Employee Parser::parseToEmployee(string line){
    Employee parsedEmployee;
    vector<string> employeeVector;
    employeeVector = split(line);
     if(!employeeVector.empty() && employeeVector.size() == 4){
         
         parsedEmployee.setName(employeeVector[1]);
         parsedEmployee.setPassword(employeeVector[2]);
         parsedEmployee.setSalary(stod(employeeVector[3]));
         parsedEmployee.setIdEmployee(stoi(employeeVector[0]));
     } else {
         cout << "Please enter a valid employee" << endl;
     }
    return parsedEmployee;
}
 Admin Parser::parseToAdmin(string line){
    Admin parsedAdmin;
    vector<string> adminVector;
    adminVector = split(line);
    parsedAdmin.setName(adminVector[0]);
    parsedAdmin.setPassword(adminVector[1]);
    parsedAdmin.setSalary(stod(adminVector[2]));
    parsedAdmin.setIdAdmin(stoi(adminVector[0]));
    return parsedAdmin;
}
