    #include <stdio.h>


    #include <stdlib.h>


    #include <string.h>


     char * string_repeat( int n, const char * s ) 


    { 


     size_t slen = strlen(s);  


    char * dest = calloc(n*slen+1, sizeof(char));   


    int i; char * p;  


    for ( i=0, p = dest; i < n; ++i, p += slen ) 


    {    


    memcpy(p, s, slen);  


    }  


    return dest;


    } 


    int main() 


    {  


    printf("%s", string_repeat(5, "ha"));  


    return 0;


    }
