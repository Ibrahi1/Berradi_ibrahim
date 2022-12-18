#include<iostream>
#include<list>
#include<string>
#include<iterator>
#include<sstream> 
#include <functional>

using namespace std;
class Person{
    public:
        string nom,prenom;
        int age;
        Person(string,string,int);
};

Person::Person(string nom, string prenom , int age){
            this->nom = nom; 
            this->prenom= prenom;
            this->age = age;
        }

int main(){
    list<Person> maListe;
    string nom, pren; 
    int age;
    int N;
    cout<<"Combier de pernonne  ";
    cin>>N;
    cout<<"Entrer le nom , Prenom , age de personne : \n ";
    for(int i=0; i<N; i++){
        cout<<"Le Nom de personne "<<i+1<<"\t";
        cin>>nom;
        cout<<"Le Prenom de personne "<<i+1<<"\t";
        cin>>pren;
        cout<<"Lage de personne "<<i+1<<"\t";
        cin>>age;
        maListe.push_back(Person(nom,pren,age));
    }
    

    std::list<Person>::iterator it ;
    
    maListe.sort( [](const Person& p1, const Person& p2)
    {
    return p1.nom < p2.nom;
    });
    
    for(it = maListe.begin(); it != maListe.end(); ++it){
        cout<<it->nom<<"\t";
        cout<<it->prenom<<"\t";
        cout<<it->age<<"\n"; 
    }
    return 0;
}