#include "Clexplorateur.h"
namespace NS_composants
{
	array<String^>^ Clexplorateur::explorerUnDossier(String^ dossier)
	{
		array<String^>^ file = Directory::GetFiles(dossier);
		return file;
	}
	void Clexplorateur::effacer(String^ fichier)
	{
		System::IO::File::Delete(fichier);
	}
	void Clexplorateur::copier(String^ fichierSource, String^ fichierDestination)
	{
		String^ nomDeFichierExtension;
		nomDeFichierExtension = System::IO::Path::GetFileName(fichierSource);
		System::IO::File::Copy(fichierSource, fichierDestination + "\\" + nomDeFichierExtension);
	}
}
