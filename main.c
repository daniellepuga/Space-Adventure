// Main function for our Space Exploration.

#include "main.h"

int main (int argc, char *argv[]) {
  char *name;
  name = intro();
  planet(name);
  exit();
}

char *start(void){
    char *name = malloc(sizeof(char *));

    printf("You've made it to the solar system!\n");
    printf("There are 9 planets to explore.\n");
    printf("What is your name?\n");
    scanf("%s", name);

    return name;
}


