#include "Game.h"
#include <conio.h>
#include <iostream>


using namespace std;

Game::Game()
{
	m_graph = new Graph();
    m_player = new Player();
	m_enemy = new Enemy();
	//GameObject m_go = &m_player;

	m_screen = new ScreenManager();

	m_whileGameRunning = true;

	
}

Game::~Game()
{
	delete m_graph;
	delete m_player;
	delete m_enemy;
}

void Game::Init()
{
	cout << "initializing Game\n";
}

void Game::Draw()
{
	cout << "Drawing Game\n";
	m_graph->Draw();
	m_player->Draw();
	m_player->Update();
}

void Game::DrawGraph()
{
	int graph[12][12] = {};

	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			//std::cout << m_graph[i][j] << std::endl;
		}
	}

}


void Game::Update()
{
	while (m_whileGameRunning)
	{
		cout << "Updating Game\n";
		//m_graph->Draw();
		//m_player->Update();
		//DrawGraph();
		Sleep(1000);
		m_screen->ClearScreen();
	}
}


void Game::DrawHud()
{
	std::cout << "+===============+" << std::endl;
	std::cout << "|               |" << std::endl;
	std::cout << "|               |" << std::endl;
	std::cout << "|               |" << std::endl;
	std::cout << "|               |" << std::endl;
	std::cout << "|               |" << std::endl;
	std::cout << "|               |" << std::endl;
	std::cout << "|               |" << std::endl;

}


void Game::Intro()
{
	cout << "+=============================+\n";

	cout << R"(
                                                                                          
         `.  ``                                                                           
      .. -`-`:..                                   ` `                                    
      -.-:-/-/:---                           ``.....``...`                                
    -.-::::.::--:-`                        `.````````...:-.                               
    .:::.:/-+::.:-`                      `.`````...````.//:.                              
     .-:+:+.:--:::                       ..--.```....-:::--:                              
      .::--:::/:-.                       .-/:``-:://+yyyys/-.                             
       `-/::+:/:-                        `-:.:yyyyo`-osso/.`--                            
        `-/:+-//`                         `-.sssss+-+//----::.                            
          .-:-./.                          -...-:--oo+:``-:/-                             
           -.+:-/`                         .--::-``.-----::-:                             
           `-:/-::                          ``-/:-------:--.:                             
            .-/:-/-                 ``.``      :--------...-`                             
             -:/:-/.            ``..```-..`````.::--..``.-.`                              
              -///:/`      ``....--::///-:/:-:-::://:--:-.                                
              `:/o-/-````.---:::::-.../:/o+.:+////::::::::.`        ``                    
               .-/:-/..--:::-.``      `://:/::/+o/..../+///:--.``...``.`                  
                .-/-///:-.`            -./++:///o/.../o+://-:o+/:-::-.`..`                
                 .:/:-`               .--::///+os:..:+//::/:/oo/:-:::/:-...`              
                   ``                ``---.....-:..`//:---:-.:-..``  `.:/:---`            
                                                                        `.::---`          
                                                                           `-::-..``      
                                                                             `:/:---:.    
                                                                         ``.---:/:---/    
                                                                     `.--://::/::--::.    
                                                               ``..--/////::::::-.``      
                                                            `.--:/-::::::::-.`            
                                                       `...-:-///::/--..`                 
                                                      ..::-:/::///-:                      
                                                      `-:/-..:-::/-:                      
                                                       -/:/:/./--:-:`                     
                                                     `--.-:..::-/-/-                      
                                                    .--/:`    ``..`                       
                                                   `-.-.                                  
                                                   `.`                                    
                                                                                          
)"
	<< '\n';

	cout << "WELLCOME TO THE DUNGEON OF DOOM, FOOLISH MORTAL \n"
		<< "PREPARE FOR YOUR DOOOOM \n";

	// Play some beethoven
	Beep(1568, 200);
	Beep(1568, 200);
	Beep(1568, 200);
	Beep(1245, 1000);
	Beep(1397, 200);
	Beep(1397, 200);
	Beep(1397, 200);
	Beep(1175, 1000);

	cout << endl;

	m_screen->AtExit();
	m_screen->ClearScreen();
}



void Game::ShowPlayerDetails()
{

}


void Game::Battle()
{
	m_enemy->RollDamage();
	m_enemy->GetDamageVal();
}
