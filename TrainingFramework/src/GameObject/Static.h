#pragma once
#include "Sprite2D.h"
#include <string>

class Static
{
public:
	Static();
	Static(int speed);
	Static(int speed, int x, int y);
	~Static();
	void		Init(std::string NameFile);
	void		Draw();
	void		Update(float deltatime);
	void		SetPostion(int x, int y);
	void		SetCurrentPostion(int x, int y);
	void		SetSize(int width, int height);
	void		SetSpeed(int speed);

protected:
	std::shared_ptr<Sprite2D> m_Image1;
	std::shared_ptr<Sprite2D> m_Image2;
	int m_Speed;
	Vector2 m_Pos;
	Vector2 m_CurrentPos;

};