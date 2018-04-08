// ACMP 66.Keyboard.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main() {
	char c, *k = "qwertyuiopasdfghjklzxcvbnmq";
	cin >> c;
	for (int i = 0; i < 26; ++i) {
		if (c == k[i]) {
			cout << k[i + 1];
			break;
		}
	}
}
