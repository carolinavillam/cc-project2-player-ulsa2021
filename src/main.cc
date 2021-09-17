#include<iostream>
#include<string>
#include<conio.h>
#include<stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

class Character
{
	private:
		string name;
		int level;
	public:
		Character(string, int);
		void printCharacter();
};

class Player : public Character 
{
	private:
		string gameplay;
		float strength;
	public:
		Player(string,int,string,float);
		void printPlayer();	
};

Character::Character(string _name, int _level)
{
	name = _name;
	level = _level;
}

Player::Player(string _name,int _level, string _gameplay, float _strength) : Character(_name, _level)
{
	gameplay = _gameplay;
	strength = _strength;
}

void Character::printCharacter()
{
	cout<<"Name: "<<name<<endl;
	cout<<"Level: "<<level<<endl;
}

void Player::printPlayer()
{
	printCharacter();
	cout<<"Gameplay "<<gameplay<<endl;
	cout<<"Strength "<<strength<<endl;
}


int main() 
{
	
	
	int flag = 1;
	int count = 1;
	
	string playerName;
	int playerLevel;
	string playerGameplay;
	float playerStrength;
	
	do{
		
		cout<<"Enter player name: ";
		cin>>playerName;
		cout<<"Enter player level: ";
		cin>>playerLevel;
		cout<<"Attack or Defense? ";
		cin>>playerGameplay;
		cout<<"Strength level? ";
		cin>>playerStrength;
		
		Player player1(playerName,playerLevel,playerGameplay,playerStrength);
		player1.printPlayer();	
		
		cout<<endl<<count++<<" players added.\n";
		
		cout<<"More players?\n  Yes - 1 \n  No - 2"<<endl;
		cin>>flag;
		
	}while(flag==1);
	
	
	
	return 0;
}
