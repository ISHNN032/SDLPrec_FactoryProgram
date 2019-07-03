#ifndef _ACTIVITY_MANAGER_
#define _ACTIVITY_MANAGER_

#include "MainActivity.h"
#include "TouchActivity.h"

#pragma once
class ActivityManager
{
public:
	ActivityManager(int n);
	void startActivity(int n);
	void endActivity(int n);
	~ActivityManager();
private:
    MainActivity* mainActivity;
    TouchActivity* touchActivity;
};

#endif //_ACTIVITY_MANAGER_