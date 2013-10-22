
#ifndef __SYSTEM_INCLUDES_H__
#define __SYSTEM_INCLUDES_H__

#ifndef __SDL_WRAPPER__

#include <exec/types.h>
#include <exec/ports.h>

#include <devices/inputevent.h>

#include <graphics/gfx.h>
#include <graphics/rastport.h>
#include <graphics/rpattr.h>
#include <graphics/text.h>

#include <intuition/intuition.h>

#include <datatypes/pictureclass.h>

#include <proto/exec.h>
#include <proto/dos.h>

#define NO_INLINE_STDARG
#include <proto/intuition.h>
#undef NO_INLINE_STDARG

#ifndef __OS3_WRAPPER__
#include <proto/picasso96api.h>
#endif

#include <proto/datatypes.h>
#include <proto/graphics.h>
#include <proto/diskfont.h>
#include <proto/asl.h>
#include <proto/ahi.h>
#include <proto/keymap.h>

#include <devices/timer.h>

// Just for the requester...
#define ALL_REACTION_CLASSES
#define ALL_REACTION_MACROS
#include <reaction/reaction.h>

#ifdef __OS3_WRAPPER__
#include <newmouse.h>
#include <dos/dostags.h>
#include <devices/ahi.h>
#include <proto/cybergraphics.h>
#include <proto/guigfx.h>
#include <libraries/asl.h>
#include <cybergraphx/cybergraphics.h>
#include <guigfx/guigfx.h>
#include <os3_wrapper.h>
#endif

#else

#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <sdl_wrapper.h>

#endif /* __SDL_WRAPPER */

#endif /* __SYSTEM_INCLUDES_H__ */
