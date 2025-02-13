
#include <iostream>
#include "Client.hpp"
#include "Employee.hpp"
#include "Admin.hpp"
#include <vector>
#include "global.hpp"
#include "FileManager.hpp"
int main(int argc, const char * argv[]) {
    FilesHelper::getClients();
    FilesHelper::getEmployees();
    FilesHelper::getAdmins();
    
    Client c1, c4("Halalow", "hall99ll", 20000);
    c1.setName("MaiMahmoud");
    c1.setPassword("ddddddddd");
    c1.setBalance(2000);
    c1.displayData();
    c1.deposit(500);
    c1.displayData();
    Client c2("MostafaHamdy", "sssssssssss", 5000);
    c1.transferTo(1000, c2);
    c1.displayData();
    c2.displayData();
    Client c3("hazonbol", "ssssssssssss", 2000);
    c3.displayData();
    c1.displayData();
    c4.displayData();
    FilesHelper::saveClient(c1);
    FilesHelper::saveClient(c2);
    FilesHelper::saveClient(c3);
    FilesHelper::getClients();

    Employee e = Employee("Mahmoud", "ssssskfkkfkfkf", 60000);
    Employee e1 = Employee("Mahmoudk22", "ssssskfkkfkfkf", 6000);
    Employee e2 = Employee("Mahmoudjj22", "ssssskfkkfkfkf", 80000);
    e.displayData();
    e1.displayData();
    e2.displayData();
    
    e.listClient();

    Admin a = Admin("Mahmoud", "ssssskfkkfkfkf", 60000);
    Admin a1 = Admin("MahmoudkAdmin", "ssssskfkkfkfkf", 6000);
    Admin a2 = Admin("MahmoudjjAdmin", "ssssskfkkfkfkf", 80000);
    a.displayData();
    a1.displayData();
    a2.displayData();

    vector<string> Mai;

    return 0;
}

