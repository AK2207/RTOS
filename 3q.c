#include<stdio.h>

int strlength(char str[]);

int main() {
    char string[200];
   

   	FILE *fptr;
    fptr=fopen("read.txt","r");
   
    for(int i=0; !feof(fptr);i++)
    {
     fscanf(fptr,"%c", &string[i]);	
    }
   
   fclose(fptr);
   
   printf("From file: %s\n",string);
   printf( "\nString read from the file is :%d\n",strlength(string));

    return 0;  

}


int strlength(char str[]) {

    int i =0;

    while(str[i]!= '\0') {
        i++;
    }
    return i-1;
}