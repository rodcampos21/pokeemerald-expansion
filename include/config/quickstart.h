#ifndef GUARD_CONFIG_QUICKSTART_H
#define GUARD_CONFIG_QUICKSTART_H

#define GENDER_MALE              0
#define GENDER_FEMALE            1
#define GENDER_RANDOM            2

// Quickstart Settings
#define ENABLE_QUICKSTART            TRUE  // If TRUE press SELECT to start a new game from the titlescreen (Disabled on Release Builds)
#define QUICKSTART_HUD               TRUE  // Displays a small hud element on the titlescreen when Quickstart is enabled
#define QUICKSTART_GENDER            GENDER_RANDOM

#define QUICKSTART_HUD_X             (DISPLAY_WIDTH - 32) // Quickstart HUD X Position
#define QUICKSTART_HUD_Y             (16)                 // Quickstart HUD Y Position

// Painite Version test: after Quickstart, start a wild battle Sableye Form P vs Sableye Form P
#define PAINITE_BATTLE_TEST          FALSE

#endif // GUARD_CONFIG_QUICKSTART_H
