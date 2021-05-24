// Main function for our Space Exploration.

#include "main.h"

int main (int argc, char *argv[]) {
  char *name;
  name = start();
  planet_prompt(name);
  exit();
}

char *start(void){
  // Gets the name of the player to reference later on.
    char *name = malloc(sizeof(char *));

    printf("You've made it to the solar system!\n");
    printf("There are 9 planets to explore.\n");
    printf("What is your name?\n");
    scanf("%s", name);

    return name;
}

int random_planet(void){
    // FIXME 
    // needs to return actually random planet_index
    return 2;
}

void *get_planet_info(int p_index){
  // Placeholder - Venus
    venus->planet_name = "Venus";
    venus->planet_desc = "It's very cloudy here!";
    return venus;
}

void planet_prompt(char *name){
  // This is the prompt that runs every time the player
  // enters their name. It asks the player if they want
  // to go to a planet.
    char affirmation = '0';
    int planet_index = -1;
    char *planet_name = malloc(sizeof(char*));

    printf("Nice to meet you, %s. My name is Eliza. I'm an old friend of Alexa.\n", name);
    printf("Let's go on an adventure!");

    while(!Y_or_N_affirmation(affirmation)){
        printf("Shall I randomly choose a planet for you to visit? (Y or N)\n");
        scanf("%s", & affirmation);
        if(Y_or_N_affirmation(affirmation)){
        }
        else{
          printf("Sorry, I didn't get that.\n");
          printf("Shall I randomly choose a planet for you to visit? (Y or N)\n");
        }
    }

    if(affirmation == 'Y'){
        planet_index = random_planet();
    }
    else{
        printf("What planet would you like to visit?\n");
        scanf("%s", planet_name);
        planet_index = lookup_planet(planet_name);
    }
}

int Y_or_N_affirmation(char affirmation){
    return (affirmation == 'Y') || (affirmation == 'N');
}


int lookup_planet(char *planet_name){
    if(strcmp(planet_name, "Venus") != 0){
        printf("Planet not found!");
        return -1;
    }
    return 2; 
}
