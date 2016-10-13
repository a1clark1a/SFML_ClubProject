#pragma once
#include <SFML/Graphics.hpp>
#include <string>
#include <vector>

// This will be the base class that will handle all objects to exist in game
// Implement a virtual function that handles sprite movement speed/ its velocity
// implement a virtual function that handles sprite rotation
// implement a virtual function that handles object state like dead
class GameObject
{
public:
	GameObject(std::string texturePath,  sf::Vector2f pos);
	virtual void Draw(sf::RenderWindow* window);
	virtual void Update(float dt);


private:
	sf::Vector2f m_pos;
	sf::Vector2f m_vel;

	sf::Sprite m_sprite;
	sf::Texture m_texture;
};

// Player class derived from game object class to create player gameobject
//TODO
//implement movement and sprite rotation through update
//implement proper sprite animation
//Setup 

class Player: public GameObject
{
public:
	Player(std::string texturePath,  sf::Vector2f pos);
	virtual void Update(float dt);

private:
};


//TODO
//Create enemy class derived from gameobject class
//Probably Separate file for better readability
//Setup constructor
//Setup update function
//Setup enemy AI logic

//TODO 
//Create boss enemy class derived from enemy class


//TODO
//Create bullet class derived from gameobject class