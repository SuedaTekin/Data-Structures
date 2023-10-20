#include <stdio.h>
#include <stdlib.h>

struct rectangular_prism
{
    int height;
    int length;
    int width;
};

int main() {
    struct rectangular_prism obj;

    // Create a pointer to point object "obj"
    struct rectangular_prism* p = &obj;

    obj.height = 10; // Corrected: Added a semicolon
    p->width = 15;
    obj.length = 40; // Corrected: Added a semicolon

    printf("Height: %d\n", obj.height);
    printf("Width: %d\n", p->width);
    printf("Length: %d\n", obj.length);

    return 0;
}

