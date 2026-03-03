#pragma once
typedef void(*funcPtr)(int);

void doMath(int a, int b, funcPtr handler);