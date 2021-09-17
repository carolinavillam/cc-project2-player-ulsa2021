#pragma once
#include <iostream>
#include <string>
#include <conio.h>
#include <stdlib.h>
#include "character.hh"

using namespace std;

class Player : public Character 
{
	private:
		string gameplay;
		float strength;
	public:
		Player(string,int,string,float);
		void printPlayer();	
};

Player::Player(string _name,int _level, string _gameplay, float _strength) : Character(_name, _level)
{
	gameplay = _gameplay;
	strength = _strength;
}

void Player::printPlayer()
{
	printCharacter();
	cout<<"Gameplay "<<gameplay<<endl;
	cout<<"Strength "<<strength<<endl;
}