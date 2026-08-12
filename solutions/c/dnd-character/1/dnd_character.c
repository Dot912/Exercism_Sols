#include "dnd_character.h"
#include <stdlib.h>
#include <time.h>
#include <math.h>


int ability(void)
{

    int dice1 = (rand() % 6) + 1;
    int dice2 = (rand() % 6) + 1;
    int dice3 = (rand() % 6) + 1;
    int dice4 = (rand() % 6) + 1;

    int min = dice1;
    if (dice2 < min) 
    {
        min = dice2;
    }
    if (dice3 < min) 
    {
        min = dice3;
    }
    if (dice4 < min) 
    {
        min = dice4;
    }
    
    int sum = dice1 + dice2 + dice3 + dice4;
    return sum - min;
    
}

int modifier(int score)
{
    return (int)floor((score - 10) / 2.0);
}

dnd_character_t make_dnd_character(void)
{
    srand(time(NULL));
    
    dnd_character_t character;
    
    character.strength = ability();
    character.dexterity = ability();
    character.constitution = ability();
    character.intelligence = ability();
    character.wisdom = ability();
    character.charisma = ability();
    
    int con_modifier = modifier(character.constitution);
    character.hitpoints = 10 + con_modifier;
    
    return character;
}
