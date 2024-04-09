#include<iostream>
using namespace std;
int main()
 {



home:

  	cout<<endl;

  	cout<<"Inventory"<<endl;
  	cout<<"---------------------"<<endl;


      cout<<"Press[1] to Display Inventory"<<endl;
      cout<<"Press[2] to Add item/quantity"<<endl;
      cout<<"Press[3] to Remove item"<<endl;
      cout<<"Press[5] to Add New Item"<<endl;
      cout<<"Press[4] to Quit"<<endl;

      cout<<endl;



      #define Mega_Sardines 17
      #define Family_Sardines 20
      #define Holiday_Beef_loap 32
      #define Holiday_Corn_Beef 25
      #define Century_Tuna 32
      #define Wow_ulam 30
      #define Argentina_Corn_Beef 27

      #define Skyflakes 36
      #define Skyflakes_peanut_butter 32
      #define Skyflakes_caramel 33
      #define Rebisco  29
      #define Rebisco_Butter 30
      #define Fita 32
      #define Oreo 25
      #define Rebisco_Bravo 25
      #define Presto_cream 35
      #define Choco_Pretzels 29

      #define Piattos 7
      #define Nova 17
      #define Funky_fries 25
      #define Mang_Juan  11
      #define Martys 28
      #define Oishi_Potato_chips 24
      #define Lesleis_Clover_chips 32
      #define Moon_chips 26


      #define Selecta_Ice_cream_ube  10
      #define Selecta_Ice_cream_cookiesncream 8
      #define Selecta_Ice_cream_3n1 11
      #define Corneto_Ice_cream 30
      #define Corneto_Rocky_Road 27
      #define Selecta_Ice_cream_stick 30

      #define Kopiko_brown 25
      #define Kopiko_black 26
      #define Kopiko_blanca 27
      #define Nescafe_stick_Original 38
      #define Nescafe_creamy_white 29
      #define Nescafe_creamy_latte 35
      #define Nescafe_Classic 36
      #define Nescafe_Original 32

      #define Extra_big_pancit_canton 21
      #define Extra_big_pancit_canton_hot_and_spicy 23
      #define Pancit_canton_chillimansi 31
      #define Pancit_canton_sweet_and_spicy 26
      #define Pancit_canton_hot_and_spicy 28
      #define Pancit_canton_Original 25
      #define Lucky_me_Beef 25
      #define Lucky_me_chicken 27
      #define Quick_chow_beef 24
      #define Quick_chow_chicken 24
      #define Nissin_Ramen 30
      #define Nissin_Yakisoba 29

      #define Cocacola_coke_1L 26
      #define Cocacola_royal_1L 28
      #define Cocacola_sprite_1L 30
      #define Pepsi_coke_1L 30
      #define Mountain_Dew_Glass_Bottle 23
      #define Cocacola_swakto_coke 24
      #define Cocacola_swakto_royal 26
      #define Cocacola_swakto_sprite 26
      #define Cocacola_mismo_coke 32
      #define Cocacola_mismo_royal 30
      #define Cocacola_mismo_sprite  32
      #define C2_apple 23
      #define Chucky 10
      #define minute_maid 15
      #define Cobra 21
      #define Sting 23


          int choice;

      cin>>choice;
  	cout<<endl;
  	switch(choice)

  	 case 1:
  	   {



  	cout<<" Press[1] to select Biscuits"<<endl;
  	cout<<" Press[2] to select Chips"<<endl;
  	cout<<" Press[3] to select Ice cream"<<endl;
  	cout<<" Press[4] to select Can Goods"<<endl;
  	cout<<" Press[5] to select Noodles "<<endl;
  	cout<<" Press[6] to select Coffee"<<endl;
  	cout<<" Press[7] to select Drinks"<<endl;
  	cout<<endl;

  	int select;cin>>select;


  	   	if(select==1)
  	   	{
  	   	    cout<<endl;
  	   	    cout<<"You've selected Biscuits"<<endl;
  	   	    cout<<endl;

  	   	  cout<<"Skyflakes "<<Skyflakes<<endl;
  	    cout<<"Skyflakes peanut butter "<<Skyflakes_peanut_butter<<endl;
  	   	cout<<"Skyflakes caramel "<<Skyflakes_caramel<<endl;
  	   	cout<<"Rebisco "<<Rebisco<<endl;
  	   	cout<<"Rebisco Butter "<<Rebisco_Butter<<endl;
  	   	cout<<"Rebisco Bravo "<<Rebisco_Bravo<<endl;
  	   	cout<<"Oreo "<<Oreo<<endl;
  	   	cout<<"Fita "<<Fita<<endl;
  	   	cout<<"Presto cream "<<Presto_cream<<endl;
  	   	cout<<"Choco Pretzel "<<Choco_Pretzels<<endl;

  	   	}

  	   	else if(select==2)
  	   	{
  	   	    cout<<endl;
  	   	    cout<<"You've selected Chips"<<endl;
  	   	    cout<<endl;

        cout<<"Piattos "<<Piattos<<endl;
  	    cout<<"Nova "<<Nova<<endl;
  	   	cout<<"Funky "<<Funky_fries<<endl;
  	   	cout<<"Mang Juan "<<Mang_Juan<<endl;
  	   	cout<<"Martys "<<Martys<<endl;
  	    cout<<"Oishi Potato Chips "<<Oishi_Potato_chips <<endl;
  	    cout<<"Lesleis Clover Chips "<<Lesleis_Clover_chips<<endl;
  	   	}
  	   	else if(select==3)
  	   	{
  	   	    cout<<endl;
  	   	    cout<<"You've selected Ice cream"<<endl;
  	   	    cout<<endl;

  	    cout<<"Selecta Ice cream Ube Flavor "<< Selecta_Ice_cream_ube<<endl;
  	    cout<<"Selecta Ice cream Cookies and Cream "<<Selecta_Ice_cream_cookiesncream<<endl;
  	   	cout<<"Selecta Ice cream 3 n 1 "<<Selecta_Ice_cream_3n1<<endl;
  	   	cout<<"Corneto Ice cream "<<Corneto_Ice_cream<<endl;
  	   	cout<<"Corneto Rocky Road "<<Corneto_Rocky_Road<<endl;
  	   	cout<<"Selecta Ice cream stick "<<Selecta_Ice_cream_stick<<endl;

  	   	}

  	   	else if(select==4)
  	   	{
  	   	    cout<<endl;
  	   	    cout<<"You've selected Can Goods"<<endl;
  	   	    cout<<endl;

  	   	    cout<<"Mega Sardines "<<Mega_Sardines<<endl;
  	   	    cout<<"Family Sardines "<<Family_Sardines<<endl;
  	   	    cout<<"Holiday Beef Loap "<<Holiday_Beef_loap<<endl;
  	   	    cout<<"Holiday Corn Beef "<<Holiday_Corn_Beef<<endl;
  	   	    cout<<"Century Tuna "<<Century_Tuna<<endl;
  	   	    cout<<"Wow Ulam "<<Wow_ulam<<endl;
  	   	    cout<<"Argentina Corn Beef "<<Argentina_Corn_Beef<<endl;


  	   	}

  	   	else if(select==5)
  	   	{
  	   	    cout<<endl;
  	   	    cout<<"You've selected Noodles"<<endl;
  	   	    cout<<endl;

  	   	       cout<<"Extra Big Pancit Canton "<< Extra_big_pancit_canton<<endl;
  	   	       cout<<"Extra Big Pancit Canton Hot and Spicy "<<Extra_big_pancit_canton_hot_and_spicy<<endl;
  	   	       cout<<"Pancit Canton Chilimansi "<< Pancit_canton_chillimansi<<endl;
  	   	       cout<<"Pancit Canton Sweet and Spicy "<< Pancit_canton_sweet_and_spicy <<endl;
  	   	       cout<<"Pancit Canton Hot and Spicy "<< Pancit_canton_hot_and_spicy <<endl;
  	   	       cout<<"Pancit Canton Original "<<Pancit_canton_Original<<endl;
  	   	       cout<<"Lucky Me Beef "<<Lucky_me_Beef<<endl;
  	   	       cout<<"Lucky Me Chicken "<< Lucky_me_chicken<<endl;
  	   	       cout<<"Quick Chow Beef "<< Quick_chow_beef <<endl;
  	   	       cout<<"Quick Chow Chicken "<< Quick_chow_chicken <<endl;
  	   	       cout<<"Nissin Ramen "<< Nissin_Ramen  <<endl;
  	   	       cout<<"Nissin Yakisoba "<< Nissin_Yakisoba <<endl;

  	   	}

  	   	else if(select==6)
  	   	{
  	   	    cout<<endl;
  	   	    cout<<"You've selected Coffee"<<endl;
  	   	    cout<<endl;

  	   	    cout<<"Kopiko Brown "<< Kopiko_brown <<endl;
  	   	    cout<<"Kopiko Black "<< Kopiko_brown <<endl;
  	   	    cout<<"Kopiko Blanca "<<Kopiko_blanca<<endl;
  	   	    cout<<"Nescafe Stick Original "<<Nescafe_stick_Original<<endl;
  	   	    cout<<"Nescafe Creamy White "<< Nescafe_creamy_white<<endl;
  	   	    cout<<"Nescafe Creamy White "<<Nescafe_creamy_latte<<endl;
  	   	    cout<<"Nescafe Creamy Latte "<<Nescafe_creamy_latte<<endl;
  	   	    cout<<"Nescafe Classic "<<Nescafe_Classic<<endl;
  	   	    cout<<"Nescafe Original "<<Nescafe_Original<<endl;

  	   	}
  	   	 else if(select==7)
  	   	 {
  	   	     cout<<endl;
  	   	    cout<<"You've selected Drinks"<<endl;
  	   	    cout<<endl;

  	   	      cout<<"Cocacola Coke 1L "<<Cocacola_coke_1L<<endl;
  	   	      cout<<"Cocacola Royal 1L "<<Cocacola_royal_1L<<endl;
  	   	      cout<<"Cocacola Sprite 1L "<<Cocacola_sprite_1L<<endl;
  	   	      cout<<"Pepsi Coke 1L "<<Pepsi_coke_1L<<endl;
  	   	      cout<<"Cocacola Swakto Coke "<<Cocacola_swakto_coke<<endl;
  	   	      cout<<"Cocacola Swakto Royal "<<Cocacola_swakto_royal<<endl;
  	   	      cout<<"Cocacola Swakto Sprite "<<Cocacola_swakto_sprite<<endl;
  	   	      cout<<"Cocacola Mismo Coke "<<Cocacola_mismo_coke<<endl;
  	   	      cout<<"Cocacola Mismo Royal "<<Cocacola_mismo_royal<<endl;
  	   	      cout<<"Cocacola Mismo Sprite "<<Cocacola_mismo_sprite<<endl;
  	   	      cout<<"Mountain Dew "<<Mountain_Dew_Glass_Bottle<<endl;
  	   	      cout<<"C2 apple "<<C2_apple<<endl;
  	   	      cout<<"Chucky "<<Chucky<<endl;
  	   	      cout<<"Minute Maid "<<minute_maid<<endl;
  	   	      cout<<"Cobra "<<Cobra<<endl;
  	   	      cout<<"Sting "<<Sting<<endl;

  	   	 }
  	   	 else
  	   	 {
  	   	     	cout<<"Invalid Input, Please try again."<<endl; goto home;

  	   	 }

  	   	int contin;

  trnsction:

  	   	cout<<endl;
  	   	cout<<"Do want another transaction? "<<endl;
  	   	cout<<"Press[1] to yes"<<endl;
  	   	cout<<"Press[2 to no]"<<endl;
  	   	cin>>contin;

  	   	if(contin==1)
  	   	   {
  	         goto home;
  	   	   }
  	   	else if(contin==2)
  	   	{
  	   	  void exit( int exitcode);
  	   	}
  	   	else
  	   	{
  	   		cout<<"Invalid Input, Please try again."<<endl; goto trnsction;

  	   	}

  	      break;

  	 case 2:

selection:

  	cout<<" Press[1] to select Biscuits"<<endl;
  	cout<<" Press[2] to select Chips"<<endl;
  	cout<<" Press[3] to select Ice cream"<<endl;
  	cout<<" Press[4] to select Can Goods"<<endl;
  	cout<<" Press[5] to select Noodles "<<endl;
  	cout<<" Press[6] to select Coffee"<<endl;
  	cout<<" Press[7] to select Drinks"<<endl;
  	cout<<endl;

  	     int pick;

  	 cin>>pick;

  	if(pick==1)

  	   {
  	     cout<<endl;
  	   	    cout<<"You've selected Biscuits"<<endl;
  	   	    cout<<endl;

  Biscuits:

  	   	cout<<"Press[1] to select Skyflakes "<<Skyflakes<<endl;
  	    cout<<"Press[2] to select Skyflakes peanut butter "<<Skyflakes_peanut_butter<<endl;
  	   	cout<<"Press[3] to select Skyflakes caramel "<<Skyflakes_caramel<<endl;
  	   	cout<<"Press[4] to select Rebisco "<<Rebisco<<endl;
  	   	cout<<"Press[5] to select Rebisco Butter "<<Rebisco_Butter<<endl;
  	   	cout<<"Press[6] to select Rebisco Bravo "<<Rebisco_Bravo<<endl;
  	   	cout<<"Press[7] to select Oreo "<<Oreo<<endl;
  	   	cout<<"Press[8] to select Fita "<<Fita<<endl;
  	   	cout<<"Press[9] to selectPresto cream "<<Presto_cream<<endl;
  	   	cout<<"Press[10] to select Choco Pretzel "<<Choco_Pretzels<<endl;
  	   	cout<<endl;

  	       int press,qua,add;

  	  cin>>press;
  	     if(press==1)
  	     {

  	      cout<<"Enter item: You've choose item number "<<press<<endl;
  	      cout<<endl;
  	      cout<<"Enter quantity: ";
  	      cin>>qua;
  	      add = qua+Skyflakes;
  	      cout<<"Skyflakes is now "<<add<<endl;
  	      cout<<endl;
  	      cout<<"Quantity Added "<<endl;
  	     }

  	     else if(press==2)
  	     {

  	      cout<<"Enter item: You've choose item number "<<press<<endl;
  	      cout<<endl;
  	      cout<<"Enter quantity: ";
  	      cin>>qua;
  	      add = qua+Skyflakes_peanut_butter;
  	      cout<<"Skyflakes Peanut Butter Flavor is now "<<add<<endl;
  	      cout<<endl;
  	      cout<<"Quantity Added "<<endl;
  	     }

  	     else if(press==3)
  	     {

  	      cout<<"Enter item: You've choose item number "<<press<<endl;
  	      cout<<endl;
  	      cout<<"Enter quantity: ";
  	      cin>>qua;
  	      add = qua+Skyflakes_caramel;
  	      cout<<"Skyflakes Caramel Flavor is now "<<add<<endl;
  	      cout<<endl;
  	      cout<<"Quantity Added "<<endl;
  	     }
  	     else if(press==4)
  	     {

  	      cout<<"Enter item: You've choose item number "<<press<<endl;
  	      cout<<endl;
  	      cout<<"Enter quantity: ";
  	      cin>>qua;
  	      add = qua+Rebisco;
  	      cout<<"Rebisco is now "<<add<<endl;
  	      cout<<endl;
  	      cout<<"Quantity Added "<<endl;
  	     }
  	     else if(press==5)
  	     {

  	      cout<<"Enter item: You've choose item number "<<press<<endl;
  	      cout<<endl;
  	      cout<<"Enter quantity: ";
  	      cin>>qua;
  	      add = qua+Rebisco_Butter;
  	      cout<<"Rebisco Butter is now "<<add<<endl;
  	      cout<<endl;
  	      cout<<"Quantity Added "<<endl;
  	     }

  	     else if(press==6)
  	     {

  	      cout<<"Enter item: You've choose item number "<<press<<endl;
  	      cout<<endl;
  	      cout<<"Enter quantity: ";
  	      cin>>qua;
  	      add = qua+Rebisco_Bravo;
  	      cout<<"Rebisco Bravo is now "<<add<<endl;
  	      cout<<endl;
  	      cout<<"Quantity Added "<<endl;
  	     }

  	     else if(press==7)
  	     {

  	      cout<<"Enter item: You've choose item number "<<press<<endl;
  	      cout<<endl;
  	      cout<<"Enter quantity: ";
  	      cin>>qua;
  	      add = qua+Oreo;
  	      cout<<"Oreo is now "<<add<<endl;
  	      cout<<endl;
  	      cout<<"Quantity Added "<<endl;
  	     }

  	     else if(press==8)
  	     {

  	      cout<<"Enter item: You've choose item number "<<press<<endl;
  	      cout<<endl;
  	      cout<<"Enter quantity: ";
  	      cin>>qua;
  	      add = qua+Fita;
  	      cout<<"Fita is now "<<add<<endl;
  	      cout<<endl;
  	      cout<<"Quantity Added "<<endl;
  	     }
  	     else if(press==9)
  	     {

  	      cout<<"Enter item: You've choose item number "<<press<<endl;
  	      cout<<endl;
  	      cout<<"Enter quantity: ";
  	      cin>>qua;
  	      add = qua+Presto_cream;
  	      cout<<"Presto Cream is now "<<add<<endl;
  	      cout<<endl;
  	      cout<<"Quantity Added "<<endl;
  	     }

  	     else if(press==10)
  	     {

  	      cout<<"Enter item: You've choose item number "<<press<<endl;
  	      cout<<endl;
  	      cout<<"Enter quantity: ";
  	      cin>>qua;
  	      add = qua+Choco_Pretzels;
  	      cout<<"Choco Pretzels Cream is now "<<add<<endl;
  	      cout<<endl;
  	      cout<<"Quantity Added "<<endl;
  	     }

  	     else
  	     {
  	      cout<<endl;
  	      cout<<"Invalid Input Please do try Again :)"<<endl; goto Biscuits;

  	     }

  	     	int contin;



  	   	cout<<endl;
  	   	cout<<"Do want another transaction? "<<endl;
  	   	cout<<"Press[1] to yes"<<endl;
  	   	cout<<"Press[2 to no]"<<endl;
  	   	cin>>contin;

  	   	    if(contin==1)
  	   	    {
  	         goto home;
  	   	    }
  	   	    else if(contin==2)
  	   	    {
  	   	    void exit( int exitcode);
  	   	    }
  	    	else
  	   	    {
  	    	cout<<"Invalid Input, Please try again."<<endl; goto trnsction;

  	    	}
  	   }

  	else if(pick==2)
  	   {
  	     cout<<endl;
  	   	    cout<<"You've selected Chips"<<endl;
  	   	    cout<<endl;

  Chips:


        cout<<"Press[1] to select Piattos "<<Piattos<<endl;
  	    cout<<"Press[2] to select Nova "<<Nova<<endl;
  	   	cout<<"Press[3] to select Funky "<<Funky_fries<<endl;
  	   	cout<<"Press[4] to select Mang Juan "<<Mang_Juan<<endl;
  	   	cout<<"Press[5] to select Martys "<<Martys<<endl;
  	    cout<<"Press[6] to select Oishi Potato Chips "<<Oishi_Potato_chips <<endl;
  	    cout<<"Press[7] to Lesleis Clover Chips "<<Lesleis_Clover_chips<<endl;
  	   	cout<<endl;

  	       int press,qua,add;

  	  cin>>press;
         if(press==1)
  	     {

  	      cout<<"Enter item: You've choose item number "<<press<<endl;
  	      cout<<endl;
  	      cout<<"Enter quantity: ";
  	      cin>>qua;
  	      add = qua+Piattos;
  	      cout<<"Piattos is now "<<add<<endl;
  	      cout<<endl;
  	      cout<<"Quantity Added "<<endl;
  	     }

  	     else if(press==2)
  	     {

  	      cout<<"Enter item: You've choose item number "<<press<<endl;
  	      cout<<endl;
  	      cout<<"Enter quantity: ";
  	      cin>>qua;
  	      add = qua+Nova;
  	      cout<<"Nova is now "<<add<<endl;
  	      cout<<endl;
  	      cout<<"Quantity Added "<<endl;
  	     }

  	     else if(press==3)
  	    {

  	      cout<<"Enter item: You've choose item number "<<press<<endl;
  	      cout<<endl;
  	      cout<<"Enter quantity: ";
  	      cin>>qua;
  	      add = qua+Funky_fries;
  	      cout<<"Funky is now "<<add<<endl;
  	      cout<<endl;
  	      cout<<"Quantity Added "<<endl;
  	     }
  	     else if(press==4)
  	    {

  	      cout<<"Enter item: You've choose item number "<<press<<endl;
  	      cout<<endl;
  	      cout<<"Enter quantity: ";
  	      cin>>qua;
  	      add = qua+Mang_Juan;
  	      cout<<"Mang Juan is now "<<add<<endl;
  	      cout<<endl;
  	      cout<<"Quantity Added "<<endl;
  	     }
  	     else if(press==5)
  	     {

  	      cout<<"Enter item: You've choose item number "<<press<<endl;
  	      cout<<endl;
  	      cout<<"Enter quantity: ";
  	      cin>>qua;
  	      add = qua+Martys;
  	      cout<<"Martys is now "<<add<<endl;
  	      cout<<endl;
  	      cout<<"Quantity Added "<<endl;
  	     }

  	     else if(press==6)
  	     {

  	      cout<<"Enter item: You've choose item number "<<press<<endl;
  	      cout<<endl;
  	      cout<<"Enter quantity: ";
  	      cin>>qua;
  	      add = qua+Oishi_Potato_chips;
  	      cout<<"Oishi Potato Chips is now "<<add<<endl;
  	      cout<<endl;
  	      cout<<"Quantity Added "<<endl;
  	     }

  	     else if(press==7)
  	     {

  	      cout<<"Enter item: You've choose item number "<<press<<endl;
  	      cout<<endl;
  	      cout<<"Enter quantity: ";
  	      cin>>qua;
  	      add = qua+Lesleis_Clover_chips;
  	      cout<<"Lesleis_Clover_chips is now "<<add<<endl;
  	      cout<<endl;
  	      cout<<"Quantity Added "<<endl;
  	     }

  	     else
  	     {
  	      cout<<endl;
  	      cout<<"Invalid Input Please do try Again :)"<<endl; goto Chips;

  	     }


  	     	int contin;



  	   	cout<<endl;
  	   	cout<<"Do want another transaction? "<<endl;
  	   	cout<<"Press[1] to yes"<<endl;
  	   	cout<<"Press[2 to no]"<<endl;
  	   	cin>>contin;

  	   	if(contin==1)
  	   	   {
  	         goto home;
  	   	   }
  	   	else if(contin==2)
  	   	{
  	   	  void exit( int exitcode);
  	   	}
  	   	else
  	   	{
  	   		cout<<"Invalid Input, Please try again."<<endl; goto trnsction;

  	   	}


        }
        }




  	      return 0;
    }
