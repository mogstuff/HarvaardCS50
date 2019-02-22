#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    int spaces;
    int hashes;
    int hashes2;

    do
    {
        height = get_int("Height:");
    }
    while (height < 1 || height > 8);

    for(int lineNumber = 0; lineNumber < height; lineNumber ++)
    {

        // print lineNumber no of spaces
        for(spaces = height - lineNumber ; spaces > 1; spaces--)
        {
             printf(" ");
        }

        // print lineNumber number of #
        for(hashes = 0; hashes < lineNumber + 1; hashes ++)
        {
        printf("#");
        }

       printf(" #");


        // print right hand side of pyramid
        for(hashes2 = 0; hashes2 < hashes; hashes2 ++)
        {
             printf("#");
        }


        printf("\n");

    }




}
