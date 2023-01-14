#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
class customer
{
    public : string name1,name2,sex,dl,phone;
    void customerdetails()
    {
        cout<<"\033[1;34m"<<"ENTER YOUR FIRST NAME IN CAPITAL LETTERS : ";
        cout<<"\033[1;37m"; 
        cin>>name1;
        cout<<"\033[1;34m"<<"\nENTER YOUR LAST NAME IN CAPITAL LETTERS : ";
        cout<<"\033[1;37m"; 
        cin>>name2;
        cout<<"\033[1;34m"<<"\nENTER YOUR SEX (IF FEMALE ENTER 'F' AND IF MALE ENTER 'M' OTHERWISE 'O') : ";
        cout<<"\033[1;37m";
        cin>>sex;
        enterph :
        cout<<"\033[1;34m"<<"\nENTER YOUR MOBILE NUMBER (ENTER 10 DIGIT NUMBER ONLY) : ";
        cout<<"\033[1;37m";
        cin>>phone;
        if(phone.length()!=10)
        {
            cout<<"\033[1;31m"<<"INVALID MOBILE NUMBER !!! PLEASE ENTER AGAIN !!!"<<endl;
            goto enterph;
        }
        enterdl :
        cout<<"\033[1;34m"<<"\nENTER YOUR DRIVING LICENCE NUMBER : ";
        cout<<"\033[1;37m";
        cin>>dl;
        if(dl.length()!=16)
        {
            cout<<"\033[1;31m"<<"INVALID DRIVING LICENCE NUMBER !!! PLEASE ENTER AGAIN !!!"<<endl;
            goto enterdl;
        }
    }
};
class car
{
    public : string carname,carno;
             int x,petrol,advchar;
    void cardetails()
    {
        cout<<"\033[1;36m"<<"\nSELECT THE CAR YOU WANT TO RENT : ";
        cout<<"\033[1;31m";
        cin>>x;
        switch(x)
        {
            case 1:
                carname = "Ferrari 296 GTB";
                carno = "TN 75 AA 7106";
                break;
            case 2:
                carname = "McLaren 765LT";
                carno = "AP 21 BP 7331";
                break;
            case 3:
                carname = "Porsche 911 GT3";
                carno = "UP 19 D 0343";
                break;
            case 4:
                carname = "Ferrari F8 Tributo";
                carno = "MH 12 RN 1289";
                break;
            case 5:
                carname = "Lamborghini Huracan Evo";
                carno = "03D 153874H";
                break;
            case 6:
                carname = "Ferrari 812 GTS";
                carno = "HR 26 TC 7174";
                break;
            case 7:
                carname = "Maserati MC20";
                carno = "TS 07 D TR 2020";
                break;
            case 8:
                carname = "Audi R8";
                carno = "KA 08 J 9192";
                break;
            case 9:
                carname = "Ford GT";
                carno = "MH 12 RN 1289";
                break;
            case 10:
                carname = "Aston Martin DBS Superleggera";
                carno = "MH 12 RN 1289";
                break;
        }
        cout<<"\033[1;34m"<<"\nENTER PETROL CHARGES (ENTER 0 FOR NO CHARGES) : ";
        cout<<"\033[1;31m";
        cin>>petrol;
        cout<<"\033[1;34m"<<"\nENTER ADVANCE CHARGES (ENTER 0 FOR NO CHARGES) : ";
        cout<<"\033[1;31m";
        cin>>advchar;
    }
    void carmodels()
    {
        cout<<"\033[1;33m"<<"\nCAR MODELS AVAILABLE : \n";
        cout<<"\033[1;31m"<<"1. "<<"\033[1;35m"<<"Ferrari 296 GTB"<<endl;
        cout<<"\033[1;31m"<<"2. "<<"\033[1;35m"<<"McLaren 765LT"<<endl;
        cout<<"\033[1;31m"<<"3. "<<"\033[1;35m"<<"Porsche 911 GT3"<<endl;
        cout<<"\033[1;31m"<<"4. "<<"\033[1;35m"<<"Ferrari F8 Tributo"<<endl;
        cout<<"\033[1;31m"<<"5. "<<"\033[1;35m"<<"Lamborghini Huracan Evo"<<endl;
        cout<<"\033[1;31m"<<"6. "<<"\033[1;35m"<<"Ferrari 812 GTS"<<endl;
        cout<<"\033[1;31m"<<"7. "<<"\033[1;35m"<<"Maserati MC20"<<endl;
        cout<<"\033[1;31m"<<"8. "<<"\033[1;35m"<<"Audi R8"<<endl;
        cout<<"\033[1;31m"<<"9. "<<"\033[1;35m"<<"Ford GT"<<endl;
        cout<<"\033[1;31m"<<"10. "<<"\033[1;35m"<<"Aston Martin DBS Superleggera"<<endl;
    }
};
class rent
{
    void per_km ()
    {
        int a,c,b,km;
        cout<<"Enter Distance in KM : ";
        cin>>km;
        a=km*7;
        b=(km-30)*6;
        c=(km-100)*5;
        if(km<=30)
        {
            cout<<"Total amount to be Paid : "<<a;
        }
        else if(km<=100&&km>30)
        {
            cout<<"Total amount to be Paid : "<<210+b;
        }
        else 
        {
            cout<<"Total amount to be Paid : "<<560+c;
        }
    }
    void per_hr()
    { 
        int hr;
        cout<<"Enter Time in Hours : ";
        cin>>hr;
        if(hr<=12)
        {
            cout<<"Total amount to be Paid : "<<hr*250;
        }
        else if(hr<=24&&hr>12)
        {
            cout<<"Total amount to be Paid : "<<(hr/12)*2500;
        }
        else 
        {
            cout<<"Total amount to be Paid : "<<(hr/24)*4000;
        }
    }
};
class Invoice : public customer,public car
{
    public : int invono;
    void generate()
    {
        invono=rand()%10000000;
        cout<<"\033[1;34m"<<"\n\n                                                                         SRM CAR RENTAL - CUSTOMER INVOICE\n";
        cout<<"\033[1;35m"<<"                                               ////////////////////////////////////////////////////////////////////////////////////\n";
        cout<<"\033[1;35m"<<"                                               |\033[1;36m INVOICE NUMBER  \033[1;33m:--------------------------------->\033[1;35m| "<<"\033[1;32m"<<invono<<"\n";
        cout<<"\033[1;35m"<<"                                               |\033[1;36m CUSTOMER NAME  \033[1;33m:---------------------------------->\033[1;35m| "<<"\033[1;32m"<<name1<<" "<<name2<<"\n";
        cout<<"\033[1;35m"<<"                                               |\033[1;36m CAR MODEL  \033[1;33m:-------------------------------------->\033[1;35m| "<<"\033[1;32m"<<carname<<"\n";
        cout<<"\033[1;35m"<<"                                               |\033[1;36m CAR NUMBER  \033[1;33m:------------------------------------->\033[1;35m| "<<"\033[1;32m"<<carno<<"\n";
        cout<<"\033[1;35m"<<"                                               |\033[1;36m CAUTION MONEY  \033[1;33m:---------------------------------->\033[1;35m| "<<"\033[1;31m"<<advchar<<"\n";
        cout<<"\033[1;35m"<<"                                               |\033[1;36m ADVANCE MONEY  \033[1;33m:---------------------------------->\033[1;35m| "<<"\033[1;31m"<<petrol<<"\n";
        cout<<"\033[1;35m"<<"                                               ////////////////////////////////////////////////////////////////////////////////////\n";
    }
};
int main()
{
    Invoice i;
    i.customerdetails();
    i.carmodels();
    i.cardetails();
    i.generate();
    return 0;
}
