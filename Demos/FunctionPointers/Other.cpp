#include "Other.h"

/// <summary>
/// 
/// </summary>
/// <param name="a"></param>
/// <param name="b"></param>
/// <param name="handler">Function with parameter of an int</param>
void doMath(int a, int b, funcPtr handler)
{
	int c = a + b;
	handler(c);
}
