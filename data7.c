#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student_record
{
    int ID;
    char name[100];
};

int main()
{
    struct student_record group[2];

    group[0].ID = 200710;
    strcpy(group[0].name, "doddy");

    group[1].ID = 200711;
    strcpy(group[1].name, group[0].name);

    printf("Student 1 - ID: %d, Name: %s\n", group[0].ID, group[0].name);
    printf("Student 2 - ID: %d, Name: %s\n", group[1].ID, group[1].name);

    return 0;
}

