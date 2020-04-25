// generated by Fast Light User Interface Designer (fluid) version 1.0304

#ifndef settingswindow_gui_h
#define settingswindow_gui_h
#include <FL/Fl.H>
#include "RKR_Box.h"
#include "RKR_Button.h"
#include "RKR_Browser.h"
#include "RKR_Check_Button.h"
#include "RKR_Choice.h"
#include "RKR_Counter.h"
#include "RKR_Input.h"
#include "RKR_File_Input.h"
#include "RKR_Group.h"
#include "RKR_Scroll.h"
#include "RKR_Tabs.h"
#include <FL/Fl_Double_Window.H>
#include "rakarrack.h"
#include <FL/Fl_Box.H>
#include <FL/Fl_Group.H>

class SettingsWindowGui : public Fl_Double_Window {
  void _SettingsWindowGui();
public:
  SettingsWindowGui(int X, int Y, int W, int H, const char *L = 0);
  SettingsWindowGui(int W, int H, const char *L = 0);
  SettingsWindowGui();
  Fl_Box *Fondo2;
  RKR_Tabs *STabs;
  Fl_Group *Look;
  Fl_Box *Fondo6;
  RKR_Choice *scheme_ch;
private:
  inline void cb_scheme_ch_i(RKR_Choice*, void*);
  static void cb_scheme_ch(RKR_Choice*, void*);
  static Fl_Menu_Item menu_scheme_ch[];
public:
  RKR_Browser *Font_Bro;
private:
  inline void cb_Font_Bro_i(RKR_Browser*, void*);
  static void cb_Font_Bro(RKR_Browser*, void*);
public:
  RKR_Box *FSLabel;
  RKR_Button *FSless;
private:
  inline void cb_FSless_i(RKR_Button*, void*);
  static void cb_FSless(RKR_Button*, void*);
public:
  RKR_Button *FSplus;
private:
  inline void cb_FSplus_i(RKR_Button*, void*);
  static void cb_FSplus(RKR_Button*, void*);
public:
  RKR_Button *FSReset;
private:
  inline void cb_FSReset_i(RKR_Button*, void*);
  static void cb_FSReset(RKR_Button*, void*);
public:
  RKR_Box *CLLabel;
  RKR_Button *B_C;
private:
  inline void cb_B_C_i(RKR_Button*, void*);
  static void cb_B_C(RKR_Button*, void*);
public:
  RKR_Button *A_C;
private:
  inline void cb_A_C_i(RKR_Button*, void*);
  static void cb_A_C(RKR_Button*, void*);
public:
  RKR_Button *L_C;
private:
  inline void cb_L_C_i(RKR_Button*, void*);
  static void cb_L_C(RKR_Button*, void*);
public:
  RKR_Button *K_C;
private:
  inline void cb_K_C_i(RKR_Button*, void*);
  static void cb_K_C(RKR_Button*, void*);
public:
  RKR_Check_Button *Enable_Back;
private:
  inline void cb_Enable_Back_i(RKR_Check_Button*, void*);
  static void cb_Enable_Back(RKR_Check_Button*, void*);
public:
  RKR_File_Input *BackFiname;
  RKR_Button *BI_Browser;
private:
  inline void cb_BI_Browser_i(RKR_Button*, void*);
  static void cb_BI_Browser(RKR_Button*, void*);
public:
  RKR_Check_Button *Enable_DeacHide;
private:
  inline void cb_Enable_DeacHide_i(RKR_Check_Button*, void*);
  static void cb_Enable_DeacHide(RKR_Check_Button*, void*);
public:
  RKR_Check_Button *Enable_Scale;
private:
  inline void cb_Enable_Scale_i(RKR_Check_Button*, void*);
  static void cb_Enable_Scale(RKR_Check_Button*, void*);
public:
  Fl_Group *AUDIO_SET;
  Fl_Box *Fondo7;
  RKR_Check_Button *INSTATE;
private:
  inline void cb_INSTATE_i(RKR_Check_Button*, void*);
  static void cb_INSTATE(RKR_Check_Button*, void*);
public:
  RKR_Check_Button *Filter_DC;
private:
  inline void cb_Filter_DC_i(RKR_Check_Button*, void*);
  static void cb_Filter_DC(RKR_Check_Button*, void*);
public:
  RKR_Check_Button *Pre_Serve;
private:
  inline void cb_Pre_Serve_i(RKR_Check_Button*, void*);
  static void cb_Pre_Serve(RKR_Check_Button*, void*);
public:
  RKR_Check_Button *Update_TAP;
private:
  inline void cb_Update_TAP_i(RKR_Check_Button*, void*);
  static void cb_Update_TAP(RKR_Check_Button*, void*);
public:
  RKR_Check_Button *UPSAMPLE_C;
private:
  inline void cb_UPSAMPLE_C_i(RKR_Check_Button*, void*);
  static void cb_UPSAMPLE_C(RKR_Check_Button*, void*);
public:
  RKR_Choice *Upr_Amo;
private:
  inline void cb_Upr_Amo_i(RKR_Choice*, void*);
  static void cb_Upr_Amo(RKR_Choice*, void*);
  static Fl_Menu_Item menu_Upr_Amo[];
public:
  RKR_Choice *Upr_Qual;
private:
  inline void cb_Upr_Qual_i(RKR_Choice*, void*);
  static void cb_Upr_Qual(RKR_Choice*, void*);
  static Fl_Menu_Item menu_Upr_Qual[];
public:
  RKR_Choice *Downr_Qual;
private:
  inline void cb_Downr_Qual_i(RKR_Choice*, void*);
  static void cb_Downr_Qual(RKR_Choice*, void*);
public:
  RKR_Box *loop_Label;
  RKR_Counter *L_SIZE;
private:
  inline void cb_L_SIZE_i(RKR_Counter*, void*);
  static void cb_L_SIZE(RKR_Counter*, void*);
public:
  RKR_Counter *LM_Volume;
private:
  inline void cb_LM_Volume_i(RKR_Counter*, void*);
  static void cb_LM_Volume(RKR_Counter*, void*);
public:
  RKR_Box *Har_Q_Label;
  RKR_Choice *Har_Qual;
private:
  inline void cb_Har_Qual_i(RKR_Choice*, void*);
  static void cb_Har_Qual(RKR_Choice*, void*);
  static Fl_Menu_Item menu_Har_Qual[];
public:
  RKR_Choice *Ste_Qual;
private:
  inline void cb_Ste_Qual_i(RKR_Choice*, void*);
  static void cb_Ste_Qual(RKR_Choice*, void*);
  static Fl_Menu_Item menu_Ste_Qual[];
public:
  RKR_Box *Voc_Band_Label;
  RKR_Choice *Voc_Bands;
private:
  inline void cb_Voc_Bands_i(RKR_Choice*, void*);
  static void cb_Voc_Bands(RKR_Choice*, void*);
  static Fl_Menu_Item menu_Voc_Bands[];
public:
  RKR_Check_Button *FLPosition;
private:
  inline void cb_FLPosition_i(RKR_Check_Button*, void*);
  static void cb_FLPosition(RKR_Check_Button*, void*);
public:
  RKR_Check_Button *DB6B;
private:
  inline void cb_DB6B_i(RKR_Check_Button*, void*);
  static void cb_DB6B(RKR_Check_Button*, void*);
public:
  RKR_Box *Calibration_Label;
  RKR_Counter *Calibration;
private:
  inline void cb_Calibration_i(RKR_Counter*, void*);
  static void cb_Calibration(RKR_Counter*, void*);
public:
  RKR_Counter *RTrigger;
private:
  inline void cb_RTrigger_i(RKR_Counter*, void*);
  static void cb_RTrigger(RKR_Counter*, void*);
public:
  RKR_Box *Recognize_Label;
  RKR_Choice *RC_Harm_Opti;
private:
  inline void cb_RC_Harm_Opti_i(RKR_Choice*, void*);
  static void cb_RC_Harm_Opti(RKR_Choice*, void*);
  static Fl_Menu_Item menu_RC_Harm_Opti[];
public:
  RKR_Choice *RC_St_Harm_Opti;
private:
  inline void cb_RC_St_Harm_Opti_i(RKR_Choice*, void*);
  static void cb_RC_St_Harm_Opti(RKR_Choice*, void*);
  static Fl_Menu_Item menu_RC_St_Harm_Opti[];
public:
  RKR_Choice *RC_Ring_Opti;
private:
  inline void cb_RC_Ring_Opti_i(RKR_Choice*, void*);
  static void cb_RC_Ring_Opti(RKR_Choice*, void*);
  static Fl_Menu_Item menu_RC_Ring_Opti[];
public:
  RKR_Box *Harm_Label;
  RKR_Choice *Har_Downsample;
private:
  inline void cb_Har_Downsample_i(RKR_Choice*, void*);
  static void cb_Har_Downsample(RKR_Choice*, void*);
  static Fl_Menu_Item menu_Har_Downsample[];
public:
  RKR_Choice *Har_Down_Qua;
private:
  inline void cb_Har_Down_Qua_i(RKR_Choice*, void*);
  static void cb_Har_Down_Qua(RKR_Choice*, void*);
public:
  RKR_Choice *Har_Up_Qua;
private:
  inline void cb_Har_Up_Qua_i(RKR_Choice*, void*);
  static void cb_Har_Up_Qua(RKR_Choice*, void*);
public:
  RKR_Box *Rev_Label;
  RKR_Choice *Rev_Downsample;
private:
  inline void cb_Rev_Downsample_i(RKR_Choice*, void*);
  static void cb_Rev_Downsample(RKR_Choice*, void*);
public:
  RKR_Choice *Rev_Down_Qua;
private:
  inline void cb_Rev_Down_Qua_i(RKR_Choice*, void*);
  static void cb_Rev_Down_Qua(RKR_Choice*, void*);
public:
  RKR_Choice *Rev_Up_Qua;
private:
  inline void cb_Rev_Up_Qua_i(RKR_Choice*, void*);
  static void cb_Rev_Up_Qua(RKR_Choice*, void*);
public:
  RKR_Box *con_Label;
  RKR_Choice *Con_Downsample;
private:
  inline void cb_Con_Downsample_i(RKR_Choice*, void*);
  static void cb_Con_Downsample(RKR_Choice*, void*);
public:
  RKR_Choice *Con_Down_Qua;
private:
  inline void cb_Con_Down_Qua_i(RKR_Choice*, void*);
  static void cb_Con_Down_Qua(RKR_Choice*, void*);
public:
  RKR_Choice *Con_Up_Qua;
private:
  inline void cb_Con_Up_Qua_i(RKR_Choice*, void*);
  static void cb_Con_Up_Qua(RKR_Choice*, void*);
public:
  RKR_Box *seq_Label;
  RKR_Choice *Seq_Downsample;
private:
  inline void cb_Seq_Downsample_i(RKR_Choice*, void*);
  static void cb_Seq_Downsample(RKR_Choice*, void*);
public:
  RKR_Choice *Seq_Down_Qua;
private:
  inline void cb_Seq_Down_Qua_i(RKR_Choice*, void*);
  static void cb_Seq_Down_Qua(RKR_Choice*, void*);
public:
  RKR_Choice *Seq_Up_Qua;
private:
  inline void cb_Seq_Up_Qua_i(RKR_Choice*, void*);
  static void cb_Seq_Up_Qua(RKR_Choice*, void*);
public:
  RKR_Box *shi_Label;
  RKR_Choice *Shi_Downsample;
private:
  inline void cb_Shi_Downsample_i(RKR_Choice*, void*);
  static void cb_Shi_Downsample(RKR_Choice*, void*);
public:
  RKR_Choice *Shi_Down_Qua;
private:
  inline void cb_Shi_Down_Qua_i(RKR_Choice*, void*);
  static void cb_Shi_Down_Qua(RKR_Choice*, void*);
public:
  RKR_Choice *Shi_Up_Qua;
private:
  inline void cb_Shi_Up_Qua_i(RKR_Choice*, void*);
  static void cb_Shi_Up_Qua(RKR_Choice*, void*);
public:
  RKR_Box *Voc_Label;
  RKR_Choice *Voc_Downsample;
private:
  inline void cb_Voc_Downsample_i(RKR_Choice*, void*);
  static void cb_Voc_Downsample(RKR_Choice*, void*);
public:
  RKR_Choice *Voc_Down_Qua;
private:
  inline void cb_Voc_Down_Qua_i(RKR_Choice*, void*);
  static void cb_Voc_Down_Qua(RKR_Choice*, void*);
public:
  RKR_Choice *Voc_Up_Qua;
private:
  inline void cb_Voc_Up_Qua_i(RKR_Choice*, void*);
  static void cb_Voc_Up_Qua(RKR_Choice*, void*);
public:
  RKR_Box *Ste_Label;
  RKR_Choice *Ste_Downsample;
private:
  inline void cb_Ste_Downsample_i(RKR_Choice*, void*);
  static void cb_Ste_Downsample(RKR_Choice*, void*);
public:
  RKR_Choice *Ste_Down_Qua;
private:
  inline void cb_Ste_Down_Qua_i(RKR_Choice*, void*);
  static void cb_Ste_Down_Qua(RKR_Choice*, void*);
public:
  RKR_Choice *Ste_Up_Qua;
private:
  inline void cb_Ste_Up_Qua_i(RKR_Choice*, void*);
  static void cb_Ste_Up_Qua(RKR_Choice*, void*);
public:
  RKR_Box *Wave_Label;
  RKR_Choice *Wave_Amo;
private:
  inline void cb_Wave_Amo_i(RKR_Choice*, void*);
  static void cb_Wave_Amo(RKR_Choice*, void*);
  static Fl_Menu_Item menu_Wave_Amo[];
public:
  RKR_Choice *Wave_Down_Qua;
private:
  inline void cb_Wave_Down_Qua_i(RKR_Choice*, void*);
  static void cb_Wave_Down_Qua(RKR_Choice*, void*);
public:
  RKR_Choice *Wave_Up_Qua;
private:
  inline void cb_Wave_Up_Qua_i(RKR_Choice*, void*);
  static void cb_Wave_Up_Qua(RKR_Choice*, void*);
public:
  Fl_Group *MIDI_SET;
  Fl_Box *Fondo8;
  RKR_Check_Button *D_A_Connect;
private:
  inline void cb_D_A_Connect_i(RKR_Check_Button*, void*);
  static void cb_D_A_Connect(RKR_Check_Button*, void*);
public:
  RKR_Browser *BMidiIn;
private:
  inline void cb_BMidiIn_i(RKR_Browser*, void*);
  static void cb_BMidiIn(RKR_Browser*, void*);
public:
  RKR_Counter *Midi_In_Counter;
private:
  inline void cb_Midi_In_Counter_i(RKR_Counter*, void*);
  static void cb_Midi_In_Counter(RKR_Counter*, void*);
public:
  RKR_Counter *Har_In_Counter;
private:
  inline void cb_Har_In_Counter_i(RKR_Counter*, void*);
  static void cb_Har_In_Counter(RKR_Counter*, void*);
public:
  RKR_Counter *Stereo_Har_In_Counter;
private:
  inline void cb_Stereo_Har_In_Counter_i(RKR_Counter*, void*);
  static void cb_Stereo_Har_In_Counter(RKR_Counter*, void*);
public:
  RKR_Group *wMIDI;
  RKR_Check_Button *Mw0;
private:
  inline void cb_Mw0_i(RKR_Check_Button*, void*);
  static void cb_Mw0(RKR_Check_Button*, void*);
public:
  RKR_Check_Button *Mw1;
private:
  inline void cb_Mw1_i(RKR_Check_Button*, void*);
  static void cb_Mw1(RKR_Check_Button*, void*);
public:
  RKR_Check_Button *AAssign;
private:
  inline void cb_AAssign_i(RKR_Check_Button*, void*);
  static void cb_AAssign(RKR_Check_Button*, void*);
public:
  RKR_Check_Button *MTable;
private:
  inline void cb_MTable_i(RKR_Check_Button*, void*);
  static void cb_MTable(RKR_Check_Button*, void*);
  inline void cb_Load_i(RKR_Button*, void*);
  static void cb_Load(RKR_Button*, void*);
  inline void cb_Save_i(RKR_Button*, void*);
  static void cb_Save(RKR_Button*, void*);
public:
  RKR_Scroll *scroll;
  Fl_Group *JACK_SET;
  Fl_Box *Fondo9;
  RKR_Check_Button *D_J_Connect;
private:
  inline void cb_D_J_Connect_i(RKR_Check_Button*, void*);
  static void cb_D_J_Connect(RKR_Check_Button*, void*);
public:
  RKR_Browser *JackCo;
  RKR_Check_Button *D_IJ_Connect;
private:
  inline void cb_D_IJ_Connect_i(RKR_Check_Button*, void*);
  static void cb_D_IJ_Connect(RKR_Check_Button*, void*);
public:
  RKR_Browser *JackIn;
  Fl_Group *MISC_SET;
  Fl_Box *Fondo10;
  RKR_Input *Username;
private:
  inline void cb_Username_i(RKR_Input*, void*);
  static void cb_Username(RKR_Input*, void*);
public:
  RKR_Check_Button *MES_DIS;
private:
  inline void cb_MES_DIS_i(RKR_Check_Button*, void*);
  static void cb_MES_DIS(RKR_Check_Button*, void*);
public:
  RKR_Check_Button *T_TIMEOUT;
private:
  inline void cb_T_TIMEOUT_i(RKR_Check_Button*, void*);
  static void cb_T_TIMEOUT(RKR_Check_Button*, void*);
public:
  RKR_Check_Button *ENA_TOOL;
private:
  inline void cb_ENA_TOOL_i(RKR_Check_Button*, void*);
  static void cb_ENA_TOOL(RKR_Check_Button*, void*);
public:
  Fl_Group *BANK_SET;
  Fl_Box *Fondo11;
  RKR_File_Input *BFiname;
  RKR_Button *BF_Browser;
private:
  inline void cb_BF_Browser_i(RKR_Button*, void*);
  static void cb_BF_Browser(RKR_Button*, void*);
public:
  RKR_File_Input *Udir;
  RKR_Button *UD_Browser;
private:
  inline void cb_UD_Browser_i(RKR_Button*, void*);
  static void cb_UD_Browser(RKR_Button*, void*);
  RKR* m_rkr; 
  RKRGUI* m_rgui; 
public:
  void initialize(RKR *_rkr,RKRGUI *_rgui );
  Fl_Menu_Item * get_menu_Har_Downsample();
  void make_table_window();
  void fill_mptable(int num,int value);
  void mtfillvalue(int num,int value);
  void Put_MidiTable();
  void update_convo_quality();
  void update_revtron_quality();
  void update_harmonizer_quality();
  void update_stereoharm_quality();
};
#endif
