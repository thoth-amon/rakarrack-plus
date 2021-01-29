// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "varyband_gui.h"

void VarybandGui::cb_varyband_activar_i(RKR_Light_Button* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Multi_On_Off);
 o->value(rkr->EFX_Bypass[EFX_VARYBAND]);
 return;
}
rkr->EFX_Bypass[EFX_VARYBAND]=(int)o->value();
if((int) o->value()==0)
rkr->Rack_Effects[EFX_VARYBAND]->cleanup();
rgui->findpos(EFX_VARYBAND,(int)o->value(),o);
}
void VarybandGui::cb_varyband_activar(RKR_Light_Button* o, void* v) {
  ((VarybandGui*)(o->parent()))->cb_varyband_activar_i(o,v);
}

void VarybandGui::cb_varyband_preset_i(RKR_Choice* o, void* v) {
  long long ud= (long long) v;
if((ud==0)||(ud==12028))rkr->Rack_Effects[EFX_VARYBAND]->setpreset((int)o->value());
varyband_WD->value(Dry_Wet(rkr->Rack_Effects[EFX_VARYBAND]->getpar(VaryBand_DryWet)));
varyband_freq1->value(rkr->Rack_Effects[EFX_VARYBAND]->getpar(VaryBand_LFO_Tempo_1));
varyband_lfotype1->value(rkr->Rack_Effects[EFX_VARYBAND]->getpar(VaryBand_LFO_Type_1));
varyband_stdf1->value(rkr->Rack_Effects[EFX_VARYBAND]->getpar(VaryBand_LFO_Stereo_1));
varyband_freq2->value(rkr->Rack_Effects[EFX_VARYBAND]->getpar(VaryBand_LFO_Tempo_2));
varyband_lfotype2->value(rkr->Rack_Effects[EFX_VARYBAND]->getpar(VaryBand_LFO_Type_2));
varyband_stdf2->value(rkr->Rack_Effects[EFX_VARYBAND]->getpar(VaryBand_LFO_Stereo_2));
varyband_cross1->value(rkr->Rack_Effects[EFX_VARYBAND]->getpar(VaryBand_Cross_1));
varyband_cross2->value(rkr->Rack_Effects[EFX_VARYBAND]->getpar(VaryBand_Cross_2));
varyband_cross3->value(rkr->Rack_Effects[EFX_VARYBAND]->getpar(VaryBand_Cross_3));
//varyband_combi->value(rkr->Rack_Effects[EFX_VARYBAND]->getpar(VaryBand_Combination));
varyband_LB->value(rkr->Rack_Effects[EFX_VARYBAND]->getpar(VaryBand_Low_Band));
varyband_MB1->value(rkr->Rack_Effects[EFX_VARYBAND]->getpar(VaryBand_Mid_Band_1));
varyband_MB2->value(rkr->Rack_Effects[EFX_VARYBAND]->getpar(VaryBand_Mid_Band_2));
varyband_HB->value(rkr->Rack_Effects[EFX_VARYBAND]->getpar(VaryBand_High_Band));
}
void VarybandGui::cb_varyband_preset(RKR_Choice* o, void* v) {
  ((VarybandGui*)(o->parent()))->cb_varyband_preset_i(o,v);
}

Fl_Menu_Item VarybandGui::menu_varyband_preset[] = {
 {"VaryVol 1", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"VaryVol 2", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"VaryVol 3", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"VaryVol 4", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};

void VarybandGui::cb_varyband_WD_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_VaryBand_DryWet);
 return;
}
rkr->Rack_Effects[EFX_VARYBAND]->changepar(VaryBand_DryWet,Dry_Wet((int)(o->value())));
}
void VarybandGui::cb_varyband_WD(RKR_Slider* o, void* v) {
  ((VarybandGui*)(o->parent()))->cb_varyband_WD_i(o,v);
}

void VarybandGui::cb_varyband_freq1_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_VaryBand_LFO_Tempo_1);
 return;
}
rkr->Rack_Effects[EFX_VARYBAND]->changepar(VaryBand_LFO_Tempo_1,(int)o->value());
}
void VarybandGui::cb_varyband_freq1(RKR_Slider* o, void* v) {
  ((VarybandGui*)(o->parent()))->cb_varyband_freq1_i(o,v);
}

void VarybandGui::cb_varyband_lfotype1_i(RKR_Choice* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_VaryBand_LFO_Type_1);
 return;
}

rkr->Rack_Effects[EFX_VARYBAND]->changepar(VaryBand_LFO_Type_1,(int)o->value());
}
void VarybandGui::cb_varyband_lfotype1(RKR_Choice* o, void* v) {
  ((VarybandGui*)(o->parent()))->cb_varyband_lfotype1_i(o,v);
}

void VarybandGui::cb_varyband_stdf1_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_VaryBand_LFO_Stereo_1);
 return;
}
rkr->Rack_Effects[EFX_VARYBAND]->changepar(VaryBand_LFO_Stereo_1,(int)o->value());
}
void VarybandGui::cb_varyband_stdf1(RKR_Slider* o, void* v) {
  ((VarybandGui*)(o->parent()))->cb_varyband_stdf1_i(o,v);
}

void VarybandGui::cb_varyband_freq2_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_VaryBand_LFO_Tempo_2);
 return;
}
rkr->Rack_Effects[EFX_VARYBAND]->changepar(VaryBand_LFO_Tempo_2,(int)o->value());
}
void VarybandGui::cb_varyband_freq2(RKR_Slider* o, void* v) {
  ((VarybandGui*)(o->parent()))->cb_varyband_freq2_i(o,v);
}

void VarybandGui::cb_varyband_lfotype2_i(RKR_Choice* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_VaryBand_LFO_Type_2);
 return;
}

rkr->Rack_Effects[EFX_VARYBAND]->changepar(VaryBand_LFO_Type_2,(int)o->value());
}
void VarybandGui::cb_varyband_lfotype2(RKR_Choice* o, void* v) {
  ((VarybandGui*)(o->parent()))->cb_varyband_lfotype2_i(o,v);
}

void VarybandGui::cb_varyband_stdf2_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_VaryBand_LFO_Stereo_2);
 return;
}
rkr->Rack_Effects[EFX_VARYBAND]->changepar(VaryBand_LFO_Stereo_2,(int)o->value());
}
void VarybandGui::cb_varyband_stdf2(RKR_Slider* o, void* v) {
  ((VarybandGui*)(o->parent()))->cb_varyband_stdf2_i(o,v);
}

void VarybandGui::cb_varyband_cross1_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_VaryBand_Cross_1);
 return;
}
rkr->Rack_Effects[EFX_VARYBAND]->changepar(VaryBand_Cross_1,(int)o->value());
}
void VarybandGui::cb_varyband_cross1(RKR_Slider* o, void* v) {
  ((VarybandGui*)(o->parent()))->cb_varyband_cross1_i(o,v);
}

void VarybandGui::cb_varyband_cross2_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_VaryBand_Cross_2);
 return;
}
rkr->Rack_Effects[EFX_VARYBAND]->changepar(VaryBand_Cross_2,(int)o->value());
}
void VarybandGui::cb_varyband_cross2(RKR_Slider* o, void* v) {
  ((VarybandGui*)(o->parent()))->cb_varyband_cross2_i(o,v);
}

void VarybandGui::cb_varyband_cross3_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_VaryBand_Cross_3);
 return;
}
rkr->Rack_Effects[EFX_VARYBAND]->changepar(VaryBand_Cross_3,(int)o->value());
}
void VarybandGui::cb_varyband_cross3(RKR_Slider* o, void* v) {
  ((VarybandGui*)(o->parent()))->cb_varyband_cross3_i(o,v);
}

void VarybandGui::cb_varyband_LB_i(RKR_Choice* o, void*) {
  rkr->Rack_Effects[EFX_VARYBAND]->changepar(VaryBand_Low_Band,(int)o->value());
}
void VarybandGui::cb_varyband_LB(RKR_Choice* o, void* v) {
  ((VarybandGui*)(o->parent()))->cb_varyband_LB_i(o,v);
}

Fl_Menu_Item VarybandGui::menu_varyband_LB[] = {
 {"1 - LFO 1", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"2 - LFO 2", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"C - Constant", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"M - Muted", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};

void VarybandGui::cb_varyband_MB1_i(RKR_Choice* o, void*) {
  rkr->Rack_Effects[EFX_VARYBAND]->changepar(VaryBand_Mid_Band_1,(int)o->value());
}
void VarybandGui::cb_varyband_MB1(RKR_Choice* o, void* v) {
  ((VarybandGui*)(o->parent()))->cb_varyband_MB1_i(o,v);
}

Fl_Menu_Item VarybandGui::menu_varyband_MB1[] = {
 {"1 - LFO 1", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"2 - LFO 2", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"C - Constant", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"M - Muted", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};

void VarybandGui::cb_varyband_MB2_i(RKR_Choice* o, void*) {
  rkr->Rack_Effects[EFX_VARYBAND]->changepar(VaryBand_Mid_Band_2,(int)o->value());
}
void VarybandGui::cb_varyband_MB2(RKR_Choice* o, void* v) {
  ((VarybandGui*)(o->parent()))->cb_varyband_MB2_i(o,v);
}

Fl_Menu_Item VarybandGui::menu_varyband_MB2[] = {
 {"1 - LFO 1", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"2 - LFO 2", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"C - Constant", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"M - Muted", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};

void VarybandGui::cb_varyband_HB_i(RKR_Choice* o, void*) {
  rkr->Rack_Effects[EFX_VARYBAND]->changepar(VaryBand_High_Band,(int)o->value());
}
void VarybandGui::cb_varyband_HB(RKR_Choice* o, void* v) {
  ((VarybandGui*)(o->parent()))->cb_varyband_HB_i(o,v);
}

Fl_Menu_Item VarybandGui::menu_varyband_HB[] = {
 {"1 - LFO 1", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"2 - LFO 2", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"C - Constant", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"M - Muted", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};
VarybandGui::VarybandGui(int X, int Y, int W, int H, const char *L)
  : Fl_Group(0, 0, W, H, L) {
this->box(FL_UP_BOX);
this->color(FL_FOREGROUND_COLOR);
this->selection_color(FL_FOREGROUND_COLOR);
this->user_data((void*)(1));
this->align(Fl_Align(96|FL_ALIGN_INSIDE));
{ varyband_activar = new RKR_Light_Button(7, 5, 34, 18, "On");
  varyband_activar->box(FL_UP_BOX);
  varyband_activar->shortcut(0x38);
  varyband_activar->color((Fl_Color)62);
  varyband_activar->selection_color((Fl_Color)1);
  varyband_activar->labeltype(FL_NORMAL_LABEL);
  varyband_activar->labelfont(0);
  varyband_activar->labelsize(10);
  varyband_activar->labelcolor(FL_FOREGROUND_COLOR);
  varyband_activar->callback((Fl_Callback*)cb_varyband_activar, (void*)(2));
  varyband_activar->align(Fl_Align(68|FL_ALIGN_INSIDE));
  varyband_activar->when(FL_WHEN_CHANGED);
} // RKR_Light_Button* varyband_activar
{ varyband_preset = new RKR_Choice(79, 5, 76, 18, "Preset");
  varyband_preset->box(FL_FLAT_BOX);
  varyband_preset->down_box(FL_BORDER_BOX);
  varyband_preset->color(FL_BACKGROUND_COLOR);
  varyband_preset->selection_color(FL_FOREGROUND_COLOR);
  varyband_preset->labeltype(FL_NORMAL_LABEL);
  varyband_preset->labelfont(0);
  varyband_preset->labelsize(10);
  varyband_preset->labelcolor(FL_BACKGROUND2_COLOR);
  varyband_preset->textsize(10);
  varyband_preset->textcolor(FL_BACKGROUND2_COLOR);
  varyband_preset->callback((Fl_Callback*)cb_varyband_preset, (void*)(12028));
  varyband_preset->align(Fl_Align(FL_ALIGN_LEFT));
  varyband_preset->when(FL_WHEN_RELEASE_ALWAYS);
  varyband_preset->menu(menu_varyband_preset);
} // RKR_Choice* varyband_preset
{ varyband_WD = new RKR_Slider(56, 28, 100, 10, "Dry/Wet");
  varyband_WD->type(5);
  varyband_WD->box(FL_FLAT_BOX);
  varyband_WD->color((Fl_Color)178);
  varyband_WD->selection_color((Fl_Color)62);
  varyband_WD->labeltype(FL_NORMAL_LABEL);
  varyband_WD->labelfont(0);
  varyband_WD->labelsize(10);
  varyband_WD->labelcolor(FL_BACKGROUND2_COLOR);
  varyband_WD->maximum(127);
  varyband_WD->step(1);
  varyband_WD->textcolor(FL_BACKGROUND2_COLOR);
  varyband_WD->callback((Fl_Callback*)cb_varyband_WD);
  varyband_WD->align(Fl_Align(FL_ALIGN_LEFT));
  varyband_WD->when(FL_WHEN_CHANGED);
} // RKR_Slider* varyband_WD
{ varyband_freq1 = new RKR_Slider(56, 40, 100, 10, "Tempo 1");
  varyband_freq1->type(5);
  varyband_freq1->box(FL_FLAT_BOX);
  varyband_freq1->color((Fl_Color)178);
  varyband_freq1->selection_color((Fl_Color)62);
  varyband_freq1->labeltype(FL_NORMAL_LABEL);
  varyband_freq1->labelfont(0);
  varyband_freq1->labelsize(10);
  varyband_freq1->labelcolor(FL_BACKGROUND2_COLOR);
  varyband_freq1->minimum(1);
  varyband_freq1->maximum(600);
  varyband_freq1->step(1);
  varyband_freq1->textcolor(FL_BACKGROUND2_COLOR);
  varyband_freq1->callback((Fl_Callback*)cb_varyband_freq1);
  varyband_freq1->align(Fl_Align(FL_ALIGN_LEFT));
  varyband_freq1->when(FL_WHEN_CHANGED);
} // RKR_Slider* varyband_freq1
{ RKR_Choice* o = varyband_lfotype1 = new RKR_Choice(65, 53, 72, 16, "LFO 1 Type");
  varyband_lfotype1->box(FL_FLAT_BOX);
  varyband_lfotype1->down_box(FL_BORDER_BOX);
  varyband_lfotype1->color(FL_BACKGROUND_COLOR);
  varyband_lfotype1->selection_color(FL_FOREGROUND_COLOR);
  varyband_lfotype1->labeltype(FL_NORMAL_LABEL);
  varyband_lfotype1->labelfont(0);
  varyband_lfotype1->labelsize(10);
  varyband_lfotype1->labelcolor(FL_BACKGROUND2_COLOR);
  varyband_lfotype1->textsize(10);
  varyband_lfotype1->textcolor(FL_BACKGROUND2_COLOR);
  varyband_lfotype1->callback((Fl_Callback*)cb_varyband_lfotype1);
  varyband_lfotype1->align(Fl_Align(FL_ALIGN_LEFT));
  varyband_lfotype1->when(FL_WHEN_RELEASE);
  o->menu(m_lfo_menu->get_lfo_type());
} // RKR_Choice* varyband_lfotype1
{ varyband_stdf1 = new RKR_Slider(56, 72, 100, 10, "St.df 1");
  varyband_stdf1->type(5);
  varyband_stdf1->box(FL_FLAT_BOX);
  varyband_stdf1->color((Fl_Color)178);
  varyband_stdf1->selection_color((Fl_Color)62);
  varyband_stdf1->labeltype(FL_NORMAL_LABEL);
  varyband_stdf1->labelfont(0);
  varyband_stdf1->labelsize(10);
  varyband_stdf1->labelcolor(FL_BACKGROUND2_COLOR);
  varyband_stdf1->maximum(127);
  varyband_stdf1->step(1);
  varyband_stdf1->textcolor(FL_BACKGROUND2_COLOR);
  varyband_stdf1->callback((Fl_Callback*)cb_varyband_stdf1);
  varyband_stdf1->align(Fl_Align(FL_ALIGN_LEFT));
  varyband_stdf1->when(FL_WHEN_CHANGED);
} // RKR_Slider* varyband_stdf1
{ varyband_freq2 = new RKR_Slider(56, 84, 100, 10, "Tempo 2");
  varyband_freq2->type(5);
  varyband_freq2->box(FL_FLAT_BOX);
  varyband_freq2->color((Fl_Color)178);
  varyband_freq2->selection_color((Fl_Color)62);
  varyband_freq2->labeltype(FL_NORMAL_LABEL);
  varyband_freq2->labelfont(0);
  varyband_freq2->labelsize(10);
  varyband_freq2->labelcolor(FL_BACKGROUND2_COLOR);
  varyband_freq2->minimum(1);
  varyband_freq2->maximum(600);
  varyband_freq2->step(1);
  varyband_freq2->textcolor(FL_BACKGROUND2_COLOR);
  varyband_freq2->callback((Fl_Callback*)cb_varyband_freq2);
  varyband_freq2->align(Fl_Align(FL_ALIGN_LEFT));
  varyband_freq2->when(FL_WHEN_CHANGED);
} // RKR_Slider* varyband_freq2
{ RKR_Choice* o = varyband_lfotype2 = new RKR_Choice(65, 97, 72, 16, "LFO 2 Type");
  varyband_lfotype2->box(FL_FLAT_BOX);
  varyband_lfotype2->down_box(FL_BORDER_BOX);
  varyband_lfotype2->color(FL_BACKGROUND_COLOR);
  varyband_lfotype2->selection_color(FL_FOREGROUND_COLOR);
  varyband_lfotype2->labeltype(FL_NORMAL_LABEL);
  varyband_lfotype2->labelfont(0);
  varyband_lfotype2->labelsize(10);
  varyband_lfotype2->labelcolor(FL_BACKGROUND2_COLOR);
  varyband_lfotype2->textsize(10);
  varyband_lfotype2->textcolor(FL_BACKGROUND2_COLOR);
  varyband_lfotype2->callback((Fl_Callback*)cb_varyband_lfotype2);
  varyband_lfotype2->align(Fl_Align(FL_ALIGN_LEFT));
  varyband_lfotype2->when(FL_WHEN_RELEASE);
  o->menu(m_lfo_menu->get_lfo_type());
} // RKR_Choice* varyband_lfotype2
{ varyband_stdf2 = new RKR_Slider(56, 116, 100, 10, "St.df 2");
  varyband_stdf2->type(5);
  varyband_stdf2->box(FL_FLAT_BOX);
  varyband_stdf2->color((Fl_Color)178);
  varyband_stdf2->selection_color((Fl_Color)62);
  varyband_stdf2->labeltype(FL_NORMAL_LABEL);
  varyband_stdf2->labelfont(0);
  varyband_stdf2->labelsize(10);
  varyband_stdf2->labelcolor(FL_BACKGROUND2_COLOR);
  varyband_stdf2->maximum(127);
  varyband_stdf2->step(1);
  varyband_stdf2->textcolor(FL_BACKGROUND2_COLOR);
  varyband_stdf2->callback((Fl_Callback*)cb_varyband_stdf2);
  varyband_stdf2->align(Fl_Align(FL_ALIGN_LEFT));
  varyband_stdf2->when(FL_WHEN_CHANGED);
} // RKR_Slider* varyband_stdf2
{ varyband_cross1 = new RKR_Slider(56, 128, 100, 10, "Cross 1");
  varyband_cross1->type(5);
  varyband_cross1->box(FL_FLAT_BOX);
  varyband_cross1->color((Fl_Color)178);
  varyband_cross1->selection_color((Fl_Color)62);
  varyband_cross1->labeltype(FL_NORMAL_LABEL);
  varyband_cross1->labelfont(0);
  varyband_cross1->labelsize(10);
  varyband_cross1->labelcolor(FL_BACKGROUND2_COLOR);
  varyband_cross1->minimum(20);
  varyband_cross1->maximum(1000);
  varyband_cross1->step(1);
  varyband_cross1->textcolor(FL_BACKGROUND2_COLOR);
  varyband_cross1->callback((Fl_Callback*)cb_varyband_cross1);
  varyband_cross1->align(Fl_Align(FL_ALIGN_LEFT));
  varyband_cross1->when(FL_WHEN_CHANGED);
} // RKR_Slider* varyband_cross1
{ varyband_cross2 = new RKR_Slider(56, 140, 100, 10, "Cross 2");
  varyband_cross2->type(5);
  varyband_cross2->box(FL_FLAT_BOX);
  varyband_cross2->color((Fl_Color)178);
  varyband_cross2->selection_color((Fl_Color)62);
  varyband_cross2->labeltype(FL_NORMAL_LABEL);
  varyband_cross2->labelfont(0);
  varyband_cross2->labelsize(10);
  varyband_cross2->labelcolor(FL_BACKGROUND2_COLOR);
  varyband_cross2->minimum(1000);
  varyband_cross2->maximum(8000);
  varyband_cross2->step(1);
  varyband_cross2->textcolor(FL_BACKGROUND2_COLOR);
  varyband_cross2->callback((Fl_Callback*)cb_varyband_cross2);
  varyband_cross2->align(Fl_Align(FL_ALIGN_LEFT));
  varyband_cross2->when(FL_WHEN_CHANGED);
} // RKR_Slider* varyband_cross2
{ varyband_cross3 = new RKR_Slider(56, 152, 100, 10, "Cross 3");
  varyband_cross3->type(5);
  varyband_cross3->box(FL_FLAT_BOX);
  varyband_cross3->color((Fl_Color)178);
  varyband_cross3->selection_color((Fl_Color)62);
  varyband_cross3->labeltype(FL_NORMAL_LABEL);
  varyband_cross3->labelfont(0);
  varyband_cross3->labelsize(10);
  varyband_cross3->labelcolor(FL_BACKGROUND2_COLOR);
  varyband_cross3->minimum(2000);
  varyband_cross3->maximum(26000);
  varyband_cross3->step(1);
  varyband_cross3->textcolor(FL_BACKGROUND2_COLOR);
  varyband_cross3->callback((Fl_Callback*)cb_varyband_cross3);
  varyband_cross3->align(Fl_Align(FL_ALIGN_LEFT));
  varyband_cross3->when(FL_WHEN_CHANGED);
} // RKR_Slider* varyband_cross3
{ RKR_Choice* o = varyband_LB = new RKR_Choice(11, 164, 27, 16, "L");
  varyband_LB->tooltip("Low Band Volume");
  varyband_LB->box(FL_FLAT_BOX);
  varyband_LB->down_box(FL_BORDER_BOX);
  varyband_LB->color(FL_BACKGROUND_COLOR);
  varyband_LB->selection_color(FL_FOREGROUND_COLOR);
  varyband_LB->labeltype(FL_NORMAL_LABEL);
  varyband_LB->labelfont(0);
  varyband_LB->labelsize(8);
  varyband_LB->labelcolor(FL_BACKGROUND2_COLOR);
  varyband_LB->textsize(9);
  varyband_LB->textcolor(FL_BACKGROUND2_COLOR);
  varyband_LB->callback((Fl_Callback*)cb_varyband_LB, (void*)(12));
  varyband_LB->align(Fl_Align(FL_ALIGN_LEFT));
  varyband_LB->when(FL_WHEN_RELEASE);
  varyband_LB->menu(menu_varyband_LB);
  o->set_label_offset(-2);
  o->set_text_offset(-1);
} // RKR_Choice* varyband_LB
{ RKR_Choice* o = varyband_MB1 = new RKR_Choice(50, 164, 27, 16, "M");
  varyband_MB1->tooltip("Mid Band 1 Volume");
  varyband_MB1->box(FL_FLAT_BOX);
  varyband_MB1->down_box(FL_BORDER_BOX);
  varyband_MB1->color(FL_BACKGROUND_COLOR);
  varyband_MB1->selection_color(FL_FOREGROUND_COLOR);
  varyband_MB1->labeltype(FL_NORMAL_LABEL);
  varyband_MB1->labelfont(0);
  varyband_MB1->labelsize(8);
  varyband_MB1->labelcolor(FL_BACKGROUND2_COLOR);
  varyband_MB1->textsize(9);
  varyband_MB1->textcolor(FL_BACKGROUND2_COLOR);
  varyband_MB1->callback((Fl_Callback*)cb_varyband_MB1, (void*)(12));
  varyband_MB1->align(Fl_Align(FL_ALIGN_LEFT));
  varyband_MB1->when(FL_WHEN_RELEASE);
  varyband_MB1->menu(menu_varyband_MB1);
  o->set_label_offset(-2);
  o->set_text_offset(-1);
} // RKR_Choice* varyband_MB1
{ RKR_Choice* o = varyband_MB2 = new RKR_Choice(90, 164, 27, 16, "M");
  varyband_MB2->tooltip("Mid Band 2 Volume");
  varyband_MB2->box(FL_FLAT_BOX);
  varyband_MB2->down_box(FL_BORDER_BOX);
  varyband_MB2->color(FL_BACKGROUND_COLOR);
  varyband_MB2->selection_color(FL_FOREGROUND_COLOR);
  varyband_MB2->labeltype(FL_NORMAL_LABEL);
  varyband_MB2->labelfont(0);
  varyband_MB2->labelsize(8);
  varyband_MB2->labelcolor(FL_BACKGROUND2_COLOR);
  varyband_MB2->textsize(9);
  varyband_MB2->textcolor(FL_BACKGROUND2_COLOR);
  varyband_MB2->callback((Fl_Callback*)cb_varyband_MB2, (void*)(12));
  varyband_MB2->align(Fl_Align(FL_ALIGN_LEFT));
  varyband_MB2->when(FL_WHEN_RELEASE);
  varyband_MB2->menu(menu_varyband_MB2);
  o->set_label_offset(-2);
  o->set_text_offset(-1);
} // RKR_Choice* varyband_MB2
{ RKR_Choice* o = varyband_HB = new RKR_Choice(128, 164, 27, 16, "H");
  varyband_HB->tooltip("High Band Volume");
  varyband_HB->box(FL_FLAT_BOX);
  varyband_HB->down_box(FL_BORDER_BOX);
  varyband_HB->color(FL_BACKGROUND_COLOR);
  varyband_HB->selection_color(FL_FOREGROUND_COLOR);
  varyband_HB->labeltype(FL_NORMAL_LABEL);
  varyband_HB->labelfont(0);
  varyband_HB->labelsize(8);
  varyband_HB->labelcolor(FL_BACKGROUND2_COLOR);
  varyband_HB->textsize(9);
  varyband_HB->textcolor(FL_BACKGROUND2_COLOR);
  varyband_HB->callback((Fl_Callback*)cb_varyband_HB, (void*)(12));
  varyband_HB->align(Fl_Align(FL_ALIGN_LEFT));
  varyband_HB->when(FL_WHEN_RELEASE);
  varyband_HB->menu(menu_varyband_HB);
  o->set_label_offset(-2);
  o->set_text_offset(-1);
} // RKR_Choice* varyband_HB
position(X, Y);
end();
}
