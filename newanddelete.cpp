#ifndef ARDUINO || ARDUINO < 100
#include "newanddelete.h"

void* operator new(size_t size) {
	return malloc(size);
}

void operator delete(void* ptr) {
	if (ptr != NULL) {
		free(ptr);
	}
}

#endif
