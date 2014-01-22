/* nFlood - Flood-it puzzle game on the terminal.
 * Copyright (C) 2011-2014  Alexandre Dantas <eu@alexdantas.net>
 * Copyright (C) 2014 Yu-Jie Lin <livibetter@gmail.com>
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

#ifndef ENGINE_H_DEFINED
#define ENGINE_H_DEFINED

#include "game.h"

/* Pre-defined sizes of the User Interface (including the `board`)*/
#define GAME_UI_WIDTH  44
#define GAME_UI_HEIGHT 16

/** Contains global information about nCurses */
struct engine_t
{
	int width;
	int height;
	int center_top;  /**< y offset to center the game */
	int center_left; /**< x offset to center the game */
};

/** Global `engine` data structure. */
struct engine_t engine;

/** Initializes nCurses */
int engine_init();

/** Clears nCurses - must be called before quitting the game! */
void engine_exit();

/** Draws the entire game board (with all those colored squares) */
void engine_draw_ui(struct game_board *board, int hscore);

/** Draws the colored `board` with the game. */
void engine_draw_board(struct game_board *board);

void change_color(int color);

bool is_hit(int x, int y, int tx, int ty, int tw, int th);

#endif /* ENGINE_H_DEFINED */

