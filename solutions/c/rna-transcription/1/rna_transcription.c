#include "rna_transcription.h"
#include <string.h>
#include <stdlib.h>

char *to_rna(const char *dna)
{
    size_t i = 0;
    char *rna = malloc(strlen(dna) + 1);
    
    while(i<strlen(dna))
    {
        if (dna[i]== 'T')
        {
            rna[i] = 'A';
        }
        else if (dna[i] == 'C')
        {
            rna[i] = 'G';
        }
        else if (dna[i] == 'A')
        {
            rna[i] = 'U';
        }
        else if (dna[i] == 'G')
        {
            rna[i] = 'C';
        }
        i++;
}
    
    rna[i] = '\0';
    return rna;
}
