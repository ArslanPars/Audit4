// Task4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include<string.h>

using namespace std;

int main()
{
	char text[1000];
	int i;
	int sents = 0;
	printf("Enter the sentence: ");
	gets_s(text);
	for (i = 0; i < strlen(text); ++i) {
		if (text[i] == '.' || text[i] == '!' || text[i] == '?') {
			++sents;
		}
	}
	printf("You entered %d sentences: \n", sents);
    return 0;
}

