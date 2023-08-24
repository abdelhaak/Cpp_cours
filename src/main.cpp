#include <iostream>
#include <string>
#include "Personnage.hpp"

using namespace std;

int main() {

    Personnage Abdelhak, Farah;
    Farah.attaquer(Abdelhak);
    Abdelhak.boirePotionDeVie(20);
    Farah.attaquer(Abdelhak);
    Abdelhak.attaquer(Farah);

    Farah.changerArme("Espada venenosa",50);
    Farah.attaquer(Abdelhak);
    
    return 0;
}


/* string maChaine(" Bonjour !");  //ou on peux ecrire string maChaine  = "Bonjour"
    string maChaine1 = "Comment allez vous ?"; 
    string itsChaine = maChaine + maChaine1;
    int chainesize = itsChaine.size();
    maChaine.erase(); // Pour effacer le string 
    string newChaine = itsChaine.substr(2,10); // prendre les charcateres entre 2 et 10
    cout<<"le texte est"<< itsChaine<<endl;
    cout<<"Le size de string est : "<< chainesize<<endl;
    cout<<"La nouvelle string est : "<<newChaine; */