// generated by Fast Light User Interface Designer (fluid) version 1.0308

#include "delayfilewindow_gui.h"

void DelayFileWindowGui::cb_Load_i(RKR_Button*, void*) {
  // If nothing previously set, then default location
    std::string chooser_start_location = "";
    // If the user set a User Directory, then use it
    if(strcmp(m_process->Config.UDirFilename, DATADIR) != 0)
    {
        chooser_start_location = m_process->Config.UDirFilename;
    }

    char *filename;
    filename = fl_file_chooser("Load dly File:","(*.dly)", chooser_start_location.c_str(), 0);
    if (filename == NULL)
        return;

    filename = fl_filename_setext(filename,".dly");
    //strcpy(rkr->efx_Echotron->Filename,filename);

    Echotron *Efx_Echotron = static_cast<Echotron*>(m_process->Rack_Effects[EFX_ECHOTRON]);
    DlyFile delay_file = Efx_Echotron->loadfile(filename);

    load_delay_file(delay_file);

    this->copy_label(filename);
}
void DelayFileWindowGui::cb_Load(RKR_Button* o, void* v) {
  ((DelayFileWindowGui*)(o->parent()))->cb_Load_i(o,v);
}

void DelayFileWindowGui::cb_Save_i(RKR_Button*, void*) {
  // If nothing previously set, then default location
    std::string chooser_start_location = "";
    // If the user set a User Directory, then use it
    if(strcmp(m_process->Config.UDirFilename, DATADIR) != 0)
    {
        chooser_start_location = m_process->Config.UDirFilename;
    }
    char *filename;
#define EXT ".dly"
    filename=fl_file_chooser("Save delay file:","(*" EXT")", chooser_start_location.c_str(), 0);
    if (filename==NULL) return;
    filename=fl_filename_setext(filename,EXT);
#undef EXT
    save_delay_file(filename);

    this->copy_label(filename);
}
void DelayFileWindowGui::cb_Save(RKR_Button* o, void* v) {
  ((DelayFileWindowGui*)(o->parent()))->cb_Save_i(o,v);
}

void DelayFileWindowGui::cb_new_button_i(RKR_Button*, void*) {
  m_file_size = 0;
dly_filter->value("1.0");
dly_delay->value("1.0");
dly_Q_mode->value(0);
dly_scroll->clear();
add_button->do_callback();
this->copy_label(DEFAULT_DLY_FILE_NAME);
}
void DelayFileWindowGui::cb_new_button(RKR_Button* o, void* v) {
  ((DelayFileWindowGui*)(o->parent()))->cb_new_button_i(o,v);
}

void DelayFileWindowGui::cb_add_button_i(RKR_Button*, void*) {
  if(m_file_size >= (ECHOTRON_F_SIZE - 1))
    return;

update_scroll(-1, ADD_ROW);
}
void DelayFileWindowGui::cb_add_button(RKR_Button* o, void* v) {
  ((DelayFileWindowGui*)(o->parent()))->cb_add_button_i(o,v);
}

void DelayFileWindowGui::cb_apply_button_i(RKR_Light_Button*, void*) {
  DlyFile file = get_current_settings();

    if (file.fLength == INVALID_DELAY_FILE_RANGE )
      return;

    /* Send the file to Echotron */
    Echotron *Efx_Echotron = static_cast<Echotron*>(m_process->Rack_Effects[EFX_ECHOTRON]);
    Efx_Echotron->applyfile(file);

    /* Update the file name if we have one */
    if(strcmp(file.Filename, DEFAULT_DLY_FILE_NAME) != 0 )
    {
        strcpy(Efx_Echotron->Filename, file.Filename);
    }

    /* Set efx gui max file length to the applied file size */
    m_parent->ECHOTRON->echotron_length->maximum(Efx_Echotron->File.fLength);

    /* Change the file length to the max */
    Efx_Echotron->changepar(3, Efx_Echotron->File.fLength);

    /* Update the gui for the change */
    m_parent->ECHOTRON->echotron_length->value(Efx_Echotron->getpar(3));
}
void DelayFileWindowGui::cb_apply_button(RKR_Light_Button* o, void* v) {
  ((DelayFileWindowGui*)(o->parent()))->cb_apply_button_i(o,v);
}
DelayFileWindowGui::DelayFileWindowGui(int X, int Y, int W, int H, const char *L)
  : Fl_Double_Window(X, Y, W, H, L) {
  _DelayFileWindowGui();
}

DelayFileWindowGui::DelayFileWindowGui(int W, int H, const char *L)
  : Fl_Double_Window(0, 0, W, H, L) {
  clear_flag(16);
  _DelayFileWindowGui();
}

DelayFileWindowGui::DelayFileWindowGui()
  : Fl_Double_Window(0, 0, 800, 265, 0) {
  clear_flag(16);
  _DelayFileWindowGui();
}

void DelayFileWindowGui::_DelayFileWindowGui() {
this->box(FL_FLAT_BOX);
this->color((Fl_Color)4);
this->selection_color(FL_BACKGROUND2_COLOR);
this->labeltype(FL_NO_LABEL);
this->labelfont(0);
this->labelsize(14);
this->labelcolor(FL_FOREGROUND_COLOR);
this->align(Fl_Align(FL_ALIGN_TOP));
this->when(FL_WHEN_RELEASE);
{ Fondo13 = new Fl_Box(2, 2, 796, 261);
} // Fl_Box* Fondo13
{ RKR_Float_Input* o = dly_filter = new RKR_Float_Input(25, 25, 50, 25, "Filter");
  dly_filter->box(FL_DOWN_BOX);
  dly_filter->color(FL_BACKGROUND2_COLOR);
  dly_filter->selection_color(FL_SELECTION_COLOR);
  dly_filter->labeltype(FL_NORMAL_LABEL);
  dly_filter->labelfont(0);
  dly_filter->labelsize(14);
  dly_filter->labelcolor(FL_BACKGROUND2_COLOR);
  dly_filter->textcolor(FL_BACKGROUND2_COLOR);
  dly_filter->align(Fl_Align(FL_ALIGN_TOP));
  dly_filter->when(FL_WHEN_CHANGED);
  o->set_label_offset(4);
  o->set_text_offset(4);
} // RKR_Float_Input* dly_filter
{ RKR_Float_Input* o = dly_delay = new RKR_Float_Input(90, 25, 50, 25, "Delay");
  dly_delay->box(FL_DOWN_BOX);
  dly_delay->color(FL_BACKGROUND2_COLOR);
  dly_delay->selection_color(FL_SELECTION_COLOR);
  dly_delay->labeltype(FL_NORMAL_LABEL);
  dly_delay->labelfont(0);
  dly_delay->labelsize(14);
  dly_delay->labelcolor(FL_BACKGROUND2_COLOR);
  dly_delay->textcolor(FL_BACKGROUND2_COLOR);
  dly_delay->align(Fl_Align(FL_ALIGN_TOP));
  dly_delay->when(FL_WHEN_CHANGED);
  o->set_label_offset(4);
  o->set_text_offset(4);
} // RKR_Float_Input* dly_delay
{ RKR_Box* o = new RKR_Box(156, 8, 35, 17, "Mode");
  o->box(FL_NO_BOX);
  o->color(FL_BACKGROUND_COLOR);
  o->selection_color(FL_BACKGROUND_COLOR);
  o->labeltype(FL_NORMAL_LABEL);
  o->labelfont(0);
  o->labelsize(14);
  o->labelcolor(FL_FOREGROUND_COLOR);
  o->align(Fl_Align(FL_ALIGN_CENTER));
  o->when(FL_WHEN_RELEASE);
  o->set_label_offset(4);
} // RKR_Box* o
{ RKR_Button* o = dly_Q_mode = new RKR_Button(159, 25, 25, 25, "Q");
  dly_Q_mode->tooltip("High Quality - potentially unstable at some settings, but better sound");
  dly_Q_mode->type(1);
  dly_Q_mode->box(FL_UP_BOX);
  dly_Q_mode->color(FL_BACKGROUND_COLOR);
  dly_Q_mode->selection_color(FL_BACKGROUND_COLOR);
  dly_Q_mode->labeltype(FL_NORMAL_LABEL);
  dly_Q_mode->labelfont(0);
  dly_Q_mode->labelsize(14);
  dly_Q_mode->labelcolor(FL_FOREGROUND_COLOR);
  dly_Q_mode->align(Fl_Align(FL_ALIGN_CENTER));
  dly_Q_mode->when(FL_WHEN_RELEASE);
  o->set_label_offset(4);
} // RKR_Button* dly_Q_mode
{ RKR_Button* o = new RKR_Button(210, 25, 70, 20, "Load");
  o->box(FL_UP_BOX);
  o->color(FL_BACKGROUND_COLOR);
  o->selection_color(FL_BACKGROUND_COLOR);
  o->labeltype(FL_NORMAL_LABEL);
  o->labelfont(0);
  o->labelsize(14);
  o->labelcolor(FL_FOREGROUND_COLOR);
  o->callback((Fl_Callback*)cb_Load);
  o->align(Fl_Align(FL_ALIGN_CENTER));
  o->when(FL_WHEN_RELEASE);
  o->set_label_offset(4);
} // RKR_Button* o
{ RKR_Button* o = new RKR_Button(290, 25, 70, 20, "Save");
  o->box(FL_UP_BOX);
  o->color(FL_BACKGROUND_COLOR);
  o->selection_color(FL_BACKGROUND_COLOR);
  o->labeltype(FL_NORMAL_LABEL);
  o->labelfont(0);
  o->labelsize(14);
  o->labelcolor(FL_FOREGROUND_COLOR);
  o->callback((Fl_Callback*)cb_Save);
  o->align(Fl_Align(FL_ALIGN_CENTER));
  o->when(FL_WHEN_RELEASE);
  o->set_label_offset(4);
} // RKR_Button* o
{ RKR_Button* o = new_button = new RKR_Button(375, 25, 70, 20, "New");
  new_button->box(FL_UP_BOX);
  new_button->color(FL_BACKGROUND_COLOR);
  new_button->selection_color(FL_BACKGROUND_COLOR);
  new_button->labeltype(FL_NORMAL_LABEL);
  new_button->labelfont(0);
  new_button->labelsize(14);
  new_button->labelcolor(FL_FOREGROUND_COLOR);
  new_button->callback((Fl_Callback*)cb_new_button);
  new_button->align(Fl_Align(FL_ALIGN_CENTER));
  new_button->when(FL_WHEN_RELEASE);
  o->set_label_offset(4);
} // RKR_Button* new_button
{ RKR_Button* o = add_button = new RKR_Button(464, 22, 25, 25, "+");
  add_button->tooltip("Add Delay Row");
  add_button->box(FL_UP_BOX);
  add_button->color(FL_BACKGROUND_COLOR);
  add_button->selection_color(FL_BACKGROUND_COLOR);
  add_button->labeltype(FL_NORMAL_LABEL);
  add_button->labelfont(0);
  add_button->labelsize(21);
  add_button->labelcolor(FL_FOREGROUND_COLOR);
  add_button->callback((Fl_Callback*)cb_add_button);
  add_button->align(Fl_Align(FL_ALIGN_CENTER));
  add_button->when(FL_WHEN_RELEASE);
  o->set_label_offset(11);
} // RKR_Button* add_button
{ RKR_Light_Button* o = apply_button = new RKR_Light_Button(513, 22, 72, 25, "Apply");
  apply_button->tooltip("Apply Changes to Echotron");
  apply_button->type(0);
  apply_button->box(FL_ROUND_UP_BOX);
  apply_button->down_box(FL_ROUND_DOWN_BOX);
  apply_button->color(FL_BACKGROUND2_COLOR);
  apply_button->selection_color(FL_FOREGROUND_COLOR);
  apply_button->labeltype(FL_NORMAL_LABEL);
  apply_button->labelfont(0);
  apply_button->labelsize(14);
  apply_button->labelcolor(FL_FOREGROUND_COLOR);
  apply_button->callback((Fl_Callback*)cb_apply_button);
  apply_button->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
  apply_button->when(FL_WHEN_RELEASE);
  o->set_label_offset(4);
} // RKR_Light_Button* apply_button
{ RKR_Group* o = scroll_label_1 = new RKR_Group(64, 69, 200, 20, "Pan        Time          Level");
  scroll_label_1->box(FL_NO_BOX);
  scroll_label_1->color(FL_BACKGROUND_COLOR);
  scroll_label_1->selection_color(FL_BACKGROUND_COLOR);
  scroll_label_1->labeltype(FL_NORMAL_LABEL);
  scroll_label_1->labelfont(0);
  scroll_label_1->labelsize(14);
  scroll_label_1->labelcolor(FL_FOREGROUND_COLOR);
  scroll_label_1->align(Fl_Align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE));
  scroll_label_1->when(FL_WHEN_RELEASE);
  o->set_label_offset(4);
  scroll_label_1->end();
} // RKR_Group* scroll_label_1
{ RKR_Group* o = srcoll_label_2 = new RKR_Group(275, 69, 126, 20, "LP         BP        HP");
  srcoll_label_2->box(FL_NO_BOX);
  srcoll_label_2->color(FL_BACKGROUND_COLOR);
  srcoll_label_2->selection_color(FL_BACKGROUND_COLOR);
  srcoll_label_2->labeltype(FL_NORMAL_LABEL);
  srcoll_label_2->labelfont(0);
  srcoll_label_2->labelsize(14);
  srcoll_label_2->labelcolor(FL_FOREGROUND_COLOR);
  srcoll_label_2->align(Fl_Align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE));
  srcoll_label_2->when(FL_WHEN_RELEASE);
  o->set_label_offset(4);
  srcoll_label_2->end();
} // RKR_Group* srcoll_label_2
{ RKR_Group* o = scroll_label_3 = new RKR_Group(423, 69, 250, 20, "Frequency               Q           Stages");
  scroll_label_3->box(FL_NO_BOX);
  scroll_label_3->color(FL_BACKGROUND_COLOR);
  scroll_label_3->selection_color(FL_BACKGROUND_COLOR);
  scroll_label_3->labeltype(FL_NORMAL_LABEL);
  scroll_label_3->labelfont(0);
  scroll_label_3->labelsize(14);
  scroll_label_3->labelcolor(FL_FOREGROUND_COLOR);
  scroll_label_3->align(Fl_Align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE));
  scroll_label_3->when(FL_WHEN_RELEASE);
  o->set_label_offset(4);
  scroll_label_3->end();
} // RKR_Group* scroll_label_3
{ RKR_Scroll* o = dly_scroll = new RKR_Scroll(25, 88, 750, 165);
  dly_scroll->type(2);
  dly_scroll->box(FL_NO_BOX);
  dly_scroll->color(FL_BACKGROUND_COLOR);
  dly_scroll->selection_color(FL_BACKGROUND_COLOR);
  dly_scroll->labeltype(FL_NORMAL_LABEL);
  dly_scroll->labelfont(0);
  dly_scroll->labelsize(14);
  dly_scroll->labelcolor(FL_FOREGROUND_COLOR);
  dly_scroll->align(Fl_Align(FL_ALIGN_TOP));
  dly_scroll->when(FL_WHEN_RELEASE);
  o->set_delay_scroll();
  dly_scroll->end();
} // RKR_Scroll* dly_scroll
this->m_process = NULL;
this->m_parent = NULL;
end();
resizable(this);
}

void DelayFileWindowGui::make_delay_window() {
  new_button->do_callback();
}

void DelayFileWindowGui::initialize(RKR *_rkr,RKRGUI *_rgui) {
  m_file_size = 0;
  m_process = _rkr;
  m_parent = _rgui;
  this->copy_label(DEFAULT_DLY_FILE_NAME);
}

void DelayFileWindowGui::load_delay_file(DlyFile delay_file) {
  dly_scroll->clear();
    m_file_size = 0;
    
      dly_filter->value( FTSP(delay_file.subdiv_fmod, 3).c_str());
  
      dly_delay->value( FTSP(delay_file.subdiv_dmod, 3).c_str());    
      
      dly_Q_mode->value(delay_file.f_qmode);
      
      for(int i = 0; i < delay_file.fLength; ++i)
      {
          if(m_file_size >= (ECHOTRON_F_SIZE - 1))
              break;
  
          m_file_size++;
  
          dlyFileGroup *ADDG = new dlyFileGroup
          (
              0,
              0,
              725,
              30
          );
          ADDG->initialize(this);
  
          ADDG->dly_pan->value( FTSP(delay_file.fPan[i], 3).c_str() );
          ADDG->dly_time->value( FTSP(delay_file.fTime[i], 10).c_str() );
          ADDG->dly_level->value( FTSP(delay_file.fLevel[i], 4).c_str() );
          ADDG->dly_LP->value( FTSP(delay_file.fLP[i], 4).c_str() );
          ADDG->dly_BP->value( FTSP(delay_file.fBP[i], 4).c_str() );
          ADDG->dly_HP->value( FTSP(delay_file.fHP[i], 4).c_str() );
          ADDG->dly_freq->value( FTSP(delay_file.fFreq[i], 5).c_str() );
          ADDG->dly_Q->value( FTSP(delay_file.fQ[i], 6).c_str() );
          ADDG->dly_stages->value( FTSP(delay_file.iStages[i], 0).c_str() );
  
          std::stringstream strs;
          strs << m_file_size;
          std::string temp_str = strs.str();
          char* char_type = (char*) temp_str.c_str();
          ADDG->dly_occur->copy_label(char_type);
  
          dly_scroll->add(ADDG);
      }
  
  dly_scroll->resize(dly_scroll->x(), dly_scroll->y(), dly_scroll->w(), dly_scroll->h());
  
  int set_start_height = 265;    //  set in fluid
  float H_set_ratio = (float) this->h() / set_start_height;
        
  dly_scroll->scroll_to(dly_scroll->xposition(), (60 * H_set_ratio) + dly_scroll->yposition());
  
  this->redraw();
}

void DelayFileWindowGui::save_delay_file(char *filename) {
  DlyFile delay_file = get_current_settings();
  
      if ( delay_file.fLength == INVALID_DELAY_FILE_RANGE )
          return;
  
      FILE *fn;
      char buf[256];
      fn = fopen(filename, "w");
  
      if (errno == EACCES)
      {
          m_process->Handle_Message(3);
          fclose(fn);
          return;
      }
      
      //General
      memset(buf, 0, sizeof (buf));
      sprintf(buf, "%s\t%s\t%d\n",dly_filter->value(), dly_delay->value(), delay_file.f_qmode);
      fputs(buf, fn);
      
      for(int i = 0; i < m_file_size; ++i)
      {
      
          memset(buf, 0, sizeof (buf));
          sprintf
          (
          buf, "%9.3f\t%9.10f\t%9.4f\t%9.4f\t%9.4f\t%9.4f\t%9.5f\t%9.6f\t%d\n",
          delay_file.fPan[i],
          delay_file.fTime[i],
          delay_file.fLevel[i],
          delay_file.fLP[i],
          delay_file.fBP[i],
          delay_file.fHP[i],
          delay_file.fFreq[i],
          delay_file.fQ[i],
          (delay_file.iStages[i] + 1)   // + 1 since get_current_settings() offsets by -1 for apply
          );
          fputs(buf, fn);
      }
      
      fclose(fn);
}

DlyFile DelayFileWindowGui::get_current_settings() {
  DlyFile delay_file;
  
    strcpy(delay_file.Filename, this->label());
    delay_file.fLength = (float)m_file_size;
    
    delay_file.subdiv_fmod = (double) strtod(dly_filter->value(), NULL);
    delay_file.subdiv_dmod = (double) strtod(dly_delay->value(), NULL);
    
    delay_file.f_qmode = dly_Q_mode->value();
    
    Echotron *Efx_Echotron = static_cast<Echotron*>(m_process->Rack_Effects[EFX_ECHOTRON]);
    
      for(int i = 0; i < m_file_size; ++i)
      {
        Fl_Widget *c = dly_scroll->child(i);
        dlyFileGroup *c_choice = (dlyFileGroup *) c;
  
        // Gotta range check all of these!!
        delay_file.fPan[i] = (double) strtod(c_choice->dly_pan->value(), NULL);               // -1.0 -- + 1.0
        delay_file.fTime[i] = (double) strtod(c_choice->dly_time->value(), NULL);             // -6.0 -- + 6.0
        delay_file.fLevel[i] = (double) strtod(c_choice->dly_level->value(), NULL);           // -10.0 -- + 10.0
        delay_file.fLP[i] = (double) strtod(c_choice->dly_LP->value(), NULL);                 // -2.0 -- + 2.0
        delay_file.fBP[i] = (double) strtod(c_choice->dly_BP->value(), NULL);                 // -2.0 -- + 2.0
        delay_file.fHP[i] = (double) strtod(c_choice->dly_HP->value(), NULL);                 // -2.0 -- + 2.0
        delay_file.fFreq[i] = (double) strtod(c_choice->dly_freq->value(), NULL);             // 20.0 -- 26000.0
        delay_file.fQ[i] = (double) strtod(c_choice->dly_Q->value(), NULL);                   // 0.0  -- 300.0
        delay_file.iStages[i] = atoi((c_choice->dly_stages->value())) - 1;                    // 0 -- MAX_FILTER_STAGES
        
        if ( !Efx_Echotron->check_delay_file_ranges( delay_file.fPan[i], Dly_Pan ) )
        {
            delay_file.fLength = INVALID_DELAY_FILE_RANGE;
            return delay_file;
        }
        if ( !Efx_Echotron->check_delay_file_ranges( delay_file.fTime[i], Dly_Time ) )
        {
            delay_file.fLength = INVALID_DELAY_FILE_RANGE;
            return delay_file;
        }
        if ( !Efx_Echotron->check_delay_file_ranges( delay_file.fLevel[i], Dly_Level ) )
        {
            delay_file.fLength = INVALID_DELAY_FILE_RANGE;
            return delay_file;
        }
        if ( !Efx_Echotron->check_delay_file_ranges( delay_file.fLP[i], Dly_LP ) )
        {
            delay_file.fLength = INVALID_DELAY_FILE_RANGE;
            return delay_file;
        }
        if ( !Efx_Echotron->check_delay_file_ranges( delay_file.fBP[i], Dly_BP ) )
        {
            delay_file.fLength = INVALID_DELAY_FILE_RANGE;
            return delay_file;
        }
        if ( !Efx_Echotron->check_delay_file_ranges( delay_file.fHP[i], Dly_HP ) )
        {
            delay_file.fLength = INVALID_DELAY_FILE_RANGE;
            return delay_file;
        }
        if ( !Efx_Echotron->check_delay_file_ranges( delay_file.fFreq[i], Dly_Freq ) )
        {
            delay_file.fLength = INVALID_DELAY_FILE_RANGE;
            return delay_file;
        }
        if ( !Efx_Echotron->check_delay_file_ranges( delay_file.fQ[i], Dly_Q ) )
        {
            delay_file.fLength = INVALID_DELAY_FILE_RANGE;
            return delay_file;
        }
        if ( !Efx_Echotron->check_delay_file_ranges( delay_file.iStages[i] + 1, Dly_Stages ) )  // + 1 since we offset above in file
        {
            delay_file.fLength = INVALID_DELAY_FILE_RANGE;
            return delay_file;
        }
      }
    
    return delay_file;
}

void DelayFileWindowGui::update_scroll(int group, int type) {
  std::vector<DelayLine> vector_delay_line;
  
    for(int i = 0; i < m_file_size; ++i)
    {
        Fl_Widget *c = dly_scroll->child(i);
        dlyFileGroup *c_choice = (dlyFileGroup *) c;
        
        switch(type)
        {
            case DELETE_ROW:
            {
                if(group == i)
                    continue;
            }
            break;
            case INSERT_ROW:
            {
                if(group == i)
                {
                    DelayLine insert;
                    vector_delay_line.push_back(insert);
                }
            }
            break;
        }
  
        DelayLine d_choice;
        d_choice.pan = (double) strtod(c_choice->dly_pan->value(), NULL);
        d_choice.time = (double) strtod(c_choice->dly_time->value(), NULL);
        d_choice.level = (double) strtod(c_choice->dly_level->value(), NULL);
        d_choice.LP = (double) strtod(c_choice->dly_LP->value(), NULL);
        d_choice.BP = (double) strtod(c_choice->dly_BP->value(), NULL);
        d_choice.HP = (double) strtod(c_choice->dly_HP->value(), NULL);
        d_choice.freq = (double) strtod(c_choice->dly_freq->value(), NULL);
        d_choice.Q = (double) strtod(c_choice->dly_Q->value(), NULL);
        d_choice.stages = atoi(c_choice->dly_stages->value());     
        vector_delay_line.push_back(d_choice);
    }
    
    if(type == MOVE_ROW_UP)
    {
        reorder_delay_lines(vector_delay_line, group);
    }
    else if(type == MOVE_ROW_DOWN)
    {
        reorder_delay_lines(vector_delay_line, group + 1);
    }
    else if(type == ADD_ROW)
    {
         DelayLine add;
         vector_delay_line.push_back(add);
    }
    
    dly_scroll->clear();
    m_file_size = 0;
    
        for(unsigned i = 0; i < vector_delay_line.size(); ++i)
        {
            m_file_size++;
            
            dlyFileGroup *ADDG = new dlyFileGroup
            (
                0,
                0,
                725,
                30
            );
            ADDG->initialize(this);
    
            ADDG->dly_pan->value( FTSP(vector_delay_line[i].pan, 3).c_str() );
            ADDG->dly_time->value( FTSP(vector_delay_line[i].time, 10).c_str() );
            ADDG->dly_level->value( FTSP(vector_delay_line[i].level, 4).c_str() );
            ADDG->dly_LP->value( FTSP(vector_delay_line[i].LP, 4).c_str() );
            ADDG->dly_BP->value( FTSP(vector_delay_line[i].BP, 4).c_str() );
            ADDG->dly_HP->value( FTSP(vector_delay_line[i].HP, 4).c_str() );
            ADDG->dly_freq->value( FTSP(vector_delay_line[i].freq, 5).c_str() );
            ADDG->dly_Q->value( FTSP(vector_delay_line[i].Q, 6).c_str() );
            ADDG->dly_stages->value( FTSP(vector_delay_line[i].stages, 0).c_str() );
  
            std::stringstream strs;
            strs << m_file_size;
            std::string temp_str = strs.str();
            char* char_type = (char*) temp_str.c_str();
            ADDG->dly_occur->copy_label(char_type);
    
            dly_scroll->add(ADDG);
        }
    
    dly_scroll->resize(dly_scroll->x(), dly_scroll->y(), dly_scroll->w(), dly_scroll->h());
    
    int set_start_height = 265;    //  set in fluid
    float H_set_ratio = (float) this->h() / set_start_height;
      
    dly_scroll->scroll_to(dly_scroll->xposition(), (60 * H_set_ratio) + dly_scroll->yposition());
    
    this->redraw();
}

void DelayFileWindowGui::reorder_delay_lines(std::vector<DelayLine> &vector_delay_line, int line) {
  std::vector<DelayLine> vector_temp;
    
  for(unsigned i = 0; i < vector_delay_line.size(); ++i)
  {
      if(i == (unsigned) (line - 1))
      {
          vector_temp.push_back(vector_delay_line[i + 1]);
      }
      else if(i == (unsigned) line)
      {
          vector_temp.push_back(vector_delay_line[i - 1]);
      }
      else
       {
          vector_temp.push_back(vector_delay_line[i]);
      }
  }
    
  vector_delay_line = vector_temp;
}

int DelayFileWindowGui::get_file_size() {
  return m_file_size;
}

void dlyFileGroup::cb_dly_delete_i(RKR_Button* o, void*) {
  Fl_Widget * P = o->parent();
  
dlyFileGroup *Choice = (dlyFileGroup *) P;

std::stringstream strValue;
strValue << Choice->dly_occur->label();

int intValue;
strValue >> intValue;


m_parent->update_scroll(intValue - 1, DELETE_ROW); // offset by 1;
}
void dlyFileGroup::cb_dly_delete(RKR_Button* o, void* v) {
  ((dlyFileGroup*)(o->parent()))->cb_dly_delete_i(o,v);
}

void dlyFileGroup::cb_dly_insert_i(RKR_Button* o, void*) {
  if(m_parent->get_file_size() >= (ECHOTRON_F_SIZE - 1))
    return;

Fl_Widget * P = o->parent();

dlyFileGroup *Choice = (dlyFileGroup *) P;

std::stringstream strValue;
strValue << Choice->dly_occur->label();

int intValue;
strValue >> intValue;


m_parent->update_scroll(intValue - 1, INSERT_ROW); // offset by 1;
}
void dlyFileGroup::cb_dly_insert(RKR_Button* o, void* v) {
  ((dlyFileGroup*)(o->parent()))->cb_dly_insert_i(o,v);
}

void dlyFileGroup::cb_dly_up_i(RKR_Button* o, void*) {
  Fl_Widget * P = o->parent();
  
dlyFileGroup *Choice = (dlyFileGroup *) P;

std::stringstream strValue;
strValue << Choice->dly_occur->label();

int intValue;
strValue >> intValue;

/* Already at the top */
if(intValue == 1)
    return;

m_parent->update_scroll(intValue - 1, MOVE_ROW_UP); // offset by 1;
}
void dlyFileGroup::cb_dly_up(RKR_Button* o, void* v) {
  ((dlyFileGroup*)(o->parent()))->cb_dly_up_i(o,v);
}

void dlyFileGroup::cb_dly_down_i(RKR_Button* o, void*) {
  Fl_Widget * P = o->parent();
  
dlyFileGroup *Choice = (dlyFileGroup *) P;

std::stringstream strValue;
strValue << Choice->dly_occur->label();

int intValue;
strValue >> intValue;

/* Already at the bottom */
if(intValue == m_parent->get_file_size())
    return;

m_parent->update_scroll(intValue - 1, MOVE_ROW_DOWN); // offset by 1;
}
void dlyFileGroup::cb_dly_down(RKR_Button* o, void* v) {
  ((dlyFileGroup*)(o->parent()))->cb_dly_down_i(o,v);
}
dlyFileGroup::dlyFileGroup(int X, int Y, int W, int H, const char *L)
  : RKR_Group(0, 0, W, H, L) {
this->box(FL_FLAT_BOX);
this->color(FL_BACKGROUND_COLOR);
this->selection_color(FL_BACKGROUND_COLOR);
this->labeltype(FL_NO_LABEL);
this->labelfont(0);
this->labelsize(14);
this->labelcolor(FL_FOREGROUND_COLOR);
this->user_data((void*)(UD_delay_group));
this->align(Fl_Align(FL_ALIGN_TOP));
this->when(FL_WHEN_RELEASE);
{ dly_occur = new RKR_Box(6, 6, 35, 20, "1");
  dly_occur->box(FL_NO_BOX);
  dly_occur->color(FL_BACKGROUND_COLOR);
  dly_occur->selection_color(FL_BACKGROUND_COLOR);
  dly_occur->labeltype(FL_NORMAL_LABEL);
  dly_occur->labelfont(0);
  dly_occur->labelsize(14);
  dly_occur->labelcolor(FL_FOREGROUND_COLOR);
  dly_occur->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
  dly_occur->when(FL_WHEN_RELEASE);
} // RKR_Box* dly_occur
{ dly_pan = new RKR_Float_Input(45, 6, 40, 20);
  dly_pan->box(FL_DOWN_BOX);
  dly_pan->color(FL_FOREGROUND_COLOR);
  dly_pan->selection_color(FL_SELECTION_COLOR);
  dly_pan->labeltype(FL_NO_LABEL);
  dly_pan->labelfont(0);
  dly_pan->labelsize(14);
  dly_pan->labelcolor(FL_FOREGROUND_COLOR);
  dly_pan->textsize(10);
  dly_pan->textcolor(FL_BACKGROUND2_COLOR);
  dly_pan->align(Fl_Align(FL_ALIGN_LEFT));
  dly_pan->when(FL_WHEN_CHANGED);
} // RKR_Float_Input* dly_pan
{ dly_time = new RKR_Float_Input(95, 6, 86, 21);
  dly_time->box(FL_DOWN_BOX);
  dly_time->color(FL_FOREGROUND_COLOR);
  dly_time->selection_color(FL_SELECTION_COLOR);
  dly_time->labeltype(FL_NO_LABEL);
  dly_time->labelfont(0);
  dly_time->labelsize(14);
  dly_time->labelcolor(FL_FOREGROUND_COLOR);
  dly_time->textsize(10);
  dly_time->textcolor(FL_BACKGROUND2_COLOR);
  dly_time->align(Fl_Align(FL_ALIGN_LEFT));
  dly_time->when(FL_WHEN_CHANGED);
} // RKR_Float_Input* dly_time
{ dly_level = new RKR_Float_Input(191, 6, 45, 20);
  dly_level->box(FL_DOWN_BOX);
  dly_level->color(FL_FOREGROUND_COLOR);
  dly_level->selection_color(FL_SELECTION_COLOR);
  dly_level->labeltype(FL_NO_LABEL);
  dly_level->labelfont(0);
  dly_level->labelsize(14);
  dly_level->labelcolor(FL_FOREGROUND_COLOR);
  dly_level->textsize(10);
  dly_level->textcolor(FL_BACKGROUND2_COLOR);
  dly_level->align(Fl_Align(FL_ALIGN_LEFT));
  dly_level->when(FL_WHEN_CHANGED);
} // RKR_Float_Input* dly_level
{ dly_LP = new RKR_Float_Input(242, 6, 48, 20);
  dly_LP->box(FL_DOWN_BOX);
  dly_LP->color(FL_FOREGROUND_COLOR);
  dly_LP->selection_color(FL_SELECTION_COLOR);
  dly_LP->labeltype(FL_NO_LABEL);
  dly_LP->labelfont(0);
  dly_LP->labelsize(14);
  dly_LP->labelcolor(FL_FOREGROUND_COLOR);
  dly_LP->textsize(10);
  dly_LP->textcolor(FL_BACKGROUND2_COLOR);
  dly_LP->align(Fl_Align(FL_ALIGN_LEFT));
  dly_LP->when(FL_WHEN_CHANGED);
} // RKR_Float_Input* dly_LP
{ dly_BP = new RKR_Float_Input(294, 6, 48, 20);
  dly_BP->box(FL_DOWN_BOX);
  dly_BP->color(FL_FOREGROUND_COLOR);
  dly_BP->selection_color(FL_SELECTION_COLOR);
  dly_BP->labeltype(FL_NO_LABEL);
  dly_BP->labelfont(0);
  dly_BP->labelsize(14);
  dly_BP->labelcolor(FL_FOREGROUND_COLOR);
  dly_BP->textsize(10);
  dly_BP->textcolor(FL_BACKGROUND2_COLOR);
  dly_BP->align(Fl_Align(FL_ALIGN_LEFT));
  dly_BP->when(FL_WHEN_CHANGED);
} // RKR_Float_Input* dly_BP
{ dly_HP = new RKR_Float_Input(345, 6, 48, 20);
  dly_HP->box(FL_DOWN_BOX);
  dly_HP->color(FL_FOREGROUND_COLOR);
  dly_HP->selection_color(FL_SELECTION_COLOR);
  dly_HP->labeltype(FL_NO_LABEL);
  dly_HP->labelfont(0);
  dly_HP->labelsize(14);
  dly_HP->labelcolor(FL_FOREGROUND_COLOR);
  dly_HP->textsize(10);
  dly_HP->textcolor(FL_BACKGROUND2_COLOR);
  dly_HP->align(Fl_Align(FL_ALIGN_LEFT));
  dly_HP->when(FL_WHEN_CHANGED);
} // RKR_Float_Input* dly_HP
{ dly_freq = new RKR_Float_Input(397, 6, 100, 20);
  dly_freq->box(FL_DOWN_BOX);
  dly_freq->color(FL_FOREGROUND_COLOR);
  dly_freq->selection_color(FL_SELECTION_COLOR);
  dly_freq->labeltype(FL_NO_LABEL);
  dly_freq->labelfont(0);
  dly_freq->labelsize(14);
  dly_freq->labelcolor(FL_FOREGROUND_COLOR);
  dly_freq->textsize(10);
  dly_freq->textcolor(FL_BACKGROUND2_COLOR);
  dly_freq->align(Fl_Align(FL_ALIGN_LEFT));
  dly_freq->when(FL_WHEN_CHANGED);
} // RKR_Float_Input* dly_freq
{ dly_Q = new RKR_Float_Input(510, 6, 76, 20);
  dly_Q->box(FL_DOWN_BOX);
  dly_Q->color(FL_FOREGROUND_COLOR);
  dly_Q->selection_color(FL_SELECTION_COLOR);
  dly_Q->labeltype(FL_NO_LABEL);
  dly_Q->labelfont(0);
  dly_Q->labelsize(14);
  dly_Q->labelcolor(FL_FOREGROUND_COLOR);
  dly_Q->textsize(10);
  dly_Q->textcolor(FL_BACKGROUND2_COLOR);
  dly_Q->align(Fl_Align(FL_ALIGN_LEFT));
  dly_Q->when(FL_WHEN_CHANGED);
} // RKR_Float_Input* dly_Q
{ dly_stages = new RKR_Float_Input(610, 6, 20, 20);
  dly_stages->box(FL_DOWN_BOX);
  dly_stages->color(FL_FOREGROUND_COLOR);
  dly_stages->selection_color(FL_SELECTION_COLOR);
  dly_stages->labeltype(FL_NO_LABEL);
  dly_stages->labelfont(0);
  dly_stages->labelsize(14);
  dly_stages->labelcolor(FL_FOREGROUND_COLOR);
  dly_stages->textsize(10);
  dly_stages->textcolor(FL_BACKGROUND2_COLOR);
  dly_stages->align(Fl_Align(FL_ALIGN_LEFT));
  dly_stages->when(FL_WHEN_CHANGED);
} // RKR_Float_Input* dly_stages
{ dly_delete = new RKR_Button(651, 6, 20, 20, "D");
  dly_delete->tooltip("Delete this row");
  dly_delete->box(FL_UP_BOX);
  dly_delete->color(FL_BACKGROUND_COLOR);
  dly_delete->selection_color(FL_BACKGROUND_COLOR);
  dly_delete->labeltype(FL_NORMAL_LABEL);
  dly_delete->labelfont(0);
  dly_delete->labelsize(14);
  dly_delete->labelcolor(FL_FOREGROUND_COLOR);
  dly_delete->callback((Fl_Callback*)cb_dly_delete, (void*)(0));
  dly_delete->align(Fl_Align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE));
  dly_delete->when(FL_WHEN_RELEASE);
} // RKR_Button* dly_delete
{ dly_insert = new RKR_Button(675, 6, 20, 20, "I");
  dly_insert->tooltip("Insert new row before this one");
  dly_insert->box(FL_UP_BOX);
  dly_insert->color(FL_BACKGROUND_COLOR);
  dly_insert->selection_color(FL_BACKGROUND_COLOR);
  dly_insert->labeltype(FL_NORMAL_LABEL);
  dly_insert->labelfont(0);
  dly_insert->labelsize(14);
  dly_insert->labelcolor(FL_FOREGROUND_COLOR);
  dly_insert->callback((Fl_Callback*)cb_dly_insert, (void*)(0));
  dly_insert->align(Fl_Align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE));
  dly_insert->when(FL_WHEN_RELEASE);
} // RKR_Button* dly_insert
{ dly_up = new RKR_Button(700, 4, 12, 12, "@8>");
  dly_up->tooltip("Move this row up");
  dly_up->box(FL_UP_BOX);
  dly_up->color(FL_BACKGROUND_COLOR);
  dly_up->selection_color(FL_BACKGROUND_COLOR);
  dly_up->labeltype(FL_NORMAL_LABEL);
  dly_up->labelfont(0);
  dly_up->labelsize(10);
  dly_up->labelcolor(FL_FOREGROUND_COLOR);
  dly_up->callback((Fl_Callback*)cb_dly_up, (void*)(0));
  dly_up->align(Fl_Align(FL_ALIGN_CENTER));
  dly_up->when(FL_WHEN_RELEASE);
} // RKR_Button* dly_up
{ dly_down = new RKR_Button(700, 15, 12, 12, "@2>");
  dly_down->tooltip("Move this row down");
  dly_down->box(FL_UP_BOX);
  dly_down->color(FL_BACKGROUND_COLOR);
  dly_down->selection_color(FL_BACKGROUND_COLOR);
  dly_down->labeltype(FL_NORMAL_LABEL);
  dly_down->labelfont(0);
  dly_down->labelsize(10);
  dly_down->labelcolor(FL_FOREGROUND_COLOR);
  dly_down->callback((Fl_Callback*)cb_dly_down, (void*)(0));
  dly_down->align(Fl_Align(FL_ALIGN_CENTER));
  dly_down->when(FL_WHEN_RELEASE);
} // RKR_Button* dly_down
position(X, Y);
end();
}

void dlyFileGroup::initialize(DelayFileWindowGui *parent) {
  m_parent = parent;
}
