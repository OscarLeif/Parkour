#include "Base.h"

USING_NS_CC;

Base::Base(){
	m_sprite = NULL;
}

void Base::setSprite(Sprite* sprite){
	m_sprite = sprite; 
	//Ҫ��ӵ��ӽڵ��� �����ܱ���ʾ����
	this->addChild(m_sprite);
}

Sprite* Base::getSprite(){
	return m_sprite;
}

Size Base::getConSize(){
	return m_sprite->getContentSize();
}
