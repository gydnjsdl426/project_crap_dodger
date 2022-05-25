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


	// 똥 기본 속도
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