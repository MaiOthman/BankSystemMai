

#ifndef Admin_hpp
#define Admin_hpp

#include "Client.hpp"
#include "Employee.hpp"
#include <vector>
#include <string>
using namespace std;
class Admin : public Employee {
private:
    int idAdmin;
    static int lastAdminId;
public:
    Admin();
    Admin(string name, string password , double salary);
    void generateId();
    int getIdAdmin();
    static int getLastAdminId();
    void displayData();
    void setIdAdmin(int id);
    
    void addEmployee(Employee& employee);
    Employee* searchEmployee(int id);
    void editEmployee(int id, string name, string password, double salary);
    void listEmployee();
};
#endif /* Admin_hpp */

