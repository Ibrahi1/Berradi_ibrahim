#include<iostream>
#include<list>

using namespace std;

int main(){
    
    int V,L;
    list<int> liste;
    cout<<"Entrer la taille de la liste  ";
    cin>>L;
    cout<<"Entrer les elements de la liste \n "; 
    for(int i=0; i<L; i++){
        cout<<"la valeur de "<<i+1<<"\t";
        cin>>V;
        liste.push_back(V);
    }
    liste.sort();
    cout<<"la liste tri est : \n";
    for(list<int>::iterator it = liste.begin(); it!=liste.end(); it++){
        cout << "" << *it;
        cout << "\n"; 
    }

    return 0;
}