#include "hash_tables.h"
#include <stdlib.h>

typedef struct move_t {
	/* WIP */
	char player; /* X or O */
} move_t;

/**
 * main - plays tic-tac-toe on a hashtag-shapes grid hash table
 *
 * @board: hashtag grid shaped hash table to play tic-tac-toe on
 * @move: move to make, including where on the board and what player
 *
 * Return:
 * 'X' ASCII code 88 if X won the game after this move,
 * 'O' ASCII code 79 if O won the game after this move,
 * '-' ASCII code 45 if the game ended in a tie after this move,
 * '#' ASCII code 35 if the move was made successfully and the game has not ended, or
 * '\0' ASCII code 0 (NUL) on error (i.e. invalid move)
 */
char tic_tac_toe_move(hash_table_t board, move_t move)
{
	return ('#');
}
