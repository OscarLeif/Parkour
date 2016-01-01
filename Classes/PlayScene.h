#ifndef __PlayScene__H__
#define __PlayScene__H__

#include "cocos2d.h"
#include "Runner.h"
#include "cocos-ext.h"
#include "BaseManager.h"

USING_NS_CC_EXT;

class PlayScene : public cocos2d::Layer{
public:
	virtual bool init();
	static cocos2d::Scene* createScene();
	CREATE_FUNC(PlayScene);

	//�������е������ǣ�Ϊ�����layer->setPhysicsWorld(scene->getPhysicsWorld());
	cocos2d::PhysicsWorld* m_world;
	void setPhysicsWorld(cocos2d::PhysicsWorld* world){ m_world = world;};/**/

	//��ʼ������
	void initBG();

	//��update�����õ�ͼ����
	virtual void update(float dt);

	//Jump
	void createJumpButton();
	void jumpEvent(Ref* pSender,Control::EventType event);

	//Crouch
	void createCrouchButton();
	void crouchDown(Ref* pSender,Control::EventType event);
	void crouchUp(Ref* pSender,Control::EventType event);
	
	//��ײ���
	//cocos2d::EventDispatcher* dispatcher;�����ǲ���Ҫ��
	void onEnter();
	void onExit();
	bool onContactBegin(cocos2d::PhysicsContact& contact);

	void GameOver();
	
private:

	//��ʼ��һ���ذ���������
	void initPhysicWorld();

	Runner* m_runner;
	
	//��������
	cocos2d::Sprite* bgSprite1;
	cocos2d::Sprite* bgSprite2;
	cocos2d::Sprite* groundSprite1;
	cocos2d::Sprite* groundSprite2;

	//
	BaseManager* m_manager;
};

#endif