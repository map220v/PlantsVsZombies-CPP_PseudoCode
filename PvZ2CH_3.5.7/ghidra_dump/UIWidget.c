// Class: UIWidget


/* UIWidget::onClickableStateChanged() */

void UIWidget::onClickableStateChanged(void)

{
  return;
}


/* UIWidget::SetAnchorType(AnchorType) */

void __thiscall UIWidget::SetAnchorType(UIWidget *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x40) = param_2;
  calculatePosition();
  return;
}


/* UIWidget::SetParentAnchorType(AnchorType) */

void __thiscall UIWidget::SetParentAnchorType(UIWidget *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x44) = param_2;
  calculatePosition();
  return;
}


/* UIWidget::SetIgnoreParentVisibility(bool) */

void __thiscall UIWidget::SetIgnoreParentVisibility(UIWidget *this,bool param_1)

{
  SetFlag<DebugLogFlags>(this + 0x68,8,param_1);
  return;
}


/* UIWidget::SetClickable(bool) */

void __thiscall UIWidget::SetClickable(UIWidget *this,bool param_1)

{
  SetFlag<DebugLogFlags>(this + 0x68,4,param_1);
  if (*(code **)(*(long *)this + 0xf8) != onClickableStateChanged) {
    (**(code **)(*(long *)this + 0xf8))(this);
  }
  return;
}


/* UIWidget::OnMouseMove(int, int) */

int UIWidget::OnMouseMove(int param_1,int param_2)

{
  return param_1;
}


/* UIWidget::OnMouseDown(int, int) */

int UIWidget::OnMouseDown(int param_1,int param_2)

{
  return param_1;
}


/* UIWidget::OnMouseUp(int, int) */

int UIWidget::OnMouseUp(int param_1,int param_2)

{
  return param_1;
}


/* UIWidget::CanSetVisible() */

undefined8 UIWidget::CanSetVisible(void)

{
  return 1;
}


/* UIWidget::onLoadComplete() */

void UIWidget::onLoadComplete(void)

{
  return;
}


/* UIWidget::onVisibleStateChange(bool) */

undefined1 UIWidget::onVisibleStateChange(bool param_1)

{
  return param_1;
}


/* UIWidget::GetAtlasImage() */

void __thiscall UIWidget::GetAtlasImage(UIWidget *this)

{
  Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0xa0));
  return;
}


/* UIWidget::GetChildCount() */

void __thiscall UIWidget::GetChildCount(UIWidget *this)

{
  FUN_0351d55c(*(undefined8 *)(this + 0x50),*(undefined8 *)(this + 0x58));
  return;
}


/* UIWidget::OnConsumedTouch(std::function<void ()>) */

void UIWidget::OnConsumedTouch(function *param_1)

{
  std::function<void()>::operator=((function<void()> *)m_cosumedTouch,param_1);
  return;
}


/* UIWidget::GetRect() */

UIWidget * __thiscall UIWidget::GetRect(UIWidget *this)

{
  calculatePosition();
  return this + 0x30;
}


/* UIWidget::SetMouseDownPos(Sexy::Point const&) */

void __thiscall UIWidget::SetMouseDownPos(UIWidget *this,Point *param_1)

{
  *(undefined8 *)(this + 0x158) = *(undefined8 *)param_1;
  return;
}


/* UIWidget::GetMouseDownPos() */

UIWidget * __thiscall UIWidget::GetMouseDownPos(UIWidget *this)

{
  return this + 0x158;
}


/* UIWidget::SetManuallyDrawn(bool) */

void __thiscall UIWidget::SetManuallyDrawn(UIWidget *this,bool param_1)

{
  SetFlag<DebugLogFlags>(this + 0x68,2,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget::SetAtlasImageData(Sexy::Image*, Sexy::TRect<int>) */

void __thiscall UIWidget::SetAtlasImageData(UIWidget *this,long param_1,undefined8 *param_3)

{
  undefined8 uVar1;
  RtId aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0xa0),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  else {
    Sexy::BaseResource::GetRtId();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0xa0),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtId::~RtId(aRStack_18);
  }
  uVar1 = param_3[1];
  *(undefined8 *)(this + 0xa8) = *param_3;
  *(undefined8 *)(this + 0xb0) = uVar1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIWidget::GetDeviceUIWidgetScaleValue() */

float UIWidget::GetDeviceUIWidgetScaleValue(void)

{
  int iVar1;
  
  iVar1 = FUN_044ce66c();
  return ((float)*(int *)(gLawnApp + 0x728) * 0.13) / ((float)iVar1 * 0.13);
}


/* UIWidget::ConvertPSDImageOffsetToUISpace(int&, int&) */

void UIWidget::ConvertPSDImageOffsetToUISpace(int *param_1,int *param_2)

{
  float fVar1;
  
  thunk_FUN_044ce374((float)*param_1 + 1.0);
  fVar1 = (float)FUN_044ce6b8();
  *param_1 = (int)fVar1;
  thunk_FUN_044ce374((float)*param_2 + 1.0);
  fVar1 = (float)FUN_044ce6b8();
  *param_2 = (int)fVar1;
  return;
}


/* UIWidget::ConvertPSDImageOffsetToUISpace(int&, int&, float) */

void UIWidget::ConvertPSDImageOffsetToUISpace(int *param_1,int *param_2,float param_3)

{
  float fVar1;
  
  fVar1 = (float)FUN_044ce6b8(((float)*param_1 + 1.0) / (param_3 * 0.0016666667));
  *param_1 = (int)fVar1;
  fVar1 = (float)FUN_044ce6b8(((float)*param_2 + 1.0) / (param_3 * 0.0016666667));
  *param_2 = (int)fVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget::getAnchorOffset(UIWidget*, AnchorType) */

void __thiscall UIWidget::getAnchorOffset(undefined8 param_1_00,long param_1,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  float local_10;
  float fStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,0.0,0.0);
  if (param_1 == 0) goto switchD_044ce884_default;
  switch(param_3) {
  case 2:
    iVar2 = FUN_044ce384(*(undefined4 *)(param_1 + 0x38));
    local_10 = (float)(iVar2 / 2);
    break;
  case 3:
    iVar2 = FUN_044ce384(*(undefined4 *)(param_1 + 0x38));
    local_10 = (float)iVar2;
    break;
  case 4:
    uVar1 = *(undefined4 *)(param_1 + 0x3c);
    goto LAB_044ce8b0;
  case 5:
    iVar2 = FUN_044ce384(*(undefined4 *)(param_1 + 0x38));
    iVar2 = iVar2 / 2;
    uVar1 = *(undefined4 *)(param_1 + 0x3c);
    goto LAB_044ce8ac;
  case 6:
    iVar2 = FUN_044ce384(*(undefined4 *)(param_1 + 0x38));
    uVar1 = *(undefined4 *)(param_1 + 0x3c);
LAB_044ce8ac:
    local_10 = (float)iVar2;
LAB_044ce8b0:
    iVar2 = FUN_044ce390(uVar1);
    fStack_c = (float)(iVar2 / 2);
    break;
  case 7:
    iVar2 = FUN_044ce390(*(undefined4 *)(param_1 + 0x3c));
    fStack_c = (float)iVar2;
    break;
  case 8:
    iVar2 = FUN_044ce384(*(undefined4 *)(param_1 + 0x38));
    local_10 = (float)(iVar2 / 2);
    iVar2 = FUN_044ce390(*(undefined4 *)(param_1 + 0x3c));
    fStack_c = (float)iVar2;
    break;
  case 9:
    iVar2 = FUN_044ce384(*(undefined4 *)(param_1 + 0x38));
    local_10 = (float)iVar2;
    iVar2 = FUN_044ce390(*(undefined4 *)(param_1 + 0x3c));
    fStack_c = (float)iVar2;
  }
switchD_044ce884_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_10,fStack_c);
  }
  return;
}


/* UIWidget::GetChildId(int) */

void UIWidget::GetChildId(int param_1)

{
  RtId *pRVar1;
  int in_w1;
  RtId *in_x8;
  
  pRVar1 = (RtId *)FUN_044ce484(*(undefined8 *)((ulong)(uint)param_1 + 0x50),(long)in_w1);
  Sexy::RtId::RtId(in_x8,pRVar1);
  return;
}


/* UIWidget::getWidgetStateSerialization() */

void __thiscall UIWidget::getWidgetStateSerialization(UIWidget *this)

{
  FUN_044ce48c(*(undefined4 *)(this + 0xb8));
  return;
}


/* UIWidget::isInState(unsigned int) const */

bool __thiscall UIWidget::isInState(UIWidget *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = FUN_044ce48c(*(undefined4 *)(this + 0xb8));
  return uVar1 == param_1;
}


/* UIWidget::SetVisible(bool) */

void __thiscall UIWidget::SetVisible(UIWidget *this,bool param_1)

{
  byte bVar1;
  
  if (param_1 <= (byte)this[0x162]) {
    if (*(code **)(*(long *)this + 0xc0) == CanSetVisible) {
      bVar1 = CanSetVisible();
    }
    else {
      bVar1 = (**(code **)(*(long *)this + 0xc0))();
    }
    if (param_1 <= bVar1) {
      SetFlag<DebugLogFlags>(this + 0x68,1,param_1);
      if (*(code **)(*(long *)this + 0xf0) != onVisibleStateChange) {
        (**(code **)(*(long *)this + 0xf0))(this,param_1);
        return;
      }
    }
  }
  return;
}


/* UIWidget::SetAtlasImageRectToRect(Sexy::TRect<int>&, Sexy::RtWeakPtr<Sexy::Image>) */

void UIWidget::SetAtlasImageRectToRect(undefined4 *param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  *param_1 = *(undefined4 *)(lVar2 + 0x50);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  param_1[1] = *(undefined4 *)(lVar2 + 0x54);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  iVar1 = *(int *)(lVar2 + 0x58);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  param_1[2] = iVar1 - *(int *)(lVar2 + 0x50);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  iVar1 = *(int *)(lVar2 + 0x5c);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  param_1[3] = iVar1 - *(int *)(lVar2 + 0x54);
  return;
}


/* UIWidget::GetAnchorType() */

int __thiscall UIWidget::GetAnchorType(UIWidget *this)

{
  long lVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x40);
  if (iVar2 == 0) {
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
    ;
    iVar2 = *(int *)(lVar1 + 0x24);
  }
  return iVar2;
}


/* UIWidget::GetParentAnchorType() */

undefined4 __thiscall UIWidget::GetParentAnchorType(UIWidget *this)

{
  long lVar1;
  
  if (*(int *)(this + 0x40) != 0) {
    return *(undefined4 *)(this + 0x44);
  }
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  return *(undefined4 *)(lVar1 + 0x20);
}


/* UIWidget::GetPositionOffset() */

UIWidget * __thiscall UIWidget::GetPositionOffset(UIWidget *this)

{
  long lVar1;
  
  if (this[0x80] != (UIWidget)0x0) {
    return this + 0x70;
  }
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  if (*(char *)(lVar1 + 0x68) != '\0') {
    return this + 0x78;
  }
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  return (UIWidget *)(lVar1 + 0x60);
}


/* UIWidget::GetInputPriority() */

UIWidget __thiscall UIWidget::GetInputPriority(UIWidget *this)

{
  long lVar1;
  
  if (this[0x82] != (UIWidget)0x0) {
    return this[0x81];
  }
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  return *(UIWidget *)(lVar1 + 0x5a);
}


/* UIWidget::ProcessedMouseMove(int, int, unsigned char) */

void UIWidget::ProcessedMouseMove(int param_1,int param_2,uchar param_3)

{
  bool bVar1;
  long *plVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&m_mouseFocusWidget);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)&m_mouseFocusWidget);
    if (*(code **)(*plVar2 + 0x88) != OnMouseMove) {
      (**(code **)(*plVar2 + 0x88))(plVar2,param_1,param_2);
      return;
    }
  }
  return;
}


/* UIWidget::IsVisible() */

bool __thiscall UIWidget::IsVisible(UIWidget *this)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  
  while( true ) {
    uVar1 = *(undefined4 *)(this + 0x68);
    bVar2 = TestFlag<VaseFlags>(uVar1,1);
    cVar3 = FUN_044ceb00(uVar1);
    if ((cVar3 != '\0') || (!bVar2)) break;
    bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x48));
    if (!bVar4) {
      return bVar2;
    }
    this = (UIWidget *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  }
  return bVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget::IsMouseOver(int, int) */

void __thiscall UIWidget::IsMouseOver(UIWidget *this,int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  TRect<int> aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsVisible(this);
  uVar3 = 0;
  if (cVar1 != '\0') {
    bVar2 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0x68),4);
    uVar3 = 0;
    if (bVar2) {
      (**(code **)(*(long *)this + 0xb8))(aTStack_18,this);
      uVar3 = Sexy::TRect<int>::Contains(aTStack_18,param_1,param_2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* UIWidget::updateStateMachine() */

void __thiscall UIWidget::updateStateMachine(UIWidget *this)

{
  StateMachine<WidgetState>::UpdateState((StateMachine<WidgetState> *)(this + 0xb8));
  return;
}


/* UIWidget::Update() */

void __thiscall UIWidget::Update(UIWidget *this)

{
  updateStateMachine(this);
  (**(code **)(*(long *)this + 0xe0))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget::drawPSDImage(Sexy::Graphics*, Sexy::RtWeakPtr<Sexy::Image>, int, int) */

void __thiscall
UIWidget::drawPSDImage
          (undefined8 param_1_00,Graphics *param_1,RtWeakPtr<Sexy::ResourceInfo> *param_3,
          int param_4,int param_5)

{
  ResourceInfo *pRVar1;
  int local_18;
  int local_14;
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  Sexy::BaseResource::GetRtId();
  GetImageOffset(&local_18,aRStack_10);
  Sexy::RtId::~RtId(aRStack_10);
  ConvertPSDImageOffsetToUISpace(&local_18,&local_14);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)param_3);
  Sexy::Graphics::DrawImage(param_1,(Image *)pRVar1,param_4 + local_18,param_5 + local_14);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget::drawPSDImage(Sexy::Graphics*, Sexy::RtWeakPtr<Sexy::Image>, int, int, int, int) */

void __thiscall
UIWidget::drawPSDImage
          (undefined8 param_1_00,Graphics *param_1,RtWeakPtr<Sexy::ResourceInfo> *param_3,
          int param_4,int param_5,int param_6,int param_7)

{
  ResourceInfo *pRVar1;
  int local_18;
  int local_14;
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  Sexy::BaseResource::GetRtId();
  GetImageOffset(&local_18,aRStack_10);
  Sexy::RtId::~RtId(aRStack_10);
  ConvertPSDImageOffsetToUISpace(&local_18,&local_14);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)param_3);
  Sexy::Graphics::DrawImage
            (param_1,(Image *)pRVar1,param_4 + local_18,param_5 + local_14,param_6,param_7);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget::drawPSDImageTiled(Sexy::Graphics*, Sexy::RtWeakPtr<Sexy::Image>, int, int, int, int) */

void __thiscall
UIWidget::drawPSDImageTiled
          (undefined8 param_1_00,Graphics *param_1,RtWeakPtr<Sexy::ResourceInfo> *param_3,
          int param_4,int param_5,int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LotteryResultProgressBar *this;
  SalesProgressBar *this_00;
  ResourceInfo *pRVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_40;
  int local_3c;
  Insets aIStack_38 [16];
  TRect aTStack_28 [16];
  RtId aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  Sexy::BaseResource::GetRtId();
  GetImageOffset(&local_40,aRStack_18);
  Sexy::RtId::~RtId(aRStack_18);
  ConvertPSDImageOffsetToUISpace(&local_40,&local_3c);
  this = (LotteryResultProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(this);
  this_00 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  iVar5 = SalesProgressBar::GetCurrentLevel(this_00);
  iVar2 = 0;
  if (iVar5 != 0) {
    iVar2 = param_7 / iVar5;
  }
  iVar3 = 0;
  if (iVar4 != 0) {
    iVar3 = param_6 / iVar4;
  }
  if (param_6 != iVar3 * iVar4) {
    iVar3 = iVar3 + 1;
  }
  if (param_7 != iVar2 * iVar5) {
    iVar2 = iVar2 + 1;
  }
  Sexy::Insets::Insets(aIStack_38,(Insets *)(param_1 + 0x28));
  Sexy::Insets::Insets((Insets *)aRStack_18,param_4 + local_40,param_5 + local_3c,param_6,param_7);
  Sexy::TRect<int>::Intersection((TRect *)aIStack_38);
  Sexy::Graphics::SetClipRect(param_1,aTStack_28);
  if (0 < iVar3) {
    iVar9 = 0;
    iVar8 = 0;
    do {
      if (0 < iVar2) {
        iVar7 = 0;
        iVar10 = 0;
        do {
          iVar10 = iVar10 + 1;
          pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)param_3);
          iVar1 = param_5 + local_3c + iVar7;
          iVar7 = iVar7 + iVar5;
          Sexy::Graphics::DrawImage(param_1,(Image *)pRVar6,param_4 + local_40 + iVar9,iVar1);
        } while (iVar10 != iVar2);
      }
      iVar9 = iVar9 + iVar4;
      iVar8 = iVar8 + 1;
    } while (iVar8 != iVar3);
  }
  Sexy::Graphics::SetClipRect(param_1,(TRect *)aIStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIWidget::TryUnlock(std::string const&) */

void __thiscall UIWidget::TryUnlock(UIWidget *this,string *param_1)

{
  char cVar1;
  int iVar2;
  RtObject *this_00;
  UIWidgetSheet *pUVar3;
  
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
  ;
  pUVar3 = Sexy::RtObject::Cast<UIWidgetSheet>(this_00);
  cVar1 = FUN_0547419c(pUVar3 + 0x80);
  if ((cVar1 == '\0') && (iVar2 = FUN_054748a4(param_1,pUVar3 + 0x80), iVar2 == 0)) {
    this[0x162] = (UIWidget)0x1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget::AddToRenderQueue(RenderQueue*) */

void __thiscall UIWidget::AddToRenderQueue(UIWidget *this,RenderQueue *param_1)

{
  short sVar1;
  RtObject *this_00;
  UIWidgetSheet *pUVar2;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
  ;
  pUVar2 = Sexy::RtObject::Cast<UIWidgetSheet>(this_00);
  sVar1 = *(short *)(pUVar2 + 0x5c);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x78);
  Sexy::Delegate1<Sexy::Graphics*>::Delegate1<UIWidget,void(UIWidget::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,sVar1 + 700000,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget::calculatePosition() */

void UIWidget::calculatePosition(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  UIWidget *in_x0;
  float *pfVar5;
  RtObject *this;
  UIWidgetSheet *pUVar6;
  float fVar7;
  float fVar8;
  float in_s1;
  float fVar9;
  float fVar10;
  float fVar11;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(in_x0 + 0x48));
  GetParentAnchorType(in_x0);
  fVar7 = (float)getAnchorOffset();
  fVar9 = in_s1;
  GetAnchorType(in_x0);
  fVar8 = (float)getAnchorOffset();
  pfVar5 = (float *)GetPositionOffset(in_x0);
  this = (RtObject *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x28));
  pUVar6 = Sexy::RtObject::Cast<UIWidgetSheet>(this);
  fVar10 = *pfVar5;
  fVar11 = pfVar5[1];
  if (pUVar6[0x7d] != (UIWidgetSheet)0x0) {
    cVar1 = (**(code **)(*gLawnApp + 0x360))(gLawnApp);
    if (cVar1 != '\0') {
      iVar2 = (**(code **)(*gLawnApp + 0x368))(gLawnApp);
      iVar3 = (**(code **)(*gLawnApp + 0xd8))(gLawnApp);
      iVar4 = EA::Text::PolygonFont::GetFontType();
      if (iVar3 == iVar4) {
        fVar10 = fVar10 + (float)iVar2;
      }
    }
  }
  iVar2 = FUN_044ce384(*(undefined4 *)(in_x0 + 0x38));
  iVar3 = FUN_044ce390(*(undefined4 *)(in_x0 + 0x3c));
  Sexy::Insets::Insets
            (aIStack_28,(int)((fVar7 - fVar8) + fVar10),(int)((in_s1 - fVar9) + fVar11),iVar2,iVar3)
  ;
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  SalesButton::Resize();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget::GetDrawRect() */

void UIWidget::GetDrawRect(void)

{
  long lVar1;
  bool bVar2;
  UIWidget *in_x0;
  Insets *pIVar3;
  Insets *in_x8;
  int local_18;
  int local_14;
  
  lVar1 = ___stack_chk_guard;
  pIVar3 = (Insets *)GetRect(in_x0);
  Sexy::Insets::Insets(in_x8,pIVar3);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(in_x0 + 0x48));
  if (bVar2) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x48));
    GetDrawRect();
    *(int *)in_x8 = *(int *)in_x8 + local_18;
    *(int *)(in_x8 + 4) = *(int *)(in_x8 + 4) + local_14;
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIWidget::Draw(Sexy::Graphics*) */

void UIWidget::Draw(Graphics *param_1)

{
  return;
}


/* non-virtual thunk to UIWidget::Draw(Sexy::Graphics*) */

void __thiscall UIWidget::Draw(UIWidget *this,Graphics *param_1)

{
  Draw((Graphics *)(this + -0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget::translateToWidgetPosition(Sexy::Graphics*) */

void __thiscall UIWidget::translateToWidgetPosition(UIWidget *this,Graphics *param_1)

{
  long lVar1;
  int local_18;
  int local_14;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  lVar1 = ___stack_chk_guard;
  GetDrawRect();
  Sexy::Graphics::Translate(param_1,local_18,local_14);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget::GetCenterPointOnScreen() */

void UIWidget::GetCenterPointOnScreen(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long in_x0;
  Point *in_x8;
  undefined4 local_18;
  undefined4 local_14;
  
  lVar1 = ___stack_chk_guard;
  GetDrawRect();
  iVar2 = FUN_044ce384(*(undefined4 *)(in_x0 + 0x38));
  iVar3 = FUN_044ce390(*(undefined4 *)(in_x0 + 0x3c));
  Sexy::Point::Point(in_x8,local_18 + iVar2 / 2,local_14 + iVar3 / 2);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIWidget::GetHitRect() */

void UIWidget::GetHitRect(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long in_x0;
  ResourceInfo *pRVar8;
  int *in_x8;
  float fVar9;
  float fVar10;
  
  GetDrawRect();
  pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(in_x0 + 0x28));
  iVar4 = FUN_044ce6a4(*(undefined4 *)(pRVar8 + 0x6c));
  iVar5 = FUN_044ce6a4(*(undefined4 *)(pRVar8 + 0x70));
  iVar1 = *in_x8;
  iVar2 = in_x8[1];
  uVar3 = *(undefined4 *)(pRVar8 + 0x74);
  *in_x8 = iVar4 + iVar1;
  in_x8[1] = iVar5 + iVar2;
  iVar6 = FUN_044ce6a4(uVar3);
  uVar3 = *(undefined4 *)(pRVar8 + 0x78);
  iVar6 = (iVar6 - iVar4) + in_x8[2];
  in_x8[2] = iVar6;
  iVar7 = FUN_044ce6a4(uVar3);
  fVar9 = (float)iVar6;
  fVar10 = (float)((iVar7 - iVar5) + in_x8[3]);
  in_x8[2] = (int)(fVar9 * 1.3);
  in_x8[3] = (int)(fVar10 * 1.3);
  *in_x8 = (int)((float)(iVar4 + iVar1) + fVar9 * -0.14999998);
  in_x8[1] = (int)((float)(iVar5 + iVar2) + fVar10 * -0.14999998);
  return;
}


/* UIWidget::ClearPositionOffsetOverride() */

void __thiscall UIWidget::ClearPositionOffsetOverride(UIWidget *this)

{
  this[0x80] = (UIWidget)0x0;
  calculatePosition();
  return;
}


/* UIWidget::SetPositionOffset(Sexy::SexyVector2) */

void UIWidget::SetPositionOffset(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined1 *)(param_3 + 0x80) = 1;
  *(ulong *)(param_3 + 0x70) = CONCAT44(param_2,param_1);
  calculatePosition();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget::ProcessedMouseUp(int, int, unsigned char) */

void UIWidget::ProcessedMouseUp(int param_1,int param_2,uchar param_3)

{
  char cVar1;
  ResourceInfo *pRVar2;
  undefined8 uVar3;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  uVar3 = 0;
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&m_mouseFocusWidget);
  if (cVar1 != '\0') {
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&m_mouseFocusWidget);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)&m_mouseFocusWidget,(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    cVar1 = (**(code **)(*(long *)pRVar2 + 0xa8))(pRVar2,param_1,param_2);
    if ((cVar1 != '\0') || (cVar1 = FUN_044ce39c(pRVar2[0x161]), cVar1 != '\0')) {
      uVar3 = 1;
      if (*(code **)(*(long *)pRVar2 + 0x98) != OnMouseUp) {
        (**(code **)(*(long *)pRVar2 + 0x98))(pRVar2,param_1,param_2);
      }
    }
    FUN_044ce510(pRVar2 + 0x160);
    FUN_044ce508(pRVar2 + 0x161);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


/* UIWidget::checkUnlocked() */

void __thiscall UIWidget::checkUnlocked(UIWidget *this)

{
  char cVar1;
  int iVar2;
  RtObject *this_00;
  UIWidgetSheet *pUVar3;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
  ;
  pUVar3 = Sexy::RtObject::Cast<UIWidgetSheet>(this_00);
  cVar1 = FUN_0547419c((string *)(pUVar3 + 0x80));
  if (cVar1 == '\0') {
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    if ((this_02 == (PlayerInfo *)0x0) ||
       (iVar2 = PlayerInfo::GetWorldMapEventStatus(this_02,(string *)(pUVar3 + 0x80)), iVar2 < 3)) {
      return;
    }
  }
  this[0x162] = (UIWidget)0x1;
  SetFlag<DebugLogFlags>(this + 0x68,1);
  return;
}


/* UIWidget::setStateHelper(StateDefinition<WidgetState> const&) */

void __thiscall UIWidget::setStateHelper(UIWidget *this,StateDefinition *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = StateMachine<WidgetState>::SetState((StateMachine<WidgetState> *)(this + 0xb8),param_1);
  if (cVar1 != '\0') {
    uVar2 = PVZ_T();
    *(undefined4 *)(this + 0x6c) = uVar2;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget::UIWidget() */

void __thiscall UIWidget::UIWidget(UIWidget *this)

{
  Renderable *extraout_x1;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GameObject::GameObject((GameObject *)this);
  Renderable::Renderable((Renderable *)(this + 0x10),extraout_x1);
  *(undefined ***)this = &PTR_GetClass_068544c0;
  *(undefined ***)(this + 0x10) = &PTR__UIWidget_06854660;
  Sexy::RtName::RtName((RtName *)(this + 0x18));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  Sexy::Insets::Insets((Insets *)(this + 0x30));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x70));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x78));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x88));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa0));
  Sexy::Insets::Insets((Insets *)(this + 0xa8));
  StateMachine<WidgetState>::StateMachine((StateMachine<WidgetState> *)(this + 0xb8));
  Sexy::Point::Point((Point *)(this + 0x158));
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  Sexy::FastCurve::SetOutRange((FastCurve *)local_18,0.0,0.0);
  *(undefined8 *)(this + 0x70) = local_18[0];
  Sexy::FastCurve::SetOutRange((FastCurve *)local_18,0.0,0.0);
  this[0x80] = (UIWidget)0x0;
  *(undefined8 *)(this + 0x78) = local_18[0];
  this[0x81] = (UIWidget)0x0;
  this[0x82] = (UIWidget)0x0;
  Sexy::Point::Point((Point *)local_18,0,0);
  this[0x160] = (UIWidget)0x0;
  *(undefined8 *)(this + 0x158) = local_18[0];
  this[0x161] = (UIWidget)0x0;
  this[0x162] = (UIWidget)0x0;
  Sexy::Insets::Insets((Insets *)local_18,0,0,0,0);
  SetAtlasImageData(this,0,(FastCurve *)local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIWidget::StaticNew() */

UIWidget * UIWidget::StaticNew(void)

{
  UIWidget *this;
  
  this = ::operator_new(0x168);
  UIWidget(this);
  return this;
}


/* UIWidget::StartLoad() */

void __thiscall UIWidget::StartLoad(UIWidget *this)

{
  char cVar1;
  
  cVar1 = std::vector<std::string,std::allocator<std::string>>::empty
                    ((vector<std::string,std::allocator<std::string>> *)(this + 0x88));
  if (cVar1 != '\0') {
    return;
  }
  LawnApp::PrepareLoadGroups(gLawnApp,(vector *)(this + 0x88));
  return;
}


/* UIWidget::onEnterState_Loading(WidgetState) */

void UIWidget::onEnterState_Loading(long param_1)

{
  char cVar1;
  
  cVar1 = std::vector<std::string,std::allocator<std::string>>::empty
                    ((vector<std::string,std::allocator<std::string>> *)(param_1 + 0x88));
  if (cVar1 != '\0') {
    return;
  }
  LawnApp::PrepareLoadGroups(gLawnApp,(vector *)(param_1 + 0x88));
  return;
}


/* UIWidget::CompleteLoad() */

void __thiscall UIWidget::CompleteLoad(UIWidget *this)

{
  char cVar1;
  long lVar2;
  
  cVar1 = isInState(this,0);
  if (cVar1 == '\0') {
    return;
  }
  cVar1 = std::vector<std::string,std::allocator<std::string>>::empty
                    ((vector<std::string,std::allocator<std::string>> *)(this + 0x88));
  if (cVar1 == '\0') {
    LawnApp::FinalizeGroupLoads(gLawnApp,(vector *)(this + 0x88));
  }
  lVar2 = *(long *)this;
  if (*(code **)(lVar2 + 0xd8) != onLoadComplete) {
    (**(code **)(lVar2 + 0xd8))(this);
    lVar2 = *(long *)this;
  }
  (**(code **)(lVar2 + 0xe8))(this,1);
  return;
}


/* UIWidget::IsLoadComplete() */

undefined1 __thiscall UIWidget::IsLoadComplete(UIWidget *this)

{
  char cVar1;
  
  cVar1 = std::vector<std::string,std::allocator<std::string>>::empty
                    ((vector<std::string,std::allocator<std::string>> *)(this + 0x88));
  if (cVar1 == '\0') {
    cVar1 = LawnApp::IsGroupLoadComplete(gLawnApp,(vector *)(this + 0x88));
    if (cVar1 == '\0') {
      return 0;
    }
  }
  cVar1 = isInState(this,0);
  if (cVar1 != '\0') {
    CompleteLoad(this);
  }
  return 1;
}


/* UIWidget::updateState_Loading() */

void __thiscall UIWidget::updateState_Loading(UIWidget *this)

{
  char cVar1;
  
  cVar1 = IsLoadComplete(this);
  if (cVar1 == '\0') {
    return;
  }
  CompleteLoad(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget::ResetUI() */

void UIWidget::ResetUI(void)

{
  bool bVar1;
  undefined8 uVar2;
  ResourceInfo *pRVar3;
  long *extraout_x0;
  PVZDB *this;
  CLuaEngine *this_00;
  int extraout_w1;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_28);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)&m_mouseFocusWidget,(RtWeakPtr *)a_Stack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_28);
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(a_Stack_28,uVar2,0x24);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)a_Stack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*((Iterator *)a_Stack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_38);
    if (pRVar3 != (ResourceInfo *)0x0) {
      nop();
      (**(code **)(*extraout_x0 + 0x48))();
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++((Iterator *)a_Stack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator((Iterator *)a_Stack_28);
  this = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::RunDeferredDeletions(this);
  this_00 = (CLuaEngine *)Sexy::LazySingleton<Lua::CLuaEngine>::GetInstancePtr();
  Lua::CLuaEngine::ExecuteTableFunction(this_00,"luaApp","ResetUIWidget");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget::GetWidgetBySheetName(std::string const&) */

void UIWidget::GetWidgetBySheetName(string *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 extraout_x0;
  int extraout_w1;
  undefined1 auVar4 [16];
  RtWeakPtr aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  RtName aRStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  auVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::StringToWString((Sexy *)param_1,auVar4._8_8_);
  Sexy::RtName::RtName(aRStack_28,(wstring *)aRStack_30);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_40,auVar4._0_8_,0x12,aRStack_28);
  Sexy::RtName::~RtName(aRStack_28);
  FUN_05476c50(aRStack_30);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_40);
  if (bVar1) {
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aRStack_28,uVar3,0x24);
    while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)aRStack_28), bVar1)
    {
      Sexy::RtDbTable::Iterator::operator*((Iterator *)aRStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      nop();
      PlantImitater::GetImitatedPlant();
      cVar2 = Sexy::RtWeakPtrBase::operator==
                        ((RtWeakPtrBase *)aRStack_30,(RtWeakPtrBase *)aRStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38)
        ;
        Sexy::RtDbTable::Iterator::~Iterator((Iterator *)aRStack_28);
        uVar3 = extraout_x0;
        goto LAB_044d0314;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::operator++((Iterator *)aRStack_28,extraout_w1);
    }
    uVar3 = 0;
    Sexy::RtDbTable::Iterator::~Iterator((Iterator *)aRStack_28);
  }
  else {
    uVar3 = 0;
  }
LAB_044d0314:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget::GetWidgetPtrBySheetName(std::string const&) */

void __thiscall UIWidget::GetWidgetPtrBySheetName(UIWidget *this,string *param_1)

{
  long lVar1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = GetWidgetBySheetName((string *)this);
  if (lVar1 == 0) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
  }
  else {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget::ShowWidgets(bool, ...) */

void __thiscall UIWidget::ShowWidgets(UIWidget *this,bool param_1,...)

{
  int iVar1;
  long lVar2;
  UIWidget *this_00;
  char *__s;
  string asStack_f0 [8];
  long *plVar3;
  int local_d0;
  
  lVar2 = ___stack_chk_guard;
  __s = (char *)(ulong)param_1;
  local_d0 = -0x30;
  if (__s != (char *)0x0) {
    plVar3 = (long *)register0x00000008;
    do {
      while( true ) {
        if (*__s != '\0') {
          std::string::string(asStack_f0,__s);
          this_00 = (UIWidget *)GetWidgetBySheetName(asStack_f0);
          std::string::~string(asStack_f0);
          nop();
          if (this_00 != (UIWidget *)0x0) {
            SetVisible(this_00,SUB81(this,0));
          }
        }
        iVar1 = local_d0;
        if ((-1 < local_d0) || (iVar1 = local_d0 + 8, 0 < iVar1)) break;
        __s = *(char **)(&stack0x00000000 + local_d0);
        local_d0 = iVar1;
        if (__s == (char *)0x0) goto LAB_044d0518;
      }
      local_d0 = iVar1;
      __s = (char *)*plVar3;
      plVar3 = plVar3 + 1;
    } while (__s != (char *)0x0);
  }
LAB_044d0518:
  if (lVar2 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget::GetMouseOverWidget(int, int, unsigned char) */

void UIWidget::GetMouseOverWidget(int param_1,int param_2,uchar param_3)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  UIWidget *this;
  UIWidget *pUVar5;
  int extraout_w1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar4,0x24);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      pUVar5 = (UIWidget *)0x0;
LAB_044d0638:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(pUVar5);
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    nop();
    cVar2 = (**(code **)(*(long *)this + 0xa8))();
    if ((cVar2 != '\0') && (bVar3 = GetInputPriority(this), bVar3 <= param_3)) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      pUVar5 = this;
      goto LAB_044d0638;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* UIWidget::ProcessedTouch(Sexy::Touch const&) */

undefined1 UIWidget::ProcessedTouch(Touch *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  long *plVar3;
  
  plVar3 = (long *)GetMouseOverWidget(*(int *)(param_1 + 0x10) +
                                      *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x48),
                                      *(int *)(param_1 + 0x14) +
                                      *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x4c),200);
  if (plVar3 != (long *)0x0) {
    bVar1 = std::function::operator_cast_to_bool((function *)m_cosumedTouch);
    if (bVar1) {
      std::function<void()>::operator()((function<void()> *)m_cosumedTouch);
    }
    uVar2 = (**(code **)(*plVar3 + 0xa0))(plVar3,param_1);
    return uVar2;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget::ProcessedMouseDown(int, int, unsigned char) */

void UIWidget::ProcessedMouseDown(int param_1,int param_2,uchar param_3)

{
  long *plVar1;
  undefined8 uVar2;
  RtWeakPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)GetMouseOverWidget(param_1,param_2,param_3);
  if (plVar1 == (long *)0x0) {
    uVar2 = 0;
  }
  else {
    if (*(code **)(*plVar1 + 0x90) != OnMouseDown) {
      (**(code **)(*plVar1 + 0x90))(plVar1,param_1,param_2);
    }
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)&m_mouseFocusWidget,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    uVar2 = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget::UpdateUI() */

void UIWidget::UpdateUI(void)

{
  bool bVar1;
  undefined8 uVar2;
  UIWidget *this;
  int extraout_w1;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x24);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    nop();
    Update(this);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget::IsLoadCompleteForAllWidgets() */

void UIWidget::IsLoadCompleteForAllWidgets(void)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  UIWidget *this;
  int extraout_w1;
  undefined1 uVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x24);
  do {
    bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar2) {
      uVar4 = 1;
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
LAB_044d092c:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar4);
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    nop();
    cVar1 = IsLoadComplete(this);
    if (cVar1 == '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      uVar4 = 0;
      goto LAB_044d092c;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget::AddToRenderQueueForAllWidgets(RenderQueue*) */

void UIWidget::AddToRenderQueueForAllWidgets(RenderQueue *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  UIWidget *this;
  int extraout_w1;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x24);
  while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar2) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    nop();
    cVar1 = IsVisible(this);
    if ((cVar1 != '\0') && (cVar1 = FUN_044ceaf8(*(undefined4 *)(this + 0x68)), cVar1 == '\0')) {
      (**(code **)(*(long *)this + 0x80))(this,param_1);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIWidget::GetUIWidgetByRtId(Sexy::RtId) */

void UIWidget::GetUIWidgetByRtId(RtId *param_1)

{
  PVZDB *pPVar1;
  RtDbTable *this;
  
  pPVar1 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  this = (RtDbTable *)PVZDB::GetTable(pPVar1,0x24);
  Sexy::RtDbTable::GetObjectForId(this,param_1);
  nop();
  return;
}


/* UIWidget::UnloadResources() */

void __thiscall UIWidget::UnloadResources(UIWidget *this)

{
  vector<std::string,std::allocator<std::string>> *this_00;
  char cVar1;
  
  this_00 = (vector<std::string,std::allocator<std::string>> *)(this + 0x88);
  cVar1 = std::vector<std::string,std::allocator<std::string>>::empty(this_00);
  if (cVar1 != '\0') {
    return;
  }
  LawnApp::DeleteGroups(gLawnApp,(vector *)this_00);
  std::vector<std::string,std::allocator<std::string>>::clear(this_00);
  return;
}


/* UIWidget::~UIWidget() */

void __thiscall UIWidget::~UIWidget(UIWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_068544c0;
  *(undefined ***)(this + 0x10) = &PTR__UIWidget_06854660;
  UnloadResources(this);
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0xb8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa0));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x88));
  std::vector<Sexy::RtId,std::allocator<Sexy::RtId>>::~vector
            ((vector<Sexy::RtId,std::allocator<Sexy::RtId>> *)(this + 0x50));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  Sexy::RtName::~RtName((RtName *)(this + 0x18));
  GameObject::~GameObject((GameObject *)this);
  return;
}


/* non-virtual thunk to UIWidget::~UIWidget() */

void __thiscall UIWidget::~UIWidget(UIWidget *this)

{
  ~UIWidget(this + -0x10);
  return;
}


/* UIWidget::~UIWidget() */

void __thiscall UIWidget::~UIWidget(UIWidget *this)

{
  ~UIWidget(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIWidget::~UIWidget() */

void __thiscall UIWidget::~UIWidget(UIWidget *this)

{
  ~UIWidget(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget::RemoveChildWidget(UIWidget*) */

void UIWidget::RemoveChildWidget(UIWidget *param_1)

{
  char cVar1;
  ulong uVar2;
  exception_ptr *peVar3;
  UIWidget *in_x1;
  ulong uVar4;
  uint uVar5;
  undefined8 uVar6;
  exception_ptr aeStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  uVar5 = 0;
  Sexy::RtMixedPtrBase::GetId();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  uVar2 = FUN_044ce460(uVar6,*(undefined8 *)(param_1 + 0x58));
  do {
    uVar4 = (ulong)uVar5;
    if (uVar2 <= uVar4) {
      Sexy::RtId::~RtId((RtId *)aeStack_28);
LAB_044d0ebc:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    peVar3 = (exception_ptr *)FUN_044ce484(uVar6,uVar4);
    cVar1 = std::__exception_ptr::operator==(peVar3,aeStack_28);
    if (cVar1 != '\0') {
      local_20 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(param_1 + 0x50));
      local_18 = __gnu_cxx::
                 __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                 ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                              *)&local_20,uVar4);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      std::vector<Sexy::RtId,std::allocator<Sexy::RtId>>::erase
                ((vector<Sexy::RtId,std::allocator<Sexy::RtId>> *)(param_1 + 0x50),local_10);
      DetachFromParent(in_x1);
      Sexy::RtId::~RtId((RtId *)aeStack_28);
      goto LAB_044d0ebc;
    }
    uVar5 = uVar5 + 1;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget::DetachFromParent() */

void __thiscall UIWidget::DetachFromParent(UIWidget *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  UIWidget *pUVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x48);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)this_00);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    calculatePosition();
    pUVar2 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    RemoveChildWidget(pUVar2);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget::DestroyChildren() */

void __thiscall UIWidget::DestroyChildren(UIWidget *this)

{
  int iVar1;
  UIWidget *this_00;
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  while (iVar1 = GetChildCount(this), 0 < iVar1) {
    GetChildId((int)this);
    this_00 = (UIWidget *)GetUIWidgetByRtId(aRStack_10);
    Sexy::RtId::~RtId(aRStack_10);
    DetachFromParent(this_00);
    (**(code **)(*(long *)this_00 + 0x48))(this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIWidget::onDestroy() */

void __thiscall UIWidget::onDestroy(UIWidget *this)

{
  DestroyChildren(this);
  DetachFromParent(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget::AddChildWidget(UIWidget*) */

void __thiscall UIWidget::AddChildWidget(UIWidget *this,UIWidget *param_1)

{
  char cVar1;
  ulong uVar2;
  exception_ptr *peVar3;
  uint uVar4;
  undefined8 uVar5;
  exception_ptr aeStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  uVar4 = 0;
  Sexy::RtMixedPtrBase::GetId();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  uVar5 = *(undefined8 *)(this + 0x50);
  uVar2 = FUN_044ce460(uVar5,*(undefined8 *)(this + 0x58));
  do {
    if (uVar2 <= uVar4) {
      std::vector<Sexy::RtId,std::allocator<Sexy::RtId>>::push_back
                ((vector<Sexy::RtId,std::allocator<Sexy::RtId>> *)(this + 0x50),(RtId *)aeStack_18);
      SetParentWidget(param_1,this);
      Sexy::RtId::~RtId((RtId *)aeStack_18);
LAB_044d117c:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    peVar3 = (exception_ptr *)FUN_044ce484(uVar5);
    cVar1 = std::__exception_ptr::operator==(peVar3,aeStack_18);
    if (cVar1 != '\0') {
      Sexy::RtId::~RtId((RtId *)aeStack_18);
      goto LAB_044d117c;
    }
    uVar4 = uVar4 + 1;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget::SetParentWidget(UIWidget*) */

void __thiscall UIWidget::SetParentWidget(UIWidget *this,UIWidget *param_1)

{
  char cVar1;
  RtWeakPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (UIWidget *)0x0) {
    DetachFromParent(this);
  }
  else {
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtWeakPtrBase::operator==(aRStack_10,(RtWeakPtrBase *)(this + 0x48));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (cVar1 == '\0') {
      DetachFromParent(this);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x48),aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      AddChildWidget(param_1,this);
      calculatePosition();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget::addToLoadingResourcesGroupList(std::string const&) */

void __thiscall UIWidget::addToLoadingResourcesGroupList(UIWidget *this,string *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x88);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                       (uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    if (local_8 == ___stack_chk_guard) {
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)this_00,param_1);
      return;
    }
  }
  else if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIWidget::PrepForLoading() */

void __thiscall UIWidget::PrepForLoading(UIWidget *this)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = getWidgetStateSerialization(this);
  if (iVar1 != -1) {
    return;
  }
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  lVar3 = FUN_05474184((string *)(lVar2 + 0x28));
  if (lVar3 != 0) {
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)(this + 0x88),
               (string *)(lVar2 + 0x28));
  }
  (**(code **)(*(long *)this + 200))(this);
  (**(code **)(*(long *)this + 0xe8))(this,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget::CreateWidget(std::string const&, Sexy::RtName, bool) */

void UIWidget::CreateWidget(undefined8 param_1,RtName *param_2,bool param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  UIWidget *this;
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = (char *)FUN_0547429c();
  uVar2 = Sexy::RtClass::StaticGetClassNamed(pcVar1);
  GameObject::Create(uVar2,0x24);
  nop();
  Sexy::RtName::RtName(aRStack_18,param_2);
  SetPropertySheet(this,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  checkUnlocked(this);
  PrepForLoading(this);
  SetVisible(this,param_3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget::CreateWidget(Sexy::RtName, bool) */

void UIWidget::CreateWidget(RtName *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  long lVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtName::RtName(aRStack_18,param_1);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,uVar1,0x12,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Sexy::RtName::RtName(aRStack_18,param_1);
  uVar1 = CreateWidget(lVar2 + 0x10,aRStack_18,param_2);
  Sexy::RtName::~RtName(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget::initializeFromPropertySheet() */

void __thiscall UIWidget::initializeFromPropertySheet(UIWidget *this)

{
  string *this_00;
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  RtObject *this_01;
  UIWidgetSheet *pUVar5;
  long lVar6;
  UIWidget *pUVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  string asStack_20 [8];
  undefined8 local_18 [2];
  long local_8;
  
  fVar12 = 1.0;
  local_8 = ___stack_chk_guard;
  this_01 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
  ;
  pUVar5 = Sexy::RtObject::Cast<UIWidgetSheet>(this_01);
  if (pUVar5[0x69] == (UIWidgetSheet)0x0) {
    fVar12 = (float)GetDeviceUIWidgetScaleValue();
  }
  uVar2 = *(ushort *)(pUVar5 + 0x30);
  uVar3 = *(ushort *)(pUVar5 + 0x32);
  if (*(short *)(pUVar5 + 0x34) != 0) {
    uVar2 = FUN_044ce680();
  }
  uVar8 = (uint)uVar2;
  if (*(short *)(pUVar5 + 0x5e) != 0) {
    uVar2 = FUN_044ce680();
    fVar10 = (float)FUN_044ce45c(*(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0xb58));
    uVar8 = (uint)((float)uVar2 * fVar10);
  }
  if (*(short *)(pUVar5 + 0x36) != 0) {
    uVar3 = FUN_044ce680();
  }
  uVar9 = (uint)uVar3;
  if (pUVar5[0x68] != (UIWidgetSheet)0x0) {
    fVar10 = (float)FUN_044ce6b8(*(undefined4 *)(pUVar5 + 0x60));
    fVar11 = (float)FUN_044ce6b8(*(undefined4 *)(pUVar5 + 100));
    Sexy::FastCurve::SetOutRange((FastCurve *)local_18,fVar10,fVar11);
    *(undefined8 *)(this + 0x78) = local_18[0];
    Sexy::SexyVector2::operator*=((SexyVector2 *)(this + 0x78),fVar12);
  }
  if (pUVar5[0x40] != (UIWidgetSheet)0x0) {
    if (pUVar5[0x7d] != (UIWidgetSheet)0x0) {
      cVar1 = (**(code **)(*(long *)gLawnApp + 0x360))(gLawnApp);
      if (cVar1 != '\0') {
        iVar4 = (**(code **)(*(long *)gLawnApp + 0x368))(gLawnApp);
        uVar9 = *(uint *)(gLawnApp + 0xd8);
        uVar8 = *(int *)(gLawnApp + 0xd4) - iVar4;
        goto LAB_044d1644;
      }
    }
    uVar8 = *(uint *)(gLawnApp + 0xd4);
    uVar9 = *(uint *)(gLawnApp + 0xd8);
  }
LAB_044d1644:
  if (pUVar5[0x58] != (UIWidgetSheet)0x0) {
    cVar1 = (**(code **)(*(long *)gLawnApp + 0x360))(gLawnApp);
    if (cVar1 == '\0') {
      uVar8 = *(uint *)(gLawnApp + 0xd4);
    }
    else {
      iVar4 = (**(code **)(*(long *)gLawnApp + 0x368))(gLawnApp);
      uVar8 = *(int *)(gLawnApp + 0xd4) - iVar4;
    }
  }
  if (pUVar5[0x59] != (UIWidgetSheet)0x0) {
    uVar9 = *(uint *)(gLawnApp + 0xd8);
  }
  lVar6 = FUN_05474178((string *)(pUVar5 + 0x38));
  if ((lVar6 != 0) &&
     (lVar6 = LawnApp::GetUIImageInfoFromStringId(gLawnApp,(string *)(pUVar5 + 0x38)), lVar6 != 0))
  {
    uVar8 = (uint)*(ushort *)(lVar6 + 0x8c);
    uVar9 = (uint)*(ushort *)(lVar6 + 0x8e);
  }
  lVar6 = FUN_05474178((string *)(pUVar5 + 0x48));
  if ((lVar6 != 0) &&
     (lVar6 = LawnApp::GetUIImageInfoFromStringId(gLawnApp,(string *)(pUVar5 + 0x48)), lVar6 != 0))
  {
    uVar8 = (uint)*(ushort *)(lVar6 + 0x8c);
  }
  lVar6 = FUN_05474178((string *)(pUVar5 + 0x50));
  if ((lVar6 != 0) &&
     (lVar6 = LawnApp::GetUIImageInfoFromStringId(gLawnApp,(string *)(pUVar5 + 0x50)), lVar6 != 0))
  {
    uVar9 = (uint)*(ushort *)(lVar6 + 0x8e);
  }
  if (pUVar5[0x40] == (UIWidgetSheet)0x0) {
    if ((pUVar5[0x58] == (UIWidgetSheet)0x0) && (*(short *)(pUVar5 + 0x5e) == 0)) {
      uVar8 = (uint)((float)(int)uVar8 * fVar12);
    }
    if (pUVar5[0x59] == (UIWidgetSheet)0x0) {
      uVar9 = (uint)((float)(int)uVar9 * fVar12);
    }
  }
  this_00 = (string *)(pUVar5 + 0x18);
  FUN_044ce388(this + 0x38,uVar8);
  FUN_044ce394(this + 0x3c,uVar9);
  this[0x80] = (UIWidget)0x0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  lVar6 = FUN_05474178(this_00);
  if (lVar6 == 0) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_18);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x48),(RtWeakPtr *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    calculatePosition();
  }
  else {
    pUVar7 = (UIWidget *)GetWidgetBySheetName(this_00);
    if (pUVar7 == (UIWidget *)0x0) {
      Sexy::StringToWString((Sexy *)this_00,asStack_20);
      Sexy::RtName::RtName((RtName *)local_18,(wstring *)asStack_20);
      pUVar7 = (UIWidget *)CreateWidget((RtName *)local_18,1);
      Sexy::RtName::~RtName((RtName *)local_18);
      FUN_05476c50(asStack_20);
    }
    SetParentWidget(this,pUVar7);
  }
  this[0x82] = (UIWidget)0x0;
  if ('\0' < (char)pUVar5[0x5a]) {
    SetFlag<DebugLogFlags>(this + 0x68,4,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget::SetPropertySheet(Sexy::RtName) */

void __thiscall UIWidget::SetPropertySheet(UIWidget *this,RtName *param_2)

{
  undefined8 uVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtName::RtName(aRStack_18,param_2);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,uVar1,0x12,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_044ce2b0(this + 0x18,param_2);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x28),(RtWeakPtrBase *)aRStack_20);
  initializeFromPropertySheet(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget::GetLoadedResourceGroupsForAllWidgets(std::vector<std::string,
   std::allocator<std::string > >&) */

void UIWidget::GetLoadedResourceGroupsForAllWidgets(vector *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  long extraout_x0;
  undefined8 uVar3;
  int extraout_w1;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x24);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)&local_30);
    Sexy::RtId::~RtId((RtId *)&local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    nop();
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_30,(__normal_iterator *)&local_38);
    uVar2 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(extraout_x0 + 0x88));
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(extraout_x0 + 0x88));
    std::vector<std::string,std::allocator<std::string>>::
    insert<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,void>
              ((vector<std::string,std::allocator<std::string>> *)param_1,local_30,uVar2,uVar3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget::GetWidgetGroupBySheetName(std::string const&) */

void __thiscall UIWidget::GetWidgetGroupBySheetName(UIWidget *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  int extraout_w1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  undefined1 auVar4 [16];
  RtWeakPtr aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  UIWidget *local_38;
  RtId aRStack_30 [8];
  RtName aRStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  auVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::StringToWString((Sexy *)this,auVar4._8_8_);
  Sexy::RtName::RtName(aRStack_28,(wstring *)aRStack_30);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_48,auVar4._0_8_,0x12,aRStack_28);
  Sexy::RtName::~RtName(aRStack_28);
  FUN_05476c50(aRStack_30);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_48);
  if (bVar1) {
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aRStack_28,uVar3,0x24);
    while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)aRStack_28), bVar1)
    {
      Sexy::RtDbTable::Iterator::operator*((Iterator *)aRStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
      nop();
      PlantImitater::GetImitatedPlant();
      cVar2 = Sexy::RtWeakPtrBase::operator==
                        ((RtWeakPtrBase *)aRStack_30,(RtWeakPtrBase *)aRStack_48);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      if (cVar2 != '\0') {
        std::vector<UIWidget*,std::allocator<UIWidget*>>::push_back
                  ((vector<UIWidget*,std::allocator<UIWidget*>> *)in_x8,&local_38);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      Sexy::RtDbTable::Iterator::operator++((Iterator *)aRStack_28,extraout_w1);
    }
    Sexy::RtDbTable::Iterator::~Iterator((Iterator *)aRStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  }
  else {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget::StaticClassInit() */

void UIWidget::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<WidgetState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<WidgetState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"UIWidget");
      (*pcVar4)(plVar1,asStack_150,FUN_044d2408,0x168,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<WidgetState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x100);
  Sexy::Delegate1<WidgetState>::Delegate1<UIWidget,void(UIWidget::*)(WidgetState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x108);
  Sexy::Delegate0::Delegate0<UIWidget,void(UIWidget::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x110);
  Sexy::Delegate1<WidgetState>::Delegate1<UIWidget,void(UIWidget::*)(WidgetState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"WS_Loading");
  StateDefinition<WidgetState>::StateDefinition
            (aSStack_a8,0,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_044d1e38(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x118);
  Sexy::Delegate1<WidgetState>::Delegate1<UIWidget,void(UIWidget::*)(WidgetState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x120);
  Sexy::Delegate0::Delegate0<UIWidget,void(UIWidget::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x128);
  Sexy::Delegate1<WidgetState>::Delegate1<UIWidget,void(UIWidget::*)(WidgetState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"WS_Initializing");
  StateDefinition<WidgetState>::StateDefinition
            (aSStack_a8,1,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_044d1e38(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x130);
  Sexy::Delegate1<WidgetState>::Delegate1<UIWidget,void(UIWidget::*)(WidgetState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x138);
  Sexy::Delegate0::Delegate0<UIWidget,void(UIWidget::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x140);
  Sexy::Delegate1<WidgetState>::Delegate1<UIWidget,void(UIWidget::*)(WidgetState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"WS_Ready");
  StateDefinition<WidgetState>::StateDefinition
            (aSStack_a8,2,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_044d1e38(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x148);
  Sexy::Delegate1<WidgetState>::Delegate1<UIWidget,void(UIWidget::*)(WidgetState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x150);
  Sexy::Delegate0::Delegate0<UIWidget,void(UIWidget::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x158);
  Sexy::Delegate1<WidgetState>::Delegate1<UIWidget,void(UIWidget::*)(WidgetState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"WS_NotReady");
  StateDefinition<WidgetState>::StateDefinition
            (aSStack_a8,3,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_044d1e38(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x160);
  Sexy::Delegate1<WidgetState>::Delegate1<UIWidget,void(UIWidget::*)(WidgetState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x168);
  Sexy::Delegate0::Delegate0<UIWidget,void(UIWidget::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x170);
  Sexy::Delegate1<WidgetState>::Delegate1<UIWidget,void(UIWidget::*)(WidgetState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"WS_Pressed");
  StateDefinition<WidgetState>::StateDefinition
            (aSStack_a8,4,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_044d1e38(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x178);
  Sexy::Delegate1<WidgetState>::Delegate1<UIWidget,void(UIWidget::*)(WidgetState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x180);
  Sexy::Delegate0::Delegate0<UIWidget,void(UIWidget::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x188);
  Sexy::Delegate1<WidgetState>::Delegate1<UIWidget,void(UIWidget::*)(WidgetState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"WS_Paused");
  StateDefinition<WidgetState>::StateDefinition
            (aSStack_a8,5,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_044d1e38(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* UIWidget::StaticGetClass() */

long * UIWidget::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"UIWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UIWidget::GetClass() const */

long * UIWidget::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"UIWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget::setState(WidgetState) */

void __thiscall UIWidget::setState(UIWidget *this,undefined4 param_2)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<WidgetState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<WidgetState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<WidgetState>::GetStateDefinition
                     ((StateMachineTable<WidgetState> *)pSVar2,param_2);
  StateDefinition<WidgetState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<WidgetState>::SetContext(aSStack_a8,this);
  setStateHelper(this,(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget::setWidgetStateSerialization(int) */

void __thiscall UIWidget::setWidgetStateSerialization(UIWidget *this,int param_1)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<WidgetState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<WidgetState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<WidgetState>::GetStateDefinition
                     ((StateMachineTable<WidgetState> *)pSVar2,param_1);
  StateDefinition<WidgetState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<WidgetState>::SetContext(aSStack_a8,this);
  StateMachine<DPEState>::SetStateNoTransition
            ((StateMachine<DPEState> *)(this + 0xb8),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIWidget::GetPropertySheetPtrName() */

RtName * UIWidget::GetPropertySheetPtrName(void)

{
  long in_x0;
  RtName *in_x8;
  
  Sexy::RtName::RtName(in_x8,(RtName *)(in_x0 + 0x18));
  return in_x8;
}

