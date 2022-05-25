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
		ȭ�� ���� ����� �� destroyed, score ���ϱ�
	*/


	// �� �⺻ �ӵ�
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