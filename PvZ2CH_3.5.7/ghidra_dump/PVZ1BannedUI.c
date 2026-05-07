// Class: PVZ1BannedUI


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1BannedUI::initLoadingResourcesGroupList() */

void __thiscall PVZ1BannedUI::initLoadingResourcesGroupList(PVZ1BannedUI *this)

{
  code *pcVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0xd0);
  std::string::string(asStack_10,"UI_HeadShot_Plant");
  (*pcVar1)(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1BannedUI::StaticClassInit() */

void PVZ1BannedUI::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVZ1BannedUI");
    (*pcVar2)(plVar1,asStack_10,FUN_03619890,0x1a0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1BannedUI::StaticGetClass() */

long * PVZ1BannedUI::StaticGetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"PVZ1BannedUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1BannedUI::GetClass() const */

long * PVZ1BannedUI::GetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"PVZ1BannedUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1BannedUI::CalcPlusButtonRect() */

void __thiscall PVZ1BannedUI::CalcPlusButtonRect(PVZ1BannedUI *this)

{
  Insets *in_x8;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::GetDrawRect();
  Sexy::Insets::Insets(in_x8,aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1BannedUI::GetHitRect() */

void PVZ1BannedUI::GetHitRect(void)

{
  PVZ1BannedUI *in_x0;
  
  CalcPlusButtonRect(in_x0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1BannedUI::IsMouseOver(int, int) */

void __thiscall PVZ1BannedUI::IsMouseOver(PVZ1BannedUI *this,int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  TRect<int> aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = UIWidget::IsVisible((UIWidget *)this);
  cVar3 = '\0';
  if (cVar1 != '\0') {
    bVar2 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0x68),4);
    cVar3 = '\0';
    if (bVar2) {
      (**(code **)(*(long *)this + 0xb8))(aTStack_18,this);
      cVar3 = Sexy::TRect<int>::Contains(aTStack_18,param_1,param_2);
      if (cVar3 == '\0') {
        cVar3 = UIWidget::IsMouseOver((UIWidget *)this,param_1,param_2);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar3);
}


/* PVZ1BannedUI::PVZ1BannedUI() */

void __thiscall PVZ1BannedUI::PVZ1BannedUI(PVZ1BannedUI *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined ***)this = &PTR_GetClass_066692e0;
  *(undefined ***)(this + 0x10) = &PTR__PVZ1BannedUI_06669480;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x168));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x180));
  this[0x198] = (PVZ1BannedUI)0x0;
  return;
}


/* PVZ1BannedUI::StaticNew() */

PVZ1BannedUI * PVZ1BannedUI::StaticNew(void)

{
  PVZ1BannedUI *this;
  
  this = ::operator_new(0x1a0);
  PVZ1BannedUI(this);
  return this;
}


/* PVZ1BannedUI::~PVZ1BannedUI() */

void __thiscall PVZ1BannedUI::~PVZ1BannedUI(PVZ1BannedUI *this)

{
  *(undefined ***)this = &PTR_GetClass_066692e0;
  *(undefined ***)(this + 0x10) = &PTR__PVZ1BannedUI_06669480;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x180));
  std::vector<PlantBannedHeadshot*,std::allocator<PlantBannedHeadshot*>>::~vector
            ((vector<PlantBannedHeadshot*,std::allocator<PlantBannedHeadshot*>> *)(this + 0x168));
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to PVZ1BannedUI::~PVZ1BannedUI() */

void __thiscall PVZ1BannedUI::~PVZ1BannedUI(PVZ1BannedUI *this)

{
  ~PVZ1BannedUI(this + -0x10);
  return;
}


/* PVZ1BannedUI::~PVZ1BannedUI() */

void __thiscall PVZ1BannedUI::~PVZ1BannedUI(PVZ1BannedUI *this)

{
  ~PVZ1BannedUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PVZ1BannedUI::~PVZ1BannedUI() */

void __thiscall PVZ1BannedUI::~PVZ1BannedUI(PVZ1BannedUI *this)

{
  ~PVZ1BannedUI(this + -0x10);
  return;
}


/* PVZ1BannedUI::updateButtonStates(int, int, bool) */

void __thiscall
PVZ1BannedUI::updateButtonStates(PVZ1BannedUI *this,int param_1,int param_2,bool param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2);
  if (cVar1 == '\0') {
    FUN_036192b4(this + 0x160);
  }
  else {
    cVar1 = FUN_036192bc(this[0x160]);
    if (cVar1 == '\0') {
      FUN_036192b4(this + 0x160,param_3);
    }
  }
  if ((!param_3) &&
     (cVar1 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2), cVar1 != '\0')) {
    UIPVZ1PlantBannedScreen::create((vector *)(this + 0x180),true);
    return;
  }
  return;
}


/* PVZ1BannedUI::OnMouseMove(int, int) */

void __thiscall PVZ1BannedUI::OnMouseMove(PVZ1BannedUI *this,int param_1,int param_2)

{
  updateButtonStates(this,param_1,param_2,true);
  return;
}


/* PVZ1BannedUI::OnMouseUp(int, int) */

void __thiscall PVZ1BannedUI::OnMouseUp(PVZ1BannedUI *this,int param_1,int param_2)

{
  updateButtonStates(this,param_1,param_2,false);
  return;
}


/* PVZ1BannedUI::InitView() */

void __thiscall PVZ1BannedUI::InitView(PVZ1BannedUI *this)

{
  vector *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  
  this_00 = (vector *)(this + 0x180);
  PVZ1ModeUtils::GetPlantBannedList(this_00);
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)this_00);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)this_00);
  std::
  sort<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,bool(*)(int,int)>
            (uVar1,uVar2,sortPlantByRare);
  return;
}


/* PVZ1BannedUI::onEnterState_Initializing(WidgetState) */

void PVZ1BannedUI::onEnterState_Initializing(PVZ1BannedUI *param_1)

{
  InitView(param_1);
  UIWidget::SetClickable((UIWidget *)param_1,true);
  param_1[0x198] = (PVZ1BannedUI)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1BannedUI::Draw(Sexy::Graphics*) */

void __thiscall PVZ1BannedUI::Draw(PVZ1BannedUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  Image *pIVar3;
  GraphicsAutoState aGStack_20 [8];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x198] != (PVZ1BannedUI)0x0) {
    UIWidget::Draw((Graphics *)this);
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
    UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
    iVar1 = FUN_036192ac(*(undefined4 *)(this + 0x38));
    iVar2 = FUN_036192b0(*(undefined4 *)(this + 0x3c));
    Sexy::Insets::Insets((Insets *)&local_18,0,0,iVar1,iVar2);
    pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa8e58);
    Sexy::Graphics::DrawImage(param_1,pIVar3,local_18,local_14,local_10,local_c);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PVZ1BannedUI::Draw(Sexy::Graphics*) */

void __thiscall PVZ1BannedUI::Draw(PVZ1BannedUI *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

