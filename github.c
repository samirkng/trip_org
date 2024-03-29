#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
  

    char tools []= {"tent, chairs, coal"};
    char food_drink []= {"water, cola, bread, egg"};
    int num_people ;
    char transport [40];
    int bud_trsp ;
    char food_take [50];
    int bud_food ;
    char tools_take [60];
    int bud_tools ;
    int some_bud ;
    char help [5]= "help";

    printf ("Hello welcome to == trip organisation programme == \n");
    printf ("let's start :) \n");
    printf ("enter the number of people: \n");
    //scanf ("%d",&num_people);
    scanf("%d[^\n]", &num_people);
    
    printf("What is the means of transportation (ex: car)? ");
    scanf("%s[^\n]", &transport);
    printf ("how much you spend in the transport ? ");
    //scanf ("%d ", &bud_trsp);
    scanf("%d[^\n]", &bud_trsp);

    printf ("what about your foods and drinks ? \nif you want to see a list for food & drink enter help else skip ;)" );
    char x [5];
    scanf ("%s",&x);
  
  
    if (strcmp(x , help)==0)
    {
        printf ("-%s",food_drink);
    }

    printf ("\nwhat will you take ? ");
    scanf ("%s", &food_take );
    printf ("how much do you think it will cost ?");
    scanf ("%d", &bud_food);


    printf ("\nwhat is the tools you need in this trip (ex: tent,fotballe..)\nif you need to see a list for tools rnter help !");
    char y [10];
    scanf ("%s",&y);
    if (strcmp(y , help)==0){
        printf ("- %s",tools);
    }
    printf ("\nwhat will you take ? ");
    scanf("%s", &tools_take);
    printf ("if you spend something  enter here : ");
    scanf ("%d",&bud_tools);
   
    some_bud =( bud_food + bud_tools + bud_trsp );


    printf("\n=================================\n");
    printf ("\nfinally that what do you need in this trip :\n-the number of people:%d\n-the means of transportation is :%s \n-the budget of transport :%d \n-the foods and drinks you get :%s \n-the budget for it is:%d \n- and the tools is:%s \n-the budget for tools is :%d \n-the some of budget is :%d", num_people ,transport,bud_trsp,food_take,bud_food,tools_take,bud_tools,some_bud );
    int pay =( some_bud / num_people);
    printf ("\nevreyone will pay : %d", pay);
  
}