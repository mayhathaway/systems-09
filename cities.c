#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "cities.h"

struct city * new_city(char *name, int population) {
    struct city *nc;
    nc = malloc (sizeof(struct city));
    strncpy(nc->name, name, sizeof(nc->name)-1);
    nc->population = population;
    return nc;
  }

void change_city(struct city * c, int new_population) {
  c->population = new_population;
  printf("%s now has %d people living in it\n", c->name, c->population);
}

void print_city(struct city *c) {
  printf("the name of this city is %s\n", c->name);
  printf("%s has a population of %d\n", c->name, c->population);
}
