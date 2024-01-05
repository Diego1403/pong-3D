#pragma once

#if defined(__APPLE__) && defined(__MACH__)
#include <GLUT/glut.h>
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#else
#include <GL/glut.h>
#endif


#include <vector>
#include "cgvBox.h"
#include "Game.h"
using namespace std; 

/**
 * cgvScene3D contains the basic functionality to render a scene.
 */
class cgvScene3D {
	private:
		vector<cgvBox> boxes; ///< List of boxes in the scene


		// Additional attributes		
		bool axes=true; ///< It indicates whether the axes are rendered or not
		Game *gameInstance = NULL;

	public:
		//link gamedata 
		void setGameData(Game *_gameInstance) { gameInstance = _gameInstance; };
		// Default constructor and destructor
		cgvScene3D();
		void drawplayer1();
		void drawplayer2();
		void drawball();
		void drawField();
		~cgvScene3D() = default;

		// Methods
		// method with the OpenGL calls to render the scene
		void render(RenderMode mode);

		void assignSelection(GLubyte _c[3]); 
			
		bool get_axes() {return axes;};
		void set_axes(bool _axes){axes = _axes;};
		Game* getGame() { if (gameInstance) { return gameInstance; }return NULL; }
		
	private:
		void draw_axes();
};

