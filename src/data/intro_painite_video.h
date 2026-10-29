// Painite Version intro video: 150 frames, 240x160 8bpp, LZ77, 15 fps
// Generated from the intro video; one INCBIN per frame.

#define PAINITE_VIDEO_FRAME_COUNT 150
#define PAINITE_VIDEO_VBLANKS_PER_FRAME 4

static const u16 sPainiteVideoPal[] = INCBIN_U16("graphics/intro/painite_video/palette.gbapal");

static const u32 sPainiteVideoFrame000[] = INCBIN_U32("graphics/intro/painite_video/f000.lz");
static const u32 sPainiteVideoFrame001[] = INCBIN_U32("graphics/intro/painite_video/f001.lz");
static const u32 sPainiteVideoFrame002[] = INCBIN_U32("graphics/intro/painite_video/f002.lz");
static const u32 sPainiteVideoFrame003[] = INCBIN_U32("graphics/intro/painite_video/f003.lz");
static const u32 sPainiteVideoFrame004[] = INCBIN_U32("graphics/intro/painite_video/f004.lz");
static const u32 sPainiteVideoFrame005[] = INCBIN_U32("graphics/intro/painite_video/f005.lz");
static const u32 sPainiteVideoFrame006[] = INCBIN_U32("graphics/intro/painite_video/f006.lz");
static const u32 sPainiteVideoFrame007[] = INCBIN_U32("graphics/intro/painite_video/f007.lz");
static const u32 sPainiteVideoFrame008[] = INCBIN_U32("graphics/intro/painite_video/f008.lz");
static const u32 sPainiteVideoFrame009[] = INCBIN_U32("graphics/intro/painite_video/f009.lz");
static const u32 sPainiteVideoFrame010[] = INCBIN_U32("graphics/intro/painite_video/f010.lz");
static const u32 sPainiteVideoFrame011[] = INCBIN_U32("graphics/intro/painite_video/f011.lz");
static const u32 sPainiteVideoFrame012[] = INCBIN_U32("graphics/intro/painite_video/f012.lz");
static const u32 sPainiteVideoFrame013[] = INCBIN_U32("graphics/intro/painite_video/f013.lz");
static const u32 sPainiteVideoFrame014[] = INCBIN_U32("graphics/intro/painite_video/f014.lz");
static const u32 sPainiteVideoFrame015[] = INCBIN_U32("graphics/intro/painite_video/f015.lz");
static const u32 sPainiteVideoFrame016[] = INCBIN_U32("graphics/intro/painite_video/f016.lz");
static const u32 sPainiteVideoFrame017[] = INCBIN_U32("graphics/intro/painite_video/f017.lz");
static const u32 sPainiteVideoFrame018[] = INCBIN_U32("graphics/intro/painite_video/f018.lz");
static const u32 sPainiteVideoFrame019[] = INCBIN_U32("graphics/intro/painite_video/f019.lz");
static const u32 sPainiteVideoFrame020[] = INCBIN_U32("graphics/intro/painite_video/f020.lz");
static const u32 sPainiteVideoFrame021[] = INCBIN_U32("graphics/intro/painite_video/f021.lz");
static const u32 sPainiteVideoFrame022[] = INCBIN_U32("graphics/intro/painite_video/f022.lz");
static const u32 sPainiteVideoFrame023[] = INCBIN_U32("graphics/intro/painite_video/f023.lz");
static const u32 sPainiteVideoFrame024[] = INCBIN_U32("graphics/intro/painite_video/f024.lz");
static const u32 sPainiteVideoFrame025[] = INCBIN_U32("graphics/intro/painite_video/f025.lz");
static const u32 sPainiteVideoFrame026[] = INCBIN_U32("graphics/intro/painite_video/f026.lz");
static const u32 sPainiteVideoFrame027[] = INCBIN_U32("graphics/intro/painite_video/f027.lz");
static const u32 sPainiteVideoFrame028[] = INCBIN_U32("graphics/intro/painite_video/f028.lz");
static const u32 sPainiteVideoFrame029[] = INCBIN_U32("graphics/intro/painite_video/f029.lz");
static const u32 sPainiteVideoFrame030[] = INCBIN_U32("graphics/intro/painite_video/f030.lz");
static const u32 sPainiteVideoFrame031[] = INCBIN_U32("graphics/intro/painite_video/f031.lz");
static const u32 sPainiteVideoFrame032[] = INCBIN_U32("graphics/intro/painite_video/f032.lz");
static const u32 sPainiteVideoFrame033[] = INCBIN_U32("graphics/intro/painite_video/f033.lz");
static const u32 sPainiteVideoFrame034[] = INCBIN_U32("graphics/intro/painite_video/f034.lz");
static const u32 sPainiteVideoFrame035[] = INCBIN_U32("graphics/intro/painite_video/f035.lz");
static const u32 sPainiteVideoFrame036[] = INCBIN_U32("graphics/intro/painite_video/f036.lz");
static const u32 sPainiteVideoFrame037[] = INCBIN_U32("graphics/intro/painite_video/f037.lz");
static const u32 sPainiteVideoFrame038[] = INCBIN_U32("graphics/intro/painite_video/f038.lz");
static const u32 sPainiteVideoFrame039[] = INCBIN_U32("graphics/intro/painite_video/f039.lz");
static const u32 sPainiteVideoFrame040[] = INCBIN_U32("graphics/intro/painite_video/f040.lz");
static const u32 sPainiteVideoFrame041[] = INCBIN_U32("graphics/intro/painite_video/f041.lz");
static const u32 sPainiteVideoFrame042[] = INCBIN_U32("graphics/intro/painite_video/f042.lz");
static const u32 sPainiteVideoFrame043[] = INCBIN_U32("graphics/intro/painite_video/f043.lz");
static const u32 sPainiteVideoFrame044[] = INCBIN_U32("graphics/intro/painite_video/f044.lz");
static const u32 sPainiteVideoFrame045[] = INCBIN_U32("graphics/intro/painite_video/f045.lz");
static const u32 sPainiteVideoFrame046[] = INCBIN_U32("graphics/intro/painite_video/f046.lz");
static const u32 sPainiteVideoFrame047[] = INCBIN_U32("graphics/intro/painite_video/f047.lz");
static const u32 sPainiteVideoFrame048[] = INCBIN_U32("graphics/intro/painite_video/f048.lz");
static const u32 sPainiteVideoFrame049[] = INCBIN_U32("graphics/intro/painite_video/f049.lz");
static const u32 sPainiteVideoFrame050[] = INCBIN_U32("graphics/intro/painite_video/f050.lz");
static const u32 sPainiteVideoFrame051[] = INCBIN_U32("graphics/intro/painite_video/f051.lz");
static const u32 sPainiteVideoFrame052[] = INCBIN_U32("graphics/intro/painite_video/f052.lz");
static const u32 sPainiteVideoFrame053[] = INCBIN_U32("graphics/intro/painite_video/f053.lz");
static const u32 sPainiteVideoFrame054[] = INCBIN_U32("graphics/intro/painite_video/f054.lz");
static const u32 sPainiteVideoFrame055[] = INCBIN_U32("graphics/intro/painite_video/f055.lz");
static const u32 sPainiteVideoFrame056[] = INCBIN_U32("graphics/intro/painite_video/f056.lz");
static const u32 sPainiteVideoFrame057[] = INCBIN_U32("graphics/intro/painite_video/f057.lz");
static const u32 sPainiteVideoFrame058[] = INCBIN_U32("graphics/intro/painite_video/f058.lz");
static const u32 sPainiteVideoFrame059[] = INCBIN_U32("graphics/intro/painite_video/f059.lz");
static const u32 sPainiteVideoFrame060[] = INCBIN_U32("graphics/intro/painite_video/f060.lz");
static const u32 sPainiteVideoFrame061[] = INCBIN_U32("graphics/intro/painite_video/f061.lz");
static const u32 sPainiteVideoFrame062[] = INCBIN_U32("graphics/intro/painite_video/f062.lz");
static const u32 sPainiteVideoFrame063[] = INCBIN_U32("graphics/intro/painite_video/f063.lz");
static const u32 sPainiteVideoFrame064[] = INCBIN_U32("graphics/intro/painite_video/f064.lz");
static const u32 sPainiteVideoFrame065[] = INCBIN_U32("graphics/intro/painite_video/f065.lz");
static const u32 sPainiteVideoFrame066[] = INCBIN_U32("graphics/intro/painite_video/f066.lz");
static const u32 sPainiteVideoFrame067[] = INCBIN_U32("graphics/intro/painite_video/f067.lz");
static const u32 sPainiteVideoFrame068[] = INCBIN_U32("graphics/intro/painite_video/f068.lz");
static const u32 sPainiteVideoFrame069[] = INCBIN_U32("graphics/intro/painite_video/f069.lz");
static const u32 sPainiteVideoFrame070[] = INCBIN_U32("graphics/intro/painite_video/f070.lz");
static const u32 sPainiteVideoFrame071[] = INCBIN_U32("graphics/intro/painite_video/f071.lz");
static const u32 sPainiteVideoFrame072[] = INCBIN_U32("graphics/intro/painite_video/f072.lz");
static const u32 sPainiteVideoFrame073[] = INCBIN_U32("graphics/intro/painite_video/f073.lz");
static const u32 sPainiteVideoFrame074[] = INCBIN_U32("graphics/intro/painite_video/f074.lz");
static const u32 sPainiteVideoFrame075[] = INCBIN_U32("graphics/intro/painite_video/f075.lz");
static const u32 sPainiteVideoFrame076[] = INCBIN_U32("graphics/intro/painite_video/f076.lz");
static const u32 sPainiteVideoFrame077[] = INCBIN_U32("graphics/intro/painite_video/f077.lz");
static const u32 sPainiteVideoFrame078[] = INCBIN_U32("graphics/intro/painite_video/f078.lz");
static const u32 sPainiteVideoFrame079[] = INCBIN_U32("graphics/intro/painite_video/f079.lz");
static const u32 sPainiteVideoFrame080[] = INCBIN_U32("graphics/intro/painite_video/f080.lz");
static const u32 sPainiteVideoFrame081[] = INCBIN_U32("graphics/intro/painite_video/f081.lz");
static const u32 sPainiteVideoFrame082[] = INCBIN_U32("graphics/intro/painite_video/f082.lz");
static const u32 sPainiteVideoFrame083[] = INCBIN_U32("graphics/intro/painite_video/f083.lz");
static const u32 sPainiteVideoFrame084[] = INCBIN_U32("graphics/intro/painite_video/f084.lz");
static const u32 sPainiteVideoFrame085[] = INCBIN_U32("graphics/intro/painite_video/f085.lz");
static const u32 sPainiteVideoFrame086[] = INCBIN_U32("graphics/intro/painite_video/f086.lz");
static const u32 sPainiteVideoFrame087[] = INCBIN_U32("graphics/intro/painite_video/f087.lz");
static const u32 sPainiteVideoFrame088[] = INCBIN_U32("graphics/intro/painite_video/f088.lz");
static const u32 sPainiteVideoFrame089[] = INCBIN_U32("graphics/intro/painite_video/f089.lz");
static const u32 sPainiteVideoFrame090[] = INCBIN_U32("graphics/intro/painite_video/f090.lz");
static const u32 sPainiteVideoFrame091[] = INCBIN_U32("graphics/intro/painite_video/f091.lz");
static const u32 sPainiteVideoFrame092[] = INCBIN_U32("graphics/intro/painite_video/f092.lz");
static const u32 sPainiteVideoFrame093[] = INCBIN_U32("graphics/intro/painite_video/f093.lz");
static const u32 sPainiteVideoFrame094[] = INCBIN_U32("graphics/intro/painite_video/f094.lz");
static const u32 sPainiteVideoFrame095[] = INCBIN_U32("graphics/intro/painite_video/f095.lz");
static const u32 sPainiteVideoFrame096[] = INCBIN_U32("graphics/intro/painite_video/f096.lz");
static const u32 sPainiteVideoFrame097[] = INCBIN_U32("graphics/intro/painite_video/f097.lz");
static const u32 sPainiteVideoFrame098[] = INCBIN_U32("graphics/intro/painite_video/f098.lz");
static const u32 sPainiteVideoFrame099[] = INCBIN_U32("graphics/intro/painite_video/f099.lz");
static const u32 sPainiteVideoFrame100[] = INCBIN_U32("graphics/intro/painite_video/f100.lz");
static const u32 sPainiteVideoFrame101[] = INCBIN_U32("graphics/intro/painite_video/f101.lz");
static const u32 sPainiteVideoFrame102[] = INCBIN_U32("graphics/intro/painite_video/f102.lz");
static const u32 sPainiteVideoFrame103[] = INCBIN_U32("graphics/intro/painite_video/f103.lz");
static const u32 sPainiteVideoFrame104[] = INCBIN_U32("graphics/intro/painite_video/f104.lz");
static const u32 sPainiteVideoFrame105[] = INCBIN_U32("graphics/intro/painite_video/f105.lz");
static const u32 sPainiteVideoFrame106[] = INCBIN_U32("graphics/intro/painite_video/f106.lz");
static const u32 sPainiteVideoFrame107[] = INCBIN_U32("graphics/intro/painite_video/f107.lz");
static const u32 sPainiteVideoFrame108[] = INCBIN_U32("graphics/intro/painite_video/f108.lz");
static const u32 sPainiteVideoFrame109[] = INCBIN_U32("graphics/intro/painite_video/f109.lz");
static const u32 sPainiteVideoFrame110[] = INCBIN_U32("graphics/intro/painite_video/f110.lz");
static const u32 sPainiteVideoFrame111[] = INCBIN_U32("graphics/intro/painite_video/f111.lz");
static const u32 sPainiteVideoFrame112[] = INCBIN_U32("graphics/intro/painite_video/f112.lz");
static const u32 sPainiteVideoFrame113[] = INCBIN_U32("graphics/intro/painite_video/f113.lz");
static const u32 sPainiteVideoFrame114[] = INCBIN_U32("graphics/intro/painite_video/f114.lz");
static const u32 sPainiteVideoFrame115[] = INCBIN_U32("graphics/intro/painite_video/f115.lz");
static const u32 sPainiteVideoFrame116[] = INCBIN_U32("graphics/intro/painite_video/f116.lz");
static const u32 sPainiteVideoFrame117[] = INCBIN_U32("graphics/intro/painite_video/f117.lz");
static const u32 sPainiteVideoFrame118[] = INCBIN_U32("graphics/intro/painite_video/f118.lz");
static const u32 sPainiteVideoFrame119[] = INCBIN_U32("graphics/intro/painite_video/f119.lz");
static const u32 sPainiteVideoFrame120[] = INCBIN_U32("graphics/intro/painite_video/f120.lz");
static const u32 sPainiteVideoFrame121[] = INCBIN_U32("graphics/intro/painite_video/f121.lz");
static const u32 sPainiteVideoFrame122[] = INCBIN_U32("graphics/intro/painite_video/f122.lz");
static const u32 sPainiteVideoFrame123[] = INCBIN_U32("graphics/intro/painite_video/f123.lz");
static const u32 sPainiteVideoFrame124[] = INCBIN_U32("graphics/intro/painite_video/f124.lz");
static const u32 sPainiteVideoFrame125[] = INCBIN_U32("graphics/intro/painite_video/f125.lz");
static const u32 sPainiteVideoFrame126[] = INCBIN_U32("graphics/intro/painite_video/f126.lz");
static const u32 sPainiteVideoFrame127[] = INCBIN_U32("graphics/intro/painite_video/f127.lz");
static const u32 sPainiteVideoFrame128[] = INCBIN_U32("graphics/intro/painite_video/f128.lz");
static const u32 sPainiteVideoFrame129[] = INCBIN_U32("graphics/intro/painite_video/f129.lz");
static const u32 sPainiteVideoFrame130[] = INCBIN_U32("graphics/intro/painite_video/f130.lz");
static const u32 sPainiteVideoFrame131[] = INCBIN_U32("graphics/intro/painite_video/f131.lz");
static const u32 sPainiteVideoFrame132[] = INCBIN_U32("graphics/intro/painite_video/f132.lz");
static const u32 sPainiteVideoFrame133[] = INCBIN_U32("graphics/intro/painite_video/f133.lz");
static const u32 sPainiteVideoFrame134[] = INCBIN_U32("graphics/intro/painite_video/f134.lz");
static const u32 sPainiteVideoFrame135[] = INCBIN_U32("graphics/intro/painite_video/f135.lz");
static const u32 sPainiteVideoFrame136[] = INCBIN_U32("graphics/intro/painite_video/f136.lz");
static const u32 sPainiteVideoFrame137[] = INCBIN_U32("graphics/intro/painite_video/f137.lz");
static const u32 sPainiteVideoFrame138[] = INCBIN_U32("graphics/intro/painite_video/f138.lz");
static const u32 sPainiteVideoFrame139[] = INCBIN_U32("graphics/intro/painite_video/f139.lz");
static const u32 sPainiteVideoFrame140[] = INCBIN_U32("graphics/intro/painite_video/f140.lz");
static const u32 sPainiteVideoFrame141[] = INCBIN_U32("graphics/intro/painite_video/f141.lz");
static const u32 sPainiteVideoFrame142[] = INCBIN_U32("graphics/intro/painite_video/f142.lz");
static const u32 sPainiteVideoFrame143[] = INCBIN_U32("graphics/intro/painite_video/f143.lz");
static const u32 sPainiteVideoFrame144[] = INCBIN_U32("graphics/intro/painite_video/f144.lz");
static const u32 sPainiteVideoFrame145[] = INCBIN_U32("graphics/intro/painite_video/f145.lz");
static const u32 sPainiteVideoFrame146[] = INCBIN_U32("graphics/intro/painite_video/f146.lz");
static const u32 sPainiteVideoFrame147[] = INCBIN_U32("graphics/intro/painite_video/f147.lz");
static const u32 sPainiteVideoFrame148[] = INCBIN_U32("graphics/intro/painite_video/f148.lz");
static const u32 sPainiteVideoFrame149[] = INCBIN_U32("graphics/intro/painite_video/f149.lz");

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
