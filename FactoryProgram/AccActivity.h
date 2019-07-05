  /*
  Copyright (C) 1997-2018 Sam Lantinga <slouken@libsdl.org>

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely.
*/

/* Simple program to test the SDL joystick routines */

#ifndef _ACCACTIVITY_
#define _ACCACTIVITY_

#include <string.h>
#include "SDL.h"

#pragma once
class AccActivity
{
public:
  AccActivity(int);
  void start(char *argv[]);
  static void loop(void *arg);
  ~AccActivity();
private:
    static void DrawRect(SDL_Renderer *r, const int x, const int y, const int w, const int h);
    static SDL_bool WatchJoystick(SDL_Joystick * joystick);
};

#endif //ACCACTIVITY