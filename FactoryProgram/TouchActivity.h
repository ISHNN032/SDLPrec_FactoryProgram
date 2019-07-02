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

#ifndef _TOUCHACTIVITY_
#define _TOUCHACTIVITY_

#include "SDL.h"

typedef struct {
  float x,y;
} Point;

typedef struct {
  float ang,r;
  Point p;
} Knob;

static Knob knob;

#pragma once
class TouchActivity
{
public:
	TouchActivity(int);
	void loop();
	~TouchActivity();
private:
    void setpix(SDL_Surface *screen, float _x, float _y, unsigned int col);
    void drawLine(SDL_Surface *screen,float x0,float y0,float x1,float y1,unsigned int col);
    void drawCircle(SDL_Surface* screen,float x,float y,float r,unsigned int c);
    void drawKnob(SDL_Surface* screen,Knob k);
    void DrawScreen(SDL_Surface* screen, SDL_Window* window);

    SDL_Window* initWindow(SDL_Window *window, int width,int height);
};

#endif //_TOUCHACTIVITY_