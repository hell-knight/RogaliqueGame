#include "pch.h"
#include "GameObject.h"



namespace MyEngine
{
	GameObject::GameObject()
	{
		AddComponent<TransformComponent>();
	}

	GameObject::~GameObject()
	{
		for (auto component : components)
		{
			delete component;
		}
		components.clear();
	}

	void GameObject::Update(float timeDelta)
	{
		for (auto& component : components)
		{
			component->Update(timeDelta);
		}
	}

	void GameObject::Render()
	{
		for (auto& component : components)
		{
			component->Render();
		}
	}

	

}