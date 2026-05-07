// Class: LevelOfTheDay_ProgressWidget


/* LevelOfTheDay_ProgressWidget::SetDestinationLocation(Sexy::Point) */

void __thiscall
LevelOfTheDay_ProgressWidget::SetDestinationLocation
          (LevelOfTheDay_ProgressWidget *this,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined8 *)(this + 0x100) = uVar1;
  *(int *)(this + 0x4c) = (int)((ulong)uVar1 >> 0x20);
  return;
}


/* LevelOfTheDay_ProgressWidget::onSlideOutComplete() */

void __thiscall LevelOfTheDay_ProgressWidget::onSlideOutComplete(LevelOfTheDay_ProgressWidget *this)

{
  this[0x6c] = (LevelOfTheDay_ProgressWidget)0x0;
  nop();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDay_ProgressWidget::Draw(Sexy::Graphics*) */

void LevelOfTheDay_ProgressWidget::Draw(Graphics *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  LineBreakCategory *pLVar5;
  Graphics *in_x1;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  wchar16 *pwVar6;
  undefined1 auVar7 [16];
  GraphicsAutoState aGStack_28 [8];
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_28,in_x1);
  Sexy::Insets::Insets((Insets *)local_18,(Insets *)(param_1 + 0xd8));
  pLVar5 = (LineBreakCategory *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b74748);
  Draw9SliceImage();
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0xe8));
  while( true ) {
    local_18[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(param_1 + 0xe8));
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)local_18);
    if (!bVar3) break;
    auVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    pwVar6 = (wchar16 *)*auVar7._0_8_;
    cVar4 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar6,auVar7._8_8_,pLVar5,in_x3,in_x4);
    if (cVar4 == '\0') {
      iVar1 = *(int *)(pwVar6 + 0x24);
      iVar2 = *(int *)(pwVar6 + 0x28);
      Sexy::Color::Color((Color *)local_18,0x2d,0x2d,0x2d);
      Sexy::Graphics::SetColor(in_x1,(Color *)local_18);
      pLVar5 = (LineBreakCategory *)(ulong)*(uint *)(param_1 + 0xdc);
      in_x4 = (LineBreakCategory *)(ulong)*(uint *)(param_1 + 0xe4);
      in_x3 = (LineBreakCategory *)0x3;
      Sexy::Insets::Insets
                ((Insets *)local_18,iVar1 + iVar2,*(uint *)(param_1 + 0xdc),3,
                 *(uint *)(param_1 + 0xe4));
      Sexy::Graphics::FillRect(in_x1,(TRect *)local_18);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelOfTheDay_ProgressWidget::~LevelOfTheDay_ProgressWidget() */

void __thiscall
LevelOfTheDay_ProgressWidget::~LevelOfTheDay_ProgressWidget(LevelOfTheDay_ProgressWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06925b30;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,false);
  std::vector<LevelOfTheDay_ProgressBoxWidget*,std::allocator<LevelOfTheDay_ProgressBoxWidget*>>::
  clear((vector<LevelOfTheDay_ProgressBoxWidget*,std::allocator<LevelOfTheDay_ProgressBoxWidget*>> *
        )(this + 0xe8));
  std::vector<LevelOfTheDay_ProgressBoxWidget*,std::allocator<LevelOfTheDay_ProgressBoxWidget*>>::
  ~vector((vector<LevelOfTheDay_ProgressBoxWidget*,std::allocator<LevelOfTheDay_ProgressBoxWidget*>>
           *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelOfTheDay_ProgressWidget::~LevelOfTheDay_ProgressWidget() */

void __thiscall
LevelOfTheDay_ProgressWidget::~LevelOfTheDay_ProgressWidget(LevelOfTheDay_ProgressWidget *this)

{
  ~LevelOfTheDay_ProgressWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDay_ProgressWidget::setState(LODBoxState) */

void __thiscall
LevelOfTheDay_ProgressWidget::setState(LevelOfTheDay_ProgressWidget *this,int param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined8 local_50 [3];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xd4) != param_2) {
    if (*(int *)(this + 0xd4) == 3) {
      Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x118));
      *(int *)(this + 0xd4) = param_2;
    }
    else {
      *(int *)(this + 0xd4) = param_2;
    }
    if (param_2 == 1) {
      Sexy::Point::Point((Point *)local_50,*(int *)(this + 0x48),*(int *)(this + 0x4c));
      *(undefined8 *)(this + 0x108) = local_50[0];
      uVar2 = PVZ_RealT();
      *(undefined4 *)(this + 0xd4) = 3;
      *(undefined4 *)(this + 0x110) = uVar2;
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onSlideInComplete);
      Sexy::Delegate0::
      Delegate0<LevelOfTheDay_ProgressWidget,void(LevelOfTheDay_ProgressWidget::*)()>
                (aDStack_38,(Point *)local_50);
      Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
                ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x118),(Delegate2 *)aDStack_38);
      pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar1,"Play_UI_LOD_Progress");
    }
    else if (param_2 == 2) {
      Sexy::Point::Point((Point *)local_50,*(int *)(this + 0x48),*(int *)(this + 0x4c));
      *(undefined8 *)(this + 0x108) = local_50[0];
      Sexy::Point::Point((Point *)local_50,
                         *(int *)(gLawnApp + 0x71c) + *(int *)(gLawnApp + 0x724) +
                         *(int *)(this + 0x50),*(int *)(this + 0x4c));
      *(undefined8 *)(this + 0x100) = local_50[0];
      uVar2 = PVZ_RealT();
      *(undefined4 *)(this + 0x110) = uVar2;
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onSlideOutComplete);
      Sexy::Delegate0::
      Delegate0<LevelOfTheDay_ProgressWidget,void(LevelOfTheDay_ProgressWidget::*)()>
                (aDStack_38,(Point *)local_50);
      Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
                ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x118),(Delegate2 *)aDStack_38);
      *(undefined4 *)(this + 0xd4) = 3;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* LevelOfTheDay_ProgressWidget::Update() */

void __thiscall LevelOfTheDay_ProgressWidget::Update(LevelOfTheDay_ProgressWidget *this)

{
  int iVar1;
  float fVar2;
  
  if (*(int *)(this + 0xd4) == 3) {
    fVar2 = (float)PVZ_RealT();
    if (0.5 <= fVar2 - *(float *)(this + 0x110)) {
      *(undefined4 *)(this + 0x48) = *(undefined4 *)(this + 0x100);
      setState(this,4);
      return;
    }
    iVar1 = CurveLerp<int>(0,this + 0x108,this + 0x100,1);
    *(int *)(this + 0x48) = iVar1;
  }
  return;
}


/* LevelOfTheDay_ProgressWidget::SlideIn() */

void __thiscall LevelOfTheDay_ProgressWidget::SlideIn(LevelOfTheDay_ProgressWidget *this)

{
  setState(this,1);
  return;
}


/* LevelOfTheDay_ProgressWidget::SlideOut() */

void __thiscall LevelOfTheDay_ProgressWidget::SlideOut(LevelOfTheDay_ProgressWidget *this)

{
  setState(this,2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDay_ProgressWidget::onSlideInComplete() */

void __thiscall LevelOfTheDay_ProgressWidget::onSlideInComplete(LevelOfTheDay_ProgressWidget *this)

{
  int *piVar1;
  undefined8 *puVar2;
  int local_10 [2];
  long local_8;
  
  local_10[0] = 0;
  local_10[1] = 0;
  local_8 = ___stack_chk_guard;
  piVar1 = eastl::max_alt<int>(local_10,local_10 + 1);
  puVar2 = (undefined8 *)FUN_049b9350(*(undefined8 *)(this + 0xe8),(long)*piVar1);
  if (local_8 == ___stack_chk_guard) {
    LevelOfTheDay_ProgressBoxWidget::StartCompleteTransition
              ((LevelOfTheDay_ProgressBoxWidget *)*puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDay_ProgressWidget::layoutWidget() */

void __thiscall LevelOfTheDay_ProgressWidget::layoutWidget(LevelOfTheDay_ProgressWidget *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LevelOfTheDay_ProgressBoxWidget *pLVar6;
  int iVar7;
  int iVar8;
  LevelOfTheDay_ProgressBoxWidget *local_30;
  Insets aIStack_28 [16];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar8 = 0;
  iVar4 = FUN_049b9540(0x24e);
  iVar5 = FUN_049b9540(0x87);
  (**(code **)(*(long *)this + 0x198))(this,0,0,iVar4,iVar5);
  iVar2 = *(int *)(this + 0x48);
  iVar3 = *(int *)(this + 0x4c);
  iVar7 = iVar2 + 5;
  do {
    iVar1 = iVar7 + 0x74;
    iVar8 = iVar8 + 1;
    Sexy::Insets::Insets((Insets *)&local_18,iVar7,iVar3 + 5,0x74,0x7d);
    FUN_049b9824(aIStack_28,(Insets *)&local_18);
    Sexy::Insets::Insets((Insets *)&local_18,aIStack_28);
    pLVar6 = ::operator_new(0x120);
    LevelOfTheDay_ProgressBoxWidget::LevelOfTheDay_ProgressBoxWidget
              (pLVar6,(Insets *)&local_18,iVar8,*(undefined8 *)(this + 0x148));
    local_30 = pLVar6;
    std::vector<LevelOfTheDay_ProgressBoxWidget*,std::allocator<LevelOfTheDay_ProgressBoxWidget*>>::
    push_back((vector<LevelOfTheDay_ProgressBoxWidget*,std::allocator<LevelOfTheDay_ProgressBoxWidget*>>
               *)(this + 0xe8),&local_30);
    (**(code **)(*(long *)this + 0x60))(this,local_30);
    iVar7 = iVar1;
  } while (iVar1 != iVar2 + 0x249);
  Sexy::Insets::Insets((Insets *)&local_18,0,0,iVar4,iVar5);
  *(undefined8 *)(this + 0xd8) = local_18;
  *(undefined8 *)(this + 0xe0) = uStack_10;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDay_ProgressWidget::LevelOfTheDay_ProgressWidget(Sexy::Widget*) */

void __thiscall
LevelOfTheDay_ProgressWidget::LevelOfTheDay_ProgressWidget
          (LevelOfTheDay_ProgressWidget *this,Widget *param_1)

{
  long lVar1;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06925b30;
  Sexy::Insets::Insets((Insets *)(this + 0xd8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  Sexy::Point::Point((Point *)(this + 0x100));
  Sexy::Point::Point((Point *)(this + 0x108));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x118),(DummyInit *)0x0);
  *(Widget **)(this + 0x148) = param_1;
  *(undefined4 *)(this + 0xd4) = 0;
  layoutWidget(this);
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x118),(Delegate2 *)aDStack_38);
  lVar1 = ___stack_chk_guard;
  *(int *)(this + 0x48) = -*(int *)(this + 0x50);
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

