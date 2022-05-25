#include "Ddong_GEN.h"

Ddong_GEN::Ddong_GEN(){
	ddong_gen_period = 0;
	ddong_speed = 0;
}

void Ddong_GEN::update(Score& score){
	/*
		주기적으로 랜덤 속도를 가진 똥이 랜덤 위치에서 생성되도록 하는 코드 작성
	 */

	/*
		destroyed 된 똥 vector에서 지우기
	 */

}

void Ddong_GEN::draw(RenderWindow& _window){
	for (auto& _e : ddongs)
		_e.draw(_window);
}

bool Ddong_GEN::checkHit(FloatRect _rect)
{
	// indi에 맞았는지?

	return false;
}

void Ddong_GEN::levelUp() {
	ddong_gen_period++;
	ddong_speed += 1.0f;
}