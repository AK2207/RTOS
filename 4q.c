//4. Read a text stored in a file. Count the number of words and lines in the file. Use functions.

#include<stdio.h>

void countLandW(FILE *f,int *a, int*b){
int lineCount=0;
char c;
while(!feof(f)){
c=fgetc(f);	
if(c=='\n') *a+=1;
if(c==' ') *b+=1;
}	
}

int main()
{   FILE *fptr;
	fptr=fopen("read1.txt","r");
	int lines=0, words=0;
	int *a,*b;
	a=&lines;
	b=&words;
	countLandW(fptr,a,b);
	fclose(fptr);
	printf("\nWords=%d\nLines=%d\n",*b,*a);
	return 0;
}