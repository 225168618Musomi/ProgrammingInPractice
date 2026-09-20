#include <stdio.h>
#include <string.h>

int main()
{
    char municipality[50];

    printf("Enter Municipality Name: ");
    fgets(municipality, sizeof(municipality), stdin);

    
    municipality[strcspn(municipality, "\n")] = '\0';

    printf("Municipality: %s\n", municipality);

    return 0;
}
