#include <stdio.h>
#include <stdlib.h>

struct physical_info {
    int length;  // Corrected member name from "lenght" to "length"
    int weight;
};

struct record {
    int salary;
    int working_hour;
    struct physical_info man;
};

int main() {  // Added return type int to main
    struct record s1;
    s1.salary = 10000;
    s1.working_hour = 6;

    s1.man.length = 180; // Corrected member name from "lenght" to "length"
    s1.man.weight = 78; // Corrected the typo in the member name "weigth" to "weight"

    // Add a return statement to indicate successful execution
    return 0;
}

