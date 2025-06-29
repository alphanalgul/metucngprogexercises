/* Alphan Algül 2584639
I read and accept the submission rules and the extra rules specified
in each question. This is my own work that is done by myself only */
#include <iostream>
#include <cstring>
#include "ShoppingCentre.h"
#include "Shop.h"
#include "Restaurant.h"
#include "Business.h"
#include "Employee.h"
using namespace std;


int main() {
    ShoppingCentre sc;
    int option = 0;

    std::cout << "Welcome to Kalkanli Shopping Centre Management System!\n"<<std::endl;

    while (option != 10) {
        std::cout << "\nMenu:\n";
        std::cout << "1. Add a new business to the shopping centre.\n"<<std::endl;
        std::cout << "2. Add an employee to a business.\n"<<std::endl;
        std::cout << "3. Print all the businesses in the shopping centre with the number of "
                     "employees in each business.\n"<<std::endl;
        std::cout << "4. Print all the businesses in the shopping centre with the details of"
                     " employees in each business.\n"<<std::endl;
        std::cout << "5. Print the count of each type of shop in the shopping centre."
                     "\n"<<std::endl;
        std::cout << "6. Print the details of the shops whose type is a given type "
                     "(1: Clothing, 2: Technology, 3: Accessories, 4: Beauty).\n"<<std::endl;
        std::cout << "7. Print the suitable restaurants based on a given "
                     "required number of seats.\n"<<std::endl;
        std::cout << "8. Search for employees by name.\n"<<std::endl;
        std::cout << "9. Print the largest business in terms of size in the shopping centre."
                     "\n"<<std::endl;
        std::cout << "10. Exit\n"<<std::endl;
        std::cout << "--------------------------------------------------\n"<<std::endl;
        std::cout << "Please select an option: "<<std::endl;
        std::cin >> option;
        std::cin.ignore();

        if (option == 1) {
            sc.addBusiness();
        }
        else if (option == 2) {
            char keyword[100];
            std::cout << "Enter target business name: "<<std::endl;
            std::cin.getline(keyword, 100);

            bool found = false;
            int businesscount = sc.getNumberofBusiness();

            for (int i = 0; i < businesscount; i++) {
                Business *b = sc.getBusinessAt(i);
                if (strcmp(b->getBusinessName(), keyword) == 0) {
                    char fname[50], lname[50];
                    int ssn;
                    std::cout << "Enter employee first name: "<<std::endl;
                    std::cin.getline(fname, 50);
                    std::cout << "Enter employee last name: "<<std::endl;
                    std::cin.getline(lname, 50);
                    std::cout << "Enter SSN: "<<std::endl;
                    std::cin >> ssn;
                    std::cin.ignore();

                    Employee e(fname, lname);
                    e.setSSN(ssn);
                    b->addEmployee(e);
                    found = true;
                    break;
                }
            }

            if (!found) {
                std::cout << "Business not found.\n"<<std::endl;
            }
        }
        else if (option == 3) {
            sc.printBusinesses();
        }
        else if (option == 4) {
            sc.printBusinessesEmployees();
        }
        else if (option == 5) {
            sc.printShopsStatistics();
        }
        else if (option == 6) {
            int type;
            std::cout << "Enter shop type (1: Clothing, 2: Technology, 3: Accessories, "
                         "4: Beauty): "<<std::endl;
            std::cin >> type;
            std::cin.ignore();
            sc.printShopsByType(type);
        }
        else if (option == 7) {
            int seats;
            std::cout << "Enter required number of seats: "<<std::endl;
            std::cin >> seats;
            std::cin.ignore();
            sc.printSuitableRestaurants(seats);
        }
        else if (option == 8) {
            char keyword[50];
            std::cout << "Enter search keyword for employee name: "<<std::endl;
            std::cin.getline(keyword, 50);
            sc.searchByEmployeeName(keyword);
        }
        else if (option == 9) {
            sc.printLargestBusiness();
        }
        else if (option == 10) {
            std::cout << "BYE!!!\n"<<std::endl;
        }
        else {
            std::cout << "Invalid option. Please try again.\n"<<std::endl;
        }
    }

    return 0;
}
