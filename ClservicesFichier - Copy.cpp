#include "ClservicesFichier.h"
namespace NS_services
{
	void ClservicesFichier::CLservicesFichier(void)
	{
		this->fichier = gcnew NS_composants::Clexplorateur();
	}
	void ClservicesFichier::copier(array<String^>^ fichiersSources, String^ destination)
	{
		int i;

		i = 0;
		for (i = 0; i < fichiersSources->Length; i++)
		{
			this->fichier->copier(fichiersSources[i], destination);
		}
	}
	void ClservicesFichier::copierEffacer(array<String^>^ fichiersSources, String^ fichierDestination)
	{
		this->copier(fichiersSources, fichierDestination);
		this->effacer(fichiersSources);
	}
	void ClservicesFichier::effacer(array<String^>^ fichiersSources)
	{
		int i;

		i = 0;
		for (i = 0; i < fichiersSources->Length; i++)
		{
			this->fichier->effacer(fichiersSources[i]);
		}
	}
	array<String^>^ ClservicesFichier::explorer(String^ dossier)
	{
		return this->fichier->explorerUnDossier(dossier);
	}
}
