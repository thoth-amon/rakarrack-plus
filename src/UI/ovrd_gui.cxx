// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "ovrd_gui.h"

void OvrdGui::cb_ovrd_activar_i(RKR_Light_Button* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Multi_On_Off);
 o->value(rkr->Overdrive_Bypass);
 return;
}
rkr->Overdrive_Bypass=(int)o->value();
if((int) o->value()==0)
rkr->efx_Overdrive->cleanup();
rgui->findpos(3,(int)o->value(),o);
}
void OvrdGui::cb_ovrd_activar(RKR_Light_Button* o, void* v) {
  ((OvrdGui*)(o->parent()))->cb_ovrd_activar_i(o,v);
}

void OvrdGui::cb_ovrd_preset_i(RKR_Choice* o, void* v) {
  long long ud= (long long) v;
if((ud==0)||(ud==12003))rkr->efx_Overdrive->setpreset(1,(int) o->value());
ovrd_WD->value(Dry_Wet(rkr->efx_Overdrive->getpar(Overdrive_DryWet)));
ovrd_pan->value(rkr->efx_Overdrive->getpar(Overdrive_Pan)-64);
ovrd_LRc->value(rkr->efx_Overdrive->getpar(Overdrive_LR_Cross));
ovrd_drive->value(rkr->efx_Overdrive->getpar(Overdrive_Drive));
ovrd_level->value(rkr->efx_Overdrive->getpar(Overdrive_Level));
ovrd_tipo->value(rkr->efx_Overdrive->getpar(Overdrive_Type));
ovrd_neg->value(rkr->efx_Overdrive->getpar(Overdrive_Negate));
ovrd_lpf->value(rkr->efx_Overdrive->getpar(Overdrive_LPF));
ovrd_hpf->value(rkr->efx_Overdrive->getpar(Overdrive_HPF));
ovrd_st->value(rkr->efx_Overdrive->getpar(Overdrive_Stereo));
ovrd_pf->value(rkr->efx_Overdrive->getpar(Overdrive_Prefilter));
}
void OvrdGui::cb_ovrd_preset(RKR_Choice* o, void* v) {
  ((OvrdGui*)(o->parent()))->cb_ovrd_preset_i(o,v);
}

Fl_Menu_Item OvrdGui::menu_ovrd_preset[] = {
 {"Overdrive 1", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Overdrive 2", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};

void OvrdGui::cb_ovrd_WD_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Overdrive_DryWet);
 return;
} 
rkr->efx_Overdrive->changepar(Overdrive_DryWet,Dry_Wet((int)(o->value())));
}
void OvrdGui::cb_ovrd_WD(RKR_Slider* o, void* v) {
  ((OvrdGui*)(o->parent()))->cb_ovrd_WD_i(o,v);
}

void OvrdGui::cb_ovrd_LRc_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Overdrive_LR_Cross);
 return;
} 
rkr->efx_Overdrive->changepar(Overdrive_LR_Cross,(int)(o->value()));
}
void OvrdGui::cb_ovrd_LRc(RKR_Slider* o, void* v) {
  ((OvrdGui*)(o->parent()))->cb_ovrd_LRc_i(o,v);
}

void OvrdGui::cb_ovrd_drive_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Overdrive_Drive);
 return;
} 
rkr->efx_Overdrive->changepar(Overdrive_Drive,(int)o->value());
}
void OvrdGui::cb_ovrd_drive(RKR_Slider* o, void* v) {
  ((OvrdGui*)(o->parent()))->cb_ovrd_drive_i(o,v);
}

void OvrdGui::cb_ovrd_level_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Overdrive_Level);
 return;
} 
rkr->efx_Overdrive->changepar(Overdrive_Level,(int)o->value());
}
void OvrdGui::cb_ovrd_level(RKR_Slider* o, void* v) {
  ((OvrdGui*)(o->parent()))->cb_ovrd_level_i(o,v);
}

void OvrdGui::cb_ovrd_tipo_i(RKR_Choice* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Overdrive_Type);
 return;
} 

rkr->efx_Overdrive->changepar(Overdrive_Type,(int)o->value());
}
void OvrdGui::cb_ovrd_tipo(RKR_Choice* o, void* v) {
  ((OvrdGui*)(o->parent()))->cb_ovrd_tipo_i(o,v);
}

void OvrdGui::cb_ovrd_neg_i(RKR_Check_Button* o, void*) {
  rkr->efx_Overdrive->changepar(Overdrive_Negate,(int)o->value());
}
void OvrdGui::cb_ovrd_neg(RKR_Check_Button* o, void* v) {
  ((OvrdGui*)(o->parent()))->cb_ovrd_neg_i(o,v);
}

void OvrdGui::cb_ovrd_st_i(RKR_Check_Button* o, void*) {
  rkr->efx_Overdrive->changepar(Overdrive_Stereo,(int)o->value());
}
void OvrdGui::cb_ovrd_st(RKR_Check_Button* o, void* v) {
  ((OvrdGui*)(o->parent()))->cb_ovrd_st_i(o,v);
}

void OvrdGui::cb_ovrd_pan_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Overdrive_Pan);
 return;
} 
rkr->efx_Overdrive->changepar(Overdrive_Pan,(int)(o->value()+64));
}
void OvrdGui::cb_ovrd_pan(RKR_Slider* o, void* v) {
  ((OvrdGui*)(o->parent()))->cb_ovrd_pan_i(o,v);
}

void OvrdGui::cb_ovrd_pf_i(RKR_Check_Button* o, void*) {
  rkr->efx_Overdrive->changepar(Overdrive_Prefilter,(int)o->value());
}
void OvrdGui::cb_ovrd_pf(RKR_Check_Button* o, void* v) {
  ((OvrdGui*)(o->parent()))->cb_ovrd_pf_i(o,v);
}

void OvrdGui::cb_ovrd_lpf_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Overdrive_LPF);
 return;
} 
rkr->efx_Overdrive->changepar(Overdrive_LPF,(int)o->value());
}
void OvrdGui::cb_ovrd_lpf(RKR_Slider* o, void* v) {
  ((OvrdGui*)(o->parent()))->cb_ovrd_lpf_i(o,v);
}

void OvrdGui::cb_ovrd_hpf_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Overdrive_HPF);
 return;
} 
rkr->efx_Overdrive->changepar(Overdrive_HPF,(int)o->value());
}
void OvrdGui::cb_ovrd_hpf(RKR_Slider* o, void* v) {
  ((OvrdGui*)(o->parent()))->cb_ovrd_hpf_i(o,v);
}
OvrdGui::OvrdGui(int X, int Y, int W, int H, const char *L)
  : Fl_Group(0, 0, W, H, L) {
this->box(FL_UP_BOX);
this->color(FL_FOREGROUND_COLOR);
this->selection_color(FL_FOREGROUND_COLOR);
this->user_data((void*)(1));
this->align(Fl_Align(96|FL_ALIGN_INSIDE));
{ ovrd_activar = new RKR_Light_Button(5, 4, 34, 18, "On");
  ovrd_activar->box(FL_UP_BOX);
  ovrd_activar->shortcut(0x34);
  ovrd_activar->color((Fl_Color)62);
  ovrd_activar->selection_color((Fl_Color)1);
  ovrd_activar->labeltype(FL_NORMAL_LABEL);
  ovrd_activar->labelfont(0);
  ovrd_activar->labelsize(10);
  ovrd_activar->labelcolor(FL_FOREGROUND_COLOR);
  ovrd_activar->callback((Fl_Callback*)cb_ovrd_activar, (void*)(2));
  ovrd_activar->align(Fl_Align(68|FL_ALIGN_INSIDE));
  ovrd_activar->when(FL_WHEN_CHANGED);
} // RKR_Light_Button* ovrd_activar
{ ovrd_preset = new RKR_Choice(77, 4, 76, 18, "Preset");
  ovrd_preset->box(FL_FLAT_BOX);
  ovrd_preset->down_box(FL_BORDER_BOX);
  ovrd_preset->color(FL_BACKGROUND_COLOR);
  ovrd_preset->selection_color(FL_FOREGROUND_COLOR);
  ovrd_preset->labeltype(FL_NORMAL_LABEL);
  ovrd_preset->labelfont(0);
  ovrd_preset->labelsize(10);
  ovrd_preset->labelcolor(FL_BACKGROUND2_COLOR);
  ovrd_preset->textsize(10);
  ovrd_preset->textcolor(FL_BACKGROUND2_COLOR);
  ovrd_preset->callback((Fl_Callback*)cb_ovrd_preset, (void*)(12003));
  ovrd_preset->align(Fl_Align(FL_ALIGN_LEFT));
  ovrd_preset->when(FL_WHEN_RELEASE_ALWAYS);
  ovrd_preset->menu(menu_ovrd_preset);
} // RKR_Choice* ovrd_preset
{ ovrd_WD = new RKR_Slider(56, 35, 100, 10, "Dry/Wet");
  ovrd_WD->type(5);
  ovrd_WD->box(FL_FLAT_BOX);
  ovrd_WD->color((Fl_Color)178);
  ovrd_WD->selection_color((Fl_Color)62);
  ovrd_WD->labeltype(FL_NORMAL_LABEL);
  ovrd_WD->labelfont(0);
  ovrd_WD->labelsize(10);
  ovrd_WD->labelcolor(FL_BACKGROUND2_COLOR);
  ovrd_WD->maximum(127);
  ovrd_WD->step(1);
  ovrd_WD->textcolor(FL_BACKGROUND2_COLOR);
  ovrd_WD->callback((Fl_Callback*)cb_ovrd_WD);
  ovrd_WD->align(Fl_Align(FL_ALIGN_LEFT));
  ovrd_WD->when(FL_WHEN_CHANGED);
} // RKR_Slider* ovrd_WD
{ ovrd_LRc = new RKR_Slider(56, 48, 100, 10, "L/R Cross");
  ovrd_LRc->type(5);
  ovrd_LRc->box(FL_FLAT_BOX);
  ovrd_LRc->color((Fl_Color)178);
  ovrd_LRc->selection_color((Fl_Color)62);
  ovrd_LRc->labeltype(FL_NORMAL_LABEL);
  ovrd_LRc->labelfont(0);
  ovrd_LRc->labelsize(10);
  ovrd_LRc->labelcolor(FL_BACKGROUND2_COLOR);
  ovrd_LRc->maximum(127);
  ovrd_LRc->step(1);
  ovrd_LRc->textcolor(FL_BACKGROUND2_COLOR);
  ovrd_LRc->callback((Fl_Callback*)cb_ovrd_LRc);
  ovrd_LRc->align(Fl_Align(FL_ALIGN_LEFT));
  ovrd_LRc->when(FL_WHEN_CHANGED);
} // RKR_Slider* ovrd_LRc
{ ovrd_drive = new RKR_Slider(56, 61, 100, 10, "Drive");
  ovrd_drive->type(5);
  ovrd_drive->box(FL_FLAT_BOX);
  ovrd_drive->color((Fl_Color)178);
  ovrd_drive->selection_color((Fl_Color)62);
  ovrd_drive->labeltype(FL_NORMAL_LABEL);
  ovrd_drive->labelfont(0);
  ovrd_drive->labelsize(10);
  ovrd_drive->labelcolor(FL_BACKGROUND2_COLOR);
  ovrd_drive->maximum(127);
  ovrd_drive->step(1);
  ovrd_drive->textcolor(FL_BACKGROUND2_COLOR);
  ovrd_drive->callback((Fl_Callback*)cb_ovrd_drive);
  ovrd_drive->align(Fl_Align(FL_ALIGN_LEFT));
  ovrd_drive->when(FL_WHEN_CHANGED);
} // RKR_Slider* ovrd_drive
{ ovrd_level = new RKR_Slider(56, 75, 100, 10, "Level");
  ovrd_level->type(5);
  ovrd_level->box(FL_FLAT_BOX);
  ovrd_level->color((Fl_Color)178);
  ovrd_level->selection_color((Fl_Color)62);
  ovrd_level->labeltype(FL_NORMAL_LABEL);
  ovrd_level->labelfont(0);
  ovrd_level->labelsize(10);
  ovrd_level->labelcolor(FL_BACKGROUND2_COLOR);
  ovrd_level->maximum(127);
  ovrd_level->step(1);
  ovrd_level->textcolor(FL_BACKGROUND2_COLOR);
  ovrd_level->callback((Fl_Callback*)cb_ovrd_level);
  ovrd_level->align(Fl_Align(FL_ALIGN_LEFT));
  ovrd_level->when(FL_WHEN_CHANGED);
} // RKR_Slider* ovrd_level
{ RKR_Choice* o = ovrd_tipo = new RKR_Choice(33, 91, 72, 16, "Type");
  ovrd_tipo->box(FL_FLAT_BOX);
  ovrd_tipo->down_box(FL_BORDER_BOX);
  ovrd_tipo->color(FL_BACKGROUND_COLOR);
  ovrd_tipo->selection_color(FL_FOREGROUND_COLOR);
  ovrd_tipo->labeltype(FL_NORMAL_LABEL);
  ovrd_tipo->labelfont(0);
  ovrd_tipo->labelsize(10);
  ovrd_tipo->labelcolor(FL_BACKGROUND2_COLOR);
  ovrd_tipo->textsize(10);
  ovrd_tipo->textcolor(FL_BACKGROUND2_COLOR);
  ovrd_tipo->callback((Fl_Callback*)cb_ovrd_tipo);
  ovrd_tipo->align(Fl_Align(FL_ALIGN_LEFT));
  ovrd_tipo->when(FL_WHEN_RELEASE);
  o->menu(m_dist_menu->get_distortion_type());
} // RKR_Choice* ovrd_tipo
{ ovrd_neg = new RKR_Check_Button(109, 92, 42, 15, "Neg.");
  ovrd_neg->box(FL_NO_BOX);
  ovrd_neg->down_box(FL_BORDER_BOX);
  ovrd_neg->color(FL_BACKGROUND_COLOR);
  ovrd_neg->selection_color(FL_FOREGROUND_COLOR);
  ovrd_neg->labeltype(FL_NORMAL_LABEL);
  ovrd_neg->labelfont(0);
  ovrd_neg->labelsize(10);
  ovrd_neg->labelcolor(FL_BACKGROUND2_COLOR);
  ovrd_neg->callback((Fl_Callback*)cb_ovrd_neg, (void*)(2));
  ovrd_neg->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
  ovrd_neg->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* ovrd_neg
{ ovrd_st = new RKR_Check_Button(41, 110, 54, 15, "Stereo");
  ovrd_st->box(FL_NO_BOX);
  ovrd_st->down_box(FL_BORDER_BOX);
  ovrd_st->color(FL_BACKGROUND_COLOR);
  ovrd_st->selection_color(FL_FOREGROUND_COLOR);
  ovrd_st->labeltype(FL_NORMAL_LABEL);
  ovrd_st->labelfont(0);
  ovrd_st->labelsize(10);
  ovrd_st->labelcolor(FL_BACKGROUND2_COLOR);
  ovrd_st->callback((Fl_Callback*)cb_ovrd_st, (void*)(2));
  ovrd_st->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
  ovrd_st->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* ovrd_st
{ ovrd_pan = new RKR_Slider(56, 125, 100, 10, "Pan");
  ovrd_pan->type(5);
  ovrd_pan->box(FL_FLAT_BOX);
  ovrd_pan->color((Fl_Color)178);
  ovrd_pan->selection_color((Fl_Color)62);
  ovrd_pan->labeltype(FL_NORMAL_LABEL);
  ovrd_pan->labelfont(0);
  ovrd_pan->labelsize(10);
  ovrd_pan->labelcolor(FL_BACKGROUND2_COLOR);
  ovrd_pan->minimum(-64);
  ovrd_pan->maximum(63);
  ovrd_pan->step(1);
  ovrd_pan->textcolor(FL_BACKGROUND2_COLOR);
  ovrd_pan->callback((Fl_Callback*)cb_ovrd_pan);
  ovrd_pan->align(Fl_Align(FL_ALIGN_LEFT));
  ovrd_pan->when(FL_WHEN_CHANGED);
} // RKR_Slider* ovrd_pan
{ ovrd_pf = new RKR_Check_Button(41, 138, 68, 15, "Pre Filter");
  ovrd_pf->box(FL_NO_BOX);
  ovrd_pf->down_box(FL_BORDER_BOX);
  ovrd_pf->color(FL_BACKGROUND_COLOR);
  ovrd_pf->selection_color(FL_FOREGROUND_COLOR);
  ovrd_pf->labeltype(FL_NORMAL_LABEL);
  ovrd_pf->labelfont(0);
  ovrd_pf->labelsize(10);
  ovrd_pf->labelcolor(FL_BACKGROUND2_COLOR);
  ovrd_pf->callback((Fl_Callback*)cb_ovrd_pf, (void*)(2));
  ovrd_pf->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
  ovrd_pf->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* ovrd_pf
{ ovrd_lpf = new RKR_Slider(56, 157, 100, 10, "LPF");
  ovrd_lpf->type(5);
  ovrd_lpf->box(FL_FLAT_BOX);
  ovrd_lpf->color((Fl_Color)178);
  ovrd_lpf->selection_color((Fl_Color)62);
  ovrd_lpf->labeltype(FL_NORMAL_LABEL);
  ovrd_lpf->labelfont(0);
  ovrd_lpf->labelsize(10);
  ovrd_lpf->labelcolor(FL_BACKGROUND2_COLOR);
  ovrd_lpf->minimum(20);
  ovrd_lpf->maximum(26000);
  ovrd_lpf->step(1);
  ovrd_lpf->value(20000);
  ovrd_lpf->textcolor(FL_BACKGROUND2_COLOR);
  ovrd_lpf->callback((Fl_Callback*)cb_ovrd_lpf);
  ovrd_lpf->align(Fl_Align(FL_ALIGN_LEFT));
  ovrd_lpf->when(FL_WHEN_CHANGED);
} // RKR_Slider* ovrd_lpf
{ ovrd_hpf = new RKR_Slider(56, 169, 100, 10, "HPF");
  ovrd_hpf->type(5);
  ovrd_hpf->box(FL_FLAT_BOX);
  ovrd_hpf->color((Fl_Color)178);
  ovrd_hpf->selection_color((Fl_Color)62);
  ovrd_hpf->labeltype(FL_NORMAL_LABEL);
  ovrd_hpf->labelfont(0);
  ovrd_hpf->labelsize(10);
  ovrd_hpf->labelcolor(FL_BACKGROUND2_COLOR);
  ovrd_hpf->minimum(20);
  ovrd_hpf->maximum(20000);
  ovrd_hpf->step(1);
  ovrd_hpf->value(20);
  ovrd_hpf->textcolor(FL_BACKGROUND2_COLOR);
  ovrd_hpf->callback((Fl_Callback*)cb_ovrd_hpf);
  ovrd_hpf->align(Fl_Align(FL_ALIGN_LEFT));
  ovrd_hpf->when(FL_WHEN_CHANGED);
} // RKR_Slider* ovrd_hpf
position(X, Y);
end();
}
