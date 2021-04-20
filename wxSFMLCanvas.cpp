#include "wxSFMLCanvas.h"

wxSFMLCanvas::wxSFMLCanvas(wxWindow* Parent, wxWindowID Id, const wxPoint& Position, const wxSize& Size, long Style) :
    wxControl(Parent, Id, Position, Size, Style) {
    sf::RenderWindow::create(GetHandle());
}

wxSFMLCanvas::~wxSFMLCanvas() {

}