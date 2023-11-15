#ifndef clox_chunk_h
#define clox_chunk_h

#include "common.h"
#include "value.h"


typedef enum{
    OP_CONSTANT,
    OP_RETURN
}OpCode;

//Un chunk representa un conjunto de bytecodes (un mismo scope?).
//Count se corresponde con el número de bytes/instrucciones que contiene;
//Capacity es el número de bytes que caben en el chunk;
//En constants se almacenan las constantes del chunk (enteros, strings, etc).
typedef struct {
    int count;
    int capacity;
    uint8_t* code;
    int* lines;
    ValueArray constants;
}Chunk;

void initChunk(Chunk* chunk);
void writeChunk(Chunk* chunk, uint8_t byte, int line);
int addConstant(Chunk* chunk, Value value);
void freeChunk(Chunk* chunk);


#endif
