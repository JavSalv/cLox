#ifndef clox_chunk_h
#define clox_chunk_h

#include "common.h"
#include "value.h"



typedef enum{
    OP_CONSTANT,
    OP_CONSTANT_LONG,
    OP_RETURN
}OpCode;

/// @brief Representa un conjunto de bytecodes (un mismo scope?).
typedef struct {
    int count;              //Numero de bytes/instrucciones que contiene.
    int capacity;           //Capacity es el número de bytes que caben en el chunk.
    uint8_t* code;          //Las instrucciones que contiene.
    int* lines;             //Correspondencia entre lineas reales y bytecodes.
    ValueArray constants;   //Constantes del chunk: numeros, strings, etc.
}Chunk;


/// @brief Inicializa un chunk vacío.
/// @param chunk Chunk a inicializar.
void initChunk(Chunk* chunk);

/// @brief Escribe un bytecode en el chunk.
/// @param chunk Chunk.
/// @param byte Byte a escribir??
/// @param line Linea que contiene la instruccion que genera el bytecode.
void writeChunk(Chunk* chunk, uint8_t byte, int line);

int addConstant(Chunk* chunk, Value value);

void freeChunk(Chunk* chunk);


#endif
