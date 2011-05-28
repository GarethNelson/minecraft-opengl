#ifndef __MINECRAFT_H__
#define __MINECRAFT_H__

#include <sstream>
#include <map>
#include <algorithm>

#include "R3/R3.h"
#include "R3Scene.h"
#include "raytrace.h"
#include "materials.h"
#include "strings.h"
#include "draw.h"
#include "utils.h"
#include "ui.h"
#include "cos426_opengl.h"

#define M_2PI (2. * M_PI)
#define RAD2DEG (180. / M_PI)

// Fudge factor
#define EPS 1e-4

// Return square of x
#define SQ(x) ((x) * (x))
// Return sign of x, with 0 as even
#define SIGN(x) ((x) >= 0 ? 1 : -1)
// Return the absolute value of the given number
#define ABS(x) ((x) * SIGN(x))
// Clamp x to [low, high]
#define CLAMP(x, low, high) MIN(MAX((x), (low)), (high))
// Wrap x around so it's between [low, high]
#define WRAP(x, low, high) (((x) > (high)) ? (x) - (high) : \
                            ((x) < (low)) ? (x) - (low) : (x))  
// Debugging function to print any vector
#define PRINT_VECTOR(x) printf("%lf %lf %lf\n", (x).X(), (x).Y(), (x).Z());
 
typedef vector<R3Creature *> VecCreature;
typedef vector<R3Creature *>::iterator VecCreatureIt;
typedef struct { GLfloat x, y; } jitter_point;

const jitter_point j2[] =
{
  { 0.246490,  0.249999},
  {-0.246490, -0.249999}
};

const jitter_point j4[] =
{
  {-0.208147,  0.353730},
  { 0.203849, -0.353780},
  {-0.292626, -0.149945},
  { 0.296924,  0.149994}
};

enum CULLING { NONE, VIEW, OCCLUSION, FULL };
enum GAMESTATE { STARTMENU, REGULAR, WORLDBUILDER, CONTROLS, WON, LOST };
enum ANTIALIAS { ZERO, LOW = 2, HIGH = 4 };

extern enum CULLING culling;
extern R3Node *currentSelection;
extern R3Camera camera;
extern double dotProductCutOff;

////////////////////////////////////////////////////////////
// HELPER METHODS
////////////////////////////////////////////////////////////

R3Index getChunkCoordinates(R3Point p);
bool LegalPositions(R3Point *start, R3Vector direction, R3Index *c, bool isCharacter);
R3Vector InterpolateMotion(R3Point *start, R3Vector direction, bool isCharacter);
void InterpolateJump(R3Point *start, R3Vector direction);

////////////////////////////////////////////////////////////
// GAME LOGIC CODE
////////////////////////////////////////////////////////////

void AlignReticle();
void AddBlock(int block);
void LoadMaterial(R3Material *material);
void ChangeHealth(R3Character *character, int delta);
void ChangeHealth(R3Creature *creature, int delta);
void ChangeHealth(R3Block *block, int delta);

////////////////////////////////////////////////////////////
// SCENE DRAWING CODE
////////////////////////////////////////////////////////////

void FindMaterial(R3Block *block, bool isTop);
void FindColor(R3Block *block, bool isTop);
void LoadCamera(R3Camera *camera);
void LoadLights(R3Scene *scene);
void DrawCreatures();
void GenerateCreatures();
void UpdateCharacter();

// Creature Functions

void RemoveCreature(R3Creature *died);
void MoveCharacter(R3Vector translated, double d);
void DrawCreatures();

////////////////////////////////////////////////////////////
// GLUT USER INTERFACE CODE
////////////////////////////////////////////////////////////

void GLUTMainLoop(void);
void GLUTIdleFunction(void);
void GLUTSaveImage(const char *filename);
void GLUTStop(void);
void GLUTResize(int w, int h);
void JitterPerspective(GLdouble fovy, GLdouble aspect, GLdouble near_p, 
                       GLdouble far_p, GLdouble pixdx, GLdouble pixdy, 
	                     GLdouble eyedx, GLdouble eyedy, GLdouble focus);
void GLUTRedraw(void);
void GLUTPassiveMotion(int x, int y);
void GLUTMouse(int button, int state, int x, int y);
void GLUTMouseEntry(int state);
void GLUTSpecial(int key, int x, int y);
void GLUTKeyboard(unsigned char key, int x, int y);
void GLUTCommand(int cmd);
void GLUTCreateMenu(void);
void GLUTInit(int *argc, char **argv);

////////////////////////////////////////////////////////////
// SCENE READING
////////////////////////////////////////////////////////////

R3Scene *ReadScene(const char *filename);

////////////////////////////////////////////////////////////
// PROGRAM ARGUMENT PARSING
////////////////////////////////////////////////////////////

int ParseArgs(int argc, char **argv);

#endif
