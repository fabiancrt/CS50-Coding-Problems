#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
        if(argc!=2)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    for(int i=0;i<strlen(argv[1]);i++)
    {
        if(!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
        int k = atoi(argv[1]);

        string nor = get_string("Plaintext: ");
        printf("Ciphertext: ");

        for(int i=0;i<strlen(nor);i++)
        {   if(isupper(nor[i]))
            printf("%c",(nor[i]-65 + k )%26 + 65);
            else if(islower(nor[i]))
            printf("%c",(nor[i]-97 + k )%26 + 97);
            else
            printf("%c",nor[i]);
        }
        printf("\n");
}
