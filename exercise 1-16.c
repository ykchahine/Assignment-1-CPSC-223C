#include <stdio.h>
#define MAXLENGTH 20
int getline(char [],int);
void copy(char [],char []);
int main()
{
    int len,max=0;
    char line[MAXLENGTH],longest[MAXLENGTH];
    while((len=getline(line,MAXLENGTH))>0)
        if(len>max){
            max=len;
            copy(longest,line);
        }
    if(max>0){
        if(max>MAXLENGTH){
            printf("\n\nStorage limit exceeded by : %d",max-MAXLENGTH);
            printf("\nString length : %d",max);
            printf("\n%s",longest);
        }
        else
            printf("%s",longest);
    }
    printf("\n");
    return 0;
}




int getline(char line[],int limit)
{
    int i,c;
    
    for(i=0;(i<limit-1)&&(((c=getchar())!=EOF)&&(c!='\n'));i++)
        line[i]=c;
	
    if(i==(limit-1))
    {
	line[i]='\0';
	while(((c=getchar())!=EOF)&&(c!='\n'))
	{
            ++i;
        }
    }
    else 
    {
	if(c=='\n')
	{        
	    line[i]=c;
	    ++i;
	}
	line[i]='\0';
    }   
        
    return i;
}
