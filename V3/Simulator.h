#ifndef SIMULATOR_H
#define SIMULATOR_H


// General constants for the simulation

// Maximum number of programs in the command line plus daemons programs
#define PROGRAMSMAXNUMBER 20

#define MAXLINELENGTH 150

#define MAXFILENAMELENGTH 64

// Extern variables
extern int MAINMEMORYSIZE;
extern int PROCESSTABLEMAXSIZE;

enum Options {
NONEXISTING_OPT,
#define OPTION(name,defValue) name ## _OPT, // name ## _OPT concatena y define los enumerados *_OPT
#include "Options.def"
#undef OPTION
LAST_OPT,
};

#endif
