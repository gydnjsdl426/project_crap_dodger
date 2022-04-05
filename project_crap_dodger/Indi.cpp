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
	/*if (Keyboard::isKeyPressed(Keyboard::Left) and indi.getPosition().x >= 0.0f)
		indi.move(-speed, 0);
	else if (Keyboard::isKeyPressed(Keyboard::Right) and indi.getPosition().x <= 720.0f - 40.0f)
		indi.move(speed, 0);*/
}

void Indi::update(Ddong_GEN& ddongs, Score& score, soundEffect& s){
	/*
		똥에 맞았는지 판단하는 코드와 맞았을 때 동작에 대한 코
	*/
	//indi.setColor(Color::White);
	//if (ddongs.checkHit(indi.getGlobalBounds()) == true) {
	//	life.pop_back(); // 라이프 감소
	//	s.playSound(); // 사운드 플래이
	//	indi.setColor(Color::Red); // 빨간색으로 잠시 변경
	//}
}

void Indi::draw(RenderWindow& _window){
	for (int i = 0; i < life.size(); i++)
		_window.draw(life.at(i));

	_window.draw(indi);
}