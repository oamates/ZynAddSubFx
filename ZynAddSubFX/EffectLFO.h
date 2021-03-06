/*
  ZynAddSubFX - a software synthesizer
 
  EffectLFO.h - Stereo LFO used by some effects
  Copyright (C) 2002-2005 Nasca Octavian Paul
  Author: Nasca Octavian Paul

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

#ifndef EFFECT_LFO_H
#define EFFECT_LFO_H

#include "globals.h"

//������
class EffectLFO{
 public:
    EffectLFO();
    ~EffectLFO();
    void effectlfoout(REALTYPE *outl,REALTYPE *outr);
    void updateparams();
    unsigned char Pfreq;
    unsigned char Prandomness;
    unsigned char PLFOtype;
    unsigned char Pstereo;//"64"=0
 private:
    REALTYPE getlfoshape(REALTYPE x);
 
    REALTYPE xl,xr;
    REALTYPE incx;
    REALTYPE ampl1,ampl2,ampr1,ampr2;//necesar pentru "randomness"
    REALTYPE lfointensity;
    REALTYPE lfornd;
    char lfotype;
};


#endif
