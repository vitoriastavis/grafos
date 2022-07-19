#include <stdio.h>
#include "grafo.h"

//------------------------------------------------------------------------------

int main(void) {

  printf("escreva um grafo? \n");
  grafo g = le_grafo();

  /*Agsym_t *attr;
  int cnt;

  cnt = 0; attr = 0;
  while (attr = agnxtattr(g, AGNODE, attr)) cnt++;
  printf("The graph %s has %d attributes\n",agnameof(g),cnt);
*/
  printf("n nodes %d \n", n_vertices(g));
  printf("n arestas %d \n", n_arestas(g));
  printf("grau do vertice a %d \n", grau('x', g));

  printf(" \n");
  //escreve_grafo(g);

  destroi_grafo(g);

  return 0;
}
