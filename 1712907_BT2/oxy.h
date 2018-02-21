#ifndef _oxy_
#define _oxy_
#include <stdio.h>
#include <math.h>
typedef struct 
{
	float iX;
	float iY;
}diem2d;
void input2d(diem2d &A);
void output2d(diem2d A);
void kiemtragocphan4(diem2d A);
void input2point(diem2d &M, diem2d &N);
float khoangcach(diem2d &M, diem2d &N);
void dientichchuvi(diem2d &A, diem2d &B, diem2d &C);
#endif