//
// Created by pxndxdev on 11/01/2023.
//

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "pieces.h"

void move_pawn(struct pawn *p, int squares) {
    if (p->color == 0) {
        if (p->rank == 1) {
            p->rank += squares;
        } else {
            p->rank += 1;
        }
    }
    else {
        if (p->rank == 6) {
            p->rank -= squares;
        } else {
            p->rank -= 1;
        }
    }
}