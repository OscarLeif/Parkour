#include "Coin.h"

USING_NS_CC;

bool Coin::init(){
	if(!Node::init()){
		return false;
	}

	//�����
	auto frameCache = SpriteFrameCache::getInstance();
	frameCache->addSpriteFramesWithFile("parkour.plist","parkour.png");

	auto sprite = Sprite::createWithSpriteFrameName("coin0.png");

	//��
	setSprite(sprite);
	//ִ�ж���
	getSprite()->runAction(createAnimate(frameCache));
	//�󶨸���
	initBody();

	return true;
}

Animate* Coin::createAnimate(SpriteFrameCache* frameCache){


    SpriteFrame* frame = NULL;
	//���鲻�� Ҫ��vector
    //auto frameArray = Array::create();
	//frameArray->retain();
	Vector<SpriteFrame*>frameArray;

    // ��һ���б�������SpriteFrame���� 
    for(int i = 0; i <= 7; i++) {
        /* ��SpriteFrame������л�ȡCCSpriteFrame���� */
        frame = frameCache->spriteFrameByName(String::createWithFormat("coin%d.png", i)->getCString());
		frameArray.pushBack(frame);

    } 
    /* ʹ��SpriteFrame�б����������� */
    auto animation = Animation::createWithSpriteFrames(frameArray);

    animation->setLoops(-1);

    animation->setDelayPerUnit(0.1f);

    /* ��������װ��һ������ */
    auto action = Animate::create(animation);

    return action;
}

void Coin::initBody(){
	auto bodySize = getSprite()->getContentSize();
	
	bodySize.width -= 20;
	bodySize.height -= 15;

	auto phyBody = PhysicsBody::createEdgeBox(bodySize);
	phyBody->setCategoryBitmask(1);
	phyBody->setCollisionBitmask(1);
	phyBody->setContactTestBitmask(1);
	
	this->setPhysicsBody(phyBody);
}

