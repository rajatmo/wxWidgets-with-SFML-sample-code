#pragma once
#include <wx/wx.h>
#include "wxSFMLCanvas.h"

class cMain : public wxFrame
{
	wxButton* m_btn1 = nullptr;
	wxSFMLCanvas* mycanv = nullptr;
	wxDECLARE_EVENT_TABLE();
public:
	cMain();
	void onBtnClicked(wxCommandEvent &evt);
};