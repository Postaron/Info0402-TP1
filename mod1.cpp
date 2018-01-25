// mod1.cpp

#include "mod1.h"

#include "mod2.h"

int twice(int x) {
	return 2 * x;
}

int fun(int u) {
	return incr(twice(u));
}
