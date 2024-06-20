#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool file_exists(const char *filename);

int main()
{
    char name[20];
    char name2[20];
    int age;
    float height;

    printf("Name: ");
    scanf("%s", &name);

    printf("Nachname: ");
    scanf("%s", &name2);

    printf("Alter: ");
    scanf("%d", &age);

    printf("Groesse: ");
    scanf("%f", &height);

    FILE* filePointer;
    filePointer = fopen("Fabian_Schieder.csv", "a");

    if(!filePointer){
        printf("Fehler bein Oeffnen des Files\n\n");
    }

    if(!file_exists("Fabian_Schieder.csv")){
        fprintf(filePointer, "Name;Zuname;Alter;Groesse\n");
    }

    fprintf(filePointer, "%s;%s;%d;%f\n", name, name2, age, height);

return 0;
}

bool file_exists(const char *filename)
{
    FILE* filePointer;
    filePointer = fopen(filename, "r");

    if(!filePointer){
        return 0;
    }

    return 1;
}
