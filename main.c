/*
 * File:   main.c
 * Author: <JD>
 */

#define _CRT_SECURE_NO_WARNINGS
 
#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 100

/*
 * Programming Assignment 1
 */
int main(int argc, char** argv)
{
	// IMPORTANT: Only add code in the section
	// indicated below. The code I've provided
	// makes your solution work with the 
	// automated grader on Coursera
	char input[MAX_LENGTH];
	fgets(input, MAX_LENGTH, stdin);
	while (input[0] != 'q')
	{
		// Add your code between this comment
		// and the comment below. You can of
		// course add more space between the
		// comments as needed
		
        //Array of strings containing symbols of the first 10 elements of the periodic
        //table
        char *symbols[] = {"H", "He", "Li", "Be", "B", "C", "N", "O", "F", "Ne"};

        //counter variable
		int i = 0;

        //iteration
        while (i<10) {
            printf("%s\n", symbols[i]);
            i++;
        }
		
		// Don't add or modify any code below
		// this comment
		fgets(input, MAX_LENGTH, stdin);
	}

	return 0;
}
