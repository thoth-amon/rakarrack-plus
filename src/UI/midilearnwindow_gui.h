// generated by Fast Light User Interface Designer (fluid) version 1.0304

#ifndef midilearnwindow_gui_h
#define midilearnwindow_gui_h
#include <FL/Fl.H>
#include "RKR_Box.h"
#include "RKR_Browser.h"
#include "RKR_Button.h"
#include "RKR_Value_Input.h"
#include <FL/Fl_Double_Window.H>
#include "rakarrack.h"
#include <FL/Fl_Box.H>
#include <FL/Fl_Group.H>

class MidiLearnWindowGui : public Fl_Double_Window {
  void _MidiLearnWindowGui();
public:
  MidiLearnWindowGui(int X, int Y, int W, int H, const char *L = 0);
  MidiLearnWindowGui(int W, int H, const char *L = 0);
  MidiLearnWindowGui();
  Fl_Box *Fondo4;
  RKR_Box *midi_learn;
  RKR_Browser *Epar;
private:
  inline void cb_Epar_i(RKR_Browser*, void*);
  static void cb_Epar(RKR_Browser*, void*);
public:
  RKR_Button *GMM;
private:
  inline void cb_GMM_i(RKR_Button*, void*);
  static void cb_GMM(RKR_Button*, void*);
public:
  RKR_Browser *TPresets;
  RKR_Button *CopyF;
private:
  inline void cb_CopyF_i(RKR_Button*, void*);
  static void cb_CopyF(RKR_Button*, void*);
public:
  RKR_Button *CopyT;
private:
  inline void cb_CopyT_i(RKR_Button*, void*);
  static void cb_CopyT(RKR_Button*, void*);
public:
  Fl_Group *Ares;
  RKR_Box *Ar1;
  RKR_Box *Ar2;
  RKR_Box *Ar3;
  RKR_Box *Ar4;
  RKR_Box *Ar5;
  RKR_Box *Ar6;
  RKR_Box *Ar7;
  RKR_Box *Ar8;
  RKR_Box *Ar9;
  RKR_Box *Ar10;
  RKR_Box *Ar11;
  RKR_Box *Ar12;
  RKR_Box *Ar13;
  RKR_Box *Ar14;
  RKR_Box *Ar15;
  RKR_Box *Ar16;
  RKR_Box *Ar17;
  RKR_Box *Ar18;
  RKR_Box *Ar19;
  RKR_Box *Ar20;
  RKR_Button *ClearA;
private:
  inline void cb_ClearA_i(RKR_Button*, void*);
  static void cb_ClearA(RKR_Button*, void*);
public:
  RKR_Button *ClearP;
private:
  inline void cb_ClearP_i(RKR_Button*, void*);
  static void cb_ClearP(RKR_Button*, void*);
public:
  RKR_Button *Assign;
private:
  inline void cb_Assign_i(RKR_Button*, void*);
  static void cb_Assign(RKR_Button*, void*);
public:
  RKR_Button *AssignA;
private:
  inline void cb_AssignA_i(RKR_Button*, void*);
  static void cb_AssignA(RKR_Button*, void*);
public:
  RKR_Button *CancelRec;
private:
  inline void cb_CancelRec_i(RKR_Button*, void*);
  static void cb_CancelRec(RKR_Button*, void*);
public:
  RKR_Value_Input *Disp_Control;
private:
  inline void cb_Disp_Control_i(RKR_Value_Input*, void*);
  static void cb_Disp_Control(RKR_Value_Input*, void*);
public:
  RKR_Button *CopyTAll;
private:
  inline void cb_CopyTAll_i(RKR_Button*, void*);
  static void cb_CopyTAll(RKR_Button*, void*);
public:
  RKR_Button *CloseML;
private:
  inline void cb_CloseML_i(RKR_Button*, void*);
  static void cb_CloseML(RKR_Button*, void*);
public:
  Fl_Group *Filters_ML;
  RKR_Button *M_fil_all;
private:
  inline void cb_M_fil_all_i(RKR_Button*, void*);
  static void cb_M_fil_all(RKR_Button*, void*);
public:
  RKR_Button *M_fil_current;
private:
  inline void cb_M_fil_current_i(RKR_Button*, void*);
  static void cb_M_fil_current(RKR_Button*, void*);
  RKR* m_process; 
  RKRGUI* m_parent; 
public:
  void initialize(RKR *_rkr,RKRGUI *_rgui );
};
#endif
