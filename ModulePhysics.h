#pragma once
#include "Module.h"
#include "Globals.h"
#include "Box2D\Box2D\Box2D.h"

#define PIXELS_PER_METRE 50.0f
#define METRES_PER_PIXEL 0.02f

#define METRE_TO_PIXEL(m) ((int) floor(PIXELS_PER_METRE * m))
#define PIXEL_TO_METRE(p) ((float) METRES_PER_PIXEL * p)

class ModulePhysics : public Module
{
public:
	ModulePhysics(Application* app, bool start_enabled = true);
	~ModulePhysics();

	bool Start();
	update_status PreUpdate();
	update_status PostUpdate();
	bool CleanUp();

private:

	b2Vec2 gravity;
	b2World *world;
	bool debug;
};