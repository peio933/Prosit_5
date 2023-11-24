#include "CLimages.h"

// Utilisation de l'espace de noms System
using namespace System;

// Espace de noms pour les composants
namespace NS_composants
{
    // Fonction pour acquérir une image à partir d'un fichier
    System::Drawing::Bitmap^ CLimages::acquisitionImage(String^ fichier)
    {
        // Crée un nouvel objet Bitmap à partir du chemin du fichier
        return gcnew System::Drawing::Bitmap(fichier);
    }
}

