// generated by Fast Light User Interface Designer (fluid) version 1.0304

#ifndef varyband_gui_h
#define varyband_gui_h
#include <FL/Fl.H>
#include "RKR_Light_Button.h"
#include "RKR_Choice.h"
#include "RKR_GUI_Effect.h"
#include "RKR_Slider.h"
#include "../process.h"
#include "rakarrack.h"
#include "common_gui_menu.h"

class VarybandGui : public RKR_Gui_Effect {
public:
  VarybandGui(int X, int Y, int W, int H, const char *L = 0);
  RKR_Light_Button *varyband_activar;
private:
  inline void cb_varyband_activar_i(RKR_Light_Button*, void*);
  static void cb_varyband_activar(RKR_Light_Button*, void*);
public:
  RKR_Choice *varyband_preset;
private:
  inline void cb_varyband_preset_i(RKR_Choice*, void*);
  static void cb_varyband_preset(RKR_Choice*, void*);
  static Fl_Menu_Item menu_varyband_preset[];
public:
  RKR_Slider *varyband_WD;
private:
  inline void cb_varyband_WD_i(RKR_Slider*, void*);
  static void cb_varyband_WD(RKR_Slider*, void*);
public:
  RKR_Slider *varyband_freq1;
private:
  inline void cb_varyband_freq1_i(RKR_Slider*, void*);
  static void cb_varyband_freq1(RKR_Slider*, void*);
public:
  RKR_Choice *varyband_lfotype1;
private:
  inline void cb_varyband_lfotype1_i(RKR_Choice*, void*);
  static void cb_varyband_lfotype1(RKR_Choice*, void*);
public:
  RKR_Slider *varyband_stdf1;
private:
  inline void cb_varyband_stdf1_i(RKR_Slider*, void*);
  static void cb_varyband_stdf1(RKR_Slider*, void*);
public:
  RKR_Slider *varyband_freq2;
private:
  inline void cb_varyband_freq2_i(RKR_Slider*, void*);
  static void cb_varyband_freq2(RKR_Slider*, void*);
public:
  RKR_Choice *varyband_lfotype2;
private:
  inline void cb_varyband_lfotype2_i(RKR_Choice*, void*);
  static void cb_varyband_lfotype2(RKR_Choice*, void*);
public:
  RKR_Slider *varyband_stdf2;
private:
  inline void cb_varyband_stdf2_i(RKR_Slider*, void*);
  static void cb_varyband_stdf2(RKR_Slider*, void*);
public:
  RKR_Slider *varyband_cross1;
private:
  inline void cb_varyband_cross1_i(RKR_Slider*, void*);
  static void cb_varyband_cross1(RKR_Slider*, void*);
public:
  RKR_Slider *varyband_cross2;
private:
  inline void cb_varyband_cross2_i(RKR_Slider*, void*);
  static void cb_varyband_cross2(RKR_Slider*, void*);
public:
  RKR_Slider *varyband_cross3;
private:
  inline void cb_varyband_cross3_i(RKR_Slider*, void*);
  static void cb_varyband_cross3(RKR_Slider*, void*);
public:
  RKR_Choice *varyband_LB;
private:
  inline void cb_varyband_LB_i(RKR_Choice*, void*);
  static void cb_varyband_LB(RKR_Choice*, void*);
  static Fl_Menu_Item menu_varyband_LB[];
public:
  RKR_Choice *varyband_MB1;
private:
  inline void cb_varyband_MB1_i(RKR_Choice*, void*);
  static void cb_varyband_MB1(RKR_Choice*, void*);
  static Fl_Menu_Item menu_varyband_MB1[];
public:
  RKR_Choice *varyband_MB2;
private:
  inline void cb_varyband_MB2_i(RKR_Choice*, void*);
  static void cb_varyband_MB2(RKR_Choice*, void*);
  static Fl_Menu_Item menu_varyband_MB2[];
public:
  RKR_Choice *varyband_HB;
private:
  inline void cb_varyband_HB_i(RKR_Choice*, void*);
  static void cb_varyband_HB(RKR_Choice*, void*);
  static Fl_Menu_Item menu_varyband_HB[];
  CommonGuiMenu *m_lfo_menu; 
public:
  void parameter_refresh(int index);
};
#endif
