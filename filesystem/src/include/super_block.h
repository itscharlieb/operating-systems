/**
* @author Charlie Bloomfield
* March 15, 2015
*/

#ifndef SUPER_BLOCK_H
#define SUPER_BLOCK_H

#include "types.h"
#include "constants.h"

//used to write and read the super block from disk
void super_block_to_string(byte* buffer);

#endif