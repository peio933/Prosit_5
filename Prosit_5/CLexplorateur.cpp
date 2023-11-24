#include "CLexplorateur.h"

// Espace de noms pour les composants
namespace NS_composants
{
    // Fonction pour explorer un dossier et retourner la liste des fichiers
    array<String^>^ CLfichier::explorerUnDossier(String^ dossier)
    {
        // Utilise la classe Directory du namespace System::IO pour obtenir la liste des fichiers
        array<String^>^ file = Directory::GetFiles(dossier);
        return file;
    }

    // Fonction pour effacer un fichier
    void CLfichier::effacer(String^ fichier)
    {
        // Utilise la classe File du namespace System::IO pour supprimer le fichier
        System::IO::File::Delete(fichier);
    }

    // Fonction pour copier un fichier vers une destination donnée
    void CLfichier::copier(String^ fichierSource, String^ fichierDestination)
    {
        // Obtient le nom du fichier avec son extension à partir du chemin source
        String^ nomDeFichierExtension = System::IO::Path::GetFileName(fichierSource);

        // Utilise la classe File du namespace System::IO pour copier le fichier
        System::IO::File::Copy(fichierSource, fichierDestination + "\\" + nomDeFichierExtension);
    }
}

