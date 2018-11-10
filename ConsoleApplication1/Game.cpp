#include "Game.h"
#include<iostream>
#include<fstream>
#include<string>
#include<random>
#include<vector>
using namespace std;

Game::Game()
{
	Points = 3;
}

int Game::get_Points() const
{
	return Game::Points;
}

void Game::set_Points(int p)
{
	Game::Points = p;
}

void Game:: PushBackEnemys()
{
	Enemys.push_back(new BigAnt);
    Enemys.push_back(new Reptilian);
    Enemys.push_back(new Vampire);
    Enemys.push_back(new Zombie);  
}
void Game:: PushBackFriends()
{
	Friends.push_back(new Wizard);
    Friends.push_back(new Elf); 
}

void Game:: WelcomeText()
{
	
	PrintText::LoadText("WelcomeText.txt");
}

int Game::Choice()
{
	int choice;
	cin>>choice;
	if(choice==1)
			return 1;
	else if(choice==2)
			return 2;
	else
	{
			 
		PrintText::LoadText("WrongChoice.txt");
		Choice();
		return 0;
	}	
}
 string Game:: PlayerChoices()
{
	 
	int choice=Choice();
	if (choice==1)
	{
	
		Player *P=new Boy;
		PrintText::LoadText("AttackChoice1.txt");
		int c=Choice();
		string attack=P->ReturnAttacks(c);
		return attack;
		delete P;
	}
	else
	{
		Player *P=new Girl;
		PrintText::LoadText("AttackChoice2.txt");
		int c=Choice();
		string attack=P->ReturnAttacks(c);
		return attack;
		delete P;
	}
	
}

int Game::Draw()
{
	int points = 0;
	PushBackEnemys();

	random_device rd;
    uniform_int_distribution<>dist(1, 4);

	int Draw1=0;
    Draw1=dist(rd);
	if (Draw1==1)
	{
		
			if(BigAnt::BigAntCount>1)
			{
				Draw1=0;
				return 0;
			}
			else
			{
				 string force=Enemys[0]->ReturnForce();

				 BigAnt::BigAntCount++;

				 string attack=PlayerChoices();
				 PrintText::LoadText("BigAnt.txt");
				if(attack==force)
				{
					PrintText::LoadText("Winning.txt");
					points++;
				}
				else
				{
					PrintText::LoadText("Losing.txt");
					points--;

				}
			}
	}
		else if(Draw1==2)
		{
		
			if(Reptilian::ReptilianCount>1)
			{
				Draw1=0;
				return 0;
			}
			else
			{
				 string force=Enemys[1]->ReturnForce();
			 
				 Reptilian :: ReptilianCount++;

				 string attack=PlayerChoices();
				 PrintText::LoadText("Reptilian.txt");
				if(attack==force)
				{
					PrintText::LoadText("Winning.txt");
					points++;
				}
				else
				{
					PrintText::LoadText("Losing.txt");
					points--;
				}
			}
		}
	
	else if(Draw1==3)
		{
			
			if(Vampire::VampireCount>1)
			{
				Draw1=0;
				return 0;
			}
			else
			{
				 string force=Enemys[2]->ReturnForce();
			
				 Vampire::VampireCount++;

				 string attack=PlayerChoices();
				 PrintText::LoadText("Vampire.txt");
				if(attack==force)
				{
					PrintText::LoadText("Winning.txt");
					points++;
				}
				else
				{
					PrintText::LoadText("Losing.txt");
					points--;
				}
			}
		}
		else if(Draw1==4)
		{
			
			if(Zombie::ZombieCount>1)
			{
				return 0;
			}
			else
			{
				 string force=Enemys[3]->ReturnForce();
			 
				 Zombie::ZombieCount++;

				 string attack=PlayerChoices();
				 PrintText::LoadText("Zombie.txt");
				if(attack==force)
				{
					PrintText::LoadText("Winning.txt");
					points++;
				}
				else
				{
					PrintText::LoadText("Losing.txt");
					points--;
				}
			}
		}
		Game::set_Points(Game::get_Points() + points);
		return Game::get_Points();
}

int Game::DrawFriend()
{
		PushBackFriends();
		random_device rd;
        uniform_int_distribution<>dist(1, 2);
        int Draw=dist(rd);
		if (Draw==1)
		{
			PrintText::LoadText("Wizard.txt");
			int power=Friends[0]->ReturnPower();
			return power;
		}
		else
		{
			PrintText::LoadText("Elf.txt");
			int power=Friends[1]->ReturnPower();
			return power;
		}
	
}

void Game::Witches()
{
		random_device rd;
        uniform_int_distribution<>dist(1, 3);
        int Draw=dist(rd);
		if (Draw==1)
		{
			
			int fpower=DrawFriend();
			Witch *W = new Jadis;
			
			int epower=W->ReturnPower();
			
			if(fpower>=epower)
			{
				PrintText::LoadText("WinningFW.txt");
				W->ReturnPuzzles();
				PrintText::LoadText(W->ReturnPuzzle());
				int choice=Choice();
				if (choice == 1)
				{
					PrintText::LoadText("WinningTheGame.txt");
				}
				else
					PrintText::LoadText("LosingTheGame.txt");
				 
			}
			
			else
			{
				PrintText::LoadText("LosingFW.txt");
				PrintText::LoadText("LosingTheGame.txt");
			}
			
			delete W;
		}
		
		else if (Draw==2)
		{
			
			int fpower=DrawFriend();
			Witch *W = new Sabrina;
			
			int epower=W->ReturnPower();
			
			if(fpower>=epower)
			{
				PrintText::LoadText("WinningFW.txt");
				W->ReturnPuzzles();
				PrintText::LoadText(W->ReturnPuzzle());
				int choice=Choice();
				if (choice == 2)
				{
					PrintText::LoadText("WinningTheGame.txt");
				}
				else
					PrintText::LoadText("LosingTheGame.txt");
				 
			}
			else
			{
				 PrintText::LoadText("LosingFW.txt");
				 PrintText::LoadText("LosingTheGame.txt");
			}
			
			delete W;
		}
		else if (Draw==3)
		{
			
			int fpower=DrawFriend();
			Witch *W = new Tiffany;
			
			int epower=W->ReturnPower();
			if (fpower >= epower)
			{
				PrintText::LoadText("WinningFW.txt");
				W->ReturnPuzzles();
				PrintText::LoadText(W->ReturnPuzzle());
				int choice = Choice();
				if (choice == 2)
				{
					PrintText::LoadText("WinningTheGame.txt");
				}
				else
					PrintText::LoadText("LosingTheGame.txt");
				 
			}
			else
			{
				PrintText::LoadText("LosingFW.txt");
				 
			}
			
			delete W;

		}
		
}
void Game::DeletePointers()
{
	for(auto& e : Enemys) 
	{
		delete e;
	}
	for(auto& f : Friends) 
	{
		delete f;
	}
}
void Game::Game_()
{
	 
	WelcomeText();

	int points = 0;
	for(int i=0;i<3;i++)
	{
		points = Draw();
		PrintText::LoadText("YouHave.txt");
		cout << points;
		PrintText::LoadText("Points.txt");
		if (points > 0)
		{
			PrintText::LoadText("PressAnyKey.txt");
		}
	}

	if(points<=0)
	{
		PrintText::LoadText("YouLoseToManyBattles.txt");
		system ("pause");
		exit(1);
	}
	else
	{
		Witches();
	}

	DeletePointers();

}
Game::~Game()
{

}

