#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <string>
#include <iostream>


class Personnage
{
    public:
    // Methodes :
    void recevoirDegats(int nbDegats)
    {

    }

    void attaquer(Personnage &cible)
    {

    }

    void boirePotionDeVie(int quantitePotion)
    {

    }

    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme)
    {

    }

    bool estVivant()
    {

    }

private:
   // Attributs :
   int m_vie;
   int m_mane;
   string m_nomArme;
   int m_degatsArme;
};
