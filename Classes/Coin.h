#ifndef __Coin__H__
#define __Coin__H__

#include "Base.h"

class Coin : public Base{
public:
	virtual bool init();
	CREATE_FUNC(Coin);

	//��Ҷ���
	cocos2d::Animate* createAnimate(cocos2d::SpriteFrameCache* frameCache);
	//�������
	void initBody();

private: 
};/**/

#endif