#include<stdio.h>
#include<string.h>
/*int main()
{
    char ch[11]={'a','b','c','d','e','f','g'};
    char ch1[11]="abcdeefghijklmnopqrstuvwxyz";
    printf("%s\n",ch);
    printf("%s",ch1);
    return 0;
}*/
/*int main()
{
    char name[20];
    printf("Enter name ");
   // scanf("%s",name );
    fgets(name,sizeof(name),stdin);
    printf("Name: ");
    puts(name);
    //printf("%s",name);
    return 0;
}*/
/*int main()
{
    char ch[40]="abc";
    char ch1[40]="123";
    strcat(ch,ch1);
    char temp[100];
    strcpy(temp,ch1);
    strcat(ch1,ch);
    //strcpy(ch1,strcat(ch,ch1));
    printf("%s\n",ch1);
    //printf("%s",ch1);
    return 0; 
}*/
/*int main()
{
    char name[]="lord of the rings";
    printf("%c",*name);
    printf("%c",*(name+1));
    printf("%c",*(name+6));
    char *nameptr;
    nameptr=name;
    printf(" %c",*nameptr);
    printf("%c",*(nameptr+1));
    printf("%c",*(nameptr+6));
}*/
/*void disp(char s[]);
int main()
{
    char a[20];
    printf("Enter string: ");
    fgets(a,sizeof(a),stdin);
    disp(a);
    return 0;
}
void disp(char a[])
{
    puts(a);
}*/
int main()
{
    char str[20];
    printf("Enter string: ");
    fgets(str,sizeof(str),stdin);
    printf("String is%s\n",str);
    printf("upper string is %s",ASCI(strupr(str)));
    return 0;
}