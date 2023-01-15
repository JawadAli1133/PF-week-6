#include<iostream>
using namespace std;
float Amount(string day,string product,float quantity);
main()
{
    string day,product;
    float quantity;
    cout<<"Enter day(weekday or weekend day): ";
    cin>>day;
    cout<<"Enter name of product: ";
    cin>>product;
    cout<<"Enter quantity of product: ";
    cin>>quantity;
    float result = Amount(day,product,quantity);
    cout<<"Your bill is: "<<result;

}

   float Amount(string day,string product,float quantity)
   {
      float price;
      if(day=="Monday" || day=="Tuesday" || day=="Wednesday" || day=="Thursday" || day=="Friday")
      {
             if(product == "banana")
             {
                 price = 2.50*quantity;
             }

             if(product == "apple")
             {
                 price = 1.20*quantity;
             }

             if(product == "orange")
             {
                 price = 0.85*quantity;
             }

             if(product == "grapefruit")
             {
                 price = 1.45*quantity;
             }

             if(product == "kiwi")
             {
                 price = 2.70*quantity;
             }

             if(product == "pinapple")
             {
                 price = 5.50*quantity;
             }

             if(product == "grapes")
             {
                 price = 3.85*quantity;
             }
      }

      if(day=="Saturday" || day=="Sunday")
      {
             if(product == "banana")
             {
                 price = 2.70*quantity;
             }

             if(product == "apple")
             {
                 price = 1.25*quantity;
             }

             if(product == "orange")
             {
                 price = 0.90*quantity;
             }

             if(product == "grapefruit")
             {
                 price = 1.60*quantity;
             }

             if(product == "kiwi")
             {
                 price = 3.00*quantity;
             }

             if(product == "pinapple")
             {
                 price = 5.60*quantity;
             }

             if(product == "grapes")
             {
                 price = 4.20*quantity;
             }
      }

      return price;

   }