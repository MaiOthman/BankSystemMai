

#include "FilesHelper.hpp"
 void FilesHelper::saveLast(string fileName, int id){
    ofstream output;
    output.open(fileName);
    if(!output.is_open()){
        cout << "Error openening the file" << endl;
        return;
    }
    output << id << endl;
    output.close();
}
 int FilesHelper::getLast(string fileName){
    int lastId;
    ifstream input;
    input.open(fileName);
    input >> lastId;
    input.close();
    return lastId;
}
// "1&MaiMohamed&1111111111&5000"
 void FilesHelper::saveClient(Client c){
     string fileName = "Clients.txt";
     fstream output(fileName, ios::app);
     if(!output.is_open()){
            cout << "Error openening the file" << endl;
            return;
             }
     output << c.getIdClient()<< "&" << c.getName() << "&" <<c.getPassword()<<"&"<< c.getBalance() << endl;
            output.close();
    
}
 void FilesHelper::saveEmployee(Employee e){
    string fileName = "Employees.txt";
    fstream output(fileName, ios::app);
    if(!output.is_open()){
           cout << "Error openening the file" << endl;
           return;
            }
    output << e.getIdEmployee()<< "&" << e.getName() << "&" << e.getPassword()<<"&"<< e.getSalary() << endl;
    output.close();
}
 void FilesHelper::saveAdmin(Admin a){
    string fileName = "Admin.txt";
    fstream output(fileName, ios::app);
    if(!output.is_open()){
           cout << "Error openening the file" << endl;
           return;
            }
           output << a.getIdAdmin()<< "&" << a.getName() << "&" << a.getPassword()<<"&"<< a.getSalary() << endl;
           output.close();
}
 void FilesHelper::getClients(){
    string fileName ="Clients.txt", line;
    fstream input(fileName, ios::in);
    if(!input.is_open()){
        cout << "Error openening the file" << endl;
        return;
    }
    while(getline(input,line)){
        Client c = Parser::parseToClient(line);
        clientVector.push_back(c);
    }
}
 void FilesHelper::getEmployees(){
     string fileName ="Employees.txt", line;
     fstream input(fileName, ios::in);
    if(!input.is_open()){
        cout << "Error opening the file" << endl;
        return;
    }
    while(getline(input, line)){
        Employee e = Parser::parseToEmployee(line);
        EmployeeVector.push_back(e);
    }
}
 void FilesHelper::getAdmins(){
    string fileName ="Admin.txt", line;
    fstream input(fileName, ios::in);
    if(!input.is_open()){
        cout << "Error opening the file" << endl;
        return;
    }
    while(getline(input, line)){
        Admin a = Parser::parseToAdmin(line);
        AdminVector.push_back(a);
    }
}
 void FilesHelper::clearFile(string fileName, string lastIdFile){
    ofstream output;
    output.open(fileName, ofstream::out | ofstream::trunc);
    output.close();
    output.open(lastIdFile);
    output << 0 << endl;
    output.close();
    ////Todo reset the static id = 0;
}
