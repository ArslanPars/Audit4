// Task1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <string.h>

using namespace std;

int main()
{
	char word[50];
	int freq[256];
	int i;
	printf("Enter the word:");
	gets_s(word);
	for (i = 0; i < 256; ++i) {
		freq[i] = 0;
		}
		for (i = 0; i < strlen(word); ++i) {
			++freq[word[i]];
		}
		for (i = 0; i < 256; ++i) {
			if (freq[i] != 0) {
				printf("%c: %d\n", i, freq[i]);
			}
		}
    return 0;
}