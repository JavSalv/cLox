#ifndef clox_memory_h
#define clox_memory_h

#include "common.h"

#define GROW_FACTOR 2

#define GROW_CAPACITY(_capacity) ((_capacity) < 8 ? 8 : (_capacity) * GROW_FACTOR);

#define GROW_ARRAY(_type, _pointer, _oldCount, _newCount) (_type*)reallocate(_pointer,sizeof(_type)*(_oldCount),sizeof(_type)*(_newCount));

#define FREE_ARRAY(_type, _pointer,_oldCount) reallocate(_pointer, sizeof(_type)* (_oldCount), 0);

void* reallocate(void* pointer, size_t oldSize, size_t newSize);

#endif