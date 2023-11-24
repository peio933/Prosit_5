#include "CLserviceImage.h"

// Espace de noms pour les services
namespace NS_services
{
    // Constructeur par défaut de la classe CLserviceImage
    CLserviceImage::CLserviceImage(void)
    {
        // Initialise l'objet image en utilisant la classe CLimages du namespace NS_composants
        this->image = gcnew NS_composants::CLimages();
    }

    // Fonction pour lire une image à partir d'un fichier
    System::Drawing::Bitmap^ CLserviceImage::lireImage(String^ fichierImage)
    {
        // Utilise la fonction acquisitionImage de la classe CLimages pour obtenir l'image
        return this->image->acquisitionImage(fichierImage);
    }
}


