/* Std includes, u know the drill */
#include <stdio.h>
#include <stdlib.h>

/* functions */
void menu();

/* vars */
char option;
char *filename = "database.txt";
char new_entry[61];
/* File config ma man */
FILE *fp = fopen(filename, "w");

/* Start the main menu */
void menu(){
    printf("Press (c) to create\n");
    printf("Press (r) to remove\n");
    printf("Press (u) to update\n");
    printf("Press (d) to delete\n");

    /* Get user option */
    printf("Option:");
    scanf("%c", &option);

    /* Validation */
    switch (option){

        case 'c':
            /* Create some entry on the db */
            printf("Type some shit as a new entry:");
            scanf("%s", &new_entry);
            fprintf(fp,"%s\n",new_entry);

            printf("Entry added on the db\n");
            fclose(fp); /*close de db */
            break;

        case 'r':
            printf("U choose r\n");
            break;

        case 'u':
            printf("U choose u\n");
            break;

        case 'd':
            printf("U choose d\n");
            break;

        default:
            printf("Bro, u typed something wrong i did not understand\n");

            }
    }

/* Std func, where shit happens */
int main(){

    if (fp == NULL){
        printf("Error opening the file %s", filename);
        return -1;

    }
    menu();
    return (0);
}
