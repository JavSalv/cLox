#ifndef clox_debug_h
#define clox_debug_h

#include "chunk.h"


/// @brief Desensambla un chunk.
/// @param chunk chunk a desensamblar.
/// @param name nombre para identificar al chunk.
void disassembleChunk(Chunk* chunk, const char* name);

/// @brief Desensambla una instrucción dentro de un chunk.
/// @param chunk Chunk que contiene la instrucción.
/// @param offset Offset de la instrucción dentro del chunk.
/// @return Offset de la siguiente instruccion a desensamblar
int disassembleInstruction(Chunk* chunk, int offset);

#endif