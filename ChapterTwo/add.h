// Example header file for add
// header guard allows preprocessor to compile then defines the identifier, meaning it can only happen once and we're guarded from duplicate definitions
// If add.h is included in two files, then both are inlcuded in main, this guard is necessary (always use anyway though - best practice)
#ifndef LEARNCPP_CHAPTERTWO_ADD_H
#define LEARNCPP_CHAPTERTWO_ADD_H

int add(int x, int y);

#endif