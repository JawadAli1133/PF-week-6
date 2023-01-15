#include<iostream>
using namespace std;
float Price(float price,int person,string category);
main()
{
   string category;
   float price;
   int person;
   float diff;
   cout<<"Enter money you have: ";
   cin>>price;
   cout<<"Enter category: ";
   cin>>category;
   cout<<"Enter number of person: ";
   cin>>person;
   float result = Price(price,person,category);

   if(result>0)
   {
      cout<<"Yes"<<result<<" money left";
   }

   if(result<0)
   {
      cout<<"No you need "<<(-1)*result<<" money";
   }
   
}

   float Price(float price,int person,string category)
   {
       float result;
       float availPrice;
       if(category =="VIP")
       {
            availPrice = person*499.99;
       }
       if(category=="Normal")
       {
            availPrice = person*249.99;
       }
       if(category=="VIP" || category == "Normal")
       {
              if(person>=1 && person<=4)
              {
                  result = price - (price*75)/100; 
              }

              if(person>=5 && person<=9)
              {
                  result = price - (price*60)/100; 
              }

              if(person>=10 && person<=24)
              {
                  result = price - (price*50)/100; 
              }

              if(person>=25 && person<=49)
              {
                  result = price - (price*40)/100; 
              }

              if(person>=50)
              {
                  result = price - (price*25)/100; 
              }
              
       }
       return result - availPrice;
       

   }