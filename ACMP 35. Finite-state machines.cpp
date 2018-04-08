// ACMP 35. Finite-state machines.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int k, n, m;
	cin >> k;
	while (k - 1) {
		cin >> n >> m;
		cout << 19 * m + (n + 239)*(n + 366) / 2 << "\n";
	}
}
