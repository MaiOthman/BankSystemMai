//
//  Admin.hpp
//  BankSystemFirst
//
//  Created by Mai Mahmoud on 13.02.25.
//

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
};
#endif /* Admin_hpp */

