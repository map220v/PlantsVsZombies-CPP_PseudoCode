// Class: PVZ2UIScrollingPaneWidget


/* PVZ2UIScrollingPaneWidget::GetDepth() const */

void __thiscall PVZ2UIScrollingPaneWidget::GetDepth(PVZ2UIScrollingPaneWidget *this)

{
  FUN_03e9808c(*(undefined8 *)(this + 0xd8),*(undefined8 *)(this + 0xe0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIScrollingPaneWidget::StaticClassInit() */

void PVZ2UIScrollingPaneWidget::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"PVZ2UIScrollingPaneWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_0436d708,0x120,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIScrollingPaneWidget::StaticGetClass() */

long * PVZ2UIScrollingPaneWidget::StaticGetClass(void)

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
  uVar2 = Sexy::Widget::StaticGetClass();
  (*pcVar3)(plVar1,"PVZ2UIScrollingPaneWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ2UIScrollingPaneWidget::GetClass() const */

long * PVZ2UIScrollingPaneWidget::GetClass(void)

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
  uVar2 = Sexy::Widget::StaticGetClass();
  (*pcVar3)(plVar1,"PVZ2UIScrollingPaneWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIScrollingPaneWidget::Draw(Sexy::Graphics*) */

void __thiscall PVZ2UIScrollingPaneWidget::Draw(PVZ2UIScrollingPaneWidget *this,Graphics *param_1)

{
  long lVar1;
  undefined8 uVar2;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x110] != (PVZ2UIScrollingPaneWidget)0x0) {
    LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  }
  lVar1 = FUN_0436cab8(*(undefined8 *)(this + 0xd8),*(undefined8 *)(this + 0xe0));
  if (lVar1 != 0) {
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afd218);
    DrawImageTiled(0x3f800000,param_1,aIStack_18,uVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIScrollingPaneWidget::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
PVZ2UIScrollingPaneWidget::DrawAll
          (PVZ2UIScrollingPaneWidget *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  GraphicsAutoState aGStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  lVar6 = FUN_0436cab8(*(undefined8 *)(this + 0xd8),*(undefined8 *)(this + 0xe0));
  if (lVar6 != 0) {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_2);
    Sexy::Graphics::ClearClipRect(param_2);
    iVar2 = FUN_0436cc7c(0xfffffff3);
    iVar3 = FUN_0436cc7c(0xfffffff7);
    iVar4 = FUN_0436cc7c(0x1a);
    iVar1 = *(int *)(this + 0x50);
    iVar5 = FUN_0436cc7c(0x17);
    Sexy::Insets::Insets(aIStack_28,iVar2,iVar3,iVar4 + iVar1,iVar5 + *(int *)(this + 0x54));
    Sexy::Insets::Insets(aIStack_18,aIStack_28);
    uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afd298);
    Draw9SliceImage(param_2,aIStack_18,uVar7);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIScrollingPaneWidget::removeAndHide() */

void __thiscall PVZ2UIScrollingPaneWidget::removeAndHide(PVZ2UIScrollingPaneWidget *this)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(this + 0xd8));
  (**(code **)(*(long *)*puVar1 + 0x158))((long *)*puVar1,0);
  Sexy::WidgetManager::RemoveBaseModal(*(WidgetManager **)(gLawnApp + 0x360),(Widget *)this);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x118));
  (**(code **)(*(long *)this + 0x158))(this,0);
  return;
}


/* PVZ2UIScrollingPaneWidget::onlyWidgetPaneLeftIsInvisible() */

byte __thiscall
PVZ2UIScrollingPaneWidget::onlyWidgetPaneLeftIsInvisible(PVZ2UIScrollingPaneWidget *this)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_0436cab8(*(undefined8 *)(this + 0xd8),*(undefined8 *)(this + 0xe0));
  if (lVar1 != 1) {
    return 0;
  }
  plVar2 = (long *)std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(this + 0xd8));
  return *(byte *)(*plVar2 + 0x6c) ^ 1;
}


/* PVZ2UIScrollingPaneWidget::deleteRightWidget() */

void __thiscall PVZ2UIScrollingPaneWidget::deleteRightWidget(PVZ2UIScrollingPaneWidget *this)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = (undefined8 *)
           std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(this + 0xd8));
  plVar2 = (long *)*puVar1;
  (**(code **)(*(long *)this + 0x68))(this,plVar2);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  FUN_0436cb0c(this + 0xe0);
  return;
}


/* PVZ2UIScrollingPaneWidget::Update() */

void __thiscall PVZ2UIScrollingPaneWidget::Update(PVZ2UIScrollingPaneWidget *this)

{
  int iVar1;
  char cVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  float fVar10;
  
  cVar2 = onlyWidgetPaneLeftIsInvisible(this);
  if (cVar2 == '\0') {
    iVar1 = *(int *)(this + 0x114);
  }
  else {
    deleteRightWidget(this);
    iVar1 = *(int *)(this + 0x114);
  }
  if (1 < iVar1 - 1U) {
    return;
  }
  fVar10 = (float)PVZ_RealT();
  uVar7 = 0;
  fVar10 = (float)TimeLineTrack<float>::GetValueAt((TimeLineTrack<float> *)(this + 0xf0),fVar10);
  do {
    uVar9 = *(undefined8 *)(this + 0xd8);
    uVar4 = FUN_0436cab8(uVar9,*(undefined8 *)(this + 0xe0));
    iVar1 = *(int *)(this + 0x114);
    uVar8 = uVar7;
    do {
      iVar6 = 1 - (int)uVar4;
      if (uVar4 <= uVar8) {
        if (iVar1 == 2) {
          if (fVar10 != 1.0) {
            return;
          }
          deleteRightWidget(this);
        }
        else {
          if (iVar1 != 1) {
            return;
          }
          if (fVar10 != -1.0) {
            return;
          }
        }
        *(undefined4 *)(this + 0x114) = 0;
        puVar5 = (undefined8 *)
                 std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(this + 0xd8));
        (**(code **)(*(long *)*puVar5 + 0x90))((long *)*puVar5,0);
        return;
      }
      if (iVar1 == 1) {
        iVar6 = 2 - (int)uVar4;
      }
      uVar7 = uVar8 + 1;
      iVar6 = (int)((float)(*(int *)(this + 0x50) * (iVar6 + (int)uVar8)) +
                   (float)*(int *)(this + 0x50) * fVar10);
      plVar3 = (long *)FUN_0436cb04(uVar9,uVar8);
      plVar3 = (long *)*plVar3;
      uVar8 = uVar7;
    } while (iVar6 == (int)plVar3[9]);
    (**(code **)(*plVar3 + 0x1a8))(plVar3,iVar6,0);
  } while( true );
}


/* PVZ2UIScrollingPaneWidget::Close() */

void __thiscall PVZ2UIScrollingPaneWidget::Close(PVZ2UIScrollingPaneWidget *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::empty
                    ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 0xd8));
  if ((cVar1 == '\0') && (cVar1 = onlyWidgetPaneLeftIsInvisible(this), cVar1 == '\0')) {
    iVar3 = 1;
    iVar2 = GetDepth(this);
    if (1 < iVar2) {
      do {
        iVar3 = iVar3 + 1;
        deleteRightWidget(this);
      } while (iVar3 != iVar2);
    }
    *(undefined4 *)(this + 0x114) = 0;
    removeAndHide(this);
    return;
  }
  return;
}


/* PVZ2UIScrollingPaneWidget::~PVZ2UIScrollingPaneWidget() */

void __thiscall
PVZ2UIScrollingPaneWidget::~PVZ2UIScrollingPaneWidget(PVZ2UIScrollingPaneWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06836980;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  TimeLineTrack<float>::~TimeLineTrack((TimeLineTrack<float> *)(this + 0xf0));
  std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::~vector
            ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PVZ2UIScrollingPaneWidget::~PVZ2UIScrollingPaneWidget() */

void __thiscall
PVZ2UIScrollingPaneWidget::~PVZ2UIScrollingPaneWidget(PVZ2UIScrollingPaneWidget *this)

{
  ~PVZ2UIScrollingPaneWidget(this);
  AK::FreeHook(this);
  return;
}


/* PVZ2UIScrollingPaneWidget::PVZ2UIScrollingPaneWidget(Sexy::TRect<int> const&, Sexy::Widget*,
   Sexy::Widget*) */

void __thiscall
PVZ2UIScrollingPaneWidget::PVZ2UIScrollingPaneWidget
          (PVZ2UIScrollingPaneWidget *this,TRect *param_1,Widget *param_2,Widget *param_3)

{
  Widget *local_8;
  
  local_8 = param_3;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06836980;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd8));
  PlantWarsStarRewardData::PlantWarsStarRewardData((PlantWarsStarRewardData *)(this + 0xf0));
  *(Widget **)(this + 0x118) = param_2;
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  if (local_8 == (Widget *)0x0) {
    Sexy::Widget::SetVisible((Widget *)this,false);
  }
  else {
    std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::push_back
              ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 0xd8),&local_8);
  }
  *(undefined4 *)(this + 0x114) = 0;
  TimeLineTrack<float>::Initialize((TimeLineTrack<float> *)(this + 0xf0),0.0);
  this[0x110] = (PVZ2UIScrollingPaneWidget)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIScrollingPaneWidget::PVZ2UIScrollingPaneWidget() */

void __thiscall
PVZ2UIScrollingPaneWidget::PVZ2UIScrollingPaneWidget(PVZ2UIScrollingPaneWidget *this)

{
  int iVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_0436cc7c(100);
  Sexy::Insets::Insets(aIStack_18,0,0,iVar1,iVar1);
  PVZ2UIScrollingPaneWidget(this,(TRect *)aIStack_18,(Widget *)0x0,(Widget *)0x0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIScrollingPaneWidget::StaticNew() */

PVZ2UIScrollingPaneWidget * PVZ2UIScrollingPaneWidget::StaticNew(void)

{
  PVZ2UIScrollingPaneWidget *this;
  
  this = ::operator_new(0x120);
  PVZ2UIScrollingPaneWidget(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIScrollingPaneWidget::ScrollRight(Sexy::Widget*) */

void __thiscall
PVZ2UIScrollingPaneWidget::ScrollRight(PVZ2UIScrollingPaneWidget *this,Widget *param_1)

{
  vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *this_00;
  TimeLineTrack<float> *this_01;
  int iVar1;
  Widget *pWVar2;
  char cVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  code *pcVar7;
  float fVar8;
  Widget *local_18;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  this_00 = (vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 0xd8);
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  cVar3 = std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::empty(this_00);
  if (cVar3 == '\0') {
    lVar4 = FUN_0436cab8(*(undefined8 *)(this + 0xd8),*(undefined8 *)(this + 0xe0));
  }
  else {
    (**(code **)(*(long *)this + 0x158))(this,1);
    Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(gLawnApp + 0x360),(Widget *)this);
    lVar4 = FUN_0436cab8(*(undefined8 *)(this + 0xd8),*(undefined8 *)(this + 0xe0));
  }
  if (lVar4 != 0) {
    this_01 = (TimeLineTrack<float> *)(this + 0xf0);
    puVar5 = (undefined8 *)
             std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)this_00);
    (**(code **)(*(long *)*puVar5 + 0x90))((long *)*puVar5,1);
    (**(code **)(*(long *)local_18 + 0x90))(local_18,1);
    local_10 = 0;
    TimeLineTrack<float>::Initialize(this_01,0.0);
    PVZ_RealT();
    TimeLineTrack<float>::AddKeyFrame(this_01,&local_10,4);
    fVar8 = (float)PVZ_RealT();
    local_c = 0xbf800000;
    TimeLineTrack<float>::AddKeyFrame((TimeLineTrack<float> *)(fVar8 + 0.2),this_01,&local_c,4);
    pWVar2 = local_18;
    *(undefined4 *)(this + 0x114) = 1;
    pcVar7 = *(code **)(*(long *)local_18 + 0x1a8);
    plVar6 = (long *)std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)this_00);
    iVar1 = *(int *)(*plVar6 + 0x48);
    plVar6 = (long *)std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)this_00);
    (*pcVar7)(pWVar2,iVar1 + *(int *)(*plVar6 + 0x50),0);
  }
  std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::push_back(this_00,&local_18);
  (**(code **)(*(long *)this + 0x60))(this,local_18);
  lVar4 = FUN_0436cab8(*(undefined8 *)(this + 0xd8),*(undefined8 *)(this + 0xe0));
  if (lVar4 == 1) {
    (**(code **)(*(long *)local_18 + 0x90))(local_18,0);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIScrollingPaneWidget::ScrollLeft() */

void __thiscall PVZ2UIScrollingPaneWidget::ScrollLeft(PVZ2UIScrollingPaneWidget *this)

{
  TimeLineTrack<float> *this_00;
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  float fVar5;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::empty
                    ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 0xd8));
  if (cVar1 == '\0') {
    lVar2 = FUN_0436cab8(*(undefined8 *)(this + 0xd8),*(undefined8 *)(this + 0xe0));
    if (lVar2 == 1) {
      removeAndHide(this);
    }
    else {
      this_00 = (TimeLineTrack<float> *)(this + 0xf0);
      local_10 = 0;
      TimeLineTrack<float>::Initialize(this_00,0.0);
      PVZ_RealT();
      TimeLineTrack<float>::AddKeyFrame(this_00,&local_10,4);
      fVar5 = (float)PVZ_RealT();
      local_c = 0x3f800000;
      TimeLineTrack<float>::AddKeyFrame((TimeLineTrack<float> *)(fVar5 + 0.2),this_00,&local_c,4);
      *(undefined4 *)(this + 0x114) = 2;
      puVar3 = (undefined8 *)
               std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(this + 0xd8));
      (**(code **)(*(long *)*puVar3 + 0x90))((long *)*puVar3,1);
      uVar4 = *(undefined8 *)(this + 0xd8);
      lVar2 = FUN_0436cab8(uVar4,*(undefined8 *)(this + 0xe0));
      puVar3 = (undefined8 *)FUN_0436cb04(uVar4,lVar2 + -2);
      (**(code **)(*(long *)*puVar3 + 0x90))((long *)*puVar3,1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

