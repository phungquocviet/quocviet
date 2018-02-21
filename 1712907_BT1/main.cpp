#include "phanso.h"
void main()
{
	ps x, y;
	ps F[N];
	int n;
	/*nhapphanso(x);
	xuatphanso(x);
	printf("\nPhan so toi gian: "); phansotoigian(x);

	tong(x, y);
	hieu(x, y);
	tich(x, y);
	thuong(x, y);*/
	
	inputarrphanso(F,n);
	outputarrphanso(F, n);
	tongarr(F, n);
	thaythetoigian(F, n);
	sapxeptangdan(F, n);
	
	if (kiemtrapsK(F, n) == 1)
	{
		printf("Co trung\n");
	}
	else printf("Khong co trung\n");
	
}