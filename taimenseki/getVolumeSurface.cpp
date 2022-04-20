#include "getVolumeSurface.h"

void getVolumeSurface(double x, double y, double z, double* surface, double* volume)
{
	*surface = 2 * (x * y + y * z + z * x);
	*volume = x * y * z;;
}