#include "Ddong.h"

Ddong::Ddong(float _x, float _speed) : x(_x), speed(_speed){
	t.loadFromFile("ddong.png");
	Dd.setTexture(t);
	Dd.setPosition(_x, 0);
}

void Ddong::update(Score& score)
{
	if (destroyed == true)
		return;

	Vector2f pos = Dd.getPosition();

	/* 
		화면 밖을 벗어났을 때 destroyed, score 더하기
	*/

	/*if (pos.y > 890.0f)
	{
		destroyed = true;
		score.upScore();
	}*/

	// 똥 기본 속도
	// Dd.move(0.0f, 1.0f + speed);
}

void Ddong::draw(RenderWindow& _window){
	if (destroyed == true)
		return;

	Dd.setTexture(t);
	_window.draw(Dd);
}

FloatRect Ddong::getArea(){
	return Dd.getGlobalBounds();
}