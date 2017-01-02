

#include "dirent.h"

#include <stdio.h>

#include <conio.h>

#include <string.h>







int main()

{

	DIR *dir;

	struct dirent *ent;

	char arr[] = "C:\\Users\\pgunaraj\\Downloads\\DataR\\";

	if ((dir = opendir(arr)) != NULL)

	{

		while ((ent = readdir(dir)) != NULL) {

			if (strcmp(ent->d_name, ".") != 0 && strcmp(ent->d_name, "..") != 0)

			{

				strcat(arr, ent->d_name);

				printf("%s",arr);

			}

		}

		closedir(dir);

	}

	else {

		/* could not open directory */

		perror("");

		return EXIT_FAILURE;

	}

	_getch();

	return 0;

}
