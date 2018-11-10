#pragma once
#include"Player.h"
#include"Friend.h"
#include"Enemy.h"
#include"Boy.h"
#include"Girl.h"
#include"Elf.h"
#include"Wizard.h"
#include"BigAnt.h"
#include"Witch.h"
#include"Sabrina.h"
#include"Jadis.h"
#include"Tiffany.h"
#include"Vampire.h"
#include"Zombie.h"
#include"Reptilian.h"
#include"PrintText.h"

class Game
{

public:

	//CONTAINERS
	//vector of Enemys
	std::vector<Enemy*>Enemys;
	//vector of Friends
	std::vector<Friend*>Friends;
	int Points;
	int get_Points() const;
	void set_Points(int p);
	//function to push_back different Enemys
	void PushBackEnemys();
	//function to push_back different Friends
	void PushBackFriends();

	//function with welcoming text
	void WelcomeText();

	//function to make different choices
	int Choice();

	//function with player choices
	std::string PlayerChoices();

	//function that draws different enemys
	int Draw();
	//function that draws different friends
	int DrawFriend();
	// function that draws different witches
	void Witches();
	//function to delete the pointers
	void DeletePointers();

	//function that operates the game
	void Game_();

	//default constructor
	Game();
	//default destructor
	~Game();
};
