//
// Created by pxndxdev on 11/01/2023.
//

#ifndef CHESSMECHANICS_PIECES_H
#define CHESSMECHANICS_PIECES_H

/**
 * @brief A struct representing a pawn.
 * @param id The id of the pawn. 0 is the first pawn, 15 is the last pawn.
 * @param file The file of the pawn. 0 is the first file, 7 is the last file, instead of a-h.
 * @param rank The rank of the pawn. 0 is the first rank, 7 is the last rank, instead of 1-8.
 * @param color The color of the pawn. 0 is white, 1 is black.
 */
struct pawn {
    int id;
    int file;
    int rank;
    int color;
};
void move_pawn(struct pawn *p, int squares);

#endif //CHESSMECHANICS_PIECES_H
