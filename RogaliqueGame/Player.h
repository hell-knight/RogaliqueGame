#pragma once
#include "CameraComponent.h"
#include "GameWord.h"
#include "SpriteRendererComponent.h"
#include "RenderSystem.h"
#include "InputComponent.h"
#include "GameObject.h"

namespace RogaliqueGame
{
	class Player
	{
	public:
		Player();
		Engine::GameObject* GetGameObject();
	private:
		Engine::GameObject* gameObject;
	};
}