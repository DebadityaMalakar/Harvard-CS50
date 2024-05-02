#include <stdio.h>

int main(void) {
    char ag;
    printf("Do ya agree ");
    scanf(" %c", &ag);

    if (ag == 'y' || ag == 'Y') {
        printf("Agreed \n");
    } else if (ag == 'n' || ag == 'N') {
        printf("Not agreed \n");
    }

    return 0;
}
