#include <stdio.h>

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

    fprintf(filePointer, "Name;Zuname;Alter;Groesse\n");
    fprintf(filePointer, "%s;%s;%d;%f", name, name2, age, height);

return 0;
}
