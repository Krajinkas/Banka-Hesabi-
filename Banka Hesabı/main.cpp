#include <iostream>
using namespace std;
#include "account.h"

    int main(){

        insan insan1("Ismet Alp Kara",22);
        insan1.printInsan();

        hesap hesap1(1500,"Sema Karahanli",21);
        hesap1.printHesap();
        cout<<"\n";

        hesap1.cekHesap(900);
        hesap1.printHesap();
        cout<<"\n";

        hesap1.cekHesap(7000);
        hesap1.printHesap();
        cout<<"\n";

        hesap1.yatirHesap(3000);
        hesap1.printHesap();
        
    }