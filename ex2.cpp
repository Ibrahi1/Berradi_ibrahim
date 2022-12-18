#include<iostream>
#include <ctime>
#include <time.h>
#include <string>
#include<iomanip>

using namespace std;

void date(string date){
    cout<<"La date est : " << date.substr(0,2) <<"/" <<date.substr(2,2) << "/" << date.substr(4,4) <<endl;
    cout<<"lLe temps est : " <<date.substr(8,2) <<"h" <<date.substr(10,2) <<endl;
}


int main(){
    //declaration de la chaine de caractere date 
    string DT;
    cout<<"Enter la date \n"<<endl;
    cin>>DT;

    date(DT);
    return 0;
}