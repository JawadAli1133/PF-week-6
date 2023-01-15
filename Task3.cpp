#include<iostream>
using namespace std;
string getSign(int day,string month);
main()
{
   int day;
   string month;
   cout<<"Enter your day of birth: ";
   cin>>day;
   cout<<"Enter your month of birth: ";
   cin>>month;
   string Sign = getSign(day,month);
   cout<<"Your Zoadic sign is "<<Sign;

}

   string getSign(int day,string month)
   {
        string zSign;
        if((day>=21 && month=="March") || (day<=19 && month=="April"))
        {
            zSign = "Aries";
            cout<<"People born on this date have symbol The Ram "<<endl;
        }
        if((day>=20 && month=="April") || (day<=20 && month=="May"))
        {
            zSign = "Taurus";
            cout<<"People born on this date have symbol The Bull "<<endl;
        }

        if((day>=21 && month=="May") || (day<=20 && month=="June"))
        {
            zSign = "Gemini";
            cout<<"People born on this date have symbol The Twin "<<endl;
        }

        if((day>=21 && month=="June") || (day<=22 && month=="July"))
        {
            zSign = "Cancer";
            cout<<"People born on this date have symbol The Crab "<<endl;
        }

        if((day>=23 && month=="July") || (day<=22 && month=="August"))
        {
            zSign = "Leo";
            cout<<"People born on this date have symbol The Lion "<<endl;
        }

        if((day>=23 && month=="August") || (day<=22 && month=="September"))
        {
            zSign = "Virgo";
            cout<<"People born on this date have symbol The Virgin "<<endl;
        }

        if((day>=23 && month=="September") || (day<=22 && month=="October"))
        {
            zSign = "Libra";
            cout<<"People born on this date have symbol The Scales "<<endl;
        }

        if((day>=23 && month=="October") || (day<=21 && month=="November"))
        {
            zSign = "Scorpio";
            cout<<"People born on this date have symbol The Scorpion "<<endl;
        }

        if((day>=22 && month=="November") || (day<=21 && month=="December"))
        {
            zSign = "Sagittarius";
            cout<<"People born on this date have symbol The Archer "<<endl;
        }

        if((day>=22 && month=="December") || (day<=19 && month=="January"))
        {
            zSign = "Capricon";
            cout<<"People born on this date have symbol The Goat "<<endl;
        }

        if((day>=20 && month=="January") || (day<=18 && month=="Feburary"))
        {
            zSign = "Aquarius";
            cout<<"People born on this date have symbol The Water Bearer "<<endl;
        }

        if((day>=19 && month=="Feburary") || (day<=20 && month=="March"))
        {
            zSign = "Pisces";
            cout<<"People born on this date have symbol The Fishes "<<endl;
        }
        

        
        return zSign;



   }