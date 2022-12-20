/***************************************************************
 * Name:      widgetTimerMain.cpp
 * Purpose:   Code for Application Frame
 * Author:     ()
 * Created:   2022-12-20
 * Copyright:  ()
 * License:
 **************************************************************/

#include "widgetTimerMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(widgetTimerFrame)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(widgetTimerFrame)
const long widgetTimerFrame::ID_BUTTON1 = wxNewId();
const long widgetTimerFrame::ID_BUTTON2 = wxNewId();
const long widgetTimerFrame::ID_STATICTEXT1 = wxNewId();
const long widgetTimerFrame::idMenuQuit = wxNewId();
const long widgetTimerFrame::idMenuAbout = wxNewId();
const long widgetTimerFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(widgetTimerFrame,wxFrame)
    //(*EventTable(widgetTimerFrame)
    //*)
END_EVENT_TABLE()

widgetTimerFrame::widgetTimerFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(widgetTimerFrame)
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    Button1 = new wxButton(this, ID_BUTTON1, _("Start"), wxPoint(32,80), wxSize(128,80), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    Button2 = new wxButton(this, ID_BUTTON2, _("Stop"), wxPoint(224,80), wxSize(128,80), 0, wxDefaultValidator, _T("ID_BUTTON2"));
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("TimeBox"), wxPoint(96,24), wxSize(168,40), 0, _T("ID_STATICTEXT1"));
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&widgetTimerFrame::OnButton1Click);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&widgetTimerFrame::OnButton2Click);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&widgetTimerFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&widgetTimerFrame::OnAbout);
    //*)
}

widgetTimerFrame::~widgetTimerFrame()
{
    //(*Destroy(widgetTimerFrame)
    //*)
}

void widgetTimerFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void widgetTimerFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void widgetTimerFrame::OnButton1Click(wxCommandEvent& event)
{
    wxMessageBox("Test");
}

void widgetTimerFrame::OnButton2Click(wxCommandEvent& event)
{
    wxMessageBox("Test");
}
