#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "ex1.h"

/* Returns the number of times LETTER appears in STR.
There are two different ways to iterate through a string.
1st way hint: strlen() may be useful
2nd way hint: all strings end in a null terminator */
int num_occurrences(char *str, char letter) {
    /* TODO: implement num_occurrences */
    char * p = str;
    char ch;
    int count = 0;

    if (str)
    {
        while ((ch = *p++))
            count += ch == letter;
    }
    
    return count;
}

/* Populates DNA_SEQ with the number of times each nucleotide appears.
Each sequence will end with a NULL terminator and will have up to 20 nucleotides.
All letters will be upper case. */
void compute_nucleotide_occurrences(DNA_sequence *dna_seq) {
    /* TODO: implement compute_nucleotide_occurrences */
    dna_seq->A_count = dna_seq->C_count = dna_seq->G_count = dna_seq->T_count = 0;

    char *p = dna_seq->sequence;
    char nuleotide;

    while (true)
    {
        switch (*p)
        {
            case 'A': ++dna_seq->A_count; break;
            case 'C': ++dna_seq->C_count; break;
            case 'G': ++dna_seq->G_count; break;
            case 'T': ++dna_seq->T_count; break;
            case '\0':
                return;
            default: 
                fprintf(stderr, "invalid nuleotide %c\n", *p);
                exit(1);
        }
        ++p;
    }
}
