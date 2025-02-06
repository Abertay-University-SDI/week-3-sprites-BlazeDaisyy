#include "Player.h"

Player::Player()
{
	
	playerSpeed = 100.0f;
}

Player::~Player(){
}

void Player:: handleInput(float dt) {
	
	if (input->isKeyDown(sf::Keyboard::A)){
		velocity.x = -playerSpeed;
		velocity.y = velocity.y;
	}
	else if (input->isKeyDown(sf::Keyboard::D)) {
		velocity.x = playerSpeed;
		velocity.y = velocity.y;
	}
	else if (input->isKeyDown(sf::Keyboard::W)) {
		velocity.y = -playerSpeed;
		velocity.x = velocity.x;
	}
	else if (input->isKeyDown(sf::Keyboard::S)) {
		velocity.y = playerSpeed;
		velocity.x = velocity.x;
	}
	else {
			velocity.x = 0;
			velocity.y = 0;
	}

	move(velocity * dt);
}
void Player:: update(float dt) {

}

