
// TestGitHubView.cpp: CTestGitHubView 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "TestGitHub.h"
#endif

#include "TestGitHubDoc.h"
#include "TestGitHubView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTestGitHubView

IMPLEMENT_DYNCREATE(CTestGitHubView, CView)

BEGIN_MESSAGE_MAP(CTestGitHubView, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CTestGitHubView 构造/析构

CTestGitHubView::CTestGitHubView() noexcept
{
	// TODO: 在此处添加构造代码

}

CTestGitHubView::~CTestGitHubView()
{
}

BOOL CTestGitHubView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CTestGitHubView 绘图

void CTestGitHubView::OnDraw(CDC* /*pDC*/)
{
	CTestGitHubDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CTestGitHubView 打印

BOOL CTestGitHubView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CTestGitHubView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CTestGitHubView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CTestGitHubView 诊断

#ifdef _DEBUG
void CTestGitHubView::AssertValid() const
{
	CView::AssertValid();
}

void CTestGitHubView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTestGitHubDoc* CTestGitHubView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTestGitHubDoc)));
	return (CTestGitHubDoc*)m_pDocument;
}
#endif //_DEBUG


// CTestGitHubView 消息处理程序
