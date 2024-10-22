#ifndef VOITURE_H_INCLUDED
#define VOITURE_H_INCLUDED
#include <string>
#include <iostream>
class Voiture {
public:
    std::string marque;
    std::string modele;
    int annee;
    float kilometrage;
    float vitesse;

    
    Voiture() : marque("Inconnu"), modele("Inconnu"), annee(0), kilometrage(0) , vitesse(0) {}

    
    Voiture(std::string m, std::string mod, int a, float k, float v) : marque(m), modele(mod), annee(a), kilometrage(k),vitesse(v) {
            
        }

    
    void accelerer(float valeur);
    void freiner(float valeur); 
    void afficherInfo();    
    void avancer(float distance);

   
    ~Voiture() {
        std::cout << "Voiture détruite" << std::endl;
    }
};
#endif