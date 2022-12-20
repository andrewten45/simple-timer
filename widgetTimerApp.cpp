/***************************************************************
 * Name:      widgetTimerApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2022-12-20
 * Copyright:  ()
 * License:
 **************************************************************/

#include "widgetTimerApp.h"

//(*AppHeaders
#include "widgetTimerMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(widgetTimerApp);

bool widgetTimerApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	widgetTimerFrame* Frame = new widgetTimerFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
