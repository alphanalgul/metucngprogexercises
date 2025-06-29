/* Alphan Algül 2584639
I read and accept the submission rules and the extra rules specified
in each question. This is my own work that is done by myself only */
#ifndef INC_2584639_SHOP_H
#define INC_2584639_SHOP_H
#include "Business.h"
class Shop:public Business {
public:
    enum shopType {
        None = -1, Clothing = 1, Technology = 2, Accessories = 3, Beauty = 4
    };
    Shop();
    Shop(char *s_name,int s_size,int stype);
    void setShopType(int stype);
    shopType getShopType();
    void printBusiness();
    void printBusinessEmployees();
    int getType();
private:
    shopType s;
};
#endif
