// generated by Fast Light User Interface Designer (fluid) version 1.0305

#include "bankwindow_gui.h"

void BankWindowGui::cb_NewB_i(Fl_Menu_*, void*) {
  m_rkr->New_Bank();
m_rgui->Put_Loaded_Bank();
redraw();
}
void BankWindowGui::cb_NewB(Fl_Menu_* o, void* v) {
  ((BankWindowGui*)(o->parent()))->cb_NewB_i(o,v);
}

void BankWindowGui::cb_Load_Bank_i(Fl_Menu_* o, void*) {
  char *filename =  m_rgui->get_bank_file();

if(filename == 0)
  return;

if(m_rkr->CheckOldBank(filename)==0)
{
	std::string filepart = strrchr(filename,'/')+1;     // get the file name w/o path
        std::string bank_name = filepart.substr(0, filepart.size() - c_rkrb_ext_size); // remove the file extension
        CH_UB->add((const char *)bank_name.c_str(), 0, (Fl_Callback *)cb_CH_UB, (void *)filename, 0);
};
}
void BankWindowGui::cb_Load_Bank(Fl_Menu_* o, void* v) {
  ((BankWindowGui*)(o->parent()))->cb_Load_Bank_i(o,v);
}

void BankWindowGui::cb_Save_Bank_i(Fl_Menu_*, void*) {
  m_rgui->set_save_file();
}
void BankWindowGui::cb_Save_Bank(Fl_Menu_* o, void* v) {
  ((BankWindowGui*)(o->parent()))->cb_Save_Bank_i(o,v);
}

void BankWindowGui::cb_Convert_Old_Bank_i(Fl_Menu_*, void*) {
  char *filename;
char name[70];
memset(name,0, sizeof(name));
sprintf(name,"%s %s",m_rkr->jackcliname, VERSION);

filename=fl_file_chooser("Convert Old Bank File:","(*.rkrb)",NULL,0);
if (filename==NULL) return;
filename=fl_filename_setext(filename,".rkrb");

if(m_rkr->CheckOldBank(filename))
{
m_rkr->ConvertOldFile(filename);
m_rkr->Message(1,name, "Please, now try to load the new files");
}
else
m_rkr->Message(1, name, "This file has already the new format");
}
void BankWindowGui::cb_Convert_Old_Bank(Fl_Menu_* o, void* v) {
  ((BankWindowGui*)(o->parent()))->cb_Convert_Old_Bank_i(o,v);
}

void BankWindowGui::cb_salirB_i(Fl_Menu_*, void*) {
  do_callback();
}
void BankWindowGui::cb_salirB(Fl_Menu_* o, void* v) {
  ((BankWindowGui*)(o->parent()))->cb_salirB_i(o,v);
}

void BankWindowGui::cb_ContenidoB_i(Fl_Menu_*, void*) {
  m_rgui->show_help();
}
void BankWindowGui::cb_ContenidoB(Fl_Menu_* o, void* v) {
  ((BankWindowGui*)(o->parent()))->cb_ContenidoB_i(o,v);
}

void BankWindowGui::cb_Acerca_deB_i(Fl_Menu_*, void*) {
  int x,y;

x = this->x()+((w()-420)/2);
y = this->y()+((h()-230)/2);

m_rgui->AboutWin->position(x,y);
m_rgui->AboutWin->show();
m_rgui->put_icon(m_rgui->AboutWin);
}
void BankWindowGui::cb_Acerca_deB(Fl_Menu_* o, void* v) {
  ((BankWindowGui*)(o->parent()))->cb_Acerca_deB_i(o,v);
}

Fl_Menu_Item BankWindowGui::menu_MenuB[] = {
 {"&File", 0,  0, 0, 64, (uchar)FL_NORMAL_LABEL, 0, 14, 7},
 {"&New", 0,  (Fl_Callback*)BankWindowGui::cb_NewB, 0, 128, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {"&Load Bank", 0,  (Fl_Callback*)BankWindowGui::cb_Load_Bank, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {"&Save Bank", 0,  (Fl_Callback*)BankWindowGui::cb_Save_Bank, 0, 128, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {"Convert &Old Bank", 0,  (Fl_Callback*)BankWindowGui::cb_Convert_Old_Bank, 0, 128, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {"&Close", 0,  (Fl_Callback*)BankWindowGui::cb_salirB, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 14, 7},
 {0,0,0,0,0,0,0,0,0},
 {"&Help", 0,  0, 0, 64, (uchar)FL_NORMAL_LABEL, 0, 14, 7},
 {"Help &Contents", 0xffbe,  (Fl_Callback*)BankWindowGui::cb_ContenidoB, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 14, 7},
 {"&About...", 0,  (Fl_Callback*)BankWindowGui::cb_Acerca_deB, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 14, 7},
 {0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0}
};
Fl_Menu_Item* BankWindowGui::ArchivoB = BankWindowGui::menu_MenuB + 0;
Fl_Menu_Item* BankWindowGui::NewB = BankWindowGui::menu_MenuB + 1;
Fl_Menu_Item* BankWindowGui::Load_Bank = BankWindowGui::menu_MenuB + 2;
Fl_Menu_Item* BankWindowGui::Save_Bank = BankWindowGui::menu_MenuB + 3;
Fl_Menu_Item* BankWindowGui::Convert_Old_Bank = BankWindowGui::menu_MenuB + 4;
Fl_Menu_Item* BankWindowGui::salirB = BankWindowGui::menu_MenuB + 5;
Fl_Menu_Item* BankWindowGui::AyudaB = BankWindowGui::menu_MenuB + 7;
Fl_Menu_Item* BankWindowGui::ContenidoB = BankWindowGui::menu_MenuB + 8;
Fl_Menu_Item* BankWindowGui::Acerca_deB = BankWindowGui::menu_MenuB + 9;

void BankWindowGui::cb_B_B1_i(Fl_Button*, void*) {
  m_rgui->L_B1->do_callback();
}
void BankWindowGui::cb_B_B1(Fl_Button* o, void* v) {
  ((BankWindowGui*)(o->parent()))->cb_B_B1_i(o,v);
}

void BankWindowGui::cb_B_B2_i(Fl_Button*, void*) {
  m_rgui->L_B2->do_callback();
}
void BankWindowGui::cb_B_B2(Fl_Button* o, void* v) {
  ((BankWindowGui*)(o->parent()))->cb_B_B2_i(o,v);
}

void BankWindowGui::cb_B_B3_i(Fl_Button*, void*) {
  m_rgui->L_B3->do_callback();
}
void BankWindowGui::cb_B_B3(Fl_Button* o, void* v) {
  ((BankWindowGui*)(o->parent()))->cb_B_B3_i(o,v);
}

void BankWindowGui::cb_B_B4_i(Fl_Button*, void*) {
  m_rgui->L_B4->do_callback();
}
void BankWindowGui::cb_B_B4(Fl_Button* o, void* v) {
  ((BankWindowGui*)(o->parent()))->cb_B_B4_i(o,v);
}

void BankWindowGui::cb_CH_UB_i(Fl_Choice*, void* v) {
  int ok=m_rkr->loadbank((char *)v);
if(ok) 
{
m_rgui->BankWin_Label((char *)v);
m_rgui->Put_Loaded_Bank();
unlight_preset(m_rkr->Selected_Preset);
};
}
void BankWindowGui::cb_CH_UB(Fl_Choice* o, void* v) {
  ((BankWindowGui*)(o->parent()))->cb_CH_UB_i(o,v);
}
BankWindowGui::BankWindowGui(int X, int Y, int W, int H, const char *L)
  : Fl_Double_Window(X, Y, W, H, L) {
  _BankWindowGui();
}

BankWindowGui::BankWindowGui(int W, int H, const char *L)
  : Fl_Double_Window(0, 0, W, H, L) {
  clear_flag(16);
  _BankWindowGui();
}

BankWindowGui::BankWindowGui()
  : Fl_Double_Window(0, 0, 800, 600, 0) {
  clear_flag(16);
  _BankWindowGui();
}

void BankWindowGui::_BankWindowGui() {
this->box(FL_FLAT_BOX);
this->color((Fl_Color)4);
this->selection_color(FL_BACKGROUND2_COLOR);
this->labeltype(FL_NO_LABEL);
this->labelfont(0);
this->labelsize(14);
this->labelcolor(FL_FOREGROUND_COLOR);
this->align(Fl_Align(FL_ALIGN_TOP));
this->when(FL_WHEN_RELEASE);
{ Fondo3 = new Fl_Box(1, 1, 800, 600);
} // Fl_Box* Fondo3
{ MenuB = new Fl_Menu_Bar(0, 0, 253, 20);
  MenuB->box(FL_NO_BOX);
  MenuB->color((Fl_Color)55);
  MenuB->selection_color(FL_BACKGROUND2_COLOR);
  MenuB->labelcolor(FL_BACKGROUND2_COLOR);
  MenuB->textcolor(FL_BACKGROUND2_COLOR);
  MenuB->align(Fl_Align(96|FL_ALIGN_INSIDE));
  MenuB->menu(menu_MenuB);
} // Fl_Menu_Bar* MenuB
{ B_B1 = new Fl_Button(258, 14, 32, 24, "1");
  B_B1->color((Fl_Color)62);
  B_B1->labelsize(10);
  B_B1->callback((Fl_Callback*)cb_B_B1, (void*)(77));
} // Fl_Button* B_B1
{ B_B2 = new Fl_Button(298, 14, 32, 24, "2");
  B_B2->color((Fl_Color)62);
  B_B2->labelsize(10);
  B_B2->callback((Fl_Callback*)cb_B_B2, (void*)(77));
} // Fl_Button* B_B2
{ B_B3 = new Fl_Button(338, 14, 32, 24, "3");
  B_B3->color((Fl_Color)62);
  B_B3->labelsize(10);
  B_B3->callback((Fl_Callback*)cb_B_B3, (void*)(77));
} // Fl_Button* B_B3
{ B_B4 = new Fl_Button(378, 14, 32, 24, "U");
  B_B4->color((Fl_Color)62);
  B_B4->labelsize(10);
  B_B4->callback((Fl_Callback*)cb_B_B4, (void*)(77));
} // Fl_Button* B_B4
{ CH_UB = new Fl_Choice(549, 14, 117, 24, "User Banks       ");
  CH_UB->down_box(FL_BORDER_BOX);
  CH_UB->selection_color(FL_BACKGROUND2_COLOR);
  CH_UB->labelcolor(FL_BACKGROUND2_COLOR);
  CH_UB->textcolor(FL_BACKGROUND2_COLOR);
  CH_UB->callback((Fl_Callback*)cb_CH_UB);
  CH_UB->when(FL_WHEN_RELEASE_ALWAYS);
} // Fl_Choice* CH_UB
{ ob = new Fl_Group(0, 60, 800, 540);
  ob->labelsize(18);
  ob->end();
} // Fl_Group* ob
this->m_rkr = NULL;
this->m_rgui = NULL;
end();
resizable(this);
}

void BankWindowGui::initialize(RKR *_rkr,RKRGUI *_rgui ) {
  m_rkr = _rkr;
  m_rgui= _rgui;
}

void BankWindowGui::set_bank_CH_UB(char* nombre, char* nombank) {
  // copy the file name (nombank) to temp so it does not get overwritten.
  char *tmp;
  tmp = (char *)calloc(1, 256);
  strcpy(tmp,nombank);
    
  CH_UB->add((const char *)nombre, 0, (Fl_Callback *)cb_CH_UB, (void *)tmp, 0);
}

void BankWindowGui::make_window_banks() {
  int i,j,x,y;
  int elw,elh;
  intptr_t num;
  
  elw=176*w()/800;
  elh=32*h()/600;
  
  
  
  ob->begin();
  
  x=40;y=40;
  num=1;
  
  for (i=1;i<16;i++)
  {
  y +=elh+2;
  
  for (j=1; j<5; j++)
  {
     
       Fl_Button* butX = new Fl_Button(x+1, y+1, elw,elh,m_rkr->Bank[num].Preset_Name);
        butX->type(0);
        butX->color(fore_color);
        butX->box(FL_UP_BOX);
        butX->selection_color(leds_color);
        butX->labelcolor(label_color);
        butX->labelsize(14);
        butX->align(68|FL_ALIGN_INSIDE);
        butX->user_data((void*) (num));
        butX->value(0);
        butX->when(FL_WHEN_CHANGED |FL_WHEN_RELEASE_ALWAYS);
        butX->callback((Fl_Callback *)m_rgui->preset_click);
        ob->add(butX);
  
  x +=elw+4;
  num++;
  
  }
   x=40;
  
  }
  
  
  ob->end();
  m_rgui->set_bank_made(1);
  
  B_B1->color(fore_color);
  B_B2->color(fore_color);
  B_B3->color(fore_color);
  B_B4->color(fore_color);
  CH_UB->color(fore_color);
  
  light_preset(m_rkr->Selected_Preset);
}

void BankWindowGui::light_preset(int npreset) {
  if((m_rgui == NULL) ||(!m_rgui->get_bank_made())) return;
  
  for (int t=0; t<ob->children();t++)
    {
      Fl_Widget *w = ob->child(t);
      long long temp = (long long) w->user_data();
      if (temp == npreset)
      {
       w->color(fl_darker(leds_color));
       break;
       }
    
    }
}

void BankWindowGui::unlight_preset(int npreset) {
  if((m_rgui == NULL) ||(!m_rgui->get_bank_made())) return;
  
  for (int t=0; t<ob->children();t++)
    {
      Fl_Widget *w = ob->child(t);
      long long temp = (long long) w->user_data();
      if (temp == npreset)
      {
       w->color(fore_color);
       break;
       }
    
    }
}
