#include <iostream>
#include <math.h>
using namespace std;

class complexe{
    private:
        int rel;
        int img;
    public:
        complexe(){};
        complexe(int,int);
        void operator+(complexe);
        void operator-(complexe);
        void operator*(complexe);
        void operator/(complexe);
};
void complexe::operator+(complexe c){
    int nrel=rel+c.rel;
    int nimg=img+c.img;
    cout<<nrel<<" + i"<<nimg;
}
void complexe::operator-(complexe c){
    int nrel=rel-c.rel;
    int nimg=img-c.img;
    cout<<nrel<<" + i"<<nimg;
}
void complexe::operator*(complexe c){
    int nrel= rel*c.rel - img*c.img;
    int nimg= rel*c.img + img*c.rel;
    cout<<nrel<<" + i"<<nimg;
}
void complexe::operator/(complexe c){
    int nrel= ((rel*c.rel-img*c.img)/(pow(c.rel,2)+pow(c.img,2)));
    int nimg= ((img*c.rel-rel*c.img)/(pow(c.rel,2)+pow(c.img,2)));
    cout<<nrel<<" + i"<<nimg;
}


complexe::complexe(int a,int b){
        rel=a;
        img=b;
}
int main(){
    int a,b,c,d;
    char oper;
    cout<<"Donner rel et img de c1 : ";
    cin>>a;
    cin>>b;
    cout<<"Donner rel et img de c2 : ";
    cin>>c;
    cin>>d;
    complexe c1(a,b),c2(c,d);
    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;
    switch (oper) {
        case '+':
            cout << "La somme = ";
            c1+c2;     break;
        case '-':
            cout <<"la soustraction = ";
            c1-c2;      break;
        case '*':
            cout <<"Le produit = ";
            c1*c2;       break;
        case '/':
            cout << "La division = ";
            c1/c2;      break;
        default:
            cout << "Error! cet operateur n'exeste pas";        break;
    }
    return 0;
}