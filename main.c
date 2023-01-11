#include <stdio.h>
#include "pieces.h"

int main() {
    // lets create a pawn
    struct pawn p = {.file=0,.rank=1,.color=0};
    // lets print it
    printf("Pawn: %d %d %d\n", p.file, p.rank, p.color);
    // lets move it
    move_pawn(&p, 2);
    // lets print it again
    printf("Pawn: %d %d %d\n", p.file, p.rank, p.color);
    return 0;
}
