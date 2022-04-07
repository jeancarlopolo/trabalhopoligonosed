#include "retangulo.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  int index;
  double x, y, w, h;
  char corb[30], corp[30];
} RetStruct;
Rectangle criarretangulo(int index, double x, double y, double w, double h, char *corb, char *corp)
{
  RetStruct *p = malloc(sizeof(Retangulo));
  p->index = index;
  p->x = x;
  p->y = y;
  p->w = w;
  p->h = h;
  strcpy(p->corb, corb);
  strcpy(p->corp, corp);
  return p;
}
void printdados(Rectangle r)
{
    RetStruct* ret = (Retangulo*) r;
    printf("%lf", ret->x);
}
void main()
{
    Rectangle p = criarretangulo(1, 2, 3, 4, 5, "white", "grey");
    setx(p, getx(p) + 2);
    printdados(p);
}
