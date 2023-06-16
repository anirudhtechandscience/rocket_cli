/*     
Copyright 2023 Anirudh Menon

This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along with this program. If not, see <https://www.gnu.org/licenses/>. */


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
	char* lang = malloc(3 * sizeof(char));
	if (lang == NULL) {
		printf("Illegal memory error : 1. In order to protect your computer, the program will not proceed\n");
		return 1;
	}
	printf("       /  \\  \n");
	printf("      /    \\  \n");
	printf("     /      \\  \n");
	printf("    /        \\   \n");
	printf("   /          \\   \n");
        printf("   |           |  \n");
	printf("   |           |  \n");
        printf("   |           |  \n");
        printf("   |           |  \n");
	printf("   |           |  \n");
	printf("   |           |  \n");
	printf("   |           |  \n");
	printf("   |           |  \n");
	printf("   |           |  \n");
        printf("  /  ( (§è!çàç!è \\   \n");
	printf(" /  è§ùm(§è;::;gg \\  \n");
	printf("/   é çàŝùù!è(è    \\    \n\n\n\n\n\n");
	printf("Welcome to the game: Fly to the moon.\nIn this game you will fly to the moon in Artemis 3.\n3\n");
	sleep(1);
	printf("2\n");
	sleep(1);
	printf("1\n");
	sleep(1);
	printf("Launch!!!!\n");
	printf("Please wait while this rocket goes to the moon.\nThis might take some time...\n");
	sleep(10);
	printf("Oh no!!!!\n");
	sleep(1);
	printf("The rocket software has crashed.\nWell,you should have known it when you wrote such important code in Ruby.\n");
	sleep(1);
	printf("You have a choice: Rewrite the code in Go, or rewrite it in C\n");
	sleep(1);
	printf("You decide.\n");
	scanf("%s",lang);
	if (strcmp(lang, "Go") == 0) {
        	printf("Oh man.\n");
		sleep(1);
		printf("The garbage collector failed.\n");
		sleep(1);
		printf("Well you deserve this for using Go on a mission critical operation.\nYou die.\n");
		return 0;
    	} else if (strcmp(lang, "C") == 0) {
        	printf("You chose C.\nIt worked!\nNow when you go back home you can flex. :)\n");
		sleep(2);
    	} else {
        	printf("Invalid choice.\n");
		return 0;
        }	
	free(lang);
	printf("You returned home\n");	
	return 0;
}
