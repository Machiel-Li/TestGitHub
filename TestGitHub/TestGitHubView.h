
// TestGitHubView.h: CTestGitHubView 类的接口
//

#pragma once


class CTestGitHubView : public CView
{
protected: // 仅从序列化创建
	CTestGitHubView() noexcept;
	DECLARE_DYNCREATE(CTestGitHubView)

// 特性
public:
	CTestGitHubDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CTestGitHubView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // TestGitHubView.cpp 中的调试版本
inline CTestGitHubDoc* CTestGitHubView::GetDocument() const
   { return reinterpret_cast<CTestGitHubDoc*>(m_pDocument); }
#endif

