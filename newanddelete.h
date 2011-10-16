#pragma once

// for size_t, malloc, and free
#include <stdlib.h>

/**
 * Define the 'new' and 'delete' operators.
 *
 * (Dynamic allocation on microcontrollers is generally discouraged, as it
 * uses some memory overhead in a limited space. Prefer static allocation.)
 */

void* operator new(size_t size);

void operator delete(void* ptr);

