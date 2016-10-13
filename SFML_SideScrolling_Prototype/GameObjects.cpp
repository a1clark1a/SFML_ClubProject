/***************************************************
************GAMEOBJECT IMPLEMENTATION****************
****************************************************/

#include "stdafx.h"
#include "GameObjects.h"
#include <iostream>
#include <string>


//GameOject constructor
GameObject::GameObject(std::string texturePath, sf::Vector2f pos)

	:m_pos(pos)
{
	m_texture.loadFromFile(texturePath);
	m_sprite.setTexture(m_texture);
	m_sprite.setPosition(pos);
}

//Draw function responsible for drawing the sprite
void GameObject::Draw(sf::RenderWindow* window)
{
	window->draw(m_sprite);
}


//Function used to update the sprite in game in delta time
void GameObject::Update(float dt)
{

}


//Player constructor
Player::Player(std::string texturePath,  sf::Vector2f pos)
	:GameObject(texturePath, pos)
{
	
}

//player update function to update the sprite movement and rotation
void Player::Update(float dt)
{
	GameObject::Update(dt);
}