//-------------------------------------------------------------------------------
// Copyright (c) 2013 John D. Haughton
// SPDX-License-Identifier: MIT
//-------------------------------------------------------------------------------

#include "MTL/MTL.h"
#include "MTL/Digital.h"
#include "MTL/nRF51/module/microbit.h"

void MTL_alert(bool state_)
{
   static MTL::Digital::Out<MTL::PIN_LED_COL1> led_gnd{false};;
   static MTL::Digital::Out<MTL::PIN_LED_ROW1> led;

   led = state_;
}
