#include "Indi.h"

Indi::Indi() {
	tt.loadFromFile("indi.png");
	indi.setTexture(tt);
	indi.setPosition(360.0f, 900.0f - 60.0f);

	t.loadFromFile("heart.png");
	for (int i = 0; i < 3; i++){
		Sprite heart;
		heart.setTexture(t);
		heart.setPosition(680.0f - (float)i * 25.0f, 10.0f);
		life.push_back(heart);
	}

	hitted = false;
	hit_time = 0;
	speed = 5.0f;
}

void Indi::moveIndi() {
	//인디 좌우 움직임

}

void Indi::update(Ddong_GEN& ddongs, Score& score, soundEffect& s){
	/*
		똥에 맞았는지 판단하는 코드와 맞았을 때 동작에 대한 코
	*/

}

void Indi::draw(RenderWindow& _window){
	for (int i = 0; i < life.size(); i++)
		_window.draw(life.at(i));

	_window.draw(indi);
}