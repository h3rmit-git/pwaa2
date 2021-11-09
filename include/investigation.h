#ifndef GUARD_INVESTIGATION_H
#define GUARD_INVESTIGATION_H

#include "case_data.h"
#include "utils.h"

struct TalkData
{
    /* +0x00 */ u8 roomId;
    /* +0x01 */ u8 personId;
    /* +0x02 */ u8 unk2; // called dm in unity? probably means dummy, unused
    /* +0x03 */ u8 enableFlag; // en- or disables this specific set of talk data, allows for multiple sets for one character in one room
    /* +0x04 */ u8 iconId[0x4];
    /* +0x08 */ u8 talkFlagId[0x4];
    /* +0x0C */ u16 talkSection[0x4];
};

struct ExaminationData
{
    /* +0x00 */ u16 examinationSection;
    /* +0x02 */ u8 unk2;
    /* +0x03 */ u8 unk3;
    /* +0x04 */ struct Point4 area;
};  

struct InvestigationStruct // unity: tantei_work_
{
    /* +0x00 */ u16 unk0; // unity AA4: finger_pos_x
    /* +0x02 */ u16 unk2; // unity AA4: finger_pos_y
    /* +0x04 */ u8 filler04[0x2];
    /* +0x06 */ u8 unk6;
    /* +0x06 */ u8 filler07[0x9];
    /* +0x10 */ u8 unk10;
    /* +0x11 */ u8 filler11[0x8];
    ///* +0x04 */ u8 unk4; // unity AA4: sel_place
    ///* +0x05 */ u8 unk5; // unity: person_flag // is person in current room?
    ///* +0x06 */ u8 unk6; // unity AA4: ckeck_no_flag
    ///* +0x07 */ u8 unk7; // unity AA4: menu_mv_be_flag
    ///* +0x08 */ u8 unk8; // unity AA4: finger_speed_x
    ///* +0x09 */ u8 unk9; // unity: siteki_no // 指摘 in japanese meaning "Pointed out" used for spot selection minigame, it's the collision it has to load for the minigame
    ///* +0x0A */ u8 unkA; // unity: menu // selected investigation button, why menu?
    ///* +0x0B */ u8 unkB; // unity AA4: menu_old
    ///* +0x0C */ u8 unkC; // unity AA4: menu_rno
    ///* +0x0D */ u8 unkD; // unity AA4: menu_pos_y
    ///* +0x0E */ u8 unkE; // unity AA4: menu_add
    ///* +0x0F */ u8 unkF; // unity AA4: menu_add_old
    ///* +0x10 */ bool8 unk10[4]; // unity AA4: sel_place_be Which buttons for moving are active
    ///* +0x14 */ u8 unk14; // unity AA4: yubi_no
    ///* +0x15 */ u8 unk15; // unity AA4: yubi_timer
    ///* +0x16 */ u8 unk16; // unity AA4: yubi_col_no
    ///* +0x17 */ u8 unk17; // unity AA4: yubi_col_timer
};

extern struct TalkData gTalkData[32];
extern struct ExaminationData gExaminationData[16];
extern struct InvestigationStruct gInvestigation;

/* data stuff from segments */
extern u8 gUnknown_03003B70[];
extern u8 gUnknown_0801CC08[];
extern u8 gUnknown_0801CA24[];
extern u8 gUnknown_0801CA28[];

extern u8 gUnknown_0801CC30[];
extern u8 gUnknown_0801CCA8[];
extern u8 gUnknown_0801CCD0[];
extern u8 gUnknown_0801CD5C[];
extern u8 gUnknown_0801CE10[];
extern u8 gUnknown_0801CDAC[];
extern u8 gUnknown_0801CE88[];
extern u8 gUnknown_0801CF8C[];
extern u8 gUnknown_0801CF3C[];
extern u8 gUnknown_0801CEEC[];

extern u8 gUnknown_0801D6DC[];
extern u8 gUnknown_0801D470[];
extern u8 gUnknown_0801D464[];

extern u8 gUnknown_0801D704[];
extern u8 gUnknown_0801D768[];
extern u8 gUnknown_0801DA88[];
extern u8 gUnknown_0801D790[];
extern u8 gUnknown_0801D81C[];
extern u8 gUnknown_0801D86C[];
extern u8 gUnknown_0801DA24[];
extern u8 gUnknown_0801D9C0[];
extern u8 gUnknown_0801D948[];
extern u8 gUnknown_0801D8E4[];


void sub_801480C(u32);
/* end data stuff from segments */

void sub_800EB24(struct InvestigationStruct *, u32);
extern u32 sub_800D5B0(struct InvestigationStruct *);
void sub_800D674(void);
void sub_800D6C8(void);

void sub_800B808(struct Main *, struct InvestigationStruct *);
void sub_800BAD4(struct Main *, struct InvestigationStruct *);
void sub_800BD74(struct Main *, struct InvestigationStruct *);
void sub_800BDF8(struct Main *, struct InvestigationStruct *);
void sub_800BE58(struct Main *, struct InvestigationStruct *);
void sub_800BE7C(struct Main *, struct InvestigationStruct *);
void sub_800BF90(struct Main *, struct InvestigationStruct *);
void sub_800C334(struct Main *, struct InvestigationStruct *);
void sub_800C8B8(struct Main *, struct InvestigationStruct *);
void sub_800D2B0(struct Main *, struct InvestigationStruct *);

/* Segment 1 */
void InvestigationSegmentSetup_1_0(struct Main *main);
void InvestigationRoomSetup_1_0(struct Main *main);
void InvestigationRoomUpdate_1_0(struct Main *main);

void InvestigationSegmentSetup_1_2(struct Main *main);
void InvestigationRoomSetup_1_2(struct Main *main);
void InvestigationRoomUpdate_1_2(struct Main *main);
/* Segment 2 */
void InvestigationSegmentSetup_2_0(struct Main *main);
void InvestigationRoomSetup_2_0(struct Main *main);
void InvestigationRoomUpdate_2_0(struct Main *main);

void InvestigationSegmentSetup_2_2(struct Main *main);
void InvestigationRoomSetup_2_2(struct Main *main);
void InvestigationRoomUpdate_2_2(struct Main *main);

void InvestigationSegmentSetup_2_4(struct Main *main);
void InvestigationRoomSetup_2_4(struct Main *main);
void InvestigationRoomUpdate_2_4(struct Main *main);
/* Segment 3 */
void InvestigationSegmentSetup_3_0(struct Main *main);
void InvestigationRoomSetup_3_0(struct Main *main);
void InvestigationRoomUpdate_3_0(struct Main *main);

void InvestigationSegmentSetup_3_2(struct Main *main);
void InvestigationRoomSetup_3_2(struct Main *main);
void InvestigationRoomUpdate_3_2(struct Main *main);

void InvestigationSegmentSetup_3_4(struct Main *main);
void InvestigationRoomSetup_3_4(struct Main *main);
void InvestigationRoomUpdate_3_4(struct Main *main);

void InvestigationDummy(struct Main *main);

void GameProcess04(struct Main *);

#endif//GUARD_INVESTIGATION_H