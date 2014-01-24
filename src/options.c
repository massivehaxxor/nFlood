/* nFlood - Flood-it puzzle game on the terminal.
 * Copyright (C) 2014 Alexandre Dantas <eu@alexdantas.net>
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

#include <stdbool.h>
#include "options.h"

void options_init()
{
	options.center = false;
	options.colors = true;
}

