#ifndef __glu_h__
#define __glu_h__

#include "demo.h"

#include "gl.h"

#define GLAPI
#define GLAPIENTRY
#define GLAPIENTRYP

/*************************************************************/

/* Extensions */
#define GLU_EXT_object_space_tess          1
#define GLU_EXT_nurbs_tessellator          1

/* Boolean */
#define GLU_FALSE                          0
#define GLU_TRUE                           1

/* Version */
#define GLU_VERSION_1_1                    1
#define GLU_VERSION_1_2                    1
#define GLU_VERSION_1_3                    1

/* StringName */
#define GLU_VERSION                        100800
#define GLU_EXTENSIONS                     100801

/* ErrorCode */
#define GLU_INVALID_ENUM                   100900
#define GLU_INVALID_VALUE                  100901
#define GLU_OUT_OF_MEMORY                  100902
#define GLU_INCOMPATIBLE_GL_VERSION        100903
#define GLU_INVALID_OPERATION              100904

/* NurbsDisplay */
/*      GLU_FILL */
#define GLU_OUTLINE_POLYGON                100240
#define GLU_OUTLINE_PATCH                  100241

/* NurbsCallback */
#define GLU_NURBS_ERROR                    100103
#define GLU_ERROR                          100103
#define GLU_NURBS_BEGIN                    100164
#define GLU_NURBS_BEGIN_EXT                100164
#define GLU_NURBS_VERTEX                   100165
#define GLU_NURBS_VERTEX_EXT               100165
#define GLU_NURBS_NORMAL                   100166
#define GLU_NURBS_NORMAL_EXT               100166
#define GLU_NURBS_COLOR                    100167
#define GLU_NURBS_COLOR_EXT                100167
#define GLU_NURBS_TEXTURE_COORD            100168
#define GLU_NURBS_TEX_COORD_EXT            100168
#define GLU_NURBS_END                      100169
#define GLU_NURBS_END_EXT                  100169
#define GLU_NURBS_BEGIN_DATA               100170
#define GLU_NURBS_BEGIN_DATA_EXT           100170
#define GLU_NURBS_VERTEX_DATA              100171
#define GLU_NURBS_VERTEX_DATA_EXT          100171
#define GLU_NURBS_NORMAL_DATA              100172
#define GLU_NURBS_NORMAL_DATA_EXT          100172
#define GLU_NURBS_COLOR_DATA               100173
#define GLU_NURBS_COLOR_DATA_EXT           100173
#define GLU_NURBS_TEXTURE_COORD_DATA       100174
#define GLU_NURBS_TEX_COORD_DATA_EXT       100174
#define GLU_NURBS_END_DATA                 100175
#define GLU_NURBS_END_DATA_EXT             100175

/* NurbsError */
#define GLU_NURBS_ERROR1                   100251
#define GLU_NURBS_ERROR2                   100252
#define GLU_NURBS_ERROR3                   100253
#define GLU_NURBS_ERROR4                   100254
#define GLU_NURBS_ERROR5                   100255
#define GLU_NURBS_ERROR6                   100256
#define GLU_NURBS_ERROR7                   100257
#define GLU_NURBS_ERROR8                   100258
#define GLU_NURBS_ERROR9                   100259
#define GLU_NURBS_ERROR10                  100260
#define GLU_NURBS_ERROR11                  100261
#define GLU_NURBS_ERROR12                  100262
#define GLU_NURBS_ERROR13                  100263
#define GLU_NURBS_ERROR14                  100264
#define GLU_NURBS_ERROR15                  100265
#define GLU_NURBS_ERROR16                  100266
#define GLU_NURBS_ERROR17                  100267
#define GLU_NURBS_ERROR18                  100268
#define GLU_NURBS_ERROR19                  100269
#define GLU_NURBS_ERROR20                  100270
#define GLU_NURBS_ERROR21                  100271
#define GLU_NURBS_ERROR22                  100272
#define GLU_NURBS_ERROR23                  100273
#define GLU_NURBS_ERROR24                  100274
#define GLU_NURBS_ERROR25                  100275
#define GLU_NURBS_ERROR26                  100276
#define GLU_NURBS_ERROR27                  100277
#define GLU_NURBS_ERROR28                  100278
#define GLU_NURBS_ERROR29                  100279
#define GLU_NURBS_ERROR30                  100280
#define GLU_NURBS_ERROR31                  100281
#define GLU_NURBS_ERROR32                  100282
#define GLU_NURBS_ERROR33                  100283
#define GLU_NURBS_ERROR34                  100284
#define GLU_NURBS_ERROR35                  100285
#define GLU_NURBS_ERROR36                  100286
#define GLU_NURBS_ERROR37                  100287

/* NurbsProperty */
#define GLU_AUTO_LOAD_MATRIX               100200
#define GLU_CULLING                        100201
#define GLU_SAMPLING_TOLERANCE             100203
#define GLU_DISPLAY_MODE                   100204
#define GLU_PARAMETRIC_TOLERANCE           100202
#define GLU_SAMPLING_METHOD                100205
#define GLU_U_STEP                         100206
#define GLU_V_STEP                         100207
#define GLU_NURBS_MODE                     100160
#define GLU_NURBS_MODE_EXT                 100160
#define GLU_NURBS_TESSELLATOR              100161
#define GLU_NURBS_TESSELLATOR_EXT          100161
#define GLU_NURBS_RENDERER                 100162
#define GLU_NURBS_RENDERER_EXT             100162

/* NurbsSampling */
#define GLU_OBJECT_PARAMETRIC_ERROR        100208
#define GLU_OBJECT_PARAMETRIC_ERROR_EXT    100208
#define GLU_OBJECT_PATH_LENGTH             100209
#define GLU_OBJECT_PATH_LENGTH_EXT         100209
#define GLU_PATH_LENGTH                    100215
#define GLU_PARAMETRIC_ERROR               100216
#define GLU_DOMAIN_DISTANCE                100217

/* NurbsTrim */
#define GLU_MAP1_TRIM_2                    100210
#define GLU_MAP1_TRIM_3                    100211

/* QuadricDrawStyle */
#define GLU_POINT                          100010
#define GLU_LINE                           100011
#define GLU_FILL                           100012
#define GLU_SILHOUETTE                     100013

/* QuadricCallback */
/*      GLU_ERROR */

/* QuadricNormal */
#define GLU_SMOOTH                         100000
#define GLU_FLAT                           100001
#define GLU_NONE                           100002

/* QuadricOrientation */
#define GLU_OUTSIDE                        100020
#define GLU_INSIDE                         100021

/* TessCallback */
#define GLU_TESS_BEGIN                     100100
#define GLU_BEGIN                          100100
#define GLU_TESS_VERTEX                    100101
#define GLU_VERTEX                         100101
#define GLU_TESS_END                       100102
#define GLU_END                            100102
#define GLU_TESS_ERROR                     100103
#define GLU_TESS_EDGE_FLAG                 100104
#define GLU_EDGE_FLAG                      100104
#define GLU_TESS_COMBINE                   100105
#define GLU_TESS_BEGIN_DATA                100106
#define GLU_TESS_VERTEX_DATA               100107
#define GLU_TESS_END_DATA                  100108
#define GLU_TESS_ERROR_DATA                100109
#define GLU_TESS_EDGE_FLAG_DATA            100110
#define GLU_TESS_COMBINE_DATA              100111

/* TessContour */
#define GLU_CW                             100120
#define GLU_CCW                            100121
#define GLU_INTERIOR                       100122
#define GLU_EXTERIOR                       100123
#define GLU_UNKNOWN                        100124

/* TessProperty */
#define GLU_TESS_WINDING_RULE              100140
#define GLU_TESS_BOUNDARY_ONLY             100141
#define GLU_TESS_TOLERANCE                 100142

/* TessError */
#define GLU_TESS_ERROR1                    100151
#define GLU_TESS_ERROR2                    100152
#define GLU_TESS_ERROR3                    100153
#define GLU_TESS_ERROR4                    100154
#define GLU_TESS_ERROR5                    100155
#define GLU_TESS_ERROR6                    100156
#define GLU_TESS_ERROR7                    100157
#define GLU_TESS_ERROR8                    100158
#define GLU_TESS_MISSING_BEGIN_POLYGON     100151
#define GLU_TESS_MISSING_BEGIN_CONTOUR     100152
#define GLU_TESS_MISSING_END_POLYGON       100153
#define GLU_TESS_MISSING_END_CONTOUR       100154
#define GLU_TESS_COORD_TOO_LARGE           100155
#define GLU_TESS_NEED_COMBINE_CALLBACK     100156

/* TessWinding */
#define GLU_TESS_WINDING_ODD               100130
#define GLU_TESS_WINDING_NONZERO           100131
#define GLU_TESS_WINDING_POSITIVE          100132
#define GLU_TESS_WINDING_NEGATIVE          100133
#define GLU_TESS_WINDING_ABS_GEQ_TWO       100134

/*************************************************************/


#ifdef __cplusplus
class GLUnurbs;
class GLUquadric;
class GLUtesselator;
#else
typedef struct GLUnurbs GLUnurbs;
typedef struct GLUquadric GLUquadric;
typedef struct GLUtesselator GLUtesselator;
#endif

typedef GLUnurbs GLUnurbsObj;
typedef GLUquadric GLUquadricObj;
typedef GLUtesselator GLUtesselatorObj;
typedef GLUtesselator GLUtriangulatorObj;

#define GLU_TESS_MAX_COORD 1.0e150

/* Internal convenience typedefs */
typedef void (GLAPIENTRYP _GLUfuncptr)();

//GLAPI void GLAPIENTRY FWRAP(gluBeginCurve)(GLUnurbs* nurb);
//GLAPI void GLAPIENTRY FWRAP(gluBeginPolygon)(GLUtesselator* tess);
//GLAPI void GLAPIENTRY FWRAP(gluBeginSurface)(GLUnurbs* nurb);
//GLAPI void GLAPIENTRY FWRAP(gluBeginTrim)(GLUnurbs* nurb);
//GLAPI GLint GLAPIENTRY FWRAP(gluBuild1DMipmapLevels)(GLenum target, GLint internalFormat, GLsizei width, GLenum format, GLenum type, GLint level, GLint base, GLint max, const void *data);
//GLAPI GLint GLAPIENTRY FWRAP(gluBuild1DMipmaps)(GLenum target, GLint internalFormat, GLsizei width, GLenum format, GLenum type, const void *data);
//GLAPI GLint GLAPIENTRY FWRAP(gluBuild2DMipmapLevels)(GLenum target, GLint internalFormat, GLsizei width, GLsizei height, GLenum format, GLenum type, GLint level, GLint base, GLint max, const void *data);
//GLAPI GLint GLAPIENTRY FWRAP(gluBuild2DMipmaps)(GLenum target, GLint internalFormat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *data);
//GLAPI GLint GLAPIENTRY FWRAP(gluBuild3DMipmapLevels)(GLenum target, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLint level, GLint base, GLint max, const void *data);
//GLAPI GLint GLAPIENTRY FWRAP(gluBuild3DMipmaps)(GLenum target, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *data);
//GLAPI GLboolean GLAPIENTRY FWRAP(gluCheckExtension)(const GLubyte *extName, const GLubyte *extString);
//GLAPI void GLAPIENTRY FWRAP(gluCylinder)(GLUquadric* quad, GLdouble base, GLdouble top, GLdouble height, GLint slices, GLint stacks);
//GLAPI void GLAPIENTRY FWRAP(gluDeleteNurbsRenderer)(GLUnurbs* nurb);
//GLAPI void GLAPIENTRY FWRAP(gluDeleteQuadric)(GLUquadric* quad);
//GLAPI void GLAPIENTRY FWRAP(gluDeleteTess)(GLUtesselator* tess);
//GLAPI void GLAPIENTRY FWRAP(gluDisk)(GLUquadric* quad, GLdouble inner, GLdouble outer, GLint slices, GLint loops);
//GLAPI void GLAPIENTRY FWRAP(gluEndCurve)(GLUnurbs* nurb);
//GLAPI void GLAPIENTRY FWRAP(gluEndPolygon)(GLUtesselator* tess);
//GLAPI void GLAPIENTRY FWRAP(gluEndSurface)(GLUnurbs* nurb);
//GLAPI void GLAPIENTRY FWRAP(gluEndTrim)(GLUnurbs* nurb);
//GLAPI const GLubyte * GLAPIENTRY FWRAP(gluErrorString)(GLenum error);
//GLAPI void GLAPIENTRY FWRAP(gluGetNurbsProperty)(GLUnurbs* nurb, GLenum property, GLfloat* data);
//GLAPI const GLubyte * GLAPIENTRY FWRAP(gluGetString)(GLenum name);
//GLAPI void GLAPIENTRY FWRAP(gluGetTessProperty)(GLUtesselator* tess, GLenum which, GLdouble* data);
//GLAPI void GLAPIENTRY FWRAP(gluLoadSamplingMatrices)(GLUnurbs* nurb, const GLfloat *model, const GLfloat *perspective, const GLint *view);
//GLAPI void GLAPIENTRY FWRAP(gluLookAt)(GLdouble eyeX, GLdouble eyeY, GLdouble eyeZ, GLdouble centerX, GLdouble centerY, GLdouble centerZ, GLdouble upX, GLdouble upY, GLdouble upZ);
//GLAPI GLUnurbs* GLAPIENTRY FWRAP(gluNewNurbsRenderer)(void);
//GLAPI GLUquadric* GLAPIENTRY FWRAP(gluNewQuadric)(void);
//GLAPI GLUtesselator* GLAPIENTRY FWRAP(gluNewTess)(void);
//GLAPI void GLAPIENTRY FWRAP(gluNextContour)(GLUtesselator* tess, GLenum type);
//GLAPI void GLAPIENTRY FWRAP(gluNurbsCallback)(GLUnurbs* nurb, GLenum which, _GLUfuncptr CallBackFunc);
//GLAPI void GLAPIENTRY FWRAP(gluNurbsCallbackData)(GLUnurbs* nurb, GLvoid* userData);
//GLAPI void GLAPIENTRY FWRAP(gluNurbsCallbackDataEXT)(GLUnurbs* nurb, GLvoid* userData);
//GLAPI void GLAPIENTRY FWRAP(gluNurbsCurve)(GLUnurbs* nurb, GLint knotCount, GLfloat *knots, GLint stride, GLfloat *control, GLint order, GLenum type);
//GLAPI void GLAPIENTRY FWRAP(gluNurbsProperty)(GLUnurbs* nurb, GLenum property, GLfloat value);
//GLAPI void GLAPIENTRY FWRAP(gluNurbsSurface)(GLUnurbs* nurb, GLint sKnotCount, GLfloat* sKnots, GLint tKnotCount, GLfloat* tKnots, GLint sStride, GLint tStride, GLfloat* control, GLint sOrder, GLint tOrder, GLenum type);
//GLAPI void GLAPIENTRY FWRAP(gluOrtho2D)(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top);
//GLAPI void GLAPIENTRY FWRAP(gluPartialDisk)(GLUquadric* quad, GLdouble inner, GLdouble outer, GLint slices, GLint loops, GLdouble start, GLdouble sweep);
GLAPI void GLAPIENTRY FWRAP(gluPerspective) (GLdouble fovy, GLdouble aspect, GLdouble zNear, GLdouble zFar);
//GLAPI void GLAPIENTRY FWRAP(gluPickMatrix)(GLdouble x, GLdouble y, GLdouble delX, GLdouble delY, GLint *viewport);
//GLAPI GLint GLAPIENTRY FWRAP(gluProject)(GLdouble objX, GLdouble objY, GLdouble objZ, const GLdouble *model, const GLdouble *proj, const GLint *view, GLdouble* winX, GLdouble* winY, GLdouble* winZ);
//GLAPI void GLAPIENTRY FWRAP(gluPwlCurve)(GLUnurbs* nurb, GLint count, GLfloat* data, GLint stride, GLenum type);
//GLAPI void GLAPIENTRY FWRAP(gluQuadricCallback)(GLUquadric* quad, GLenum which, _GLUfuncptr CallBackFunc);
//GLAPI void GLAPIENTRY FWRAP(gluQuadricDrawStyle)(GLUquadric* quad, GLenum draw);
//GLAPI void GLAPIENTRY FWRAP(gluQuadricNormals)(GLUquadric* quad, GLenum normal);
//GLAPI void GLAPIENTRY FWRAP(gluQuadricOrientation)(GLUquadric* quad, GLenum orientation);
//GLAPI void GLAPIENTRY FWRAP(gluQuadricTexture)(GLUquadric* quad, GLboolean texture);
//GLAPI GLint GLAPIENTRY FWRAP(gluScaleImage)(GLenum format, GLsizei wIn, GLsizei hIn, GLenum typeIn, const void *dataIn, GLsizei wOut, GLsizei hOut, GLenum typeOut, GLvoid* dataOut);
//GLAPI void GLAPIENTRY FWRAP(gluSphere)(GLUquadric* quad, GLdouble radius, GLint slices, GLint stacks);
//GLAPI void GLAPIENTRY FWRAP(gluTessBeginContour)(GLUtesselator* tess);
//GLAPI void GLAPIENTRY FWRAP(gluTessBeginPolygon)(GLUtesselator* tess, GLvoid* data);
//GLAPI void GLAPIENTRY FWRAP(gluTessCallback)(GLUtesselator* tess, GLenum which, _GLUfuncptr CallBackFunc);
//GLAPI void GLAPIENTRY FWRAP(gluTessEndContour)(GLUtesselator* tess);
//GLAPI void GLAPIENTRY FWRAP(gluTessEndPolygon)(GLUtesselator* tess);
//GLAPI void GLAPIENTRY FWRAP(gluTessNormal)(GLUtesselator* tess, GLdouble valueX, GLdouble valueY, GLdouble valueZ);
//GLAPI void GLAPIENTRY FWRAP(gluTessProperty)(GLUtesselator* tess, GLenum which, GLdouble data);
//GLAPI void GLAPIENTRY FWRAP(gluTessVertex)(GLUtesselator* tess, GLdouble *location, GLvoid* data);
//GLAPI GLint GLAPIENTRY FWRAP(gluUnProject)(GLdouble winX, GLdouble winY, GLdouble winZ, const GLdouble *model, const GLdouble *proj, const GLint *view, GLdouble* objX, GLdouble* objY, GLdouble* objZ);
//GLAPI GLint GLAPIENTRY FWRAP(gluUnProject4)(GLdouble winX, GLdouble winY, GLdouble winZ, GLdouble clipW, const GLdouble *model, const GLdouble *proj, const GLint *view, GLdouble nearVal, GLdouble farVal, GLdouble* objX, GLdouble* objY, GLdouble* objZ, GLdouble* objW);

#endif /* __glu_h__ */
