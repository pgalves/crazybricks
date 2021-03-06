

#ifndef STANDARDFACTORY_H
#define STANDARDFACTORY_H

#include "objectfactory.h"
#include "block.h"
#include "ball.h"
#include "platform.h"
#include "bonus.h"
#include "crazybricks.h"

class StandardFactory: public ObjectFactory
{
public:
    StandardFactory(PhysicSystem& engine, Map& map);
    MapObject* createBlock(float posX, float posY,int width, int height);
    MapObject* createWallBlock(float posX, float posY,int width, int height);
    MapObject* createBall(float posX, float posY, ballInit location);
    MapObject* createPlatform(float posX, float posY,int width, int height, int limitXLeft, int limitXRight);
    MapObject* createBonus(float posX, float posY, bonusType type, int bonusToPlatformId, CrazyBricks* game);
    PaintVisitor* createPaintVisitor(QWidget *widget);
    void createBackground(QWidget *widget);
};

#endif // STANDARDFACTORY_H
