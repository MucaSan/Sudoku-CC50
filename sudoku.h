/****************************************************************************
 * sudoku.h
 *
 * CC 50
 * Pset 4
 *
 * Compile-time options for the game of Sudoku.
 ***************************************************************************/

// game's author
#define AUTHOR "Samuel Villar"

// game's title
#define TITLE "Sudoku"

// banner's colors
#define FG_BANNER COLOR_CYAN
#define BG_BANNER COLOR_BLACK

// grid's colors
#define FG_GRID COLOR_WHITE
#define BG_GRID COLOR_BLACK

// border's colors
#define FG_BORDER COLOR_WHITE
#define BG_BORDER COLOR_RED

// logo's colors
#define FG_LOGO COLOR_BLUE
#define BG_LOGO COLOR_WHITE

// define number colors
#define FG_NUM COLOR_RED
#define BG_NUM COLOR_BLACK

// define warning colors
#define  FG_WAR COLOR_RED
#define  BG_WAR COLOR_BLACK

// define color case win.
#define FG_WON COLOR_GREEN
#define BG_WON COLOR_BLACK
// nicknames for pairs of colors
enum { PAIR_BANNER = 1, PAIR_GRID, PAIR_BORDER, PAIR_LOGO, PAIR_NUM, PAIR_WON, PAIR_WAR};
