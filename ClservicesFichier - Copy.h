#pragma once
#include "CLexplorateur.h"

using namespace System;

namespace NS_services {
ref class ClservicesFichier
{
private:
	NS_composants::Clexplorateur^ fichier;
public:
	void CLservicesFichier(void);
	void copier(array<String^>^, String^);
	void copierEffacer(array<String^>^, String^);
	void effacer(array<String^>^);
	array<String^>^ explorer(String^);
};
}