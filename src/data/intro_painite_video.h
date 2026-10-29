// Painite Version intro: keyframe stills taken from the intro video.
// 18 raw 240x160 8bpp bitmaps sharing one 256-color palette; the build
// LZ77-compresses them. The sequence below plays them with timing and
// camera effects (zoom, shake, white flash) instead of full-motion video.

#define PAINITE_KEYFRAME_COUNT 18

static const u16 sPainiteVideoPal[] = INCBIN_U16("graphics/intro/painite_video/palette.gbapal");

static const u32 sPainiteKey00[] = INCBIN_U32("graphics/intro/painite_video/key00.bin.lz"); // standing under the moon
static const u32 sPainiteKey01[] = INCBIN_U32("graphics/intro/painite_video/key01.bin.lz"); // jump
static const u32 sPainiteKey02[] = INCBIN_U32("graphics/intro/painite_video/key02.bin.lz"); // spin begins
static const u32 sPainiteKey03[] = INCBIN_U32("graphics/intro/painite_video/key03.bin.lz");
static const u32 sPainiteKey04[] = INCBIN_U32("graphics/intro/painite_video/key04.bin.lz");
static const u32 sPainiteKey05[] = INCBIN_U32("graphics/intro/painite_video/key05.bin.lz");
static const u32 sPainiteKey06[] = INCBIN_U32("graphics/intro/painite_video/key06.bin.lz");
static const u32 sPainiteKey07[] = INCBIN_U32("graphics/intro/painite_video/key07.bin.lz"); // reaching the moon
static const u32 sPainiteKey08[] = INCBIN_U32("graphics/intro/painite_video/key08.bin.lz"); // in front of the moon
static const u32 sPainiteKey09[] = INCBIN_U32("graphics/intro/painite_video/key09.bin.lz"); // shockwave rings A
static const u32 sPainiteKey10[] = INCBIN_U32("graphics/intro/painite_video/key10.bin.lz"); // shockwave rings B
static const u32 sPainiteKey11[] = INCBIN_U32("graphics/intro/painite_video/key11.bin.lz"); // cracked moon
static const u32 sPainiteKey12[] = INCBIN_U32("graphics/intro/painite_video/key12.bin.lz"); // moon shatters
static const u32 sPainiteKey13[] = INCBIN_U32("graphics/intro/painite_video/key13.bin.lz"); // explosion
static const u32 sPainiteKey14[] = INCBIN_U32("graphics/intro/painite_video/key14.bin.lz"); // landing in debris
static const u32 sPainiteKey15[] = INCBIN_U32("graphics/intro/painite_video/key15.bin.lz");
static const u32 sPainiteKey16[] = INCBIN_U32("graphics/intro/painite_video/key16.bin.lz"); // eye sparkle
static const u32 sPainiteKey17[] = INCBIN_U32("graphics/intro/painite_video/key17.bin.lz"); // final pose

static const u32 *const sPainiteKeyframes[PAINITE_KEYFRAME_COUNT] =
{
    sPainiteKey00, sPainiteKey01, sPainiteKey02, sPainiteKey03, sPainiteKey04, sPainiteKey05,
    sPainiteKey06, sPainiteKey07, sPainiteKey08, sPainiteKey09, sPainiteKey10, sPainiteKey11,
    sPainiteKey12, sPainiteKey13, sPainiteKey14, sPainiteKey15, sPainiteKey16, sPainiteKey17,
};

enum
{
    PAINITE_FX_NONE     = 0,
    PAINITE_FX_ZOOM     = 1 << 0, // slow push-in over the shot
    PAINITE_FX_SHAKE    = 1 << 1, // camera shake
    PAINITE_FX_FLASH    = 1 << 2, // white flash at the start of the shot
};

struct PainiteIntroShot
{
    u8 keyframe;
    u8 duration; // in frames (60 per second)
    u8 effects;
};

static const struct PainiteIntroShot sPainiteIntroShots[] =
{
    {  0, 150, PAINITE_FX_ZOOM },                     // calm before the storm
    {  1,   8, PAINITE_FX_NONE },                     // jump
    {  2,   8, PAINITE_FX_NONE },                     // spin toward the moon
    {  3,   8, PAINITE_FX_NONE },
    {  4,   8, PAINITE_FX_NONE },
    {  5,   8, PAINITE_FX_NONE },
    {  6,   8, PAINITE_FX_NONE },
    {  7,  10, PAINITE_FX_NONE },
    {  8,  18, PAINITE_FX_NONE },                     // hits the moon
    {  9,  12, PAINITE_FX_SHAKE },                    // shockwaves
    { 10,  12, PAINITE_FX_SHAKE },
    {  9,  12, PAINITE_FX_SHAKE },
    { 10,  12, PAINITE_FX_SHAKE },
    { 11,  30, PAINITE_FX_SHAKE },                    // the moon cracks
    { 12,   8, PAINITE_FX_FLASH | PAINITE_FX_SHAKE }, // shatter
    { 13,  14, PAINITE_FX_SHAKE },                    // explosion
    { 14,  12, PAINITE_FX_NONE },                     // falls back down
    { 15,  12, PAINITE_FX_NONE },
    { 16,  24, PAINITE_FX_NONE },                     // eye sparkle
    { 17,  90, PAINITE_FX_ZOOM },                     // final pose
};
