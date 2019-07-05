#ifndef _ACTIVITY_MANAGER_
#define _ACTIVITY_MANAGER_

#include "MainActivity.h"
#include "TouchActivity.h"
#include "SoundActivity.h"
#include "AccActivity.h"

#pragma once
class ActivityManager
{
public:
	ActivityManager(int n);
	void startActivity(int n);
	void endActivity(int n);
	~ActivityManager();

	int getNext();
	void setNext(int n);
private:
	int next_activity;

    MainActivity* mainActivity;
    TouchActivity* touchActivity;
	SoundActivity* soundActivity;
	AccActivity* accActivity;
};

#endif //_ACTIVITY_MANAGER_