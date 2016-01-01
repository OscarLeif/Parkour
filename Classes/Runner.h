#ifndef __Runner__H__
#define __Runner__H__

#include "cocos2d.h"

enum runnerState{
	running,
	jumpUp,
	jumpDown,
	crouch
};

class Runner : public cocos2d::Node{
public:
	virtual bool init();
	CREATE_FUNC(Runner);

	//��ʼ�� action ����
	void initActionSet(cocos2d::SpriteFrameCache* frameCache);

	//���ݶ�������ִ�ж���
	void doAction(const char* actionName);//

	void initBody();

	runnerState getState(){ return m_state;};//

	cocos2d::Size getRunJumpSize(){ return run_jumpSize;};
	cocos2d::Size getCrouchSize() { return crouchSize;};

	void Run();

	void Jump();

	void Crouch();

	virtual void update(float dt);

private:
	//  ��Ҫһ����Ҫ�ľ���ִ�ж���
	cocos2d::Sprite* m_runner;

	// ��ͬ�Ķ�����Ҫ��ͬ�ĸ����С
	cocos2d::Size run_jumpSize;//�ܺ����Ĵ�Сһ��
	cocos2d::Size crouchSize;//�������Ĵ�С

	runnerState m_state;
};/**/

#endif