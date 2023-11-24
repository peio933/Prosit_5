#include "CLservicesFichier.h"

// Espace de noms pour les services
namespace NS_services
{
    // Constructeur par défaut de la classe CLserviceFichier
    CLserviceFichier::CLserviceFichier(void)
    {
        // Initialise l'objet fichier en utilisant la classe CLfichier du namespace NS_composants
        this->fichier = gcnew NS_composants::CLfichier();
    }

    // Fonction pour copier une liste de fichiers vers une destination
    void CLserviceFichier::copier(array<String^>^ fichiersSources, String^ destination)
    {
        for (int i = 0; i < fichiersSources->Length; i++)
        {
            // Utilise la fonction copier de la classe CLfichier pour copier chaque fichier
            this->fichier->copier(fichiersSources[i], destination);
        }
    }

    // Fonction pour copier une liste de fichiers vers une destination et les effacer ensuite
    void CLserviceFichier::copierEffacer(array<String^>^ fichiersSources, String^ fichierDestination)
    {
        // Utilise la fonction copier pour copier les fichiers
        this->copier(fichiersSources, fichierDestination);

        // Utilise la fonction effacer pour effacer les fichiers sources
        this->effacer(fichiersSources);
    }

    // Fonction pour effacer une liste de fichiers
    void CLserviceFichier::effacer(array<String^>^ fichiersSources)
    {
        for (int i = 0; i < fichiersSources->Length; i++)
        {
            // Utilise la fonction effacer de la classe CLfichier pour effacer chaque fichier
            this->fichier->effacer(fichiersSources[i]);
        }
    }

    // Fonction pour explorer un dossier et retourner la liste des fichiers
    array<String^>^ CLserviceFichier::explorer(String^ dossier)
    {
        // Utilise la fonction explorerUnDossier de la classe CLfichier pour explorer le dossier
        return this->fichier->explorerUnDossier(dossier);
    }
}


