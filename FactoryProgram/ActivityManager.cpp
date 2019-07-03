#include "ActivityManager.h"

ActivityManager::ActivityManager(int n)
{
}

ActivityManager::~ActivityManager()
{
}

void ActivityManager::startActivity(int n)
{
    switch (n)
    {
    case 0:
    {
        if (touchActivity != NULL)
        {
            touchActivity->~TouchActivity();
            touchActivity = NULL;
        }

        mainActivity = new MainActivity("Factory", 1024, 600);
        break;
    }
    case 1:
    {
        if (mainActivity != NULL)
        {
            mainActivity->~MainActivity();
            mainActivity = NULL;
        }

        touchActivity = new TouchActivity(0);
        break;
    }
    }
}


void ActivityManager::endActivity(int n)
{
    switch (n)
    {
    case 0:
    {
        if (mainActivity != NULL)
        {
            mainActivity->~MainActivity();
            mainActivity = NULL;
        }
    }
    case 1:
    {
        if (touchActivity != NULL)
        {
            touchActivity->~TouchActivity();
            touchActivity = NULL;
        }
    }
    }
}