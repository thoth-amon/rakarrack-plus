// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "chorus_gui.h"

void ChorusGui::cb_chorus_activar_i(Fl_Light_Button* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(116);
 o->value(rkr->Chorus_Bypass);
 return;
}
rkr->Chorus_Bypass=(int)o->value();
if((int) o->value()==0)
rkr->efx_Chorus->cleanup();
rgui->findpos(5,(int)o->value(),o);
}
void ChorusGui::cb_chorus_activar(Fl_Light_Button* o, void* v) {
  ((ChorusGui*)(o->parent()))->cb_chorus_activar_i(o,v);
}

void ChorusGui::cb_chorus_preset_i(Fl_Choice* o, void* v) {
  long long ud= (long long) v;
if((ud==0)||(ud==12005))rkr->efx_Chorus->setpreset(0,(int) o->value());
chorus_WD->value(rkr->efx_Chorus->getpar(0)-64);
chorus_pan->value(rkr->efx_Chorus->getpar(1)-64);
chorus_freq->value(rkr->efx_Chorus->getpar(2));
chorus_rnd->value(rkr->efx_Chorus->getpar(3));
chorus_lfotype->value(rkr->efx_Chorus->getpar(4));
chorus_stdf->value(rkr->efx_Chorus->getpar(5));
chorus_dpth->value(rkr->efx_Chorus->getpar(6));
chorus_delay->value(rkr->efx_Chorus->getpar(7));
chorus_fb->value(rkr->efx_Chorus->getpar(8));
chorus_LR->value(rkr->efx_Chorus->getpar(9)-64);
chorus_subs->value(rkr->efx_Chorus->getpar(11));
chorus_awesome->value(rkr->efx_Chorus->getpar(12));
}
void ChorusGui::cb_chorus_preset(Fl_Choice* o, void* v) {
  ((ChorusGui*)(o->parent()))->cb_chorus_preset_i(o,v);
}

Fl_Menu_Item ChorusGui::menu_chorus_preset[] = {
 {"Chorus 1", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Chorus 2", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Chorus 3", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Celeste 1", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Celeste 2", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};

void ChorusGui::cb_chorus_WD_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(52);
 return;
} 
rkr->efx_Chorus->changepar(0,(int)(o->value()+64));
}
void ChorusGui::cb_chorus_WD(SliderW* o, void* v) {
  ((ChorusGui*)(o->parent()))->cb_chorus_WD_i(o,v);
}

void ChorusGui::cb_chorus_pan_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(50);
 return;
} 
rkr->efx_Chorus->changepar(1,(int)(o->value()+64));
}
void ChorusGui::cb_chorus_pan(SliderW* o, void* v) {
  ((ChorusGui*)(o->parent()))->cb_chorus_pan_i(o,v);
}

void ChorusGui::cb_chorus_freq_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(72);
 return;
} 
rkr->efx_Chorus->changepar(2,(int)o->value());
}
void ChorusGui::cb_chorus_freq(SliderW* o, void* v) {
  ((ChorusGui*)(o->parent()))->cb_chorus_freq_i(o,v);
}

void ChorusGui::cb_chorus_rnd_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(105);
 return;
} 
rkr->efx_Chorus->changepar(3,(int)o->value());
}
void ChorusGui::cb_chorus_rnd(SliderW* o, void* v) {
  ((ChorusGui*)(o->parent()))->cb_chorus_rnd_i(o,v);
}

void ChorusGui::cb_chorus_lfotype_i(Fl_Choice* o, void*) {
  rkr->efx_Chorus->changepar(4,(int)o->value());
}
void ChorusGui::cb_chorus_lfotype(Fl_Choice* o, void* v) {
  ((ChorusGui*)(o->parent()))->cb_chorus_lfotype_i(o,v);
}

void ChorusGui::cb_chorus_subs_i(Fl_Check_Button* o, void*) {
  rkr->efx_Chorus->changepar(11,(int)o->value());
}
void ChorusGui::cb_chorus_subs(Fl_Check_Button* o, void* v) {
  ((ChorusGui*)(o->parent()))->cb_chorus_subs_i(o,v);
}

void ChorusGui::cb_chorus_awesome_i(Fl_Check_Button* o, void*) {
  rkr->efx_Chorus->changepar(12,(int)o->value());
}
void ChorusGui::cb_chorus_awesome(Fl_Check_Button* o, void* v) {
  ((ChorusGui*)(o->parent()))->cb_chorus_awesome_i(o,v);
}

void ChorusGui::cb_chorus_stdf_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(99);
 return;
} 
rkr->efx_Chorus->changepar(5,(int)o->value());
}
void ChorusGui::cb_chorus_stdf(SliderW* o, void* v) {
  ((ChorusGui*)(o->parent()))->cb_chorus_stdf_i(o,v);
}

void ChorusGui::cb_chorus_dpth_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(23);
 return;
} 
rkr->efx_Chorus->changepar(6,(int)o->value());
}
void ChorusGui::cb_chorus_dpth(SliderW* o, void* v) {
  ((ChorusGui*)(o->parent()))->cb_chorus_dpth_i(o,v);
}

void ChorusGui::cb_chorus_delay_i(SliderW* o, void*) {
  rkr->efx_Chorus->changepar(7,(int)o->value());
}
void ChorusGui::cb_chorus_delay(SliderW* o, void* v) {
  ((ChorusGui*)(o->parent()))->cb_chorus_delay_i(o,v);
}

void ChorusGui::cb_chorus_fb_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(79);
 return;
} 
rkr->efx_Chorus->changepar(8,(int)o->value());
}
void ChorusGui::cb_chorus_fb(SliderW* o, void* v) {
  ((ChorusGui*)(o->parent()))->cb_chorus_fb_i(o,v);
}

void ChorusGui::cb_chorus_LR_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(91);
 return;
} 
rkr->efx_Chorus->changepar(9,(int)(o->value()+64));
}
void ChorusGui::cb_chorus_LR(SliderW* o, void* v) {
  ((ChorusGui*)(o->parent()))->cb_chorus_LR_i(o,v);
}
ChorusGui::ChorusGui(int X, int Y, int W, int H, const char *L)
  : Fl_Group(0, 0, W, H, L) {
this->box(FL_UP_BOX);
this->color(FL_FOREGROUND_COLOR);
this->selection_color(FL_FOREGROUND_COLOR);
this->user_data((void*)(1));
this->align(Fl_Align(96|FL_ALIGN_INSIDE));
{ chorus_activar = new Fl_Light_Button(5, 4, 34, 18, "On");
  chorus_activar->shortcut(0x36);
  chorus_activar->color((Fl_Color)62);
  chorus_activar->selection_color((Fl_Color)1);
  chorus_activar->labelsize(10);
  chorus_activar->callback((Fl_Callback*)cb_chorus_activar, (void*)(2));
  chorus_activar->align(Fl_Align(68|FL_ALIGN_INSIDE));
  chorus_activar->when(FL_WHEN_CHANGED);
} // Fl_Light_Button* chorus_activar
{ chorus_preset = new Fl_Choice(77, 4, 76, 18, "Preset");
  chorus_preset->down_box(FL_BORDER_BOX);
  chorus_preset->selection_color(FL_FOREGROUND_COLOR);
  chorus_preset->labelsize(10);
  chorus_preset->labelcolor(FL_BACKGROUND2_COLOR);
  chorus_preset->textsize(10);
  chorus_preset->textcolor(FL_BACKGROUND2_COLOR);
  chorus_preset->callback((Fl_Callback*)cb_chorus_preset, (void*)(12005));
  chorus_preset->when(FL_WHEN_RELEASE_ALWAYS);
  chorus_preset->menu(menu_chorus_preset);
} // Fl_Choice* chorus_preset
{ chorus_WD = new SliderW(49, 29, 100, 10, "Wet/Dry");
  chorus_WD->type(5);
  chorus_WD->box(FL_FLAT_BOX);
  chorus_WD->color((Fl_Color)178);
  chorus_WD->selection_color((Fl_Color)62);
  chorus_WD->labeltype(FL_NORMAL_LABEL);
  chorus_WD->labelfont(0);
  chorus_WD->labelsize(10);
  chorus_WD->labelcolor(FL_BACKGROUND2_COLOR);
  chorus_WD->minimum(-64);
  chorus_WD->maximum(63);
  chorus_WD->step(1);
  chorus_WD->textcolor(FL_BACKGROUND2_COLOR);
  chorus_WD->callback((Fl_Callback*)cb_chorus_WD);
  chorus_WD->align(Fl_Align(FL_ALIGN_LEFT));
  chorus_WD->when(FL_WHEN_CHANGED);
} // SliderW* chorus_WD
{ chorus_pan = new SliderW(49, 41, 100, 10, "Pan");
  chorus_pan->type(5);
  chorus_pan->box(FL_FLAT_BOX);
  chorus_pan->color((Fl_Color)178);
  chorus_pan->selection_color((Fl_Color)62);
  chorus_pan->labeltype(FL_NORMAL_LABEL);
  chorus_pan->labelfont(0);
  chorus_pan->labelsize(10);
  chorus_pan->labelcolor(FL_BACKGROUND2_COLOR);
  chorus_pan->minimum(-64);
  chorus_pan->maximum(63);
  chorus_pan->step(1);
  chorus_pan->textcolor(FL_BACKGROUND2_COLOR);
  chorus_pan->callback((Fl_Callback*)cb_chorus_pan);
  chorus_pan->align(Fl_Align(FL_ALIGN_LEFT));
  chorus_pan->when(FL_WHEN_CHANGED);
} // SliderW* chorus_pan
{ chorus_freq = new SliderW(49, 53, 100, 10, "Tempo");
  chorus_freq->type(5);
  chorus_freq->box(FL_FLAT_BOX);
  chorus_freq->color((Fl_Color)178);
  chorus_freq->selection_color((Fl_Color)62);
  chorus_freq->labeltype(FL_NORMAL_LABEL);
  chorus_freq->labelfont(0);
  chorus_freq->labelsize(10);
  chorus_freq->labelcolor(FL_BACKGROUND2_COLOR);
  chorus_freq->minimum(1);
  chorus_freq->maximum(600);
  chorus_freq->step(1);
  chorus_freq->textcolor(FL_BACKGROUND2_COLOR);
  chorus_freq->callback((Fl_Callback*)cb_chorus_freq);
  chorus_freq->align(Fl_Align(FL_ALIGN_LEFT));
  chorus_freq->when(FL_WHEN_CHANGED);
} // SliderW* chorus_freq
{ chorus_rnd = new SliderW(49, 65, 100, 10, "Rnd");
  chorus_rnd->type(5);
  chorus_rnd->box(FL_FLAT_BOX);
  chorus_rnd->color((Fl_Color)178);
  chorus_rnd->selection_color((Fl_Color)62);
  chorus_rnd->labeltype(FL_NORMAL_LABEL);
  chorus_rnd->labelfont(0);
  chorus_rnd->labelsize(10);
  chorus_rnd->labelcolor(FL_BACKGROUND2_COLOR);
  chorus_rnd->maximum(127);
  chorus_rnd->step(1);
  chorus_rnd->textcolor(FL_BACKGROUND2_COLOR);
  chorus_rnd->callback((Fl_Callback*)cb_chorus_rnd);
  chorus_rnd->align(Fl_Align(FL_ALIGN_LEFT));
  chorus_rnd->when(FL_WHEN_CHANGED);
} // SliderW* chorus_rnd
{ Fl_Choice* o = chorus_lfotype = new Fl_Choice(61, 77, 72, 16, "LFO Type");
  chorus_lfotype->down_box(FL_BORDER_BOX);
  chorus_lfotype->selection_color(FL_FOREGROUND_COLOR);
  chorus_lfotype->labelsize(10);
  chorus_lfotype->labelcolor(FL_BACKGROUND2_COLOR);
  chorus_lfotype->textsize(10);
  chorus_lfotype->textcolor(FL_BACKGROUND2_COLOR);
  chorus_lfotype->callback((Fl_Callback*)cb_chorus_lfotype, (void*)(12));
  o->menu(m_lfo_menu->get_lfo_type());
} // Fl_Choice* chorus_lfotype
{ chorus_subs = new Fl_Check_Button(25, 94, 62, 15, "Subtract");
  chorus_subs->down_box(FL_BORDER_BOX);
  chorus_subs->labelsize(10);
  chorus_subs->labelcolor(FL_BACKGROUND2_COLOR);
  chorus_subs->callback((Fl_Callback*)cb_chorus_subs, (void*)(2));
} // Fl_Check_Button* chorus_subs
{ chorus_awesome = new Fl_Check_Button(88, 95, 56, 15, "Intense");
  chorus_awesome->down_box(FL_BORDER_BOX);
  chorus_awesome->labelsize(10);
  chorus_awesome->labelcolor(FL_BACKGROUND2_COLOR);
  chorus_awesome->callback((Fl_Callback*)cb_chorus_awesome, (void*)(2));
} // Fl_Check_Button* chorus_awesome
{ chorus_stdf = new SliderW(49, 115, 100, 10, "St.df");
  chorus_stdf->type(5);
  chorus_stdf->box(FL_FLAT_BOX);
  chorus_stdf->color((Fl_Color)178);
  chorus_stdf->selection_color((Fl_Color)62);
  chorus_stdf->labeltype(FL_NORMAL_LABEL);
  chorus_stdf->labelfont(0);
  chorus_stdf->labelsize(10);
  chorus_stdf->labelcolor(FL_BACKGROUND2_COLOR);
  chorus_stdf->maximum(127);
  chorus_stdf->step(1);
  chorus_stdf->textcolor(FL_BACKGROUND2_COLOR);
  chorus_stdf->callback((Fl_Callback*)cb_chorus_stdf);
  chorus_stdf->align(Fl_Align(FL_ALIGN_LEFT));
  chorus_stdf->when(FL_WHEN_CHANGED);
} // SliderW* chorus_stdf
{ chorus_dpth = new SliderW(49, 128, 100, 10, "Depth");
  chorus_dpth->type(5);
  chorus_dpth->box(FL_FLAT_BOX);
  chorus_dpth->color((Fl_Color)178);
  chorus_dpth->selection_color((Fl_Color)62);
  chorus_dpth->labeltype(FL_NORMAL_LABEL);
  chorus_dpth->labelfont(0);
  chorus_dpth->labelsize(10);
  chorus_dpth->labelcolor(FL_BACKGROUND2_COLOR);
  chorus_dpth->maximum(127);
  chorus_dpth->step(1);
  chorus_dpth->textcolor(FL_BACKGROUND2_COLOR);
  chorus_dpth->callback((Fl_Callback*)cb_chorus_dpth);
  chorus_dpth->align(Fl_Align(FL_ALIGN_LEFT));
  chorus_dpth->when(FL_WHEN_CHANGED);
} // SliderW* chorus_dpth
{ chorus_delay = new SliderW(49, 141, 100, 10, "Delay");
  chorus_delay->type(5);
  chorus_delay->box(FL_FLAT_BOX);
  chorus_delay->color((Fl_Color)178);
  chorus_delay->selection_color((Fl_Color)62);
  chorus_delay->labeltype(FL_NORMAL_LABEL);
  chorus_delay->labelfont(0);
  chorus_delay->labelsize(10);
  chorus_delay->labelcolor(FL_BACKGROUND2_COLOR);
  chorus_delay->maximum(127);
  chorus_delay->step(1);
  chorus_delay->textcolor(FL_BACKGROUND2_COLOR);
  chorus_delay->callback((Fl_Callback*)cb_chorus_delay);
  chorus_delay->align(Fl_Align(FL_ALIGN_LEFT));
  chorus_delay->when(FL_WHEN_CHANGED);
} // SliderW* chorus_delay
{ chorus_fb = new SliderW(49, 154, 100, 10, "Fb");
  chorus_fb->type(5);
  chorus_fb->box(FL_FLAT_BOX);
  chorus_fb->color((Fl_Color)178);
  chorus_fb->selection_color((Fl_Color)62);
  chorus_fb->labeltype(FL_NORMAL_LABEL);
  chorus_fb->labelfont(0);
  chorus_fb->labelsize(10);
  chorus_fb->labelcolor(FL_BACKGROUND2_COLOR);
  chorus_fb->maximum(127);
  chorus_fb->step(1);
  chorus_fb->textcolor(FL_BACKGROUND2_COLOR);
  chorus_fb->callback((Fl_Callback*)cb_chorus_fb);
  chorus_fb->align(Fl_Align(FL_ALIGN_LEFT));
  chorus_fb->when(FL_WHEN_CHANGED);
} // SliderW* chorus_fb
{ chorus_LR = new SliderW(49, 168, 100, 10, "L/R.Cr");
  chorus_LR->type(5);
  chorus_LR->box(FL_FLAT_BOX);
  chorus_LR->color((Fl_Color)178);
  chorus_LR->selection_color((Fl_Color)62);
  chorus_LR->labeltype(FL_NORMAL_LABEL);
  chorus_LR->labelfont(0);
  chorus_LR->labelsize(10);
  chorus_LR->labelcolor(FL_BACKGROUND2_COLOR);
  chorus_LR->minimum(-64);
  chorus_LR->maximum(63);
  chorus_LR->step(1);
  chorus_LR->textcolor(FL_BACKGROUND2_COLOR);
  chorus_LR->callback((Fl_Callback*)cb_chorus_LR);
  chorus_LR->align(Fl_Align(FL_ALIGN_LEFT));
  chorus_LR->when(FL_WHEN_CHANGED);
} // SliderW* chorus_LR
position(X, Y);
end();
}
