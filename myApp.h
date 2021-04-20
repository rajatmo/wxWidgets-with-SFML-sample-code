#pragma once
#include <wx/wx.h>
#include "cMain.h"

class myApp : public wxApp
{
	cMain* m_Frame1 = nullptr;
public:
	myApp();
	virtual bool OnInit();
};