#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    char ch;

    // Open file in read mode
    file=fopen("output.txt","r");

    if(file==NULL)
    {
        printf("File is not found.");
    }
    else
    {
        // Read and printf characters until EOF
        do
        {
            ch=getc(file);
            if(ch!=EOF)
            {
                putchar(ch);
            }
        }
        while(ch!=EOF);
    }
    fclose(file);
    printf("\nReading completed.");

    return 0;
}
