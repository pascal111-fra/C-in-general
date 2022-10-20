/*
* by Mishary (Ahmed Crow)
*
* C++ 98
*
*/


#include <cstdio>
#include <cstdlib>
#include <cstring>


void printstring(const char*);

int main(void)
{

    const char* suse="Hello World!";
    const size_t p_MAX=strlen(suse);
    char* p=(char*)malloc(sizeof(char)*(p_MAX+1));


    strcpy(p, suse);

    printstring(p);


    free(p);
    return 0;
}

void printstring(const char* str)
{

    char* p_temp;
    int l=strlen(str);

    p_temp=(char*)str;

    for(int i=0; i<l+1; ++i){
        putchar(*p_temp);
        p_temp++;
        }

}

