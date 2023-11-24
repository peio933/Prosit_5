#include "MyForm.h" // Inclut le fichier d'en-tête de la fenêtre principale (MyForm)

// Utilise l'espace de noms System pour les composants Windows Forms
using namespace System;
using namespace System::Windows::Forms;

// Fonction principale de l'application
[STAThreadAttribute]
void main(array<String^>^ args) {
    // Active les styles visuels de l'application
    Application::EnableVisualStyles();

    // Définit la prise en charge du rendu de texte compatible avec les versions antérieures de Windows
    Application::SetCompatibleTextRenderingDefault(false);

    // Crée une instance de la fenêtre principale (MyForm)
    Prosit5::MyForm form;

    // Lance l'application et affiche la fenêtre principale
    Application::Run(% form);
}

