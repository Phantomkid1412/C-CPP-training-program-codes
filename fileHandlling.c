#include<stdio.h>
int main()
{
    FILE *fp,*fp1;
    //fp=fopen("D:\\collab\\test.txt","w+");
    fp=fopen("D:\\collab\\test.txt","r");
    //fp=fopen("D:\\collab\\test.txt","a+");
    //fp=fopen("D:\\collab\\test.txt","a");
  //  fputs(" Ajey Devgun most beautiful man ",fp);
   // printf("Enter data  ");
    /*char ch;
    while((ch==getchar())!=EOF)
    {
        putc(ch,fp);
    }
    fclose(fp);*/
    char buff[255];
    /*fscanf(fp,"%s",buff);
    printf("2: %s\n",buff);
    fgets(buff,255,(FILE*)fp);
    printf("1: %s\n",buff);*/
   /* while(fscanf(fp,"%s",buff)!=EOF)
    {
        printf("%s",buff);
    }    */
    char c;
    if(fp==NULL)
    {
        printf("\nFile does not exist");
    }
    while(1)
    {
        c=fgetc(fp);
        if(c==EOF)
        break;
        printf("%c",c);
    }
    fclose(fp);
    return 0;
}



