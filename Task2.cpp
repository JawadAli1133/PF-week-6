#include<iostream>
using namespace std;
string getGrade(float english,float math,float biology,float chemistry,float socialScience );
main()
{
    float english,math,biology,chemistry,socialScience;
    cout<<"Enter marks in English: ";
    cin>>english;
    cout<<"Enter marks in Maths: ";
    cin>>math;
    cout<<"Enter marks in Biology: ";
    cin>>english;
    cout<<"Enter marks in Chemistry: ";
    cin>>chemistry;
    cout<<"Enter marks in Social Science: ";
    cin>>socialScience;
    string grade = getGrade(english,math,biology,chemistry,socialScience);
    cout<<"Your grade is:"<<grade;
}

    string getGrade(float english,float math,float biology,float chemistry,float socialScience )
    {
        float sum,perc;
        string grade;
        sum = english+math+biology+chemistry+socialScience;
        perc = (sum/500)*100;
        cout<<"Your marks are: "<<sum<<endl;
        cout<<"Percentage is: "<<perc<<"%"<<endl;
        if(perc>=90 && perc<=100)
        {
            grade="A+";
        }

        else if(perc>=80 && perc<90)
        {
            grade="A";
        }

        else if(perc>=70 && perc<80)
        {
            grade="B+";
        }

        else if(perc>=60 && perc<70)
        {
            grade="B";
        }

        else if(perc>=50 && perc<60)
        {
            grade="C";
        }

        else if(perc>=40 && perc<50)
        {
            grade="D";
        }

        else
        {
            grade="F";
        }
        return grade;


    }