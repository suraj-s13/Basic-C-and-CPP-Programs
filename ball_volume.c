#include <stdio.h>
int main()
{
	float radiusofball, volumeofball;
	scanf("%f", &radiusofball);
	volumeofball = 4 / 3 * 3.14 * radiusofball * radiusofball * radiusofball;
	printf("\n%f", volumeofball);
	return 0;
}
