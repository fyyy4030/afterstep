/***********************************************************************
 *
 * afterstep per-screen data include file
 *
 ***********************************************************************/

#ifndef _SCREEN_
#define _SCREEN_

#include "afterstep.h"
#include "style.h"
#include "clientprops.h"
#include "hints.h"
#include "asdatabase.h"

#define SIZE_HINDENT 5
#define SIZE_VINDENT 3
#define MAX_WINDOW_WIDTH 32767
#define MAX_WINDOW_HEIGHT 32767

/* Cursor types */
#ifndef POSITION
#define POSITION 0		/* upper Left corner cursor */
#endif
#define TITLE_CURSOR 1		/* title-bar cursor */
#define DEFAULT 2		/* cursor for apps to inherit */
#define SYS 3			/* sys-menu and iconify boxes cursor */
#define MOVE 4			/* resize cursor */
#if defined(__alpha)		/* Do you honnestly think people will even */
#ifdef WAIT			/* have to wait on alphas :-) */
#undef WAIT
#endif
#endif
#define WAIT 5			/* wait a while cursor */
#define MENU 6			/* menu cursor */
#define SELECT 7		/* dot cursor for f.move, etc. from menus */
#define DESTROY 8		/* skull and cross bones, f.destroy */
#define TOP 9
#define RIGHT 10
#define BOTTOM 11
#define LEFT 12
#define TOP_LEFT 13
#define TOP_RIGHT 14
#define BOTTOM_LEFT 15
#define BOTTOM_RIGHT 16
#define MAX_CURSORS 18

/* Maximum number of icon boxes that are allowed */
#define MAX_BOXES 4

/* button styles */
#define NO_BUTTON_STYLE		-1	/* button is undefined */
#define XPM_BUTTON_STYLE	2	/* button is a pixmap */

/* title bar text alignment  */
#define JUSTIFY_CENTER 0
#define JUSTIFY_LEFT   1
#define JUSTIFY_RIGHT  2

#ifndef NO_VIRTUAL
typedef struct
  {
    Window win;
    int isMapped;
  }
PanFrame;

#endif

enum                /* look file flags, used in Scr.look_flags */
  {
    TexturedHandle = (1 << 0),
    TitlebarNoPush = (1 << 1),
    IconNoBorder = (1 << 3),
    SeparateButtonTitle = (1 << 4)	/* icon title is a separate window */
  };

/* for the flags value - these used to be separate Bool's */
enum				/* feel file flags */
  {
    ClickToFocus            = (1 << 0), /* Focus follows or click to focus */
    DecorateTransients      = (1 << 1), /* decorate transient windows? */
    DontMoveOff             = (1 << 2), /* make sure windows stay on desk */
    RandomPlacement         = (1 << 3), /* random windows placement */
    SuppressIcons           = (1 << 4), /* prevent generating icon win */
    StickyIcons             = (1 << 5), /* Icons always sticky? */
    EdgeWrapX               = (1 << 6), /* Should EdgeScroll wrap around? */
    EdgeWrapY               = (1 << 7),
    CenterOnCirculate       = (1 << 8), /* center window on circulate ? */
    KeepIconWindows         = (1 << 9),
    ClickToRaise            = (1 << 10),
    EatFocusClick           = (1 << 11),
    MenusHigh               = (1 << 12),
    NoPPosition             = (1 << 13),
    SMART_PLACEMENT         = (1 << 14),
    CirculateSkipIcons      = (1 << 15),
    StubbornIcons           = (1 << 16),
    StubbornPlacement       = (1 << 17),
    StubbornIconPlacement   = (1 << 18),
    BackingStore            = (1 << 19),
    AppsBackingStore        = (1 << 20),
    SaveUnders              = (1 << 21),
    SloppyFocus             = (1 << 22),
    IconTitle               = (1 << 23),
    MWMFunctionHints        = (1 << 24),
    MWMDecorHints           = (1 << 25),
    MWMHintOverride         = (1 << 26),
    FollowTitleChanges      = (1 << 27),
    AutoTabThroughDesks     = (1 << 28),
    DoHandlePageing         = (1 << 29)
  };

typedef enum
{
    AS_StateShutdown   = (0x01<<0),
    AS_StateRestarting = (0x01<<1)
}ASScreenStateFlags ;

typedef struct fr_sz
  {
    int w;
    int h;
  }
fr_sz;

struct MenuRoot;
struct MouseButton;
struct FuncKey;
struct MyStyle;
struct ASSupportedHints;
struct MyFrame;
struct ASHashTable;
struct ComplexFunction;

typedef struct ASDesktop
{
	int 	Desk ;
	unsigned short vx, vy ;
}ASDesktop;

typedef struct ASIconBox
{
	int desktop ;
    ASGeometry *areas ;
	unsigned short areas_num ;
	ASBiDirList *icons ;
}ASIconBox;

typedef enum {
    AST_OneDirection = 0,
    AST_ClosedLoop = 1,
    AST_OpenLoop = 2
}ASTabbingReverse;

typedef struct ScreenInfo
  {
    ASFlagType    state ;   /* shutting down, restarting, etc. */
    unsigned long screen;
    int d_depth;            /* copy of DefaultDepth(dpy, screen) */
    int NumberOfScreens;	/* number of screens on display */
    int MyDisplayWidth;		/* my copy of DisplayWidth(dpy, screen) */
    int MyDisplayHeight;	/* my copy of DisplayHeight(dpy, screen) */

	struct ASVisual *asv ;  /* ASVisual for libAfterImage */
	struct ASImage  *RootImage;

    struct ASWindowList *Windows ;
/*    ASWindow ASRoot;        the head of the afterstep window list */
/*    struct ASHashTable *aswindow_xref;        xreference of window/resource IDs to ASWindow structures */

	struct ASHashTable *desktops ;   /* hashed by desk no - we create new one when client is added */

    ASGeometry *configured_icon_areas ;
	unsigned int configured_icon_areas_num ;
	struct ASIconBox   *default_icon_box ; /* if we have icons following desktops - then we only need one icon box */
	struct ASHashTable *icon_boxes ; /* hashed by desk no - one icon box per desktop ! */


    Window Root;		/* the root window */
    Window SizeWindow;		/* the resize dimensions window */
    Window NoFocusWin;		/* Window which will own focus when no other
				 * windows have it */
#ifndef NO_VIRTUAL
    PanFrame PanFrameTop, PanFrameLeft, PanFrameRight, PanFrameBottom;
    int usePanFrames;		/* toggle to disable them */
#endif

    Pixmap gray_bitmap;		/*dark gray pattern for shaded out menu items */
    Pixmap gray_pixmap;		/* dark gray pattern for inactive borders */
    Pixmap light_gray_pixmap;	/* light gray pattern for inactive borders */
    Pixmap sticky_gray_pixmap;	/* light gray pattern for sticky borders */

    struct MouseButton *MouseButtonRoot;
    struct FuncKey *FuncKeyRoot;

    Cursor ASCursors[MAX_CURSORS];

    char *DefaultIcon;		/* Icon to use when no other icons are found */

    ColorPair MenuStippleColors;

/* � Currently unused */
    ColorPair StdColors;	/* standard fore/back colors */
    ColorPair StickyColors;	/* sticky fore/back colors */
    ColorPair StickyRelief;	/* sticky hilight colors */
    ColorPair HiColors;		/* standard fore/back colors */
    ColorPair StdRelief;
    ColorPair HiRelief;
/* /� */

    MyFont StdFont;		/* font structure */
    MyFont WindowFont;		/* font structure for window titles */
    MyFont IconFont;		/* for icon labels */

/* update mystyle_fix_styles() and InitLook() if you add a style */
    struct MyStyle *first_style;	/* head of style list */
    struct MyStyle *MSDefault;		/* default style */
    struct MyStyle *MSFWindow;		/* focussed window style */
    struct MyStyle *MSUWindow;		/* unfocussed window style */
    struct MyStyle *MSSWindow;		/* sticky window style */
    struct MyStyle *MSMenuTitle;	/* menu title style */
    struct MyStyle *MSMenuItem;	/* menu item style */
    struct MyStyle *MSMenuHilite;	/* menu item hilite style */
    struct MyStyle *MSMenuStipple;	/* menu stippled item style */

    struct MyFrame *DefaultFrame;
    struct ASHashTable *FramesList ;/* hash table of named MyFrames */

    GC NormalGC;		/* normal GC for menus, pager, resize window */
    GC StippleGC;		/* normal GC for menus, pager, resize window */
    GC DrawGC;			/* GC to draw lines for move and resize */
    GC LineGC;			/* GC to draw lines on buttons */

    GC ScratchGC1;
    GC ScratchGC2;

    int TitleTextType;
    int TitleTextY;

    int SizeStringWidth;	/* minimum width of size window */
    int CornerWidth;		/* corner width for decoratedwindows */
    int BoundaryWidth;		/* frame width for decorated windows */
    int NoBoundaryWidth;	/* frame width for decorated windows */
    int TitleTextAlign;		/* alignment of title bar text */
#ifndef NO_TEXTURE
    int TitleStyle;         /* old or new titlebar style */
    Pixmap TitleGradient;	/* gradient for the focused title text */

    MyIcon MenuArrow;
    MyIcon MenuPinOn;
    MyIcon MenuPinOff;
#endif

    int EntryHeight;        /* menu entry height */
    int EdgeScrollX;		/* #pixels to scroll on screen edge */
    int EdgeScrollY;		/* #pixels to scroll on screen edge */
    unsigned int nonlock_mods;	/* a mask for non-locking modifiers */
    unsigned int *lock_mods;	/* all combinations of lock modifier masks */
    unsigned char buttons2grab;	/* buttons to grab in click to focus mode */

    ASFlagType flags;    /* feel file flags and state */
    ASFlagType look_flags;
    int randomx;        /* values used for randomPlacement */
    int randomy;
    unsigned VScale;		/* Panner scale factor */

    int VxMax;			/* Max location for top left of virt desk */
    int VyMax;
    int Vx;			/* Current loc for top left of virt desk */
    int Vy;

    int nr_left_buttons;	/* number of left-side title-bar buttons */
    int nr_right_buttons;	/* number of right-side title-bar buttons */

    int ClickTime;		/* Max buttonclickdelay for Function built-in */
    int AutoRaiseDelay;		/* Delay between setting focus and raisingwin */
    int ScrollResistance;	/* resistance to scrolling in desktop */
    int MoveResistance;		/* res to moving windows over viewport edge */
    int OpaqueSize;		/* Keep showing window while being moved if size<N% */
    int OpaqueResize;		/* Keep showing window while being resized if size<N% */
    int CurrentDesk;		/* The current desktop number */
    int AutoReverse;        /* Defines how window circukation should handle end of list, see: ASTabbingReverse */

    struct ASHashTable *Popups ;
    struct ASHashTable *ComplexFunctions ;
    struct ComplexFunction *InitFunction;
    struct ComplexFunction *RestartFunction;

    MyButton    buttons[TITLE_BUTTONS];

    Time   last_Timestamp;                      /* last event timestamp */
    Time   menu_grab_Timestamp;                 /* pointer grab time used in menus */

/* obsolete :
    int button_style[10];
    Pixmap button_pixmap[10];
    Pixmap button_pixmap_mask[10];
    Pixmap dbutton_pixmap[10];
    Pixmap dbutton_pixmap_mask[10];
    int button_width[10];
    int button_height[10];
 */
	int TitleButtonSpacing;
    int TitleButtonStyle;

    int ButtonWidth;		/* user-set width of icons */
    int ButtonHeight;		/* user-set height of icons */

    int RaiseButtons;		/* The buttons to do click-to-raise */
    fr_sz fs[8];

	int xinerama_screens_num ;
	XRectangle *xinerama_screens;

	ASFontManager  *font_manager ;
	ASImageManager *image_manager ;

	struct ASSupportedHints *supported_hints;

  }
ScreenInfo;

extern ScreenInfo Scr;

#endif /* _SCREEN_ */
