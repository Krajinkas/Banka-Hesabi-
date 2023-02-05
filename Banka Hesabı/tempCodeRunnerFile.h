
#include <iostream>

class insan{
    private:
        std::string isim;
        int yas;
    public:
        insan();
        insan(std::string ,int);
        void setIsim(std::string);
        std::string getIsim();