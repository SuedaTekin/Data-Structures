#include <stdio.h>
#include <stdlib.h>

struct rectangular_prism
{
    int height;
    int width;
    int length;  // Corrected the member name
};

int volume(struct rectangular_prism x)
{
    return x.height * x.width * x.length;
}

int area(struct rectangular_prism x)
{
    return 2 * x.width * x.length +
           2 * x.length * x.height +
           2 * x.width * x.length;
}

int main()
{
    struct rectangular_prism prism1;
    prism1.height = 10;
    prism1.width = 5;
    prism1.length = 15;

    int vol = volume(prism1);
    int surf_area = area(prism1);

    printf("Volume: %d\n", vol);
    printf("Surface Area: %d\n", surf_area);

    return 0;
}







