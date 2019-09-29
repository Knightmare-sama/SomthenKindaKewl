#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
char name[20];
char choose [20];
char pubg[5] = {'p','u','b','g','\0'};
char fn[20] = {'f','o','r','t','n','i','t','e','\0'};
char yn1[5];
char yn2[5];
char yn3[5];
char yes[4] = {'y','e','s','\0',};
char no[3] = {'n','o','\0'};
char nope[5] = {'n','o','p','e','\0'};
char yeah [5] = {'y','e','a','h','\0',};
char sure[5] = {'s','u','r','e','\0'};
char somtng[20];
int age;
printf("Hi!I am bababrownsheep (non racist AI) what's your name?\n");
gets(name);
printf("Hi %s! what's your age?\n",name);
scanf("%d",&age);
if (age>=18 && age<=30)
    printf("you still young!!\n");
if (age<18)
    printf("you haven't seen this world yet\n");
if(age>=40&&age<50)
    printf("then you are very experienced of how this world works!!\n ");
if(age>=50 && age<80)
    printf("you are super super super.. OLD\n");
if(age>80)
    printf("wtf u typing here,I said AGE as in \"how old are you?\"\n");

printf("what do you choose PUBG or fortnite?\n");
scanf("%s",choose);
if (strcmp(choose,pubg)==0)
{
     printf("my user name is KnightMarez let's land on pochinki!\n");
}
else if (strcmp(choose,fn)==0)
{
    printf("go see a doctor! \n but seriously \n all jokes aside,fortnite is lame");
}
else
{
   printf("what??? just tell me fortnite or pubg, \n I don't know the older trends!\n ");
}
printf("\n\n Sooo, u on instagram?\n");
scanf("%s",&yn1);
if (strcmp(yn1,yes) == 0 || strcmp(yn1,yeah) == 0)
    {
        printf(" \n\n\n oh! so you are also inside the modern cage like structure \n known as a social network :/ \n ");
    }
else if (strcmp(yn1,no) == 0 || strcmp(yn1,nope) == 0)
    printf("hmmm!! you are already the most mature person among all the people I know!!! :)\n");
printf("\n\n so.... what about snapchat? you have an account?\n");
scanf("%s",&yn2);
if (strcmp(yn2,yes) ==0 || strcmp(yn2,yeah) == 0)
    {
        printf("\n c'mon!!! geta a life!!!\n");
    }
else if (strcmp(yn2,no)== 0 || strcmp(yn2,nope) == 0)
        printf("\n good,good nice!");
printf("\n\n Will you support my upgrades?\n ");
scanf("%s",&yn3);
if (strcmp(yn3,yes) == 0 || strcmp(yn3,yeah) ==0 || strcmp(yn3,sure) == 0)
    printf("\n Thanks a lot :D !!! I really appreciate it!! \n \n");
else
    printf("\n Due to people like you %s, the world is lagging behind in it's technology >:(",name);

printf("\n \n program has ended type something here and I will be closed\n");
scanf("%s",&somtng);
return 0;
}
