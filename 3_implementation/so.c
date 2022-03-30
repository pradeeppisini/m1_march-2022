///e-cart shopping 


#include<stdio.h>
#include<string.h>
  main()
{
 static int t_price;
 int p,q,opt,x=1,y[9],price[9];
 for(p=0;p<9;p++)
 y[p]=0;
 
 char str[100];
 char items[100][100]={"Sd card 216 GB",
 "U Mouse",
 "P_d 216 GB",
 "Abibas",
 "Nice",
 "Leeiron",
 "u Note 3",
 "cola 3",
 "Sm"  
 };
 printf("Please Enter Your Name\n");
 gets(str);
 printf("Hello %s, Welcome to our Online Shopping.\n",str);
 do{
  //C is 1 by default
  if(x==1){
  printf("Enter\n1 - Computer Accessories\n2 - footware\n3 - Gadgets\nAny other nmb to exit\n");
  scanf("%d",&opt);
  switch(opt)
  {
   case 1:
   {
    int electronicopt;
    printf("Enter\n1 - Sd card 216 GB - Rs.355\n2 - U Mouse- Rs.500\n3 - P_d 216 GB - Rs.550\nAny other nmb to exit\n");
    scanf("%d",&electronicopt);
    price[0]=355;
    price[1]=500;
    price[2]=550;
    switch(electronicopt)
    {
     case 1:
     {
      int nbr;
      printf("You chose Sd card 216GB with Rs.355.Are you sure to buy.If 'Yes' Enter 1 else any nmb\n");
      scanf("%d",&nbr);
      if(nbr==1)
      {
       y[0]++;
       t_price+=355;
      }
      printf("Your Cost in Cart is %d\n",t_price);
      break;
     }
     case 2:
     {
      int nbr;
      printf("You chose U Mouse with Rs.500.Are you sure to buy.If 'Yes' Enter 1 else any nmb\n");
      scanf("%d",&nbr);
      if(nbr==1)
      {
       y[1]++;
       t_price+=500;
      }
      printf("Your Cost in Cart is %d\n",t_price);
      break;
     }
     case 3:
     {
      int nbr;
      printf("You chose  P_d 216 GB with Rs.550.Are you sure to buy.If 'Yes' Enter 1 else any nmb\n");
      scanf("%d",&nbr);
      if(nbr==1)
      {
       y[2]++;
       t_price+=550;
      }
      printf("Your Cost in Cart is %d\n",t_price);
      break;
     }
     default:{
      printf("Exit from Computer Accesories\n");
      break;
     }
    }
    break;
   }
   case 2:
   {
    int footwareopt;
    printf("Enter\n1 - Abibas - Rs.3550\n2 - Nice - Rs.5000\n3 - Leeiron - Rs.2800\nAny other nmb to exit\n");
    scanf("%d",&footwareopt);
    price[3]=3550;
    price[4]=5000;
    price[5]=2800;
    switch(footwareopt)
    {
     case 1:
     {
      int nbr;
      printf("You chose Abibas footware for Rs.3550.Are you sure to buy.If 'Yes' Enter 1 else any nmb\n");
      scanf("%d",&nbr);
      if(nbr==1)
      {
       y[3]++;
       t_price+=3550;
      }
      printf("Your Cost in Cart is %d\n",t_price);
      break;
     }
     case 2:
     {
      int nbr;
      printf("You chose Nice footware for Rs.5000.Are you sure to buy.If 'Yes' Enter 1 else any nmb\n");
      scanf("%d",&nbr);
      if(nbr==1)
      {
       y[4]++;
       t_price+=5000;
      }
      printf("Your Cost in Cart is %d\n",t_price);
      break;
     }
     case 3:
     {
      int nbr;
      printf("You chose Leeiron footware for Rs.2800.Are you sure to buy.If 'Yes' Enter 1 else any nmb\n");
      scanf("%d",&nbr);
      if(nbr==1)
      {
       y[5]++;
       t_price+=2800;
      }
      printf("Your Cost in Cart is %d\n",t_price);
      break;
     }
     default:{
      printf("Exit from footware Category\n");
      break;
     }
    }
    break;
   }
   case 3:
   {
    int Gadgetsopt;
    printf("Enter\n1 - u Note 3 - Rs.11000\n2 - cola 3 - Rs.9866\n3 - Sm - Rs.12800\nAny other nmb to exit\n");
    scanf("%d",&Gadgetsopt);
    price[6]=11000;
    price[7]=9866;
    price[8]=12800;
    switch(Gadgetsopt)
    {
     case 1:
     {
      int nbr;
      printf("You chose to buy u Note 3 for Rs.11000.Are you sure to buy.If 'Yes' Enter 1 else any nmb\n");
      scanf("%d",&nbr);
      if(nbr==1)
      {
       y[6]++;
       t_price+=11000;
      }
      printf("Your Cost in Cart is %d\n",t_price);
      break;
     }
     case 2:
     {
      int nbr;
      printf("You chose to buy cola 3 for Rs.9866.Are you sure to buy.If 'Yes' Enter 1 else any nmb\n");
      scanf("%d",&nbr);
      if(nbr==1)
      {
       y[7]++;
       t_price+=9866;
      }
      printf("Your Cost in Cart is %d\n",t_price);
      break;
     }
     case 3:
     {
      int nbr;
      printf("You chose to buy Sm for Rs.12800.Are you sure to buy.If 'Yes' Enter 1 else any nmb\n");
      scanf("%d",&nbr);
      if(nbr==1)
      {
       y[8]++;
       t_price+=12800;
      }
      printf("Your Cost in Cart is %d\n",t_price);
      break;
     }
     default:{
      printf("Exit from Gadgets Category\n");
      break;
     }
    }
    break;
   }
   default:
   {
    printf("Enter Valid Categories opt\n");
    break;
   }
  }
  printf("%s's cart\n",str);
  printf("usr\tItems\t\tQt\tCost\n");
  for(p=0;p<9;p++)
  {
   if(y[p]!=0)
   {
    printf("%d\t%s\t\t%d\t\t\t%d\n",p,items[p],y[p],(price[p]*y[p]));
   }
  }
  printf("Total Cost\t\t\t\t\t%d\n",t_price);
  printf("If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items\n3 to Change Qt \nAny other nmb to Exit\n");
  scanf("%d",&x); 
 }
  if(x==2)
  {
   int usr;
   printf("Enter usr to delete item\n");
   scanf("%d",&usr);
   if(usr<9&&usr>0){
   t_price=t_price-(price[usr]*y[usr]);
   y[usr]=0;
   }
   else{
    printf("Enter Valid usr\n");
   }
       printf("Revised Items \n");
       printf("usr\tItems\t\tQt\tCost\n");
            for(p=0;p<9;p++)
      {
     if(y[p]!=0)
      {
    printf("%d\t%s\t%d\t\t%d\n",p,items[p],y[p],(price[p]*y[p]));
      }
     }
        printf("t_price\t\t\t\t\t%d\n",t_price);
        printf("If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items\n3 to Change Qt \nAny other number to Exit\n");
     scanf("%d",&x);
  }
  if(x==3)
  {
   int usr,Qt;
   printf("Enter usr to Change Qt of an item\n");
   scanf("%d",&usr);
   printf("Enter Qt to be changed of an item\n");
   scanf("%d",&Qt);
   if(usr<9&&usr>0){
    if(Qt>0 && y[usr]>0){  
        if(Qt<y[usr]) 
     {
      int discount=y[usr]-Qt;
      y[usr]=Qt;
       t_price=t_price-(price[usr]*discount); 
     }
     if(Qt>y[usr]) 
     {
      int inc=Qt-y[usr];
      y[usr]=Qt;
       t_price=t_price+(price[usr]*inc); 
     }
     if(Qt==y[usr]) 
     {
      y[usr]=Qt;
       t_price=t_price+0; 
     }   
           
    }
    else{
       printf("Item has no Qt.Please Try again\n");
    }
     }
     else{
    printf("Enter Valid usr\n");
   }
       printf("Revised Items \n");
       printf("usr\tItems\t\tQt\tCost\n");
            for(p=0;p<9;p++)
      {
     if(y[p]!=0)
      {
    printf("%d\t%s\t%d\t\t%d\n",p,items[p],y[p],(price[p]*y[p]));
      }
     }
        printf("t_price\t\t\t\t\t%d\n",t_price);
        printf("If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items\n3 to Change Qt\nAny other number to Exit\n");
     scanf("%d",&x);
  }
 }while(x==1 || x==2 ||x==3);
 printf("Your Final Cost is %d\n",t_price);
 printf("Thanks %s for Choosing Us and Visit us again.\n",str);
 
}