#pragma once
#include <SFML/Graphics.hpp>
#include <wx/wx.h>

class wxSFMLCanvas : public wxControl, public sf::RenderWindow
{
public:
    wxSFMLCanvas(wxWindow* Parent = NULL, wxWindowID Id = -1, const wxPoint& Position = wxDefaultPosition,
        const wxSize& Size = wxDefaultSize, long Style = 0);
    virtual ~wxSFMLCanvas();
};