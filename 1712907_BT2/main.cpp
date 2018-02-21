#include "oxy.h"
void main()
{
	diem2d A,B,C;
	input2d(A);
	output2d(A);
	kiemtragocphan4(A);
	input2point(A, B);
	printf("\nKhoang cach giua 2 diem la: %f", khoangcach(A, B));
	dientichchuvi(A, B, C);
}