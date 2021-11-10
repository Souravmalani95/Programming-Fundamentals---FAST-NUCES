#include<iostream>
using namespace std;
int main()
{
    //i19-0434
    //Sourav Malani
    //Task07
    int menu,Qnty,P2type,P3type,P4type,BSmenu,Smenu; //Psize = pizza size
    char PSmenu,P1type,Psize,SSmenu;
    cout<<"WELCOME TO THE ONLINE FOOD SHOP"<<endl;
    cout<<"1-Burgers"<<endl;
    cout<<"2-Pizzas"<<endl;
    cout<<"3-Sandwiches"<<endl;
    cout<<"Select one of the above(i.e 1 for burgers):";
    cin>>menu;
    switch(menu)
    {
        case 1: //Burgers
            cout<<"\n\nFollowing burgers are available."<<endl;
            cout<<"1- Crispy Chicken Burger ($5)"<<endl;
            cout<<"2- Beef Burger  ($6)"<<endl;
            cout<<"3- Fish Burger  ($7)"<<endl;
            cout<<"Select from above:";
            cin>>BSmenu;
            switch(BSmenu)
            {
                case 1:  //Crispy Chicken Burger
                    cout<<"How many Crispy Chicken Burgers you want:";
                    cin>>Qnty;
                    cout<<"Total bill = $"<<Qnty*5<<endl;
                    break;
                case 2: //Beef Burger
                    cout<<"How many Beef Burgers you want:";
                    cin>>Qnty;
                    cout<<"Total bill = $"<<Qnty*6<<endl;
                    break;
                 case 3: //Fish Burger
                    cout<<"How many Fish Burgers you want:";
                    cin>>Qnty;
                    cout<<"Total bill = $"<<Qnty*7<<endl;
                    break;
                 default: //Invalid Option
                    cout<<"You did not select valid option"<<endl;
            }
            break;
        case 2: //Pizzas
            cout<<"\n\nFollowing Pizzas are available."<<endl;
            cout<<"1- Chicken tikka "<<endl;
            cout<<"2- Chicken Fajita  "<<endl;
            cout<<"Select from above(T for tikka and F for Fajita.):";
            cin>>PSmenu;
            cout<<"What size of pizza you want?"<<endl;
            cout<<"1- Large ($30)"<<endl;
            cout<<"2- Medium ($25)"<<endl;
            cout<<"3- Small ($20) "<<endl;
            cout<<"Enter your choice(L,M,or S):";
            cin>>Psize;
            cout<<"How many pizzas you want:";
            cin>>Qnty;
            
            

            switch(PSmenu) //PSmenu= pizza sub menu
            {
                case 'T':    //Chicken tikka
                case 't':
                        switch(Psize)
                        {
                            case 'L': //Large
                            case 'l':
                                  cout<<"Total bill for your large Chicken tikka is = $"<<30*Qnty<<endl;
                                  break;
                            case 'M': //Medium
                            case 'm':
                                    cout<<"Total bill for your Medium Chicken tikka is = $"<<25*Qnty<<endl;
                                    break;
                            case 'S': //Small
                            case 's':
                                    cout<<"Total bill for your Small Chicken tikka is = $"<<20*Qnty<<endl;
                                    break;
                            default: //Invalid Input.
                                    cout<<"You entered an invalid size of pizza"<<endl;
                        }    
                        break;         
                
                case 'F': //Chicken Fajita
                case 'f':
                        switch(Psize)
                        {
                            case 'L': //Large
                            case 'l':
                                  cout<<"Total bill for your large Chicken Fajita is = $"<<30*Qnty<<endl;
                                  break;
                            case 'M': //Medium
                            case 'm':
                                    cout<<"Total bill for your Medium Chicken Fajita is = $"<<25*Qnty<<endl;
                                    break;
                            case 'S': //Small
                            case 's':
                                    cout<<"Total bill for your Small Chicken Fajita is = $"<<20*Qnty<<endl;
                                    break;
                            default: //Invalid Input.
                                    cout<<"You entered an invalid size of pizza"<<endl;
                        }    
                        break;         
                default:
                       cout<<"Wrong input for type of pizza."<<endl;
            }
            break;
        case 3: //Sandwiches
            cout<<"\n\nThere are three flavours of sandwiches available "<<endl;
            cout<<"1-Club ($11) "<<endl;
            cout<<"2-Chicken ($15) "<<endl;
            cout<<"3-Vegetables ($10) "<<endl;
            cout<<"Choose flavour from above(C for club,k for chicken and V for vegetable): ";
            cin>>SSmenu; //SSmenu= sandwiches sub menu.
            cout<<"How many sandwiches you want:";
            cin>>Qnty;
            switch(SSmenu)
            {
                 case 'C':
                 case 'c':
                     cout<<"Price of your "<<Qnty<<" Club sandwiches is $"<<Qnty*11<<endl;
                     break;
                 case 'K':
                 case 'k':
                     cout<<"Price of your "<<Qnty<<" Chicken sandwiches is $"<<Qnty*15<<endl;
                     break;
                 case 'V':
                 case 'v':
                     cout<<"Price of your "<<Qnty<<" Vegetable sandwiches is $"<<Qnty*10<<endl;
                     break;
                 default:
                     cout<<"Wrong type input."<<endl;
        
            }
            break;
    
        default: //Wrong menu input:
                cout<<"You Entered Wrong menu input"<<endl;
    }


}
