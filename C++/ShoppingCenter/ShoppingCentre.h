/* Alphan Algül 2584639
I read and accept the submission rules and the extra rules specified
in each question. This is my own work that is done by myself only */
#ifndef INC_2584639_SHOPPINGCENTRE_H
#define INC_2584639_SHOPPINGCENTRE_H
#include "Restaurant.h"
#include "Shop.h"
class ShoppingCentre{
private:
    char *name;
    Business *businesses[50];
protected:
    int businessCount;
public:
    ShoppingCentre();
    ShoppingCentre(char *sname);
    ~ShoppingCentre();
    void setShoppingCentreName(char *sname);
    char * getShoppingCentreName();
    int getNumberofBusiness();
    Business* getBusinessAt(int index);
    void addBusiness();
    void printBusinesses();
    void printBusinessesEmployees();
    void printShopsStatistics();
    void printShopsByType(int type);
    void printSuitableRestaurants(int seat_no);
    void searchByEmployeeName(char *keyword);
    void printLargestBusiness();
};
#endif //INC_2584639_SHOPPINGCENTRE_H
