// generated by Fast Light User Interface Designer (fluid) version 1.0308

#ifndef randomedit_gui_h
#define randomedit_gui_h
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include "rakarrack.h"
#include <FL/Fl_Box.H>

class RandomEditGui : public Fl_Double_Window {
  void _RandomEditGui();
public:
  RandomEditGui(int X, int Y, int W, int H, const char *L = 0);
  RandomEditGui(int W, int H, const char *L = 0);
  RandomEditGui();
  Fl_Box *Fondo14;
  RKR_Check_Button *random_params;
private:
  inline void cb_random_params_i(RKR_Check_Button*, void*);
  static void cb_random_params(RKR_Check_Button*, void*);
public:
  RKR_Check_Button *random_all_active;
private:
  inline void cb_random_all_active_i(RKR_Check_Button*, void*);
  static void cb_random_all_active(RKR_Check_Button*, void*);
public:
  RKR_Check_Button *random_current;
private:
  inline void cb_random_current_i(RKR_Check_Button*, void*);
  static void cb_random_current(RKR_Check_Button*, void*);
  RKRGUI* m_parent; 
  RKR* m_process; 
public:
  RKR_Scroll *RandomScroll;
  void initialize(RKR * _rkr, RKRGUI *_rgui);
private:
  void make_effect_scroller();
};
#endif
