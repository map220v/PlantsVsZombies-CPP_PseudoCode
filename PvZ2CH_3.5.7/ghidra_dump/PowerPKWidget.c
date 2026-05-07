// Class: PowerPKWidget


/* PowerPKWidget::MouseDown(int, int, int) */

void PowerPKWidget::MouseDown(int param_1,int param_2,int param_3)

{
  *(int *)((ulong)(uint)param_1 + 0xe4) = *(int *)((ulong)(uint)param_1 + 0xe4) + 0xf;
  return;
}


/* PowerPKWidget::~PowerPKWidget() */

void __thiscall PowerPKWidget::~PowerPKWidget(PowerPKWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_068c7a70;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_068c7d90;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PowerPKWidget::~PowerPKWidget() */

void __thiscall PowerPKWidget::~PowerPKWidget(PowerPKWidget *this)

{
  ~PowerPKWidget(this);
  AK::FreeHook(this);
  return;
}


/* PowerPKWidget::PowerPKWidget() */

void __thiscall PowerPKWidget::PowerPKWidget(PowerPKWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_068c7d90;
  *(undefined ***)this = &PTR_GetClass_068c7a70;
  Sexy::Widget::Resize((Widget *)this,0,0,*(int *)(gLawnApp + 0xd4),*(int *)(gLawnApp + 0xd8));
  return;
}


/* PowerPKWidget::Draw(Sexy::Graphics*) */

void __thiscall PowerPKWidget::Draw(PowerPKWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  
  LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b228e0);
  iVar2 = FUN_04742df8(0x96);
  iVar3 = FUN_04742df8(200);
  iVar1 = *(int *)(this + 0x50);
  iVar4 = FUN_04742df8(0x32);
  Sexy::Graphics::DrawImage(param_1,pIVar5,iVar2,iVar3,iVar1 + iVar2 * -2,iVar4);
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b22928);
  iVar2 = FUN_04742df8(0x96);
  iVar3 = FUN_04742df8(200);
  iVar1 = 0;
  if (*(int *)(this + 0xe0) != 0) {
    iVar1 = ((*(int *)(this + 0x50) + iVar2 * -2) * *(int *)(this + 0xe4)) / *(int *)(this + 0xe0);
  }
  iVar4 = FUN_04742df8(0x32);
  Sexy::Graphics::DrawImage(param_1,pIVar5,iVar2,iVar3,iVar1,iVar4);
  return;
}


/* PowerPKWidget::Update() */

void __thiscall PowerPKWidget::Update(PowerPKWidget *this)

{
  int iVar1;
  bool bVar2;
  
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  bVar2 = false;
  iVar1 = *(int *)(this + 0xe4) + -1;
  *(int *)(this + 0xe4) = iVar1;
  if (iVar1 < *(int *)(this + 0xe0)) {
    if (0 < iVar1) {
      return;
    }
    bVar2 = true;
  }
  MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::BossPowerWin,bVar2);
  return;
}

