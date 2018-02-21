#ifndef _phanso_
#define _phanso_
#define N 15
#include <stdio.h>
typedef struct
{
	int p;
	int q;
} ps;
void nhapphanso(ps &a);
void phansotoigian(ps a);
void xuatphanso(ps a);
void tong(ps &a, ps &b);
void hieu(ps &a, ps &b);
void tich(ps &a, ps &b);
void thuong(ps &a, ps &b);
int sosanh(ps &a, ps &b);
void inputarrphanso(ps F[],int &n);
void outputarrphanso(ps F[], int n);
ps sumps(ps &a, ps &b);
void tongarr(ps F[], int n);
void thaythetoigian(ps F[], int n);
void sapxeptangdan(ps F[], int n);
int kiemtrapsK(ps F[], int n);
#endif