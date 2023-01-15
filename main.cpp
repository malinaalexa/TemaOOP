#include <iostream>
#include "bluza.h"
#include "produs.h"
#include <utility>
#include<memory>
#include<string>
#include <vector>
#include "angajat.h"
int main() {
    Angajat An{"Popescu Ion",2700,"Manager",2,20};
    std::cout<<An.getsalariu()<<'\n';
    Bluza Bl("Bluza de bumbac",99.99,15,0,"tricou");
    try {
        Bl.setTip(Bl.gettip());
    } catch (std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    Bl.reducere();
    std::cout<<Bl.pretprod();
    return 0;
}
