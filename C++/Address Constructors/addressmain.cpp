#include <iostream>
#include "Address.h"
using namespace std;

int main() {
    Address a1;
    a1.printAddress();

    Address a2;
    a2.createAddress(158,"Gazi Caddesi","Samsun");
    a2.printAddress();
}
