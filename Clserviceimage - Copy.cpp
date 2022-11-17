#include "Clserviceimage.h"
namespace NS_serviceImage
{
	Clserviceimage::Clserviceimage(void)
	{
		this->image = gcnew NS_composants::Climages();
	}
	System::Drawing::Bitmap^ Clserviceimage::lireImage(String^ image)
	{
		return this->image->acquisitionImage(image);
	}
}
