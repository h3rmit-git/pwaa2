#ifndef GUARD_CONST_OAM_ALLOCATIONS_H
#define GUARD_CONST_OAM_ALLOCATIONS_H

#define OAM_IDX_LR_ARROW 0
#define OAM_COUNT_LR_ARROW 2

#define OAM_IDX_TEXT 2
#define OAM_COUNT_TEXT 32

#define OAM_IDX_TALK_TICK 34
#define OAM_COUNT_TALK_TICK 4

#define OAM_IDX_EVIDENCE_DISPLAY 34
#define OAM_COUNT_EVIDENCE_DISPLAY 11
#define OAM_IDX_EVIDENCE_RECORD_ACTIONS 45
#define OAM_COUNT_EVIDENCE_RECORD_ACTIONS 3


// misfits
#define OAM_IDX_HEALTH 35
#define OAM_COUNT_HEALTH 5

#define OAM_IDX_GENERIC_TEXT_ICON 38 // used for episode select, talk button, move button
#define OAM_IDX_GENERIC_TEXT_ICON1 38
#define OAM_IDX_GENERIC_TEXT_ICON2 40
#define OAM_IDX_GENERIC_TEXT_ICON3 42
#define OAM_IDX_GENERIC_TEXT_ICON4 44
#define OAM_COUNT_GENERIC_TEXT_ICON 8

#define OAM_IDX_SAVE_PROMPT 40

#define OAM_IDX_VERDICT_KANJI 49
#define OAM_COUNT_VERDICT_KANJI 2

// no better name. used as a middle man for shared sprite allocations
#define OAM_IDX_GENERAL_USE_1 52
#define OAM_COUNT_GENERAL_USE_1 4 // pray this is correct

#define OAM_IDX_INVESTIGATION_ACTIONS OAM_IDX_GENERAL_USE_1
#define OAM_IDX_INVESTIGATION_ACTION_EXAMINE OAM_IDX_INVESTIGATION_ACTIONS+0
#define OAM_IDX_INVESTIGATION_ACTION_MOVE OAM_IDX_INVESTIGATION_ACTIONS+1
#define OAM_IDX_INVESTIGATION_ACTION_TALK OAM_IDX_INVESTIGATION_ACTIONS+2
#define OAM_IDX_INVESTIGATION_ACTION_PRESENT OAM_IDX_INVESTIGATION_ACTIONS+3
#define OAM_COUNT_INVESTIGATION_ACTIONS 4

#define OAM_IDX_TITLE_SCREEN_OPTIONS OAM_IDX_GENERAL_USE_1
#define OAM_COUNT_TITLE_SCREEN_OPTIONS 2

//TODO: add names for prompts
#define OAM_IDX_TAKE_THAT_EVIDENCE_THROW 52
#define OAM_COUNT_TAKE_THAT_EVIDENCE_THROW 1

#define OAM_IDX_BUTTON_PROMPTS 53
#define OAM_COUNT_BUTTON_PROMPTS 4

#define OAM_IDX_GENERAL_2 57

#define OAM_IDX_EVIDENCE_PRESENT_ACTIONS OAM_IDX_GENERAL_2
#define OAM_COUNT_EVIDENCE_PRESENT_ACTIONS 4

#define OAM_IDX_ITESTIMONY_INDICATOR OAM_IDX_GENERAL_2
#define OAM_COUNT_ITESTIMONY_INDICATOR 1

#define OAM_IDX_GAME_OVER OAM_IDX_GENERAL_2
#define OAM_COUNT_GAME_OVER 2

#define OAM_IDX_MAP_MARKER OAM_IDX_GENERAL_2
#define OAM_COUNT_MAP_MARKER 8

#define OAM_IDX_CONFETTI OAM_IDX_GENERAL_2
#define OAM_COUNT_CONFETTI 31

#define OAM_IDX_TEXT_FULLSCREEN OAM_IDX_GENERAL_2+1
#define OAM_COUNT_TEXT_FULLSCREEN 31

#define OAM_IDX_38_1 58

#define OAM_IDX_ITEMPLATE_ITEM 65

// OAM_WK_SEL_CURSOL
#define OAM_IDX_POINTER 88 // pointer sprites get allocated to this OAM index

#endif//GUARD_CONST_OAM_ALLOCATIONS
