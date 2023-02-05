
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
        void setYas(int);
        int getYas();
        void printInsan();
};

class hesap : public insan{
    private:
        int hesapBakiyesi;
    public:
        hesap();
        hesap(int,std::string,int);
        void setHesap(int);
        int getHesap();
        void printHesap();
        void yatirHesap(int);
        void cekHesap(int);
};
insan::insan(){
    cout << "Default constructor cagirildi"<<endl;
}

insan::insan(std::string isim ,int yas){

    setIsim(isim);
    setYas(yas);
}

void insan ::setIsim(std::string isim){

    this->isim = isim;
}

std::string insan::getIsim(){
    return isim;
}

void insan::setYas(int yas){
    if(yas<=30) this->yas=yas;
    else cerr<<"Girilen yas degeri gecerli degildir!"<<endl;
}

int insan::getYas(){
    return yas;
}
void insan::printInsan(){
    cout<< "Isim: "<< getIsim() << "\nYas: "<< getYas()<<endl;
}
/*****************************************************************************/
/*****************************************************************************/
/*****************************************************************************/
/*****************************************************************************/
hesap::hesap(){
        cout << "Default insan constructor cagirildi"<<endl;
}
hesap::hesap(int hesapBakiyesi,std::string isim,int yas):insan(isim,yas){
    setHesap(hesapBakiyesi);
}

void hesap::setHesap(int hesapBakiyesi){
    if(hesapBakiyesi>=0) this->hesapBakiyesi=hesapBakiyesi;
    else cerr<<"Girilen deger gecersiz!!"<<endl;

}
int hesap::getHesap(){
    return hesapBakiyesi;
}

void hesap::printHesap(){
    printInsan();
    cout<<"Guncek hesap bakiyesi tutari : " <<getHesap()<<" TL"<< endl;

}

void hesap::yatirHesap(int eklenen){
    hesapBakiyesi+=eklenen;

}

void hesap::cekHesap(int cekilen){
     if(cekilen<=hesapBakiyesi) hesapBakiyesi-=cekilen;
     else cerr<<"Bakiye yetersizdir!!"<<endl;
}