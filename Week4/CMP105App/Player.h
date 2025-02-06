#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/BaseLevel.h"
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include <string.h>
#include <iostream>


class Player : public GameObject {
public:
	Player();
	~Player();

	void handleInput(float dt) override;
	void update(float dt) override;

private:
	// player attributes
	
	int num_lives;
	float playerSpeed;
};
