﻿// Task2.cpp: определяет точку входа для консольного приложения.
//

//Дано рядок символів. Визначити, чи є цей рядок словом.

#include "stdafx.h"

#include <string.h>

using namespace std;

int main()
{
	char str[32];
	printf("Enter the word: ");
	bool word = 1;
	int i;
	gets_s(str);
	for (i = 0; i < strlen(str); ++i) {
		if ((str[i] > 'Z' || str[i] < 'A') && (str[i] > 'z' || str[i] < 'a')) {
			word = 0;
			break;
		}
	}
	if (word) {
		printf("It is a word\n");
	}
	else {
		printf("It is not a word\n");
	}
	return 0;
}
