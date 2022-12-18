#include <iostream> 
using namespace std; 

class Point{
    private:
        double x,y;
    protected:
        string nom;
    public:
        Point(double x=0.0 ,double y=0.0 ,string nom= ""){};
        void getX();
        void setX(double x){};
        void getY();
        void setY(double y){};
        void getNom();
        void getNom(string nom){};
        void setNom();
        void setNom(string nom){};
        void afficher();
};

class Pointcouleur : public Point{
    private:
        int couleur;
    public:
        Pointcouleur(double x=0.0,double y=0.0,string nom="",int couleur=0){};
        void getCouleur(int);
        void setCouleur(int couleur);
        void afficher();
};