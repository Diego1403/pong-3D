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

using namespace std; 

/**
 * cgvScene3D contains the basic functionality to render a scene.
 */
class cgvScene3D {
	private:
		vector<cgvBox> boxes; ///< List of boxes in the scene


		// Additional attributes		
		bool axes=true; ///< It indicates whether the axes are rendered or not
                

	public:
		// Default constructor and destructor
		cgvScene3D();
		~cgvScene3D() = default;

		// Methods
		// method with the OpenGL calls to render the scene
		void render(RenderMode mode);

		void assignSelection(GLubyte _c[3]); 
			
		bool get_axes() {return axes;};
		void set_axes(bool _axes){axes = _axes;};

		
	private:
		void draw_axes();
};

