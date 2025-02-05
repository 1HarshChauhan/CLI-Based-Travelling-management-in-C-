#include<fstream>
#include<string>
using namespace std;


int main(){
    int sg_location,og_hotel,yk_money,aap_cost,ch_travel,days,people,hc_data;
    string hc_name,location,hotel,travel,travel_data_input,travel_data_output;

    cout<<endl;

    cout<<"\033[1;3;4;34mwelcome , we the student of division 9 of MITWPU have created a project on travel management system in which you choose your destination where you want to travel,they way you want to travel & the hotel you want to live.hope you like the project"<<endl;
    cout<<"\033[1;3;4;31mour names are:"<<endl;
    cout<<"\033[1;3;4;32msamruddhi ghanwat 109005"<<endl;
    cout<<"\033[1;3;4;33mharsh chauhan 109015"<<endl;
    cout<<"\033[1;3;4;35mom gunjal"<<endl;
    cout<<"\033[1;3;4;36myash karnawat 109021"<<endl;
    cout<<"\033[1;3;4;34matharv anant prabhune 109032 \033[0m"<<endl<<endl<<endl;

    cout<<"\033[1;31;46m**\033[0m"<<endl;
    cout<<"\033[1;4;31;46m                          Travel Management System                                        \033[0m"<<endl;
    cout<<"\033[1;31;46m**\033[0m"<<endl<<endl<<endl;


    

    

    cout<<"\033[1;3;32mnamaskar, we feel grateful to work with you, we are div 9 travel management system.plz, tell us your good name: \033[1;3;34m "<<endl;
    cin>>hc_name;

    cout<<"\033[1;3;33m nice name \033[1;3;31m"<<hc_name<<" \033[1;3;33mnow let's plan your travelling. how much budget do you have for this vacation \033[1;3;31m"<<endl;
    cin>>yk_money;
    cout<<"\033[1;3;34mwould you tell how many people you are travelling with\033[1;3;36m"<<endl;
    cin>>people;
    cout<<endl<<endl<<"\033[1;31;46m**\033[0m"<<endl<<endl;

    cout<<"\033[1;3;35mwhere do you want to travel?"<<endl<<"our availability is in this specific countries"<<endl;
    cout<<"\033[1;3;36m1.press 1 for south korea"<<endl;
    cout<<"\033[1;3;31m2.press 2 for los angeles"<<endl;
    cout<<"\033[1;3;32m3.press 3 for spain "<<endl;
    cin>>sg_location;
    switch(sg_location){
        case 1:
            cout<<"\033[1;3;35mso you want to go to \033[1;3;4;33msouth korea \033[0m \033[1;3;35m, it getting lot popular after kpop"<<endl;
            location="south korea";
            break;
        case 2:
            cout<<"\033[1;3;35mso you want to go to \033[1;3;4;33mnew york\033[0m \033[1;3;35m, it is a city which never sleeps "<<endl;
            location="los angeles";
            break;
        case 3:
            cout<<"\033[1;3;35mso you want to go to \033[1;3;4;33mspain\033[0m \033[1;3;35m, lots of football fan goes their every year"<<endl; 
            location="spain";
            break;       
        default:
            cout<<"\033[1;3;35msorry, we currently don't have that option, please choose from above 3 option"<<endl;
            break;
    }
     cout<<endl<<endl<<"\033[1;31;46m**\033[0m"<<endl<<endl;
    cout<<"\033[1;3;34mnow let's talk about how we are going to travel to that place(take cost double for coming and going)"<<endl;
    cout<<"\033[1;3;36m1.press 1 for economy class seat which costs 7,000"<<endl;
    cout<<"\033[1;3;31m2.press 2 for business class seat which costs 10,000"<<endl;
    cout<<"\033[1;3;32m3.press 3 for first class seat which costs 15,000 "<<endl;
    cin>>ch_travel;
    switch (ch_travel)
    {
    case 1:
        cout<<"\033[1;3;34mnice, you choose \033[1;3;4;33meconomy class seat\033[0m \033[1;3;34m,saving money to spend in the travel location"<<endl;
        travel="economy class seat";
        aap_cost=7000*2*people;
        break;
     case 2:
        cout<<"\033[1;3;34mnice, you choose \033[1;3;4;33mbusiness class seat \033[0m"<<endl;
        travel="business class seat";
        aap_cost=10000*2*people;
        break;
     case 3:
        cout<<"\033[1;3;34mnice, you choose \033[1;3;4;33mfirst class seat \033[0m \033[1;3;34m,you sounds rich"<<endl;
        travel="first class seat";
        aap_cost=15000*2*people;
        break;
    
    default:
        cout<<"\033[1;3;34msorry, we currently don't have that option, please choose from above 3 option"<<endl;
        break;
    }
 cout<<endl<<endl<<"\033[1;31;46m**\033[0m"<<endl<<endl;
cout<<"\033[1;3;32mnow let's talk about which hotel we are going to stay"<<endl;
cout<<"\033[1;3;33mbut first, for how long you gonna stay at hotel,tell in number of days"<<endl;
cin>>days;
cout<<"\033[1;3;34moh nice, so you are gonna stay for \033[1;3;4;33m"<<days<<" \033[0m \033[1;3;34mdays right?, great now choose the hotel"<<endl;
cout<<"\033[1;3;35m1.press 1 for flat which costs 4,500 per day, extra member will increase cost by 1,000"<<endl;
cout<<"\033[1;3;36m2.press 2 for bangalow which costs 10,000 per day per person, extra member will increae cost by 2,000"<<endl;
cout<<"\033[1;3;31m3.press 3 for mansion which costs 20,000 per day per person , extra member will increase cost by 5,000"<<endl;
cin>>og_hotel;
switch (og_hotel)
    {
    case 1:
        cout<<"\033[1;3;34mnice, you choose \033[1;3;4;33flat \033[0m \033[1;3;34, good decision as most of the time you will be travelling"<<endl;
        hotel="flat";
        aap_cost=aap_cost+3500*days+1000*people*days;
        break;
     case 2:
        cout<<"\033[1;3;34nice, you choose \033[1;3;4;33bangalow \033[0m"<<endl;
        hotel="bangalow";
        aap_cost=aap_cost+8000*days+2000*people*days;
        break;
     case 3:
        cout<<"\033[1;3;34nice, you choose \033[1;3;4;33mansion \033[0m \033[1;3;34,you will live lavishing life in mansion"<<endl;
        hotel="mansion";
        aap_cost=aap_cost+15000*days+5000*people*days;
        break;
    
    default:
        cout<<"\033[1;3;36sorry, we currently don't have that option, please choose from above 3 option"<<endl;
        break;
    }
 cout<<endl<<endl<<"\033[1;31;46m**\033[0m"<<endl<<endl;
if(yk_money>=aap_cost){
    cout<<"\033[1;3;32mcongratulation, your travel has been booked, you \033[1;3;4;33m"<<hc_name<<" \033[0m \033[1;3;32m with \033[1;3;4;33m"<<people<<"  \033[0m \033[1;3;32m people are going in vacation for \033[1;3;33;4m"<<days<<" \033[0m \033[1;3;32m days.";
    cout<<"\033[1;3;32myou are going to \033[1;3;33;4m"<<location<<" \033[0m \033[1;3;32m by \033[1;3;33;4m"<<travel<<" \033[0m \033[1;3;32m and going to stay at \033[1;3;33;4m"<<hotel <<"\033[0m"<<endl;
    cout<<"\033[1;3;31myour total budget: \033[1;3;34;4m"<<yk_money<<" \033[0m"<<endl;
    cout<<"\033[1;3;31myour total cost of vacation is: \033[1;3;34;4m"<<aap_cost<< "\033[0m"<<endl;
    int saving=yk_money-aap_cost;
    cout<<"\033[1;3;31myour total budget left is:\033[1;3;34;4m"<<saving<<"\033[0m"<<endl;
    cout<<"\033[1;3;31mthanks for choosing our travel agency, hope you have a great vacation.";
}
else{
    cout<<" \033[0m \033[1;3;31msorry your booking is not possible because it exceeds your budget.sorry for the inconviniece"<<endl;
}
 cout<<endl<<endl<<"\033[1;31;46m**\033[0m"<<endl<<endl;
 cout<<"\033[1;3;31m do you want to see data of all the people who register for travelling? 1 for yes , 2 for no \033[1;3;34m"<<endl;
 cin>>hc_data;
if(hc_data==1){
    fstream harshif;
    harshif.open("travel_data_div9.txt",ios::app);
    travel_data_input ="\033[1;3;32mcongratulation, your travel has been booked, you \033[1;3;4;33m";
    cout<<hc_name<<" \033[0m \033[1;3;32m with \033[1;3;4;33m"<<people<<"  \033[0m \033[1;3;32m people are going in vacation for \033[1;3;33;4m"<<days<<" \033[0m \033[1;3;32m days."; 
    cout<<"\033[1;3;32myou are going to \033[1;3;33;4m"<<location<<" \033[0m \033[1;3;32m by \033[1;3;33;4m"<<travel<<" \033[0m \033[1;3;32m and going to stay at \033[1;3;33;4m"<<hotel <<"\033[0m"<<endl;
    cout<<"\033[1;3;31myour total budget: \033[1;3;34;4m"<<yk_money<<" \033[0m"<<endl<<"\033[1;3;31myour total cost of vacation is: \033[1;3;34;4m"<<aap_cost<< "\033[0m"<<endl<<"\033[1;3;31myour total budget left is:\033[1;3;34;4m"<<yk_money-aap_cost<<"\033[0m"<<endl;
    harshif<<travel_data_input;
    harshif.close();
    ifstream harshof;

    harshof.open("travel_data_div9.txt",ios::in);
    while( getline(harshof,travel_data_output)){
            cout<<"travel_data_output";

        

    }
    harshof.close();
}
else{
    cout<<"\033[1;3;31mokay bye bye , see you again";
}
 cout<<endl<<endl<<"\033[1;31;46m**\033[0m"<<endl<<endl;

    return 0;
}
