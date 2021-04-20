#include "myApp.h"


wxIMPLEMENT_APP(myApp);

myApp::myApp() {

}

bool myApp::OnInit() {
    // Create the main window
    m_Frame1 = new cMain;
    m_Frame1->Show();
    return true;
}