/* X11 keyboard handler routines header.
   Copyright (c) 2001 by Salvador E. Tropea (SET)
   Covered by the GPL license. */
#ifndef X11KEY_HEADER_INCLUDED
#define X11KEY_HEADER_INCLUDED
struct TEvent;

const unsigned MaxKbLen=7;
typedef struct
{
 unsigned symbol;
 unsigned key;
} keyEquiv;

// A class to encapsulate the globals, all is static!
class TGKeyX11 : public TGKey
{
public:
 TGKeyX11() {};

 // Function replacements
 //static void     Suspend();
 //static void     Resume();
 static int      KbHit();
 //static void     Clear();
 static ushort   GKey();
 static unsigned GetShiftState();
 static void     FillTEvent(TEvent &e);
 //static void     SetKbdMapping(int version);

 // Setup the pointers to point our members
 static void     Init();

protected:
 // Specific for this driver
 static int      getKeyEvent(int block);

 static int      lenKb,kbWaiting;
 static char     bufferKb[MaxKbLen+1];
 static KeySym   Key;
 static unsigned kbFlags;
 static uchar    KeyCodeByKeySym[256];
 static keyEquiv XEquiv[];
 static uchar    KeyCodeByASCII[96];

 // Values used to fill the event
 static unsigned Symbol;
 static unsigned Flags;
 static uchar    Scan;
};
#endif // X11KEY_HEADER_INCLUDED
