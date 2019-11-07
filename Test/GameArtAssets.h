#pragma once

#include <iostream>
#include <Windows.h>
#include "ScreenManager.h"
#include "Timer.h"


class GameArtAssets
{
public:
	GameArtAssets();

	void IntroSceleton();
	void GameOver();
	void Monster();
	void Player();

	void DrawConsoleStart();
	void DrawConsoleWait();

private:
	Timer m_timer;
};




///////////////////////////////////////////////////////////////////////////////////
////	For reference:
////	https://www.asciiart.eu/
///////////////////////////////////////////////////////////////////////////////////