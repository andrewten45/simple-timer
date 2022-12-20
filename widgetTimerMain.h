/***************************************************************
 * Name:      widgetTimerMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2022-12-20
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef WIDGETTIMERMAIN_H
#define WIDGETTIMERMAIN_H

//(*Headers(widgetTimerFrame)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/stattext.h>
#include <wx/statusbr.h>
//*)

class widgetTimerFrame: public wxFrame
{
    public:

        widgetTimerFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~widgetTimerFrame();

    private:

        //(*Handlers(widgetTimerFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton2Click(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnButton3Click(wxCommandEvent& event);
        //*)

        //(*Identifiers(widgetTimerFrame)
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_STATICTEXT1;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(widgetTimerFrame)
        wxButton* Button1;
        wxButton* Button2;
        wxStaticText* StaticText1;
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // WIDGETTIMERMAIN_H
