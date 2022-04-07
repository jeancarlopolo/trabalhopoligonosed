#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
  int index;
  double x, y, w, h;
  char corb[30], corp[30];
} Retangulo;
Retangulo *criarretangulo(int index, double x, double y, double w, double h, char *corb, char *corp)
{
  Retangulo *p = malloc(sizeof(Retangulo));
  p->index = index;
  p->x = x;
  p->y = y;
  p->w = w;
  p->h = h;
  strcpy(p->corb, corb);
  strcpy(p->corp, corp);
  return p;
}
