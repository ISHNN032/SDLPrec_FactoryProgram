/*
  Copyright (C) 1997-2018 Sam Lantinga <slouken@libsdl.org>

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely.
*/
/*  Usage:
 *  Spacebar to begin recording a gesture on all touches.
 *  s to save all touches into "./gestureSave"
 *  l to load all touches from "./gestureSave"
 */

#ifndef _SOUNDACTIVITY_
#define _SOUNDACTIVITY_

#include "SDL.h"

#ifdef __EMSCRIPTEN__
#include <emscripten/emscripten.h>
#endif

static SDL_AudioSpec spec;
static Uint8 *sound = NULL;     /* Pointer to wave data */
static Uint32 soundlen = 0;     /* Length of wave data */

typedef struct
{
  SDL_AudioDeviceID dev;
  int soundpos;
  SDL_atomic_t done;
} callback_data;

#pragma once
class SoundActivity
{
public:
  SoundActivity(int);
  void start(char*);
  ~SoundActivity();

private:
  void loop();
  static void SDLCALL play_through_once(void *arg, Uint8 *stream, int len);
  static void test_multi_audio(int devcount);
  
  static callback_data cbd[64];
};

#endif //_TOUCHACTIVITY_