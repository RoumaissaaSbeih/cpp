#include "Voiture.h"
#include <iostream>
#include <string>

int main() {
    using namespace std;
 Voiture v1;
 
    cout<<"enter la marque : ";
    cin>>v1.marque;
    cout<<"enter le modele : ";
    cin>>v1.modele;
    cout<<"enter l'annee : ";
    cin>>v1.annee;
    cout<<"enter le kilometrage : ";
    cin>>v1.kilometrage;
     cout<<"enter la vitesse : ";
    cin>>v1.vitesse;
    
    float valeurACC=0;
    float distance1=0;
    
    cout<<"enter la valeur d'acceleration : ";
    cin>>valeurACC;
    cout<<"enter la distance passée en paramétre : ";
    cin>>distance1;
    
    v1.accelerer( valeurACC );
    v1.afficherInfo();
    
    v1.avancer(distance1);
    v1.afficherInfo();
 
    v1.freiner( valeurACC);
    v1.afficherInfo();
  return 0;
}