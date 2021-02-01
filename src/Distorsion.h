/*
  ZynAddSubFX - a software synthesizer

  Distorsion.h - Distorsion Effect
  Copyright (C) 2002-2005 Nasca Octavian Paul
  Author: Nasca Octavian Paul

  Modified for rakarrack by Josep Andreu & Hernan Ordiales & Ryan Billing

  This program is free software; you can redistribute it and/or modify
  it under the terms of version 2 of the GNU General Public License
  as published by the Free Software Foundation.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License (version 2) for more details.

  You should have received a copy of the GNU General Public License (version 2)
  along with this program; if not, write to the Free Software Foundation,
  Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA

*/

#ifndef DISTORSION_H
#define DISTORSION_H

#include <vector>
#include "Effect.h"
#include "AnalogFilter.h"
#include "Waveshaper.h"

const int C_DIST_PARAMETERS = 13;

enum Dist_Index
{
    Dist_DryWet = 0,
    Dist_Pan,
    Dist_LR_Cross,
    Dist_Drive,
    Dist_Level,
    Dist_Type,
    Dist_Negate,
    Dist_LPF,
    Dist_HPF,
    Dist_Stereo,
    Dist_Prefilter,
    Dist_SKIP_11,
    Dist_Suboctave
};

class Distorsion :public Effect
{
public:
    Distorsion (int wave_res, int wave_upq, int wave_dnq, double samplerate, uint32_t intermediate_bufsize);
    virtual ~Distorsion ();
    void out (float * efxoutl, float * efxoutr);
    virtual void setpreset (int npreset);
    void changepar (int npar, int value);
    int getpar (int npar);
    void cleanup ();
    int get_number_efx_parameters () {return C_DIST_PARAMETERS;};
    
#ifdef LV2_SUPPORT
    void lv2_update_params(uint32_t period);
#endif // LV2
    
    void applyfilters (float * efxoutl, float * efxoutr);
    void initialize ();
    void clear_initialize();

    /* Change quality */
    std::vector<int> save_parameters();
    void reset_parameters(std::vector<int> parameters);

    float *octoutl;
    float *octoutr;

private:
    
    uint32_t PERIOD;
    double fSAMPLE_RATE;
    int WAVE_RES;
    int WAVE_UPQ;
    int WAVE_DNQ;
    
    //Parametrii
    int Pvolume;	//Volumul or E/R
    int Ppanning;	//Panning
    int Plrcross;	// L/R Mixing
    int Pdrive;		//the input amplification
    int Plevel;		//the ouput amplification
    int Ptype;		//Distorsion type
    int Pnegate;	//if the input is negated
    int Plpf;		//lowpass filter
    int Phpf;		//highpass filter
    int Pstereo;	//0=mono,1=stereo
    int Pprefiltering;	//if you want to do the filtering before the distorsion
    int Poctave;	//mix sub octave

    void setvolume (int Pvolume);
    void setpanning (int Ppanning);
    void setlrcross (int Plrcross);
    void setoctave (int Poctave);
    void setlpf (int Plpf);
    void sethpf (int Phpf);

    //Parametrii reali
    float panning, lrcross, octave_memoryl, togglel, octave_memoryr,toggler,octmix;
    AnalogFilter *lpfl, *lpfr, *hpfl, *hpfr, *blockDCl, *blockDCr, *DCl, *DCr;
    class Waveshaper *dwshapel, *dwshaper;

    float * interpbuf;//buffer for filters

};




#endif
