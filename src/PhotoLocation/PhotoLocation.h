// PhotoLocation.h : main header file for the PHOTOLOCATION application
//

#if !defined(AFX_PHOTOLOCATION_H__6F22C79A_9C9C_46FD_80D2_52BF429A16E4__INCLUDED_)
#define AFX_PHOTOLOCATION_H__6F22C79A_9C9C_46FD_80D2_52BF429A16E4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CPhotoLocationApp:
// See PhotoLocation.cpp for the implementation of this class
//

class CPhotoLocationApp : public CWinApp
{
public:
	CPhotoLocationApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPhotoLocationApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CPhotoLocationApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PHOTOLOCATION_H__6F22C79A_9C9C_46FD_80D2_52BF429A16E4__INCLUDED_)
