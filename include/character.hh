#pragma once
#include <iostream>
#include <string>
#include <conio.h>
#include <stdlib.h>

class Character{
	private:
		string name;
		int level;
	public:
		Character(string, int);
		void printCharacter();
}; 
		

Character::Character(string _name, int _level){
	name = _name;
	level = _level;
}


void Character::printCharacter(){
	cout<<"Name: "<<name<<endl;
	cout<<"Level: "<<level<<endl;
}