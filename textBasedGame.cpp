#include<iostream>
#include<string>
#include<windows.h>

int strength = 1;
int intelligence = 1;
int charisma = 1;
int constitution = 1;
int dexterity = 1;

using namespace std;

void introduction()
{
    cout<<"Hello! Welcome to Eliot's text based game."<<endl;
    cout<<"This is a game that you will play entirely by typing."<<endl;
    cout<<"Words will paint the picture, and sound your story."<<endl;
    cout<<"The aim of the game is to of course finish."<<endl;
    system("pause");
}

void pickRace()
{
    string choice;
    system("CLS");
    cout<<"In this fantasy world, you have an option to pick a race of Human, Elf, Orc or Halfling."<<endl;
    cout<<"They each have varying statistics."<<endl;
    cout<<"To inquire about a race's information, type the race name, followed by 'INFO'."<<endl;
    cout<<"Example: Human INFO"<<endl;
    cout<<"To pick your race, type that race name and then press enter."<<endl;
    cout<<""<<endl;
    getline(cin, choice);
    if(choice == "Human INFO")
    {
        system("CLS");
        cout<<"Humans are some of the most complex, yet startlingly simple beings on the planet. Sometimes, they want things"<<endl;
        cout<<"for no reason, other times, they want something for a specific reason!"<<endl;
        cout<<"In terms of statistics however, humans have +1 to intelligence and +1 to strength."<<endl;
        system("pause");
        system("CLS");
    }
    if(choice == "Elf INFO")
    {

    }
    if(choice == "Orc INFO")
    {

    }
    if(choice == "Halfling INFO")
    {

    }

}

void characterSelection()
{
    pickRace();
}


int main()
{
    introduction();
    characterSelection();
}
