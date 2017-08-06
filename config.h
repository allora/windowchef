/* See the LICENSE file for copyright and license details. */

#ifndef _CONFIG_H
#define _CONFIG_H

#define BORDER_WIDTH 5

/* colors are HTML colors that start in "0x" instead of "#" */
#define COLOR_FOCUS 0x97a293
#define COLOR_UNFOCUS 0x393638

/* gap between the window and the edge of the monitor
 * when snapping or vertically/horizontally maximizing window */
#define GAP 0

#define GRID_GAP 0

/* where to place the cursor when moving/resizing the window */
#define CURSOR_POSITION CENTER

/* number of starting groups, can be modified with waitron at run-time */
#define GROUPS 10

/* focus windows after hovering them with the pointer */
#define SLOPPY_FOCUS true

/* respect window resize hints */
#define RESIZE_HINTS false

/* if true, new windows will be assigned to the last activated group */
#define STICKY_WINDOWS false

/* if true, paint borders */
#define BORDERS true

/* if true, focus last window when the currently focused window is unmapped */
#define LAST_WINDOW_FOCUSING true

/* Monitor index to spawn new windows */
#define MONITOR -1

/* Position on the monitor to spawn new windows */
#define WINDOW_POSITION CENTER

/* if true, apply settings on windows when they are set (like border color, border width) */
#define APPLY_SETTINGS true

#endif
