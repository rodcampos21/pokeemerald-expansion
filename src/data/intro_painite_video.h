// Painite Version intro video: 150 frames, 240x160 8bpp, LZ77, 15 fps
// Source frames are raw 8bpp .bin files; the build LZ77-compresses them.

#define PAINITE_VIDEO_FRAME_COUNT 150
#define PAINITE_VIDEO_VBLANKS_PER_FRAME 4

static const u16 sPainiteVideoPal[] = INCBIN_U16("graphics/intro/painite_video/palette.gbapal");

static const u32 sPainiteVideoFrame000[] = INCBIN_U32("graphics/intro/painite_video/f000.bin.lz");
static const u32 sPainiteVideoFrame001[] = INCBIN_U32("graphics/intro/painite_video/f001.bin.lz");
static const u32 sPainiteVideoFrame002[] = INCBIN_U32("graphics/intro/painite_video/f002.bin.lz");
static const u32 sPainiteVideoFrame003[] = INCBIN_U32("graphics/intro/painite_video/f003.bin.lz");
static const u32 sPainiteVideoFrame004[] = INCBIN_U32("graphics/intro/painite_video/f004.bin.lz");
static const u32 sPainiteVideoFrame005[] = INCBIN_U32("graphics/intro/painite_video/f005.bin.lz");
static const u32 sPainiteVideoFrame006[] = INCBIN_U32("graphics/intro/painite_video/f006.bin.lz");
static const u32 sPainiteVideoFrame007[] = INCBIN_U32("graphics/intro/painite_video/f007.bin.lz");
static const u32 sPainiteVideoFrame008[] = INCBIN_U32("graphics/intro/painite_video/f008.bin.lz");
static const u32 sPainiteVideoFrame009[] = INCBIN_U32("graphics/intro/painite_video/f009.bin.lz");
static const u32 sPainiteVideoFrame010[] = INCBIN_U32("graphics/intro/painite_video/f010.bin.lz");
static const u32 sPainiteVideoFrame011[] = INCBIN_U32("graphics/intro/painite_video/f011.bin.lz");
static const u32 sPainiteVideoFrame012[] = INCBIN_U32("graphics/intro/painite_video/f012.bin.lz");
static const u32 sPainiteVideoFrame013[] = INCBIN_U32("graphics/intro/painite_video/f013.bin.lz");
static const u32 sPainiteVideoFrame014[] = INCBIN_U32("graphics/intro/painite_video/f014.bin.lz");
static const u32 sPainiteVideoFrame015[] = INCBIN_U32("graphics/intro/painite_video/f015.bin.lz");
static const u32 sPainiteVideoFrame016[] = INCBIN_U32("graphics/intro/painite_video/f016.bin.lz");
static const u32 sPainiteVideoFrame017[] = INCBIN_U32("graphics/intro/painite_video/f017.bin.lz");
static const u32 sPainiteVideoFrame018[] = INCBIN_U32("graphics/intro/painite_video/f018.bin.lz");
static const u32 sPainiteVideoFrame019[] = INCBIN_U32("graphics/intro/painite_video/f019.bin.lz");
static const u32 sPainiteVideoFrame020[] = INCBIN_U32("graphics/intro/painite_video/f020.bin.lz");
static const u32 sPainiteVideoFrame021[] = INCBIN_U32("graphics/intro/painite_video/f021.bin.lz");
static const u32 sPainiteVideoFrame022[] = INCBIN_U32("graphics/intro/painite_video/f022.bin.lz");
static const u32 sPainiteVideoFrame023[] = INCBIN_U32("graphics/intro/painite_video/f023.bin.lz");
static const u32 sPainiteVideoFrame024[] = INCBIN_U32("graphics/intro/painite_video/f024.bin.lz");
static const u32 sPainiteVideoFrame025[] = INCBIN_U32("graphics/intro/painite_video/f025.bin.lz");
static const u32 sPainiteVideoFrame026[] = INCBIN_U32("graphics/intro/painite_video/f026.bin.lz");
static const u32 sPainiteVideoFrame027[] = INCBIN_U32("graphics/intro/painite_video/f027.bin.lz");
static const u32 sPainiteVideoFrame028[] = INCBIN_U32("graphics/intro/painite_video/f028.bin.lz");
static const u32 sPainiteVideoFrame029[] = INCBIN_U32("graphics/intro/painite_video/f029.bin.lz");
static const u32 sPainiteVideoFrame030[] = INCBIN_U32("graphics/intro/painite_video/f030.bin.lz");
static const u32 sPainiteVideoFrame031[] = INCBIN_U32("graphics/intro/painite_video/f031.bin.lz");
static const u32 sPainiteVideoFrame032[] = INCBIN_U32("graphics/intro/painite_video/f032.bin.lz");
static const u32 sPainiteVideoFrame033[] = INCBIN_U32("graphics/intro/painite_video/f033.bin.lz");
static const u32 sPainiteVideoFrame034[] = INCBIN_U32("graphics/intro/painite_video/f034.bin.lz");
static const u32 sPainiteVideoFrame035[] = INCBIN_U32("graphics/intro/painite_video/f035.bin.lz");
static const u32 sPainiteVideoFrame036[] = INCBIN_U32("graphics/intro/painite_video/f036.bin.lz");
static const u32 sPainiteVideoFrame037[] = INCBIN_U32("graphics/intro/painite_video/f037.bin.lz");
static const u32 sPainiteVideoFrame038[] = INCBIN_U32("graphics/intro/painite_video/f038.bin.lz");
static const u32 sPainiteVideoFrame039[] = INCBIN_U32("graphics/intro/painite_video/f039.bin.lz");
static const u32 sPainiteVideoFrame040[] = INCBIN_U32("graphics/intro/painite_video/f040.bin.lz");
static const u32 sPainiteVideoFrame041[] = INCBIN_U32("graphics/intro/painite_video/f041.bin.lz");
static const u32 sPainiteVideoFrame042[] = INCBIN_U32("graphics/intro/painite_video/f042.bin.lz");
static const u32 sPainiteVideoFrame043[] = INCBIN_U32("graphics/intro/painite_video/f043.bin.lz");
static const u32 sPainiteVideoFrame044[] = INCBIN_U32("graphics/intro/painite_video/f044.bin.lz");
static const u32 sPainiteVideoFrame045[] = INCBIN_U32("graphics/intro/painite_video/f045.bin.lz");
static const u32 sPainiteVideoFrame046[] = INCBIN_U32("graphics/intro/painite_video/f046.bin.lz");
static const u32 sPainiteVideoFrame047[] = INCBIN_U32("graphics/intro/painite_video/f047.bin.lz");
static const u32 sPainiteVideoFrame048[] = INCBIN_U32("graphics/intro/painite_video/f048.bin.lz");
static const u32 sPainiteVideoFrame049[] = INCBIN_U32("graphics/intro/painite_video/f049.bin.lz");
static const u32 sPainiteVideoFrame050[] = INCBIN_U32("graphics/intro/painite_video/f050.bin.lz");
static const u32 sPainiteVideoFrame051[] = INCBIN_U32("graphics/intro/painite_video/f051.bin.lz");
static const u32 sPainiteVideoFrame052[] = INCBIN_U32("graphics/intro/painite_video/f052.bin.lz");
static const u32 sPainiteVideoFrame053[] = INCBIN_U32("graphics/intro/painite_video/f053.bin.lz");
static const u32 sPainiteVideoFrame054[] = INCBIN_U32("graphics/intro/painite_video/f054.bin.lz");
static const u32 sPainiteVideoFrame055[] = INCBIN_U32("graphics/intro/painite_video/f055.bin.lz");
static const u32 sPainiteVideoFrame056[] = INCBIN_U32("graphics/intro/painite_video/f056.bin.lz");
static const u32 sPainiteVideoFrame057[] = INCBIN_U32("graphics/intro/painite_video/f057.bin.lz");
static const u32 sPainiteVideoFrame058[] = INCBIN_U32("graphics/intro/painite_video/f058.bin.lz");
static const u32 sPainiteVideoFrame059[] = INCBIN_U32("graphics/intro/painite_video/f059.bin.lz");
static const u32 sPainiteVideoFrame060[] = INCBIN_U32("graphics/intro/painite_video/f060.bin.lz");
static const u32 sPainiteVideoFrame061[] = INCBIN_U32("graphics/intro/painite_video/f061.bin.lz");
static const u32 sPainiteVideoFrame062[] = INCBIN_U32("graphics/intro/painite_video/f062.bin.lz");
static const u32 sPainiteVideoFrame063[] = INCBIN_U32("graphics/intro/painite_video/f063.bin.lz");
static const u32 sPainiteVideoFrame064[] = INCBIN_U32("graphics/intro/painite_video/f064.bin.lz");
static const u32 sPainiteVideoFrame065[] = INCBIN_U32("graphics/intro/painite_video/f065.bin.lz");
static const u32 sPainiteVideoFrame066[] = INCBIN_U32("graphics/intro/painite_video/f066.bin.lz");
static const u32 sPainiteVideoFrame067[] = INCBIN_U32("graphics/intro/painite_video/f067.bin.lz");
static const u32 sPainiteVideoFrame068[] = INCBIN_U32("graphics/intro/painite_video/f068.bin.lz");
static const u32 sPainiteVideoFrame069[] = INCBIN_U32("graphics/intro/painite_video/f069.bin.lz");
static const u32 sPainiteVideoFrame070[] = INCBIN_U32("graphics/intro/painite_video/f070.bin.lz");
static const u32 sPainiteVideoFrame071[] = INCBIN_U32("graphics/intro/painite_video/f071.bin.lz");
static const u32 sPainiteVideoFrame072[] = INCBIN_U32("graphics/intro/painite_video/f072.bin.lz");
static const u32 sPainiteVideoFrame073[] = INCBIN_U32("graphics/intro/painite_video/f073.bin.lz");
static const u32 sPainiteVideoFrame074[] = INCBIN_U32("graphics/intro/painite_video/f074.bin.lz");
static const u32 sPainiteVideoFrame075[] = INCBIN_U32("graphics/intro/painite_video/f075.bin.lz");
static const u32 sPainiteVideoFrame076[] = INCBIN_U32("graphics/intro/painite_video/f076.bin.lz");
static const u32 sPainiteVideoFrame077[] = INCBIN_U32("graphics/intro/painite_video/f077.bin.lz");
static const u32 sPainiteVideoFrame078[] = INCBIN_U32("graphics/intro/painite_video/f078.bin.lz");
static const u32 sPainiteVideoFrame079[] = INCBIN_U32("graphics/intro/painite_video/f079.bin.lz");
static const u32 sPainiteVideoFrame080[] = INCBIN_U32("graphics/intro/painite_video/f080.bin.lz");
static const u32 sPainiteVideoFrame081[] = INCBIN_U32("graphics/intro/painite_video/f081.bin.lz");
static const u32 sPainiteVideoFrame082[] = INCBIN_U32("graphics/intro/painite_video/f082.bin.lz");
static const u32 sPainiteVideoFrame083[] = INCBIN_U32("graphics/intro/painite_video/f083.bin.lz");
static const u32 sPainiteVideoFrame084[] = INCBIN_U32("graphics/intro/painite_video/f084.bin.lz");
static const u32 sPainiteVideoFrame085[] = INCBIN_U32("graphics/intro/painite_video/f085.bin.lz");
static const u32 sPainiteVideoFrame086[] = INCBIN_U32("graphics/intro/painite_video/f086.bin.lz");
static const u32 sPainiteVideoFrame087[] = INCBIN_U32("graphics/intro/painite_video/f087.bin.lz");
static const u32 sPainiteVideoFrame088[] = INCBIN_U32("graphics/intro/painite_video/f088.bin.lz");
static const u32 sPainiteVideoFrame089[] = INCBIN_U32("graphics/intro/painite_video/f089.bin.lz");
static const u32 sPainiteVideoFrame090[] = INCBIN_U32("graphics/intro/painite_video/f090.bin.lz");
static const u32 sPainiteVideoFrame091[] = INCBIN_U32("graphics/intro/painite_video/f091.bin.lz");
static const u32 sPainiteVideoFrame092[] = INCBIN_U32("graphics/intro/painite_video/f092.bin.lz");
static const u32 sPainiteVideoFrame093[] = INCBIN_U32("graphics/intro/painite_video/f093.bin.lz");
static const u32 sPainiteVideoFrame094[] = INCBIN_U32("graphics/intro/painite_video/f094.bin.lz");
static const u32 sPainiteVideoFrame095[] = INCBIN_U32("graphics/intro/painite_video/f095.bin.lz");
static const u32 sPainiteVideoFrame096[] = INCBIN_U32("graphics/intro/painite_video/f096.bin.lz");
static const u32 sPainiteVideoFrame097[] = INCBIN_U32("graphics/intro/painite_video/f097.bin.lz");
static const u32 sPainiteVideoFrame098[] = INCBIN_U32("graphics/intro/painite_video/f098.bin.lz");
static const u32 sPainiteVideoFrame099[] = INCBIN_U32("graphics/intro/painite_video/f099.bin.lz");
static const u32 sPainiteVideoFrame100[] = INCBIN_U32("graphics/intro/painite_video/f100.bin.lz");
static const u32 sPainiteVideoFrame101[] = INCBIN_U32("graphics/intro/painite_video/f101.bin.lz");
static const u32 sPainiteVideoFrame102[] = INCBIN_U32("graphics/intro/painite_video/f102.bin.lz");
static const u32 sPainiteVideoFrame103[] = INCBIN_U32("graphics/intro/painite_video/f103.bin.lz");
static const u32 sPainiteVideoFrame104[] = INCBIN_U32("graphics/intro/painite_video/f104.bin.lz");
static const u32 sPainiteVideoFrame105[] = INCBIN_U32("graphics/intro/painite_video/f105.bin.lz");
static const u32 sPainiteVideoFrame106[] = INCBIN_U32("graphics/intro/painite_video/f106.bin.lz");
static const u32 sPainiteVideoFrame107[] = INCBIN_U32("graphics/intro/painite_video/f107.bin.lz");
static const u32 sPainiteVideoFrame108[] = INCBIN_U32("graphics/intro/painite_video/f108.bin.lz");
static const u32 sPainiteVideoFrame109[] = INCBIN_U32("graphics/intro/painite_video/f109.bin.lz");
static const u32 sPainiteVideoFrame110[] = INCBIN_U32("graphics/intro/painite_video/f110.bin.lz");
static const u32 sPainiteVideoFrame111[] = INCBIN_U32("graphics/intro/painite_video/f111.bin.lz");
static const u32 sPainiteVideoFrame112[] = INCBIN_U32("graphics/intro/painite_video/f112.bin.lz");
static const u32 sPainiteVideoFrame113[] = INCBIN_U32("graphics/intro/painite_video/f113.bin.lz");
static const u32 sPainiteVideoFrame114[] = INCBIN_U32("graphics/intro/painite_video/f114.bin.lz");
static const u32 sPainiteVideoFrame115[] = INCBIN_U32("graphics/intro/painite_video/f115.bin.lz");
static const u32 sPainiteVideoFrame116[] = INCBIN_U32("graphics/intro/painite_video/f116.bin.lz");
static const u32 sPainiteVideoFrame117[] = INCBIN_U32("graphics/intro/painite_video/f117.bin.lz");
static const u32 sPainiteVideoFrame118[] = INCBIN_U32("graphics/intro/painite_video/f118.bin.lz");
static const u32 sPainiteVideoFrame119[] = INCBIN_U32("graphics/intro/painite_video/f119.bin.lz");
static const u32 sPainiteVideoFrame120[] = INCBIN_U32("graphics/intro/painite_video/f120.bin.lz");
static const u32 sPainiteVideoFrame121[] = INCBIN_U32("graphics/intro/painite_video/f121.bin.lz");
static const u32 sPainiteVideoFrame122[] = INCBIN_U32("graphics/intro/painite_video/f122.bin.lz");
static const u32 sPainiteVideoFrame123[] = INCBIN_U32("graphics/intro/painite_video/f123.bin.lz");
static const u32 sPainiteVideoFrame124[] = INCBIN_U32("graphics/intro/painite_video/f124.bin.lz");
static const u32 sPainiteVideoFrame125[] = INCBIN_U32("graphics/intro/painite_video/f125.bin.lz");
static const u32 sPainiteVideoFrame126[] = INCBIN_U32("graphics/intro/painite_video/f126.bin.lz");
static const u32 sPainiteVideoFrame127[] = INCBIN_U32("graphics/intro/painite_video/f127.bin.lz");
static const u32 sPainiteVideoFrame128[] = INCBIN_U32("graphics/intro/painite_video/f128.bin.lz");
static const u32 sPainiteVideoFrame129[] = INCBIN_U32("graphics/intro/painite_video/f129.bin.lz");
static const u32 sPainiteVideoFrame130[] = INCBIN_U32("graphics/intro/painite_video/f130.bin.lz");
static const u32 sPainiteVideoFrame131[] = INCBIN_U32("graphics/intro/painite_video/f131.bin.lz");
static const u32 sPainiteVideoFrame132[] = INCBIN_U32("graphics/intro/painite_video/f132.bin.lz");
static const u32 sPainiteVideoFrame133[] = INCBIN_U32("graphics/intro/painite_video/f133.bin.lz");
static const u32 sPainiteVideoFrame134[] = INCBIN_U32("graphics/intro/painite_video/f134.bin.lz");
static const u32 sPainiteVideoFrame135[] = INCBIN_U32("graphics/intro/painite_video/f135.bin.lz");
static const u32 sPainiteVideoFrame136[] = INCBIN_U32("graphics/intro/painite_video/f136.bin.lz");
static const u32 sPainiteVideoFrame137[] = INCBIN_U32("graphics/intro/painite_video/f137.bin.lz");
static const u32 sPainiteVideoFrame138[] = INCBIN_U32("graphics/intro/painite_video/f138.bin.lz");
static const u32 sPainiteVideoFrame139[] = INCBIN_U32("graphics/intro/painite_video/f139.bin.lz");
static const u32 sPainiteVideoFrame140[] = INCBIN_U32("graphics/intro/painite_video/f140.bin.lz");
static const u32 sPainiteVideoFrame141[] = INCBIN_U32("graphics/intro/painite_video/f141.bin.lz");
static const u32 sPainiteVideoFrame142[] = INCBIN_U32("graphics/intro/painite_video/f142.bin.lz");
static const u32 sPainiteVideoFrame143[] = INCBIN_U32("graphics/intro/painite_video/f143.bin.lz");
static const u32 sPainiteVideoFrame144[] = INCBIN_U32("graphics/intro/painite_video/f144.bin.lz");
static const u32 sPainiteVideoFrame145[] = INCBIN_U32("graphics/intro/painite_video/f145.bin.lz");
static const u32 sPainiteVideoFrame146[] = INCBIN_U32("graphics/intro/painite_video/f146.bin.lz");
static const u32 sPainiteVideoFrame147[] = INCBIN_U32("graphics/intro/painite_video/f147.bin.lz");
static const u32 sPainiteVideoFrame148[] = INCBIN_U32("graphics/intro/painite_video/f148.bin.lz");
static const u32 sPainiteVideoFrame149[] = INCBIN_U32("graphics/intro/painite_video/f149.bin.lz");

static const u32 *const sPainiteVideoFrames[PAINITE_VIDEO_FRAME_COUNT] =
{
    sPainiteVideoFrame000,
    sPainiteVideoFrame001,
    sPainiteVideoFrame002,
    sPainiteVideoFrame003,
    sPainiteVideoFrame004,
    sPainiteVideoFrame005,
    sPainiteVideoFrame006,
    sPainiteVideoFrame007,
    sPainiteVideoFrame008,
    sPainiteVideoFrame009,
    sPainiteVideoFrame010,
    sPainiteVideoFrame011,
    sPainiteVideoFrame012,
    sPainiteVideoFrame013,
    sPainiteVideoFrame014,
    sPainiteVideoFrame015,
    sPainiteVideoFrame016,
    sPainiteVideoFrame017,
    sPainiteVideoFrame018,
    sPainiteVideoFrame019,
    sPainiteVideoFrame020,
    sPainiteVideoFrame021,
    sPainiteVideoFrame022,
    sPainiteVideoFrame023,
    sPainiteVideoFrame024,
    sPainiteVideoFrame025,
    sPainiteVideoFrame026,
    sPainiteVideoFrame027,
    sPainiteVideoFrame028,
    sPainiteVideoFrame029,
    sPainiteVideoFrame030,
    sPainiteVideoFrame031,
    sPainiteVideoFrame032,
    sPainiteVideoFrame033,
    sPainiteVideoFrame034,
    sPainiteVideoFrame035,
    sPainiteVideoFrame036,
    sPainiteVideoFrame037,
    sPainiteVideoFrame038,
    sPainiteVideoFrame039,
    sPainiteVideoFrame040,
    sPainiteVideoFrame041,
    sPainiteVideoFrame042,
    sPainiteVideoFrame043,
    sPainiteVideoFrame044,
    sPainiteVideoFrame045,
    sPainiteVideoFrame046,
    sPainiteVideoFrame047,
    sPainiteVideoFrame048,
    sPainiteVideoFrame049,
    sPainiteVideoFrame050,
    sPainiteVideoFrame051,
    sPainiteVideoFrame052,
    sPainiteVideoFrame053,
    sPainiteVideoFrame054,
    sPainiteVideoFrame055,
    sPainiteVideoFrame056,
    sPainiteVideoFrame057,
    sPainiteVideoFrame058,
    sPainiteVideoFrame059,
    sPainiteVideoFrame060,
    sPainiteVideoFrame061,
    sPainiteVideoFrame062,
    sPainiteVideoFrame063,
    sPainiteVideoFrame064,
    sPainiteVideoFrame065,
    sPainiteVideoFrame066,
    sPainiteVideoFrame067,
    sPainiteVideoFrame068,
    sPainiteVideoFrame069,
    sPainiteVideoFrame070,
    sPainiteVideoFrame071,
    sPainiteVideoFrame072,
    sPainiteVideoFrame073,
    sPainiteVideoFrame074,
    sPainiteVideoFrame075,
    sPainiteVideoFrame076,
    sPainiteVideoFrame077,
    sPainiteVideoFrame078,
    sPainiteVideoFrame079,
    sPainiteVideoFrame080,
    sPainiteVideoFrame081,
    sPainiteVideoFrame082,
    sPainiteVideoFrame083,
    sPainiteVideoFrame084,
    sPainiteVideoFrame085,
    sPainiteVideoFrame086,
    sPainiteVideoFrame087,
    sPainiteVideoFrame088,
    sPainiteVideoFrame089,
    sPainiteVideoFrame090,
    sPainiteVideoFrame091,
    sPainiteVideoFrame092,
    sPainiteVideoFrame093,
    sPainiteVideoFrame094,
    sPainiteVideoFrame095,
    sPainiteVideoFrame096,
    sPainiteVideoFrame097,
    sPainiteVideoFrame098,
    sPainiteVideoFrame099,
    sPainiteVideoFrame100,
    sPainiteVideoFrame101,
    sPainiteVideoFrame102,
    sPainiteVideoFrame103,
    sPainiteVideoFrame104,
    sPainiteVideoFrame105,
    sPainiteVideoFrame106,
    sPainiteVideoFrame107,
    sPainiteVideoFrame108,
    sPainiteVideoFrame109,
    sPainiteVideoFrame110,
    sPainiteVideoFrame111,
    sPainiteVideoFrame112,
    sPainiteVideoFrame113,
    sPainiteVideoFrame114,
    sPainiteVideoFrame115,
    sPainiteVideoFrame116,
    sPainiteVideoFrame117,
    sPainiteVideoFrame118,
    sPainiteVideoFrame119,
    sPainiteVideoFrame120,
    sPainiteVideoFrame121,
    sPainiteVideoFrame122,
    sPainiteVideoFrame123,
    sPainiteVideoFrame124,
    sPainiteVideoFrame125,
    sPainiteVideoFrame126,
    sPainiteVideoFrame127,
    sPainiteVideoFrame128,
    sPainiteVideoFrame129,
    sPainiteVideoFrame130,
    sPainiteVideoFrame131,
    sPainiteVideoFrame132,
    sPainiteVideoFrame133,
    sPainiteVideoFrame134,
    sPainiteVideoFrame135,
    sPainiteVideoFrame136,
    sPainiteVideoFrame137,
    sPainiteVideoFrame138,
    sPainiteVideoFrame139,
    sPainiteVideoFrame140,
    sPainiteVideoFrame141,
    sPainiteVideoFrame142,
    sPainiteVideoFrame143,
    sPainiteVideoFrame144,
    sPainiteVideoFrame145,
    sPainiteVideoFrame146,
    sPainiteVideoFrame147,
    sPainiteVideoFrame148,
    sPainiteVideoFrame149,
};
