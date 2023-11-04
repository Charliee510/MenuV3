#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/*Objective to create Vietnamese Restaurant
Curent Task:
Create Simple User Prompt
Create Small Menu with the Prices
*/

void stars();


int main()
{    
    string choices = "Dine in", choices2 = "Take out", choices3 = "Yes";
    string pick;

    stars();
    cout << endl;
    cout<< setw(45) <<"Welcome to the Phoo King Restaurant \n"<< endl;
    stars();

    
    cout<< "Would you like to Dine in or Take out?: "<< endl;
    cin>> pick;

    if(choices == choices){
        cout<<"Here take your seat w/ the Menu: ";
    }else if(choices2 == choices2)
        cout<<"Here is your menu";
    
    cout<<"Open the Menu: "<< endl;
    

    return 0;
}


void stars()
{
    for(int i=0; i<60; i++)
    {
        cout<< "*";
    }
    cout << endl;
}