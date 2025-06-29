
#ifndef INC_2584639_RESTAURANT_H
#define INC_2584639_RESTAURANT_H
#include "Business.h"

class Restaurant: public Business{
private:
    int seat_number;
public:
    Restaurant();
    Restaurant(const char *r_name, int r_size,int num_seats);
    void setSeatNum(int seat_num);
    int getSeatNum() const;
    bool checkSuitability(int seat_num) const;
    void printBusiness();
    void printBusinessEmployees();
    int getType();
};
#endif //INC_2584639_RESTAURANT_H
