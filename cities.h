#ifndef CITY
#define CITY

struct city {
  char name[256];
  int population;
};


struct city * new_city(char * name, int population);
void change_city(struct city * c, int new_population);
void print_city(struct city * c);

#endif
