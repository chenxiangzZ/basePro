// Show.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "basePro.h"
#include "baseProDlg.h"
#include "Show.h"
#include "afxdialogex.h"


// CShow �Ի���

IMPLEMENT_DYNAMIC(CShow, CDialogEx)

CShow::CShow(CWnd* pParent /*=NULL*/)
	: CDialogEx(CShow::IDD, pParent)
{

}

CShow::~CShow()
{
}

void CShow::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CShow, CDialogEx)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// CShow ��Ϣ��������


void CShow::OnPaint()
{

	// TODO:  �ڴ˴�������Ϣ�����������
	// ��Ϊ��ͼ��Ϣ���� CDialogEx::OnPaint()
	
}