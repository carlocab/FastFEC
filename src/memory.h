#pragma once

#include <stdio.h>
#include <stdlib.h>

struct string_type
{
  char *str;
  size_t n;
};
typedef struct string_type STRING;

STRING *newString(size_t size);

void freeString(STRING *s);

// Double the size of the string
int growString(STRING *str);

// Grow the string to the specified size.
// If the new size is less than the old size, keep the old size.
int growStringTo(STRING *str, size_t newSize);

void copyString(STRING *src, STRING *dst);