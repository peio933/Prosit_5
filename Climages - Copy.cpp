#include "Climages.h"
using namespace System;

namespace NS_composants
{
	System::Drawing::Bitmap^ Climages::acquisitionImage(String^ fichier)
	{
		return gcnew System::Drawing::Bitmap(fichier);
	}
}
