/* nFlood - Flood-it puzzle game on the terminal.
 * Copyright (C) 2011-2014 Alexandre Dantas (kure)
 *
 * This file is part of nFlood.
 *
 * nFlood is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * homepage: http://nflood.alexdantas.net
 */

#ifndef GAME_H_DEFINED
#define GAME_H_DEFINED

#include <stdbool.h>

enum cell_colors
{
	BLUE = 1, MAGENTA, RED, YELLOW, GREEN, WHITE
};

enum flooded_state
{
	BOARD_NOT_FLOODED, BOARD_FLOOD
};

#define GAME_WIDTH  44
#define GAME_HEIGHT 16

#define GAME_TABLE_WIDTH  14
#define GAME_TABLE_HEIGHT 14

struct game_cell
{
	int color;
	bool flooded;
};

struct game_board
{
	struct game_cell cell[GAME_TABLE_WIDTH][GAME_TABLE_HEIGHT];
	int finished;
	int flood_count; /** Keeps counting how many cells have been flooded */
	int moves;
	int last_color; /** last flooded color */
};

/** Initializes the `board` with random colors for
 *  all cells, cleaning the `flooded` state.
 */
void game_init(struct game_board *board);

/** Tells if the board is completely flooded.
 */
bool game_is_over(struct game_board *board);

/** Recursive function that floads `board` on `x`/`y`
 *  with `color`.
 */
int flood(struct game_board *board, int x, int y, int color);

/** Returns a random integer between the limits
 *  passed as parameters.
 */
int random_int_between(int upper, int lower);

#endif /* GAME_H_DEFINED */

