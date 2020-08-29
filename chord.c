#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Function prototypes
char *getchord(string note, string quality);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 3)
    {
        printf("Usage: chord [A-G] [maj/min/aug/dim]\n");
        return 1;
    }

    // Create array for notes with sharp label and flat label
    char *notes_sharp[12] = {"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "A#", "B"};
    char *notes_flat[12] = {"C", "Db", "D", "Eb", "E", "F", "Gb", "G", "Ab", "A", "Bb", "B"};
    char *quality[4] = {"maj", "min", "aug", "dim"};

    // Check if argv[1] and argv[2] are in the array

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (strcmp(argv[1], notes_sharp[i]) == 1 & strcmp(argv[1], notes_flat[i]) == 1 || strcmp(argv[2], quality[j]) == 1)
            {
                return 2;
            }
            else
            {
                getchord(argv[1], argv[2]);
                return 0;
            }

        }
    }
}

// implement function to get notes in a chord
char *getchord(char *note, char *type)
{
    // Create array for notes with sharp label and flat label
    string notes_sharp[12] = {"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "A#", "B"};
    char *notes_flat[12] = {"C", "Db", "D", "Eb", "E", "F", "Gb", "G", "Ab", "A", "Bb", "B"};
    char *quality[4] = {"maj", "min", "aug", "dim"};
    for (int i = 0; i < 12; i++)
    {
        // sharp case
        if (strcmp(note, notes_sharp[i]) == 0)
        {
            if (strcmp(quality[0],type) == 0)
            {
                if (i+4 < 12 & i+7 <12)
                {
                    string chord[3] = {notes_sharp[i], notes_sharp[i+4], notes_sharp[i+7]};
                    printf("%s, %s, %s\n", chord[0], chord[1], chord[2]);
                }
                else if (i+4 < 12 & i+7 >= 12)
                {
                    string chord[3] = {notes_sharp[i], notes_sharp[i+4], notes_sharp[i+7-12]};
                    printf("%s, %s, %s\n", chord[0], chord[1], chord[2]);
                }
                else if (i+4 >= 12 & i+7 >= 12)
                {
                    string chord[3] = {notes_sharp[i], notes_sharp[i+4-12], notes_sharp[i+7-12]};
                    printf("%s, %s, %s\n", chord[0], chord[1], chord[2]);
                }
            }
            else if (strcmp(quality[1],type) == 0)
            {
                if (i+3 < 12 & i+7 <12)
                {
                    string chord[3] = {notes_sharp[i], notes_sharp[i+3], notes_sharp[i+7]};
                    printf("%s, %s, %s\n", chord[0], chord[1], chord[2]);
                }
                else if (i+3 < 12 & i+7 >= 12)
                {
                    string chord[3] = {notes_sharp[i], notes_sharp[i+3], notes_sharp[i+7-12]};
                    printf("%s, %s, %s\n", chord[0], chord[1], chord[2]);
                }
                else if (i+3 >= 12 & i+7 >= 12)
                {
                    string chord[3] = {notes_sharp[i], notes_sharp[i+3-12], notes_sharp[i+7-12]};
                    printf("%s, %s, %s\n", chord[0], chord[1], chord[2]);
                }
            }
            else if (strcmp(quality[2],type) == 0)
            {
                if (i+4 < 12 & i+8 <12)
                {
                    string chord[3] = {notes_sharp[i], notes_sharp[i+4], notes_sharp[i+8]};
                    printf("%s, %s, %s\n", chord[0], chord[1], chord[2]);
                }
                else if (i+4 < 12 & i+8 >= 12)
                {
                    string chord[3] = {notes_sharp[i], notes_sharp[i+4], notes_sharp[i+8-12]};
                    printf("%s, %s, %s\n", chord[0], chord[1], chord[2]);
                }
                else if (i+4 >= 12 & i+8 >= 12)
                {
                    string chord[3] = {notes_sharp[i], notes_sharp[i+4-12], notes_sharp[i+8-12]};
                    printf("%s, %s, %s\n", chord[0], chord[1], chord[2]);
                }
            }
            else if (strcmp(quality[3],type) == 0)
            {
                if (i+3 < 12 & i+6 <12)
                {
                    string chord[3] = {notes_sharp[i], notes_sharp[i+3], notes_sharp[i+6]};
                    printf("%s, %s, %s\n", chord[0], chord[1], chord[2]);
                }
                else if (i+3 < 12 & i+6 >= 12)
                {
                    string chord[3] = {notes_sharp[i], notes_sharp[i+3], notes_sharp[i+6-12]};
                    printf("%s, %s, %s\n", chord[0], chord[1], chord[2]);
                }
                else if (i+3 >= 12 & i+6 >= 12)
                {
                    string chord[3] = {notes_sharp[i], notes_sharp[i+3-12], notes_sharp[i+6-12]};
                    printf("%s, %s, %s\n", chord[0], chord[1], chord[2]);
                }
            }
        }
        // flat case
        else if (strcmp(note, notes_flat[i]) == 0)
        {
            if (strcmp(quality[0],type) == 0)
            {
                if (i+4 < 12 & i+7 <12)
                {
                    string chord[3] = {notes_flat[i], notes_flat[i+4], notes_flat[i+7]};
                    printf("%s, %s, %s\n", chord[0], chord[1], chord[2]);
                }
                else if (i+4 < 12 & i+7 >= 12)
                {
                    string chord[3] = {notes_flat[i], notes_flat[i+4], notes_flat[i+7-12]};
                    printf("%s, %s, %s\n", chord[0], chord[1], chord[2]);
                }
                else if (i+4 >= 12 & i+7 >= 12)
                {
                    string chord[3] = {notes_flat[i], notes_flat[i+4-12], notes_flat[i+7-12]};
                    printf("%s, %s, %s\n", chord[0], chord[1], chord[2]);
                }
            }
            else if (strcmp(quality[1],type) == 0)
            {
                if (i+3 < 12 & i+7 <12)
                {
                    string chord[3] = {notes_flat[i], notes_flat[i+3], notes_flat[i+7]};
                    printf("%s, %s, %s\n", chord[0], chord[1], chord[2]);
                }
                else if (i+3 < 12 & i+7 >= 12)
                {
                    string chord[3] = {notes_flat[i], notes_flat[i+3], notes_flat[i+7-12]};
                    printf("%s, %s, %s\n", chord[0], chord[1], chord[2]);
                }
                else if (i+3 >= 12 & i+7 >= 12)
                {
                    string chord[3] = {notes_flat[i], notes_flat[i+3-12], notes_flat[i+7-12]};
                    printf("%s, %s, %s\n", chord[0], chord[1], chord[2]);
                }
            }
            else if (strcmp(quality[2],type) == 0)
            {
                if (i+4 < 12 & i+8 <12)
                {
                    string chord[3] = {notes_flat[i], notes_flat[i+4], notes_flat[i+8]};
                    printf("%s, %s, %s\n", chord[0], chord[1], chord[2]);
                }
                else if (i+4 < 12 & i+8 >= 12)
                {
                    string chord[3] = {notes_flat[i], notes_flat[i+4], notes_flat[i+8-12]};
                    printf("%s, %s, %s\n", chord[0], chord[1], chord[2]);
                }
                else if (i+4 >= 12 & i+8 >= 12)
                {
                    string chord[3] = {notes_flat[i], notes_flat[i+4-12], notes_flat[i+8-12]};
                    printf("%s, %s, %s\n", chord[0], chord[1], chord[2]);
                }
            }
            else if (strcmp(quality[3],type) == 0)
            {
                if (i+3 < 12 & i+6 <12)
                {
                    string chord[3] = {notes_flat[i], notes_flat[i+3], notes_flat[i+6]};
                    printf("%s, %s, %s\n", chord[0], chord[1], chord[2]);
                }
                else if (i+3 < 12 & i+6 >= 12)
                {
                    string chord[3] = {notes_flat[i], notes_flat[i+3], notes_flat[i+6-12]};
                    printf("%s, %s, %s\n", chord[0], chord[1], chord[2]);
                }
                else if (i+3 >= 12 & i+6 >= 12)
                {
                    string chord[3] = {notes_flat[i], notes_flat[i+3-12], notes_flat[i+6-12]};
                    printf("%s, %s, %s\n", chord[0], chord[1], chord[2]);
                }
            }
        }
    }
    return 0;
}
