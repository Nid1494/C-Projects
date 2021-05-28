#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp,*cfp;
    char ch,filename[100],c;
    int i,pos;
    fp=fopen("Reverse Function.txt","w");
    fprintf(fp,"Reverse Text and Copy File");
    fclose(fp);
    fp=fopen("Reverse Function.txt","r");
    printf("Contents of the file: \n \t \t \t");
    while(ch!=EOF)
    {
    	ch=getc(fp);
    	printf("%c",ch);
	}
    if(fp==NULL)
    {
       printf("\t File does not exist..");
    }
    fseek(fp,0,SEEK_END);
    pos=ftell(fp);
    i=0;
    printf("\n \n Reverse Order of the content: \n \t \t \t");
    while(i<pos)
    {
        i++;
        fseek(fp,-i,SEEK_END);
        ch=fgetc(fp);
        printf(" %c",ch);
    }
    fclose(fp);
    printf("\n Enter the filename to open for reading: ");
    scanf("%s",filename);
    fp=fopen("Reverse Function.txt","r");
    if(fp==NULL)
    {
        printf("Cannot open file %s \n",filename);
        exit(0);
    }
    printf("Enter the filename to open for writing: ");
    scanf("%s",filename);
    cfp=fopen("Copy Reverse Function.txt","w");
    if(cfp==NULL)
    {
        printf("Cannot open file %s \n",filename);
        exit(0);
    }
    c=fgetc(fp);
    while (c!=EOF)
    {
        fputc(c,cfp);
        c=fgetc(fp);
    }
    printf("\nContents copied to: %s",filename);
    fclose(fp);
    fclose(cfp);
}
