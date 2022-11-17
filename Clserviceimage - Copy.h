#pragma once
#include "CLimages.h"


namespace NS_serviceImage{
	ref class Clserviceimage
	{
	private: 
	NS_composants::Climages^ image;
	public:
	Clserviceimage(void);
	System::Drawing::Bitmap^ lireImage(String^);
	};
}
