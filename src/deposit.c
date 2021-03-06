#include <stdio.h>
#include "deposit.h"

int check(int sum, int time)
{
	if ((sum >= 10000) && (time <= 365) && (time >= 0))
		return 1;
	return 0;
}

float calc(int sum, int time)
{
	if (time <= 30)
		return (float) sum * 0.9;
	if ((time > 30) && (time <= 120) && (sum <= 100000))
		return (float) sum * 1.02;
	if ((time > 30) && (time <= 120) && (sum > 100000))
		return (float) sum * 1.03;
	if ((time > 121) && (time <= 240) && (sum <= 100000))
		return (float) sum * 1.06;
	if ((time > 121) && (time <= 240) && (sum > 100000))
		return (float) sum * 1.08;
	if ((time > 241) && (time <= 365) && (sum <= 100000))
		return (float) sum * 1.12;
	if ((time > 241) && (time <= 365) && (sum > 100000))
		return (float) sum * 1.15;
	return 0;
}

