#include<iostream>
#include<string>
using namespace std;
int main()
{

    //i19-0434
    //Sourav Malani
    string sign,horoscope,cusp;
    int M,D;
    char part;
    bool cuspT; //cuspT=cuspTrue. It is true if the date is an cusp.
    cout<<"Which part? A or B:";
    cin>>part;
    switch(part)
    {
    case 'B':
    case 'b':
        cout<<"Enter your birth month(1-12):";
        cin>>M;
        cout<<"Enter your birth date(1-31):";
        cin>>D;
        if ( ((M==3) && (D>=21 && D<=31)) || ((M==4) && (D>=1 && D<=19)))
        {    sign="RAM",horoscope="Aries";

              }
        else if ( ((M==4) && (D>=20 && D<=30)) || ((M==5) && (D>=1 && D<=20)))
        {   sign="BULL";
            horoscope="Taurus";
            if (((M==4) && (D>=20 && D<=21)))
            {   cuspT=true;
               cusp="Birthday is a cusp of Aries";}
            else if (((M==5) && (D>=21 && D<=22)))
                {   cuspT=true;
               cusp="Birthday is a cusp of Gemini";}
        }
        else if ( ((M==5) && (D>=21 && D<=31)) || ((M==6) && (D>=1 && D<=22)))
        {    sign="Pair Of Twins";
            horoscope="Gemini";
            if (((M==5) && (D>=20 && D<=21)))
            {   cuspT=true;
               cusp="Birthday is a cusp of Taurus";}
            else if (((M==6) && (D>=21 && D<=22)))
                {   cuspT=true;
               cusp="Birthday is a cusp of Cancer";}
        }
        else if ( ((M==6) && (D>=21 && D<=30)) || ((M==7) && (D>=1 && D<=22)))
        {    sign="Crab";
            horoscope="Cancer";
            if (((M==6) && (D>=21 && D<=22)))
            {   cuspT=true;
               cusp="Birthday is a cusp of Gemini";}
            else if (((M==7) && (D>=23 && D<=24)))
                {   cuspT=true;
               cusp="Birthday is a cusp of Leo";}

        }
        else if ( ((M==7) && (D>=23 && D<=31)) || ((M==8) && (D>=1 && D<=22)))
        {    sign="LION";
            horoscope="Leo";
            if (((M==7) && (D>=23 && D<=24)))
            {   cuspT=true;
               cusp="Birthday is a cusp of Cancer";}
            else if (((M==8) && (D>=23 && D<=24)))
                {   cuspT=true;
               cusp="Birthday is a cusp of Vigro";}

        }
        else if ( ((M==8) && (D>=23 && D<=31)) || ((M==9) && (D>=1 && D<=23)))
        {    sign="MAIDEN";
            horoscope="Vigro";
            if (((M==8) && (D>=23 && D<=24)))
            {   cuspT=true;
               cusp="Birthday is a cusp of Leo";}
            else if (((M==9) && (D>=24 && D<=25)))
                {   cuspT=true;
               cusp="Birthday is a cusp of Libra";}

        }
        else if ( ((M==9) && (D>=23 && D<=31)) || ((M==10) && (D>=1 && D<=22)))
        {    sign="SCALES";
            horoscope="Libra";
            if (((M==9) && (D>=23 && D<=24)))
            {   cuspT=true;
               cusp="Birthday is a cusp of Vigro";}
            else if (((M==10) && (D>=23 && D<=24)))
                {   cuspT=true;
               cusp="Birthday is a cusp of Scorpio";}

        }
        else if ( ((M==10) && (D>=23 && D<=31)) || ((M==11) && (D>=1 && D<=21)))
        {    sign="Scorpion";
             horoscope="Scorpio";
             if (((M==11) && (D>=22 && D<=23)))
            {   cuspT=true;
               cusp="Birthday is a cusp of Libra";}
            else if (((M==11) && (D>=22 && D<=23)))
                {   cuspT=true;
               cusp="Birthday is a cusp of Sagittarius";}

        }
        else if ( ((M==11) && (D>=22 && D<=30)) || ((M==12) && (D>=1 && D<=21)))
        {    sign="centaur";
             horoscope="Sagittarius";
             if (((M==11) && (D>=22 && D<=23)))
            {   cuspT=true;
               cusp="Birthday is a cusp of Scorpio";}
            else if (((M==12) && (D>=22 && D<=23)))
                {   cuspT=true;
               cusp="Birthday is a cusp of Capricon";}

        }
        else if ( ((M==12) && (D>=22 && D<=31)) || ((M==1) && (D>=1 && D<=19)))
        {    sign="Mountain Goat";
             horoscope="Capricon";
             if (((M==12) && (D>=22 && D<=23)))
            {   cuspT=true;
               cusp="Birthday is a cusp of Sagittarius";}
            else if (((M==1) && (D>=20 && D<=21)))
                {   cuspT=true;
               cusp="Birthday is a cusp of Aguarius";}

        }
        else if ( ((M==1) && (D>=20 && D<=31)) || ((M==2) && (D>=1 && D<=18)))
        {    sign="The man who carries the pitcher of water";
             horoscope="Aquarius";
             if (((M==1) && (D>=20 && D<=21)))
            {   cuspT=true;
               cusp="Birthday is a cusp of Capricon";}
            else if (((M==2) && (D>=19 && D<=20)))
                {   cuspT=true;
               cusp="Birthday is a cusp of Piscus";}

        }
        else if ( ((M==2) && (D>=19 && D<=29)) || ((M==3) && (D>=1 && D<=29)))
        {    sign="The fish";
             horoscope="Piscus";
             if (((M==2) && (D>=19 && D<=20)))
            {   cuspT=true;
                cusp="Birthday is a cusp of Libra";}

        }
        else
            cout<<"Wrong input.";


      cout<<"Your horoscope is "<<horoscope<<" and sign is "<<sign<<endl;
      (cuspT)? cout<<cusp<<endl:cout<<"No Cusp";
      break;

    case 'A':
    case 'a':

            int M,D;
            cout<<"Enter your birth month(1-12):";
            cin>>M;
            cout<<"Enter your birth date(1-31):";
            cin>>D;
            if ( ((M==3) && (D>=21 && D<=31)) || ((M==4) && (D>=1 && D<=19)))
            {    sign="RAM",horoscope="Aries";
                  }
            else if ( ((M==4) && (D>=20 && D<=30)) || ((M==5) && (D>=1 && D<=20)))
            {    sign="BULL";
                horoscope="Taurus";}
            else if ( ((M==5) && (D>=21 && D<=31)) || ((M==6) && (D>=1 && D<=22)))
            {    sign="Pair Of Twins";
                horoscope="Gemini";   }
            else if ( ((M==6) && (D>=21 && D<=30)) || ((M==7) && (D>=1 && D<=22)))
            {    sign="Crab";
                horoscope="Cancer";   }
            else if ( ((M==7) && (D>=23 && D<=31)) || ((M==8) && (D>=1 && D<=22)))
            {    sign="LION";
                horoscope="Leo";}
            else if ( ((M==8) && (D>=23 && D<=31)) || ((M==9) && (D>=1 && D<=23)))
            {    sign="MAIDEN";
                horoscope="Vigro";}
            else if ( ((M==9) && (D>=23 && D<=31)) || ((M==10) && (D>=1 && D<=22)))
            {    sign="SCALES";
                horoscope="Libra";}
            else if ( ((M==10) && (D>=23 && D<=31)) || ((M==11) && (D>=1 && D<=21)))
            {    sign="Scorpion";
                 horoscope="Scorpio";}
            else if ( ((M==11) && (D>=22 && D<=30)) || ((M==12) && (D>=1 && D<=21)))
            {    sign="centaur";
                 horoscope="Sagittarius";}
            else if ( ((M==12) && (D>=22 && D<=31)) || ((M==1) && (D>=1 && D<=19)))
            {    sign="Mountain Goat";
                 horoscope="Capricon";}
            else if ( ((M==1) && (D>=20 && D<=31)) || ((M==2) && (D>=1 && D<=18)))
            {    sign="The man who carries the pitcher of water";
                 horoscope="Aquarius";}
            else if ( ((M==2) && (D>=19 && D<=29)) || ((M==3) && (D>=1 && D<=29)))
            {    sign="The fish";
                 horoscope="Piscus";}
            else
                cout<<"Wrong input.";


        cout<<"Your horoscope is "<<horoscope<<" and sign is "<<sign<<endl;

        break;
    default:
        cout<<"Wrong Input"<<endl;


    }

     return 0;



}
