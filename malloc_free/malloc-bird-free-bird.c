#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>

/**
 * playFreeBirdUponFreeingMallocedBird - plays Free Bird solo upon freeing the
 * malloced 'bird' string, which is a copy of s
 * @s: useless contents of the 'bird' string.
 * Return: Nothing, unless you count the youtube link that opens.
 */
void playFreeBirdUponFreeingMallocedBird(char *s)
{
	char *bird;
	unsigned long int i;
	int r;

	srand(time(NULL));
	r = rand();

	bird = malloc(sizeof(char) * strlen(s) + 2);
	for (i = 0; i < strlen(s) + 2; i++)
	{
		bird[i] = s[i];
	}

	printf("%s\n", bird);

	while (bird)
	{
		if(r < 90000)
		{
			free(bird);
			break;
		}
		else
		{
			r = rand();
		}
	}
	if (bird != NULL)
	{
		printf("FREEE BIIIRDD IS FFREEEEE!!!\n");
#if defined(_WIN32)
		/*For Windows*/
		system("start \"\" \"https://youtu.be/3GSbJkU9Lmw?si=tSHlrDw9ClL8VHvZ&t=7\"");
#elif defined(__APPLE__)
		/*For macOS*/
		system("open https://youtu.be/3GSbJkU9Lmw?si=tSHLrDW9ClL8VHvZ&t=7");
#else
		 /*For Linux and other Unix-like systems*/
		system("xdg-open https://youtu.be/3GSbJkU9Lmw?si=tSHLrDW9ClL8VHvZ&t=7");
#endif
	}
	scanf("\n");
}

int main(void)
{
	playFreeBirdUponFreeingMallocedBird("solo");

	return (0);
}
