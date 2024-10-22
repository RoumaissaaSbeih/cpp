#include "Voiture.h"
#include <iostream>
#include <string>

void Voiture::accelerer(float valeur) {
    vitesse += valeur;
}
void Voiture::freiner(float valeur) {
    vitesse -= valeur;
    if (vitesse < 0){ 
        vitesse = 0; 
    }
}

void Voiture::afficherInfo() {
    std::cout << "Marque: " << marque << ", Modèle: " << modele 
              << ", Année: " << annee << ", Kilométrage: " << kilometrage 
              << ", Vitesse: " << vitesse << " km/h" << std::endl;
}

void Voiture::avancer(float distance) {
    kilometrage += distance;
}
