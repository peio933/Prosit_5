#include "MyForm.h" // Inclut le fichier d'en-t�te de la fen�tre principale (MyForm)

// Utilise l'espace de noms System pour les composants Windows Forms
using namespace System;
using namespace System::Windows::Forms;

// Fonction principale de l'application
[STAThreadAttribute]
void main(array<String^>^ args) {
    // Active les styles visuels de l'application
    Application::EnableVisualStyles();

    // D�finit la prise en charge du rendu de texte compatible avec les versions ant�rieures de Windows
    Application::SetCompatibleTextRenderingDefault(false);

    // Cr�e une instance de la fen�tre principale (MyForm)
    Prosit5::MyForm form;

    // Lance l'application et affiche la fen�tre principale
    Application::Run(% form);
}

