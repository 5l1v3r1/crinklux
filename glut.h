#ifndef  __FREEGLUT_STD_H__
#define  __FREEGLUT_STD_H__

#include "demo.h"

/*
 * The freeglut and GLUT API versions
 */
#define  FREEGLUT             1
#define  GLUT_API_VERSION     4
#define  FREEGLUT_VERSION_2_0 1
#define  GLUT_XLIB_IMPLEMENTATION 13

/*
 * Always include OpenGL and GLU headers
 */
#include "gl.h"
#include "glu.h"

/*
 * GLUT API macro definitions -- the special key codes:
 */
#define  GLUT_KEY_F1                        0x0001
#define  GLUT_KEY_F2                        0x0002
#define  GLUT_KEY_F3                        0x0003
#define  GLUT_KEY_F4                        0x0004
#define  GLUT_KEY_F5                        0x0005
#define  GLUT_KEY_F6                        0x0006
#define  GLUT_KEY_F7                        0x0007
#define  GLUT_KEY_F8                        0x0008
#define  GLUT_KEY_F9                        0x0009
#define  GLUT_KEY_F10                       0x000A
#define  GLUT_KEY_F11                       0x000B
#define  GLUT_KEY_F12                       0x000C
#define  GLUT_KEY_LEFT                      0x0064
#define  GLUT_KEY_UP                        0x0065
#define  GLUT_KEY_RIGHT                     0x0066
#define  GLUT_KEY_DOWN                      0x0067
#define  GLUT_KEY_PAGE_UP                   0x0068
#define  GLUT_KEY_PAGE_DOWN                 0x0069
#define  GLUT_KEY_HOME                      0x006A
#define  GLUT_KEY_END                       0x006B
#define  GLUT_KEY_INSERT                    0x006C

/*
 * GLUT API macro definitions -- mouse state definitions
 */
#define  GLUT_LEFT_BUTTON                   0x0000
#define  GLUT_MIDDLE_BUTTON                 0x0001
#define  GLUT_RIGHT_BUTTON                  0x0002
#define  GLUT_DOWN                          0x0000
#define  GLUT_UP                            0x0001
#define  GLUT_LEFT                          0x0000
#define  GLUT_ENTERED                       0x0001

/*
 * GLUT API macro definitions -- the display mode definitions
 */
#define  GLUT_RGB                           0x0000
#define  GLUT_RGBA                          0x0000
#define  GLUT_INDEX                         0x0001
#define  GLUT_SINGLE                        0x0000
#define  GLUT_DOUBLE                        0x0002
#define  GLUT_ACCUM                         0x0004
#define  GLUT_ALPHA                         0x0008
#define  GLUT_DEPTH                         0x0010
#define  GLUT_STENCIL                       0x0020
#define  GLUT_MULTISAMPLE                   0x0080
#define  GLUT_STEREO                        0x0100
#define  GLUT_LUMINANCE                     0x0200

/*
 * GLUT API macro definitions -- windows and menu related definitions
 */
#define  GLUT_MENU_NOT_IN_USE               0x0000
#define  GLUT_MENU_IN_USE                   0x0001
#define  GLUT_NOT_VISIBLE                   0x0000
#define  GLUT_VISIBLE                       0x0001
#define  GLUT_HIDDEN                        0x0000
#define  GLUT_FULLY_RETAINED                0x0001
#define  GLUT_PARTIALLY_RETAINED            0x0002
#define  GLUT_FULLY_COVERED                 0x0003

/*
 * GLUT API macro definitions -- fonts definitions
 *
 * Steve Baker suggested to make it binary compatible with GLUT:
 */
#if defined(_MSC_VER) || defined(__CYGWIN__) || defined(__MINGW32__)
#   define  GLUT_STROKE_ROMAN               ((void *)0x0000)
#   define  GLUT_STROKE_MONO_ROMAN          ((void *)0x0001)
#   define  GLUT_BITMAP_9_BY_15             ((void *)0x0002)
#   define  GLUT_BITMAP_8_BY_13             ((void *)0x0003)
#   define  GLUT_BITMAP_TIMES_ROMAN_10      ((void *)0x0004)
#   define  GLUT_BITMAP_TIMES_ROMAN_24      ((void *)0x0005)
#   define  GLUT_BITMAP_HELVETICA_10        ((void *)0x0006)
#   define  GLUT_BITMAP_HELVETICA_12        ((void *)0x0007)
#   define  GLUT_BITMAP_HELVETICA_18        ((void *)0x0008)
#else
    /*
     * I don't really know if it's a good idea... But here it goes:
     */
    extern void* glutStrokeRoman;
    extern void* glutStrokeMonoRoman;
    extern void* glutBitmap9By15;
    extern void* glutBitmap8By13;
    extern void* glutBitmapTimesRoman10;
    extern void* glutBitmapTimesRoman24;
    extern void* glutBitmapHelvetica10;
    extern void* glutBitmapHelvetica12;
    extern void* glutBitmapHelvetica18;

    /*
     * Those pointers will be used by following definitions:
     */
#   define  GLUT_STROKE_ROMAN               ((void *) &glutStrokeRoman)
#   define  GLUT_STROKE_MONO_ROMAN          ((void *) &glutStrokeMonoRoman)
#   define  GLUT_BITMAP_9_BY_15             ((void *) &glutBitmap9By15)
#   define  GLUT_BITMAP_8_BY_13             ((void *) &glutBitmap8By13)
#   define  GLUT_BITMAP_TIMES_ROMAN_10      ((void *) &glutBitmapTimesRoman10)
#   define  GLUT_BITMAP_TIMES_ROMAN_24      ((void *) &glutBitmapTimesRoman24)
#   define  GLUT_BITMAP_HELVETICA_10        ((void *) &glutBitmapHelvetica10)
#   define  GLUT_BITMAP_HELVETICA_12        ((void *) &glutBitmapHelvetica12)
#   define  GLUT_BITMAP_HELVETICA_18        ((void *) &glutBitmapHelvetica18)
#endif

/*
 * GLUT API macro definitions -- the glutGet parameters
 */
#define  GLUT_WINDOW_X                      0x0064
#define  GLUT_WINDOW_Y                      0x0065
#define  GLUT_WINDOW_WIDTH                  0x0066
#define  GLUT_WINDOW_HEIGHT                 0x0067
#define  GLUT_WINDOW_BUFFER_SIZE            0x0068
#define  GLUT_WINDOW_STENCIL_SIZE           0x0069
#define  GLUT_WINDOW_DEPTH_SIZE             0x006A
#define  GLUT_WINDOW_RED_SIZE               0x006B
#define  GLUT_WINDOW_GREEN_SIZE             0x006C
#define  GLUT_WINDOW_BLUE_SIZE              0x006D
#define  GLUT_WINDOW_ALPHA_SIZE             0x006E
#define  GLUT_WINDOW_ACCUM_RED_SIZE         0x006F
#define  GLUT_WINDOW_ACCUM_GREEN_SIZE       0x0070
#define  GLUT_WINDOW_ACCUM_BLUE_SIZE        0x0071
#define  GLUT_WINDOW_ACCUM_ALPHA_SIZE       0x0072
#define  GLUT_WINDOW_DOUBLEBUFFER           0x0073
#define  GLUT_WINDOW_RGBA                   0x0074
#define  GLUT_WINDOW_PARENT                 0x0075
#define  GLUT_WINDOW_NUM_CHILDREN           0x0076
#define  GLUT_WINDOW_COLORMAP_SIZE          0x0077
#define  GLUT_WINDOW_NUM_SAMPLES            0x0078
#define  GLUT_WINDOW_STEREO                 0x0079
#define  GLUT_WINDOW_CURSOR                 0x007A

#define  GLUT_SCREEN_WIDTH                  0x00C8
#define  GLUT_SCREEN_HEIGHT                 0x00C9
#define  GLUT_SCREEN_WIDTH_MM               0x00CA
#define  GLUT_SCREEN_HEIGHT_MM              0x00CB
#define  GLUT_MENU_NUM_ITEMS                0x012C
#define  GLUT_DISPLAY_MODE_POSSIBLE         0x0190
#define  GLUT_INIT_WINDOW_X                 0x01F4
#define  GLUT_INIT_WINDOW_Y                 0x01F5
#define  GLUT_INIT_WINDOW_WIDTH             0x01F6
#define  GLUT_INIT_WINDOW_HEIGHT            0x01F7
#define  GLUT_INIT_DISPLAY_MODE             0x01F8
#define  GLUT_ELAPSED_TIME                  0x02BC
#define  GLUT_WINDOW_FORMAT_ID              0x007B
#define  GLUT_INIT_STATE                    0x007C

/*
 * GLUT API macro definitions -- the glutDeviceGet parameters
 */
#define  GLUT_HAS_KEYBOARD                  0x0258
#define  GLUT_HAS_MOUSE                     0x0259
#define  GLUT_HAS_SPACEBALL                 0x025A
#define  GLUT_HAS_DIAL_AND_BUTTON_BOX       0x025B
#define  GLUT_HAS_TABLET                    0x025C
#define  GLUT_NUM_MOUSE_BUTTONS             0x025D
#define  GLUT_NUM_SPACEBALL_BUTTONS         0x025E
#define  GLUT_NUM_BUTTON_BOX_BUTTONS        0x025F
#define  GLUT_NUM_DIALS                     0x0260
#define  GLUT_NUM_TABLET_BUTTONS            0x0261
#define  GLUT_DEVICE_IGNORE_KEY_REPEAT      0x0262
#define  GLUT_DEVICE_KEY_REPEAT             0x0263
#define  GLUT_HAS_JOYSTICK                  0x0264
#define  GLUT_OWNS_JOYSTICK                 0x0265
#define  GLUT_JOYSTICK_BUTTONS              0x0266
#define  GLUT_JOYSTICK_AXES                 0x0267
#define  GLUT_JOYSTICK_POLL_RATE            0x0268

/*
 * GLUT API macro definitions -- the glutLayerGet parameters
 */
#define  GLUT_OVERLAY_POSSIBLE              0x0320
#define  GLUT_LAYER_IN_USE                  0x0321
#define  GLUT_HAS_OVERLAY                   0x0322
#define  GLUT_TRANSPARENT_INDEX             0x0323
#define  GLUT_NORMAL_DAMAGED                0x0324
#define  GLUT_OVERLAY_DAMAGED               0x0325

/*
 * GLUT API macro definitions -- the glutVideoResizeGet parameters
 */
#define  GLUT_VIDEO_RESIZE_POSSIBLE         0x0384
#define  GLUT_VIDEO_RESIZE_IN_USE           0x0385
#define  GLUT_VIDEO_RESIZE_X_DELTA          0x0386
#define  GLUT_VIDEO_RESIZE_Y_DELTA          0x0387
#define  GLUT_VIDEO_RESIZE_WIDTH_DELTA      0x0388
#define  GLUT_VIDEO_RESIZE_HEIGHT_DELTA     0x0389
#define  GLUT_VIDEO_RESIZE_X                0x038A
#define  GLUT_VIDEO_RESIZE_Y                0x038B
#define  GLUT_VIDEO_RESIZE_WIDTH            0x038C
#define  GLUT_VIDEO_RESIZE_HEIGHT           0x038D

/*
 * GLUT API macro definitions -- the glutUseLayer parameters
 */
#define  GLUT_NORMAL                        0x0000
#define  GLUT_OVERLAY                       0x0001

/*
 * GLUT API macro definitions -- the glutGetModifiers parameters
 */
#define  GLUT_ACTIVE_SHIFT                  0x0001
#define  GLUT_ACTIVE_CTRL                   0x0002
#define  GLUT_ACTIVE_ALT                    0x0004

/*
 * GLUT API macro definitions -- the glutSetCursor parameters
 */
#define  GLUT_CURSOR_RIGHT_ARROW            0x0000
#define  GLUT_CURSOR_LEFT_ARROW             0x0001
#define  GLUT_CURSOR_INFO                   0x0002
#define  GLUT_CURSOR_DESTROY                0x0003
#define  GLUT_CURSOR_HELP                   0x0004
#define  GLUT_CURSOR_CYCLE                  0x0005
#define  GLUT_CURSOR_SPRAY                  0x0006
#define  GLUT_CURSOR_WAIT                   0x0007
#define  GLUT_CURSOR_TEXT                   0x0008
#define  GLUT_CURSOR_CROSSHAIR              0x0009
#define  GLUT_CURSOR_UP_DOWN                0x000A
#define  GLUT_CURSOR_LEFT_RIGHT             0x000B
#define  GLUT_CURSOR_TOP_SIDE               0x000C
#define  GLUT_CURSOR_BOTTOM_SIDE            0x000D
#define  GLUT_CURSOR_LEFT_SIDE              0x000E
#define  GLUT_CURSOR_RIGHT_SIDE             0x000F
#define  GLUT_CURSOR_TOP_LEFT_CORNER        0x0010
#define  GLUT_CURSOR_TOP_RIGHT_CORNER       0x0011
#define  GLUT_CURSOR_BOTTOM_RIGHT_CORNER    0x0012
#define  GLUT_CURSOR_BOTTOM_LEFT_CORNER     0x0013
#define  GLUT_CURSOR_INHERIT                0x0064
#define  GLUT_CURSOR_NONE                   0x0065
#define  GLUT_CURSOR_FULL_CROSSHAIR         0x0066

/*
 * GLUT API macro definitions -- RGB color component specification definitions
 */
#define  GLUT_RED                           0x0000
#define  GLUT_GREEN                         0x0001
#define  GLUT_BLUE                          0x0002

/*
 * GLUT API macro definitions -- additional keyboard and joystick definitions
 */
#define  GLUT_KEY_REPEAT_OFF                0x0000
#define  GLUT_KEY_REPEAT_ON                 0x0001
#define  GLUT_KEY_REPEAT_DEFAULT            0x0002

#define  GLUT_JOYSTICK_BUTTON_A             0x0001
#define  GLUT_JOYSTICK_BUTTON_B             0x0002
#define  GLUT_JOYSTICK_BUTTON_C             0x0004
#define  GLUT_JOYSTICK_BUTTON_D             0x0008

/*
 * GLUT API macro definitions -- game mode definitions
 */
#define  GLUT_GAME_MODE_ACTIVE              0x0000
#define  GLUT_GAME_MODE_POSSIBLE            0x0001
#define  GLUT_GAME_MODE_WIDTH               0x0002
#define  GLUT_GAME_MODE_HEIGHT              0x0003
#define  GLUT_GAME_MODE_PIXEL_DEPTH         0x0004
#define  GLUT_GAME_MODE_REFRESH_RATE        0x0005
#define  GLUT_GAME_MODE_DISPLAY_CHANGED     0x0006

#define FGAPI
#define FGAPIENTRY

/*
 * Initialization functions, see fglut_init.c
 */
FGAPI void    FGAPIENTRY FWRAP(glutInit)( int* pargc, char** argv );
FGAPI void    FGAPIENTRY FWRAP(glutInitWindowPosition)( int x, int y );
FGAPI void    FGAPIENTRY FWRAP(glutInitWindowSize)( int width, int height );
FGAPI void    FGAPIENTRY FWRAP(glutInitDisplayMode)( unsigned int displayMode );
//FGAPI void    FGAPIENTRY FWRAP(glutInitDisplayString()const char* displayMode );

/*
 * Process loop function, see freeglut_main.c
 */
FGAPI void    FGAPIENTRY FWRAP(glutMainLoop)( void );

/*
 * Window management functions, see freeglut_window.c
 */
FGAPI int     FGAPIENTRY FWRAP(glutCreateWindow)( const char* title );
//FGAPI int     FGAPIENTRY FWRAP(glutCreateSubWindow()int window, int x, int y, int width, int height );
//FGAPI void    FGAPIENTRY FWRAP(glutDestroyWindow()int window );
//FGAPI void    FGAPIENTRY FWRAP(glutSetWindow()int window );
//FGAPI int     FGAPIENTRY FWRAP(glutGetWindow()void );
//FGAPI void    FGAPIENTRY FWRAP(glutSetWindowTitle()const char* title );
//FGAPI void    FGAPIENTRY FWRAP(glutSetIconTitle()const char* title );
//FGAPI void    FGAPIENTRY FWRAP(glutReshapeWindow()int width, int height );
//FGAPI void    FGAPIENTRY FWRAP(glutPositionWindow()int x, int y );
//FGAPI void    FGAPIENTRY FWRAP(glutShowWindow()void );
//FGAPI void    FGAPIENTRY FWRAP(glutHideWindow()void );
//FGAPI void    FGAPIENTRY FWRAP(glutIconifyWindow()void );
//FGAPI void    FGAPIENTRY FWRAP(glutPushWindow()void );
//FGAPI void    FGAPIENTRY FWRAP(glutPopWindow()void );
//FGAPI void    FGAPIENTRY FWRAP(glutFullScreen()void );

/*
 * Display-connected functions, see freeglut_display.c
 */
//FGAPI void    FGAPIENTRY FWRAP(glutPostWindowRedisplay()int window );
//FGAPI void    FGAPIENTRY FWRAP(glutPostRedisplay()void );
FGAPI void    FGAPIENTRY FWRAP(glutSwapBuffers)( void );

/*
 * Mouse cursor functions, see freeglut_cursor.c
 */
//FGAPI void    FGAPIENTRY FWRAP(glutWarpPointer()int x, int y );
//FGAPI void    FGAPIENTRY FWRAP(glutSetCursor()int cursor );

/*
 * Overlay stuff, see freeglut_overlay.c
 */
//FGAPI void    FGAPIENTRY FWRAP(glutEstablishOverlay()void );
//FGAPI void    FGAPIENTRY FWRAP(glutRemoveOverlay()void );
//FGAPI void    FGAPIENTRY FWRAP(glutUseLayer()GLenum layer );
//FGAPI void    FGAPIENTRY FWRAP(glutPostOverlayRedisplay()void );
//FGAPI void    FGAPIENTRY FWRAP(glutPostWindowOverlayRedisplay()int window );
//FGAPI void    FGAPIENTRY FWRAP(glutShowOverlay()void );
//FGAPI void    FGAPIENTRY FWRAP(glutHideOverlay()void );

/*
 * Menu stuff, see freeglut_menu.c
 */
//FGAPI int     FGAPIENTRY FWRAP(glutCreateMenu()void (* callback)( int menu ) );
//FGAPI void    FGAPIENTRY FWRAP(glutDestroyMenu()int menu );
//FGAPI int     FGAPIENTRY FWRAP(glutGetMenu()void );
//FGAPI void    FGAPIENTRY FWRAP(glutSetMenu()int menu );
//FGAPI void    FGAPIENTRY FWRAP(glutAddMenuEntry()const char* label, int value );
//FGAPI void    FGAPIENTRY FWRAP(glutAddSubMenu()const char* label, int subMenu );
//FGAPI void    FGAPIENTRY FWRAP(glutChangeToMenuEntry()int item, const char* label, int value );
//FGAPI void    FGAPIENTRY FWRAP(glutChangeToSubMenu()int item, const char* label, int value );
//FGAPI void    FGAPIENTRY FWRAP(glutRemoveMenuItem()int item );
//FGAPI void    FGAPIENTRY FWRAP(glutAttachMenu()int button );
//FGAPI void    FGAPIENTRY FWRAP(glutDetachMenu()int button );

/*
 * Global callback functions, see freeglut_callbacks.c
 */
//FGAPI void    FGAPIENTRY FWRAP(glutTimerFunc()unsigned int time, void (* callback)( int ), int value );
//FGAPI void    FGAPIENTRY FWRAP(glutIdleFunc()void (* callback)( void ) );

/*
 * Window-specific callback functions, see freeglut_callbacks.c
 */
//FGAPI void    FGAPIENTRY FWRAP(glutKeyboardFunc()void (* callback)( unsigned char, int, int ) );
//FGAPI void    FGAPIENTRY FWRAP(glutSpecialFunc()void (* callback)( int, int, int ) );
FGAPI void    FGAPIENTRY FWRAP(glutReshapeFunc)( void (* callback)( int, int ) );
//FGAPI void    FGAPIENTRY FWRAP(glutVisibilityFunc()void (* callback)( int ) );
FGAPI void    FGAPIENTRY FWRAP(glutDisplayFunc)( void (* callback)( void ) );
//FGAPI void    FGAPIENTRY FWRAP(glutMouseFunc()void (* callback)( int, int, int, int ) );
//FGAPI void    FGAPIENTRY FWRAP(glutMotionFunc()void (* callback)( int, int ) );
//FGAPI void    FGAPIENTRY FWRAP(glutPassiveMotionFunc()void (* callback)( int, int ) );
//FGAPI void    FGAPIENTRY FWRAP(glutEntryFunc()void (* callback)( int ) );

//FGAPI void    FGAPIENTRY FWRAP(glutKeyboardUpFunc()void (* callback)( unsigned char, int, int ) );
//FGAPI void    FGAPIENTRY FWRAP(glutSpecialUpFunc()void (* callback)( int, int, int ) );
//FGAPI void    FGAPIENTRY FWRAP(glutJoystickFunc()void (* callback)( unsigned int, int, int, int ), int pollInterval );
//FGAPI void    FGAPIENTRY FWRAP(glutMenuStateFunc()void (* callback)( int ) );
//FGAPI void    FGAPIENTRY FWRAP(glutMenuStatusFunc()void (* callback)( int, int, int ) );
//FGAPI void    FGAPIENTRY FWRAP(glutOverlayDisplayFunc()void (* callback)( void ) );
//FGAPI void    FGAPIENTRY FWRAP(glutWindowStatusFunc()void (* callback)( int ) );

//FGAPI void    FGAPIENTRY FWRAP(glutSpaceballMotionFunc()void (* callback)( int, int, int ) );
//FGAPI void    FGAPIENTRY FWRAP(glutSpaceballRotateFunc()void (* callback)( int, int, int ) );
//FGAPI void    FGAPIENTRY FWRAP(glutSpaceballButtonFunc()void (* callback)( int, int ) );
//FGAPI void    FGAPIENTRY FWRAP(glutButtonBoxFunc()void (* callback)( int, int ) );
//FGAPI void    FGAPIENTRY FWRAP(glutDialsFunc()void (* callback)( int, int ) );
//FGAPI void    FGAPIENTRY FWRAP(glutTabletMotionFunc()void (* callback)( int, int ) );
//FGAPI void    FGAPIENTRY FWRAP(glutTabletButtonFunc()void (* callback)( int, int, int, int ) );

/*
 * State setting and retrieval functions, see freeglut_state.c
 */
//FGAPI int     FGAPIENTRY FWRAP(glutGet()GLenum query );
//FGAPI int     FGAPIENTRY FWRAP(glutDeviceGet()GLenum query );
//FGAPI int     FGAPIENTRY FWRAP(glutGetModifiers()void );
//FGAPI int     FGAPIENTRY FWRAP(glutLayerGet()GLenum query );

/*
 * Font stuff, see freeglut_font.c
 */
//FGAPI void    FGAPIENTRY FWRAP(glutBitmapCharacter()void* font, int character );
//FGAPI int     FGAPIENTRY FWRAP(glutBitmapWidth()void* font, int character );
//FGAPI void    FGAPIENTRY FWRAP(glutStrokeCharacter()void* font, int character );
//FGAPI int     FGAPIENTRY FWRAP(glutStrokeWidth()void* font, int character );
//FGAPI int     FGAPIENTRY FWRAP(glutBitmapLength()void* font, const unsigned char* string );
//FGAPI int     FGAPIENTRY FWRAP(glutStrokeLength()void* font, const unsigned char* string );

/*
 * Geometry functions, see freeglut_geometry.c
 */
//FGAPI void    FGAPIENTRY FWRAP(glutWireCube()GLdouble size );
//FGAPI void    FGAPIENTRY FWRAP(glutSolidCube()GLdouble size );
//FGAPI void    FGAPIENTRY FWRAP(glutWireSphere()GLdouble radius, GLint slices, GLint stacks );
//FGAPI void    FGAPIENTRY FWRAP(glutSolidSphere()GLdouble radius, GLint slices, GLint stacks );
//FGAPI void    FGAPIENTRY FWRAP(glutWireCone()GLdouble base, GLdouble height, GLint slices, GLint stacks );
//FGAPI void    FGAPIENTRY FWRAP(glutSolidCone()GLdouble base, GLdouble height, GLint slices, GLint stacks );

//FGAPI void    FGAPIENTRY FWRAP(glutWireTorus()GLdouble innerRadius, GLdouble outerRadius, GLint sides, GLint rings );
//FGAPI void    FGAPIENTRY FWRAP(glutSolidTorus()GLdouble innerRadius, GLdouble outerRadius, GLint sides, GLint rings );
//FGAPI void    FGAPIENTRY FWRAP(glutWireDodecahedron()void );
//FGAPI void    FGAPIENTRY FWRAP(glutSolidDodecahedron()void );
//FGAPI void    FGAPIENTRY FWRAP(glutWireOctahedron()void );
//FGAPI void    FGAPIENTRY FWRAP(glutSolidOctahedron()void );
//FGAPI void    FGAPIENTRY FWRAP(glutWireTetrahedron()void );
//FGAPI void    FGAPIENTRY FWRAP(glutSolidTetrahedron()void );
//FGAPI void    FGAPIENTRY FWRAP(glutWireIcosahedron()void );
//FGAPI void    FGAPIENTRY FWRAP(glutSolidIcosahedron()void );

/*
 * Teapot rendering functions, found in freeglut_teapot.c
 */
//FGAPI void    FGAPIENTRY FWRAP(glutWireTeapot()GLdouble size );
//FGAPI void    FGAPIENTRY FWRAP(glutSolidTeapot()GLdouble size );

/*
 * Game mode functions, see freeglut_gamemode.c
 */
//FGAPI void    FGAPIENTRY FWRAP(glutGameModeString()const char* string );
//FGAPI int     FGAPIENTRY FWRAP(glutEnterGameMode()void );
//FGAPI void    FGAPIENTRY FWRAP(glutLeaveGameMode()void );
//FGAPI int     FGAPIENTRY FWRAP(glutGameModeGet()GLenum query );

/*
 * Video resize functions, see freeglut_videoresize.c
 */
//FGAPI int     FGAPIENTRY FWRAP(glutVideoResizeGet()GLenum query );
//FGAPI void    FGAPIENTRY FWRAP(glutSetupVideoResizing()void );
//FGAPI void    FGAPIENTRY FWRAP(glutStopVideoResizing()void );
//FGAPI void    FGAPIENTRY FWRAP(glutVideoResize()int x, int y, int width, int height );
//FGAPI void    FGAPIENTRY FWRAP(glutVideoPan()int x, int y, int width, int height );

/*
 * Colormap functions, see freeglut_misc.c
 */
//FGAPI void    FGAPIENTRY FWRAP(glutSetColor()int color, GLfloat red, GLfloat green, GLfloat blue );
//FGAPI GLfloat FGAPIENTRY FWRAP(glutGetColor()int color, int component );
//FGAPI void    FGAPIENTRY FWRAP(glutCopyColormap()int window );

/*
 * Misc keyboard and joystick functions, see freeglut_misc.c
 */
//FGAPI void    FGAPIENTRY FWRAP(glutIgnoreKeyRepeat()int ignore );
//FGAPI void    FGAPIENTRY FWRAP(glutSetKeyRepeat()int repeatMode );
//FGAPI void    FGAPIENTRY FWRAP(glutForceJoystickFunc()void );

/*
 * Misc functions, see freeglut_misc.c
 */
//FGAPI int     FGAPIENTRY FWRAP(glutExtensionSupported()const char* extension );
//FGAPI void    FGAPIENTRY FWRAP(glutReportErrors()void );

/*** END OF FILE ***/

#endif /* __FREEGLUT_STD_H__ */
