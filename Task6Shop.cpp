#include<iostream>
using namespace std;
float checkCost(string city,string product,int quantity);
main()
{
     string city,product;
     int quantity;
     cout<<"Enter the city: ";
     cin>>city;
     cout<<"Enter the product: ";
     cin>>product;
     cout<<"Enter the quantity of products: ";
     cin>>quantity;
     float result = checkCost(city,product,quantity);
     cout<<"The cost is: "<<result;
}

   float checkCost(string city,string product,int quantity)
   {
       float result;
       if(city=="Sofia")
       {
                if(product=="coffee")
                {
                    result = quantity*0.50;
                }

                if(product=="water")
                {
                    result = quantity*0.80;
                }

                if(product=="beer")
                {
                    result = quantity*1.20;
                }

                if(product=="sweets")
                {
                    result = quantity*1.45;
                }

                if(product=="peanuts")
                {
                    result = quantity*1.60;
                }

       }

       if(city=="Plovdiv")
       {
                if(product=="coffee")
                {
                    result = quantity*0.40;
                }

                if(product=="water")
                {
                    result = quantity*0.70;
                }

                if(product=="beer")
                {
                    result = quantity*1.15;
                }

                if(product=="sweets")
                {
                    result = quantity*1.30;
                }

                if(product=="peanuts")
                {
                    result = quantity*1.50;
                }

       }

       if(city=="Varna")
       {
                if(product=="coffee")
                {
                    result = quantity*0.45;
                }

                if(product=="water")
                {
                    result = quantity*0.70;
                }

                if(product=="beer")
                {
                    result = quantity*1.10;
                }

                if(product=="sweets")
                {
                    result = quantity*1.35;
                }

                if(product=="peanuts")
                {
                    result = quantity*1.55;
                }

       }
          return result;
       

   }