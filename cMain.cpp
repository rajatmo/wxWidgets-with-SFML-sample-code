#include "cMain.h"

wxBEGIN_EVENT_TABLE(cMain,wxFrame)
    EVT_BUTTON(10001, onBtnClicked)
wxEND_EVENT_TABLE()


cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Window", wxPoint(30, 30), wxSize(800, 600)) {
    mycanv = new wxSFMLCanvas(this, wxID_ANY, wxPoint(50, 50), wxSize(700, 500));
    m_btn1 = new wxButton(this, 10001, "button1", wxPoint(10, 10), wxSize(100, 50));
}

void cMain::onBtnClicked(wxCommandEvent& evt) {
    sf::CircleShape circ(50.0f);
    circ.setOrigin(50.0f, 50.0f);
    circ.setFillColor(sf::Color::Blue);
    circ.setPosition(rand() % 700, rand() % 500);
    mycanv->clear(sf::Color::Black);
    mycanv->draw(circ);
    mycanv->display();
}