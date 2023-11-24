#include "CLimages.h"

// Utilisation de l'espace de noms System
using namespace System;

// Espace de noms pour les composants
namespace NS_composants
{
    // Fonction pour acqu�rir une image � partir d'un fichier
    System::Drawing::Bitmap^ CLimages::acquisitionImage(String^ fichier)
    {
        // Cr�e un nouvel objet Bitmap � partir du chemin du fichier
        return gcnew System::Drawing::Bitmap(fichier);
    }
}

