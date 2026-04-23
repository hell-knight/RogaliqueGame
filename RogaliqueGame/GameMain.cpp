#include <SFML/Graphics.hpp>
#include "Player.h"
#include "Engine.h"
#include "ResourceSystem.h"
#include "DeveloperLevel.h"


using namespace RogaliqueGame;

int main()
{
	Engine::RenderSystem::Instance()->SetMainWindow(new sf::RenderWindow(sf::VideoMode(1280, 720), "RogaliqueGame"));

	Engine::RenderSystem::Instance()->LoadTexture("ball", "Resources/Textures/ball.png");

	auto developerLevel = std::make_shared<DeveloperLevel>();
	developerLevel->Start();

	Engine::RenderSystem::Instance()->Run();

	return 0;
}
