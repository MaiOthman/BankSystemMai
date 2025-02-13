//
//  FileManager.cpp
//  BankSystemFirst
//
//  Created by Mai Mahmoud on 13.02.25.
//

#include "FileManager.hpp"
FileManager::FileManager(){}
 void FileManager::addClient(Client &client){
     FilesHelper::saveClient(client);
}
void FileManager::addEmployee(Employee &employee){
    FilesHelper::saveEmployee(employee);
}
void FileManager::addAdmin(Admin &admin){
    FilesHelper::saveAdmin(admin);
}
vector<Client> FileManager::getAllClients(){
    FilesHelper::getClients();
    return clientVector;
}
vector<Employee>FileManager::getAllEmployees(){
    FilesHelper::getEmployees();
    return EmployeeVector;
}
vector<Admin>FileManager::getAllAdmins(){
    FilesHelper::getAdmins();
    return AdminVector;
}
void FileManager::removeAllClients() {
    FilesHelper::clearFile("Clients", "ClientsLast");
}
void FileManager::removeAllEmployees() {
    FilesHelper::clearFile("Employee", "EmployeeLast");

}
void FileManager::removeAllAdmins(){
    FilesHelper::clearFile("Admin", "AdminLast");

}
