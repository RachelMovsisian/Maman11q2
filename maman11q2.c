#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int suffix(char str[], char c)
{
    //Prints all the sofix of str that starts with c, and return the number of suffix.
    int sum=0;
    char *ret;
    ret = strchr(str, c);
    if(ret==NULL)
        return sum;
        printf("%s\n",ret);
        sum++;
        ret++;
      while(ret!='\0')
    {
        ret=strchr(ret,c);
        if(ret==NULL)
            return sum;
        printf("%s\n",ret);
        ret++;
        sum++;
    }

   return sum;
}




int main()
{
    char c;
    char s[128];
    int num=0; //number of suffix
    printf("Please enter char and than string for suffix \n");
    scanf("%c %s",&c,s);
    num=suffix(s,c);
    printf("The string has %d suffix \n", num);
    return 0;
}
