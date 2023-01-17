
#ifndef OOP_COMANDA_H
#define OOP_COMANDA_H
#include "produs.h"
#include <iostream>
#include<vector>
#include <memory>
#include "rochie.h"
#include "bluza.h"
#include "pantaloni.h"
#include "angajat.h"
class Comanda {
    std::vector<std::shared_ptr<Produs>> prod_comandate;
    double valoare=0;
    Angajat An_responsabil;
    std::vector<int> nr_buc;//vector de "frecventa" pt produsele din comanda. retine cate bucati se comanda dintr-un produs
public:
    Comanda(std::vector<std::shared_ptr<Produs>>  prod_comandate, double valoare, const Angajat& An_responsabil, std::vector<int> nr_buc);
    static void swap(Comanda &obj1, Comanda obj2);
    Comanda &operator=(const Comanda &obj);
    Comanda(const Comanda &other);
    explicit Comanda(const std::vector<std::shared_ptr<Produs>> &prodComandate);
    friend std::ostream &operator<<(std::ostream &os, const Comanda&comanda);
    void calculvaloare();
    void insert(const Produs &prod, int x);
    virtual ~Comanda();
};


#endif //OOP_COMANDA_H
