// Class: BoardHeroPlantButton


/* BoardHeroPlantButton::GetHeroPlant() */

RtWeakPtr<Sexy::SoundResource> * BoardHeroPlantButton::GetHeroPlant(void)

{
  long in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 0x218));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardHeroPlantButton::StaticClassInit() */

void BoardHeroPlantButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"BoardHeroPlantButton");
    (*pcVar2)(plVar1,asStack_10,FUN_042bf140,0x238,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardHeroPlantButton::StaticGetClass() */

long * BoardHeroPlantButton::StaticGetClass(void)

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
  uVar2 = UIEasyButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"BoardHeroPlantButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoardHeroPlantButton::GetClass() const */

long * BoardHeroPlantButton::GetClass(void)

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
  uVar2 = UIEasyButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"BoardHeroPlantButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardHeroPlantButton::DrawSwitchAnim(Sexy::Graphics*) */

void __thiscall BoardHeroPlantButton::DrawSwitchAnim(BoardHeroPlantButton *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  GraphicsAutoState aGStack_38 [8];
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
  Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
  Sexy::SexyTransform2D::Scale(aSStack_30,*(float *)(param_1 + 0x18),*(float *)(param_1 + 0x1c));
  iVar1 = FUN_042bd0f0(0xffffffd8);
  iVar2 = FUN_042bd0f0(0xffffffc4);
  FUN_042bcfc0((float)iVar1,(float)iVar2,auStack_28,auStack_1c);
  if (*(PopAnimRig **)(this + 0x1e8) != (PopAnimRig *)0x0) {
    PopAnimRig::Draw(*(PopAnimRig **)(this + 0x1e8),param_1,aSStack_30);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardHeroPlantButton::BoardHeroPlantButton() */

void __thiscall BoardHeroPlantButton::BoardHeroPlantButton(BoardHeroPlantButton *this)

{
  undefined4 uVar1;
  
  UIEasyButtonWidget::UIEasyButtonWidget((UIEasyButtonWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0682c580;
  *(undefined ***)(this + 0x10) = &PTR__BoardHeroPlantButton_0682c738;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1d0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1d8));
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x218));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x220));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x228));
  *(undefined4 *)(this + 0x214) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x204) = 0;
  *(undefined4 *)(this + 0x1fc) = uVar1;
  this[0x208] = (BoardHeroPlantButton)0x0;
  *(undefined4 *)(this + 0x200) = uVar1;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined4 *)(this + 0x20c) = uVar1;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  this[0x230] = (BoardHeroPlantButton)0x0;
  *(undefined4 *)(this + 0x1f8) = 0;
  return;
}


/* BoardHeroPlantButton::StaticNew() */

BoardHeroPlantButton * BoardHeroPlantButton::StaticNew(void)

{
  BoardHeroPlantButton *this;
  
  this = ::operator_new(0x238);
  BoardHeroPlantButton(this);
  return this;
}


/* BoardHeroPlantButton::~BoardHeroPlantButton() */

void __thiscall BoardHeroPlantButton::~BoardHeroPlantButton(BoardHeroPlantButton *this)

{
  long *plVar1;
  
  *(undefined ***)this = &PTR_GetClass_0682c580;
  *(undefined ***)(this + 0x10) = &PTR__BoardHeroPlantButton_0682c738;
  if (*(long **)(this + 0x1e0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1e0) + 0x18))();
    *(undefined8 *)(this + 0x1e0) = 0;
  }
  if (*(long **)(this + 0x1e8) == (long *)0x0) {
    plVar1 = *(long **)(this + 0x1f0);
  }
  else {
    (**(code **)(**(long **)(this + 0x1e8) + 0x18))();
    *(undefined8 *)(this + 0x1e8) = 0;
    plVar1 = *(long **)(this + 0x1f0);
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
    *(undefined8 *)(this + 0x1f0) = 0;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x228));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x220));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x218));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1d8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1d0));
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to BoardHeroPlantButton::~BoardHeroPlantButton() */

void __thiscall BoardHeroPlantButton::~BoardHeroPlantButton(BoardHeroPlantButton *this)

{
  ~BoardHeroPlantButton(this + -0x10);
  return;
}


/* BoardHeroPlantButton::~BoardHeroPlantButton() */

void __thiscall BoardHeroPlantButton::~BoardHeroPlantButton(BoardHeroPlantButton *this)

{
  ~BoardHeroPlantButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BoardHeroPlantButton::~BoardHeroPlantButton() */

void __thiscall BoardHeroPlantButton::~BoardHeroPlantButton(BoardHeroPlantButton *this)

{
  ~BoardHeroPlantButton(this + -0x10);
  return;
}


/* BoardHeroPlantButton::onCursorDestroyed(BaseCursor*) */

void __thiscall
BoardHeroPlantButton::onCursorDestroyed(BoardHeroPlantButton *this,BaseCursor *param_1)

{
  bool bVar1;
  
  if ((param_1 != (BaseCursor *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<HeroPlantCursor>((RtObject *)param_1), bVar1)) {
    (**(code **)(*(long *)this + 0xe8))(this,2);
  }
  return;
}


/* BoardHeroPlantButton::initializePrepareSunmoney() */

void __thiscall BoardHeroPlantButton::initializePrepareSunmoney(BoardHeroPlantButton *this)

{
  long lVar1;
  UnchartedBoostMgr *pUVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x228));
  fVar4 = (float)*(int *)(lVar1 + 0x18);
  pUVar2 = (UnchartedBoostMgr *)Sexy::LazySingleton<UnchartedBoostMgr>::GetInstancePtr();
  fVar3 = (float)UnchartedBoostMgr::GetBoostValue(pUVar2,0,0x13,0);
  if (0.0 < fVar3) {
    fVar4 = fVar4 * 0.5;
  }
  *(int *)(this + 0x204) = (int)fVar4;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardHeroPlantButton::DrawHightLight(Sexy::Graphics*) */

void __thiscall BoardHeroPlantButton::DrawHightLight(BoardHeroPlantButton *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  GraphicsAutoState aGStack_38 [8];
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
  Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
  Sexy::SexyTransform2D::Scale(aSStack_30,*(float *)(param_1 + 0x18),*(float *)(param_1 + 0x1c));
  iVar1 = FUN_042bd0f0(0xffffffd8);
  iVar2 = FUN_042bd0f0(0xffffffc4);
  FUN_042bcfc0((float)iVar1,(float)iVar2,auStack_28,auStack_1c);
  if (((*(int *)(this + 0x214) == 2) ||
      (((*(int *)(this + 0x214) == 3 && (this[0x208] != (BoardHeroPlantButton)0x0)) &&
       (fVar3 = (float)PVZ_T(), *(float *)(this + 0x20c) < fVar3)))) &&
     (*(PopAnimRig **)(this + 0x1e0) != (PopAnimRig *)0x0)) {
    PopAnimRig::Draw(*(PopAnimRig **)(this + 0x1e0),param_1,aSStack_30);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardHeroPlantButton::OnClick() */

void __thiscall BoardHeroPlantButton::OnClick(BoardHeroPlantButton *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  Plant *pPVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  
  if (((*(int *)(this + 0x214) == 3) && (this[0x208] != (BoardHeroPlantButton)0x0)) &&
     (fVar6 = (float)PVZ_T(), *(float *)(this + 0x20c) < fVar6)) {
    this_00 = (RtWeakPtr *)(this + 0x218);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar1) {
      uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      cVar2 = Plant::HasCondition(uVar5,2);
      if (cVar2 != '\0') {
        pPVar3 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        Plant::EndCondition(pPVar3,2);
      }
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      cVar2 = FUN_042bd070(*(undefined1 *)(lVar4 + 0x278));
      if (cVar2 != '\0') {
        pPVar3 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        Plant::SetIsSleepping(pPVar3,false,-1.0);
      }
    }
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar1) {
      pPVar3 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      cVar2 = Plant::CanApplyPlantfood(pPVar3);
      if (cVar2 != '\0') {
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        (**(code **)(**(long **)(lVar4 + 0xa8) + 0x220))(*(long **)(lVar4 + 0xa8));
        fVar6 = (float)PVZ_T();
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x228));
        fVar7 = *(float *)(lVar4 + 0x20);
        this[0x230] = (BoardHeroPlantButton)0x1;
        *(float *)(this + 0x20c) = fVar6 + fVar7;
      }
    }
  }
  return;
}


/* BoardHeroPlantButton::initializePrepareTime() */

void __thiscall BoardHeroPlantButton::initializePrepareTime(BoardHeroPlantButton *this)

{
  long lVar1;
  UnchartedBoostMgr *pUVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x228));
  fVar4 = *(float *)(lVar1 + 0x1c);
  pUVar2 = (UnchartedBoostMgr *)Sexy::LazySingleton<UnchartedBoostMgr>::GetInstancePtr();
  fVar3 = (float)UnchartedBoostMgr::GetBoostValue(pUVar2,0,0x13,0);
  if (0.0 < fVar3) {
    fVar4 = fVar4 * 0.5;
  }
  fVar3 = (float)PVZ_T();
  *(float *)(this + 0x1fc) = fVar3;
  *(float *)(this + 0x200) = fVar3 + fVar4;
  return;
}


/* BoardHeroPlantButton::GetRespawnSunCost() */

int __thiscall BoardHeroPlantButton::GetRespawnSunCost(BoardHeroPlantButton *this)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(this + 0x210);
  fVar2 = (float)PVZ_T();
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x228));
  fVar2 = (fVar3 - fVar2) / *(float *)(lVar1 + 0x24);
  if (0.0 <= fVar2) {
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x228));
    return (int)(fVar2 * (float)*(int *)(lVar1 + 0x28));
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardHeroPlantButton::OnTouch(Sexy::Touch const&) */

void __thiscall BoardHeroPlantButton::OnTouch(BoardHeroPlantButton *this,Touch *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  BaseCursor *pBVar4;
  Board *pBVar5;
  int local_70;
  int local_6c;
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  TRect<int> aTStack_60 [16];
  undefined1 auStack_50 [16];
  Touch aTStack_40 [16];
  Point aPStack_30 [40];
  long local_8;
  
  cVar1 = '\0';
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point((Point *)&local_70,(TPoint *)(param_1 + 0x10));
  local_70 = local_70 + *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x48);
  local_6c = local_6c + *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x4c);
  if (*(int *)(param_1 + 0x30) != 0) goto LAB_042bda88;
  UIWidget::GetDrawRect();
  cVar1 = Sexy::TRect<int>::Contains(aTStack_60,(TPoint *)&local_70);
  if (cVar1 != '\0') {
    if (*(int *)(this + 0x214) == 2) {
LAB_042bdb1c:
      Sexy::Touch::Touch(aTStack_40,param_1);
      Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),aPStack_30);
      pBVar5 = *(Board **)(gLawnApp + 0x9f0);
      UIWidget::GetDrawRect();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)(this + 0x220));
      pBVar4 = ::operator_new(0x48);
      HeroPlantCursor::HeroPlantCursor((HeroPlantCursor *)pBVar4,aTStack_40,auStack_50,aRStack_68);
      cVar2 = Board::TryToAddCursor(pBVar5,pBVar4,false);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)this + 0xe8))(this,4);
      }
      goto LAB_042bda88;
    }
    if (*(int *)(this + 0x214) == 4) {
      pBVar5 = *(Board **)(gLawnApp + 0x9f0);
      iVar3 = GetRespawnSunCost(this);
      cVar2 = Board::CanTakeSunMoney(pBVar5,iVar3);
      if (cVar2 != '\0') goto LAB_042bdb1c;
    }
  }
  cVar1 = '\0';
LAB_042bda88:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* BoardHeroPlantButton::GetSunCost() */

undefined8 __thiscall BoardHeroPlantButton::GetSunCost(BoardHeroPlantButton *this)

{
  undefined8 uVar1;
  
  if (*(int *)(this + 0x214) == 2) {
    return 0;
  }
  if (*(int *)(this + 0x214) != 4) {
    uVar1 = std::numeric_limits<int>::max();
    return uVar1;
  }
  uVar1 = GetRespawnSunCost(this);
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardHeroPlantButton::SetHeroButtonState(BoardHeroPlantButtonState) */

void __thiscall BoardHeroPlantButton::SetHeroButtonState(BoardHeroPlantButton *this,int param_2)

{
  long lVar1;
  char *__s;
  PopAnimRig *pPVar2;
  float fVar3;
  float fVar4;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  *(int *)(this + 0x214) = param_2;
  local_8 = ___stack_chk_guard;
  if (param_2 == 3) {
    fVar3 = (float)PVZ_T();
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x228));
    fVar4 = *(float *)(lVar1 + 0x20);
    this[0x230] = (BoardHeroPlantButton)0x1;
    *(float *)(this + 0x20c) = fVar3 + fVar4;
    fVar3 = (float)PVZ_T();
    pPVar2 = *(PopAnimRig **)(this + 0x1e8);
    *(float *)(this + 0x1f8) = fVar3 + 0.45;
    std::string::string(asStack_40,"SHIFT");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    __s = "IMAGE_UI_HEROPLANT_BUTTON_FRAMEACTIVED";
  }
  else {
    if (param_2 != 4) {
      if (param_2 == 1) {
        initializePrepareTime(this);
        initializePrepareSunmoney(this);
      }
      goto LAB_042bdc70;
    }
    fVar3 = (float)PVZ_T();
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x228));
    *(float *)(this + 0x210) = fVar3 + *(float *)(lVar1 + 0x24);
    fVar3 = (float)PVZ_T();
    pPVar2 = *(PopAnimRig **)(this + 0x1e8);
    *(float *)(this + 0x1f8) = fVar3 + 0.45;
    std::string::string(asStack_40,"SHIFT02");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    __s = "IMAGE_UI_HEROPLANT_BUTTON_FRAME";
  }
  std::string::string(asStack_40,__s);
  UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
LAB_042bdc70:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardHeroPlantButton::SetHeroPlant(Sexy::RtWeakPtr<Plant>) */

void __thiscall BoardHeroPlantButton::SetHeroPlant(BoardHeroPlantButton *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x218),param_2);
  SetHeroButtonState(this,3);
  return;
}


/* BoardHeroPlantButton::CheckPlantRequirement() */

undefined8 __thiscall BoardHeroPlantButton::CheckPlantRequirement(BoardHeroPlantButton *this)

{
  int iVar1;
  BoardHeroPlantManager *this_00;
  float fVar2;
  
  this_00 = (BoardHeroPlantManager *)Board::GetBoardHeroPlantManager(*(Board **)(gLawnApp + 0x9f0));
  if ((this_00 != (BoardHeroPlantManager *)0x0) &&
     (iVar1 = BoardHeroPlantManager::GetCurrentSunmoneyCondtion(this_00),
     *(int *)(this + 0x204) <= iVar1)) {
    fVar2 = (float)PVZ_T();
    if (*(float *)(this + 0x200) < fVar2) {
      return 1;
    }
  }
  return 0;
}


/* BoardHeroPlantButton::registerForEvents() */

void __thiscall BoardHeroPlantButton::registerForEvents(BoardHeroPlantButton *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x1a0);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<BaseCursor*,Sexy::CBMemberTranslatorX<BoardHeroPlantButton,void(BoardHeroPlantButton::*)(BaseCursor*)>>
            ((MessageRouter *)puVar1,Message::CursorDestroyed,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardHeroPlantButton::DrawNormal(Sexy::Graphics*) */

void __thiscall BoardHeroPlantButton::DrawNormal(BoardHeroPlantButton *this,Graphics *param_1)

{
  RtWeakPtr *this_00;
  RtWeakPtr *this_01;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  LotteryResultProgressBar *this_02;
  ResourceInfo *pRVar10;
  BoardHeroPlantManager *this_03;
  long lVar11;
  float *pfVar12;
  Image *pIVar13;
  undefined8 uVar14;
  RtWeakPtr *this_04;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  GraphicsAutoState aGStack_60 [8];
  float local_58 [2];
  undefined4 local_50 [4];
  undefined4 local_40 [4];
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x1d0);
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::Draw((UIEasyButtonWidget *)this,param_1);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_60,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    this_01 = (RtWeakPtr *)(this + 0x1d8);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
    if (bVar1) {
      iVar4 = FUN_042bcfe8(*(undefined4 *)(this + 0x38));
      this_02 = (LotteryResultProgressBar *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      iVar5 = LotteryResultProgressBar::GetCurrentLevel(this_02);
      iVar7 = FUN_042bcfe8(*(undefined4 *)(this + 0x38));
      iVar3 = *(int *)(this + 0x214);
      if ((iVar3 == 4) || (iVar3 == 1)) {
        if (iVar3 == 3) {
          cVar2 = '\x01';
          goto LAB_042bec38;
        }
LAB_042bec40:
        this_04 = this_01;
      }
      else {
        cVar2 = FUN_042bcff8(this[0x160]);
        if (iVar3 == 3) {
LAB_042bec38:
          if (this[0x208] == (BoardHeroPlantButton)0x0) goto LAB_042bec40;
          fVar16 = (float)PVZ_T();
          this_04 = this_01;
          if (*(float *)(this + 0x20c) <= fVar16) goto LAB_042be834;
        }
        else {
LAB_042be834:
          this_04 = this_00;
          if (cVar2 != '\0') goto LAB_042bec40;
        }
      }
      pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_04);
      Sexy::Graphics::DrawImage(param_1,(Image *)pRVar10,(iVar4 - iVar5) / 2,iVar7 / 10);
    }
  }
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 == 3) {
    pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af63d8);
    iVar4 = FUN_042bcfe8(*(undefined4 *)(this + 0x38));
    lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af63d8);
    iVar3 = *(int *)(lVar11 + 0x38);
    iVar5 = FUN_042bd0f0(10);
    lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af63d8);
    Sexy::Graphics::DrawImage
              (param_1,pIVar13,iVar4 / 2 - iVar3 / 2,iVar5 - *(int *)(lVar11 + 0x3c) / 2);
    iVar3 = *(int *)(this + 0x214);
    if (iVar3 == 1) goto LAB_042be858;
    if (iVar3 != 3) goto LAB_042be448;
    if (this[0x208] == (BoardHeroPlantButton)0x0) goto LAB_042be450;
    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x228));
    fVar19 = *(float *)(lVar11 + 0x20);
    fVar16 = (float)PVZ_T();
    local_50[0] = 0;
    local_58[0] = (float)(int)(((float)(int)fVar19 - *(float *)(this + 0x20c)) + fVar16) /
                  (float)(int)fVar19;
    pfVar12 = eastl::max_alt<float>(local_58,(float *)local_50);
    local_40[0] = 0x3f800000;
    pfVar12 = eastl::min_alt<float>(pfVar12,(float *)local_40);
    fVar16 = *pfVar12;
    pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6528);
    iVar3 = FUN_042bd0f0(0x12);
    iVar4 = FUN_042bcfec(*(undefined4 *)(this + 0x3c));
    iVar5 = FUN_042bd0f0(0x19);
    iVar7 = FUN_042bcfe8(*(undefined4 *)(this + 0x38));
    iVar8 = FUN_042bd0f0(0x24);
    iVar9 = FUN_042bd0f0(0x17);
    Sexy::Graphics::DrawImage(param_1,pIVar13,iVar3,iVar4 - iVar5,iVar7 - iVar8,iVar9);
    pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6400);
    iVar3 = FUN_042bd0f0(0x16);
    iVar4 = FUN_042bcfec(*(undefined4 *)(this + 0x3c));
    iVar5 = FUN_042bd0f0(0x15);
    iVar7 = FUN_042bcfe8(*(undefined4 *)(this + 0x38));
    iVar8 = FUN_042bd0f0(0x2c);
    iVar9 = FUN_042bd0f0(0xf);
    Sexy::Graphics::DrawImage
              (param_1,pIVar13,iVar3,iVar4 - iVar5,(int)((float)(iVar7 - iVar8) * fVar16),iVar9);
    pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6428);
    iVar3 = FUN_042bd0f0(10);
    iVar4 = FUN_042bcfec(*(undefined4 *)(this + 0x3c));
    iVar5 = FUN_042bd0f0(0x1f);
    iVar7 = FUN_042bd0f0(0x1a);
    Sexy::Graphics::DrawImage(param_1,pIVar13,iVar3,iVar4 - iVar5,iVar7,iVar5);
    Sexy::StrFormat(L"%d%%",local_58,(ulong)(uint)(int)(fVar16 * 100.0));
    iVar3 = FUN_042bd0f0(0x12);
    iVar4 = FUN_042bcfec(*(undefined4 *)(this + 0x3c));
    iVar5 = FUN_042bd0f0(0x17);
    iVar7 = FUN_042bcfe8(*(undefined4 *)(this + 0x38));
    iVar8 = FUN_042bd0f0(0x24);
    iVar9 = FUN_042bd0f0(0x14);
    Sexy::Insets::Insets((Insets *)local_50,iVar3,iVar4 - iVar5,iVar7 - iVar8,iVar9);
    uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_12_Outline);
    Sexy::Color::Color((Color *)local_40,1);
    WriteWordInRect(param_1,local_58,(Insets *)local_50,uVar14,(Color *)local_40,5,1);
    FUN_05476c50(local_58);
  }
  else if (iVar3 == 1) {
LAB_042be858:
    uVar18 = *(undefined4 *)(this + 0x1fc);
    uVar17 = *(undefined4 *)(this + 0x200);
    uVar15 = PVZ_T();
    local_50[0] = 0;
    local_40[0] = 0x3f800000;
    fVar16 = CurveLerp<float>(uVar18,uVar17,uVar15,(Insets *)local_50,(Insets *)local_40,1);
    iVar3 = FUN_042bcfe8(*(undefined4 *)(this + 0x38));
    iVar4 = FUN_042bcfec(*(undefined4 *)(this + 0x3c));
    iVar5 = FUN_042bd0f0(0x1e);
    Sexy::Insets::Insets((Insets *)local_50,0,0,0,100);
    Sexy::Insets::Insets((Insets *)local_40,0xff,0xff,0xff,0);
    DrawRadialCooldown(fVar16,(float)(iVar3 / 2),(float)(iVar4 / 2),(float)iVar5,param_1,
                       (Insets *)local_50,(Insets *)local_40);
    this_03 = (BoardHeroPlantManager *)
              Board::GetBoardHeroPlantManager(*(Board **)(gLawnApp + 0x9f0));
    iVar3 = BoardHeroPlantManager::GetCurrentSunmoneyCondtion(this_03);
    local_50[0] = 0;
    local_58[0] = (float)iVar3 / (float)*(int *)(this + 0x204);
    pfVar12 = eastl::max_alt<float>(local_58,(float *)local_50);
    local_40[0] = 0x3f800000;
    pfVar12 = eastl::min_alt<float>(pfVar12,(float *)local_40);
    fVar16 = *pfVar12;
    pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6528);
    iVar3 = FUN_042bd0f0(0x12);
    iVar4 = FUN_042bcfec(*(undefined4 *)(this + 0x3c));
    iVar5 = FUN_042bd0f0(0x19);
    iVar7 = FUN_042bcfe8(*(undefined4 *)(this + 0x38));
    iVar8 = FUN_042bd0f0(0x24);
    iVar9 = FUN_042bd0f0(0x17);
    Sexy::Graphics::DrawImage(param_1,pIVar13,iVar3,iVar4 - iVar5,iVar7 - iVar8,iVar9);
    pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af65b8);
    iVar3 = FUN_042bd0f0(0x16);
    iVar4 = FUN_042bcfec(*(undefined4 *)(this + 0x3c));
    iVar5 = FUN_042bd0f0(0x15);
    iVar7 = FUN_042bcfe8(*(undefined4 *)(this + 0x38));
    iVar8 = FUN_042bd0f0(0x2c);
    iVar9 = FUN_042bd0f0(0xf);
    Sexy::Graphics::DrawImage
              (param_1,pIVar13,iVar3,iVar4 - iVar5,(int)((float)(iVar7 - iVar8) * fVar16),iVar9);
    pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af64b0);
    iVar3 = FUN_042bd0f0(10);
    iVar4 = FUN_042bcfec(*(undefined4 *)(this + 0x3c));
    iVar5 = FUN_042bd0f0(0x1e);
    iVar7 = FUN_042bd0f0(0x1f);
    Sexy::Graphics::DrawImage(param_1,pIVar13,iVar3,iVar4 - iVar5,iVar7,iVar7);
    Sexy::StrFormat(L"%d%%",local_58,(ulong)(uint)(int)(fVar16 * 100.0));
    iVar3 = FUN_042bd0f0(0x12);
    iVar4 = FUN_042bcfec(*(undefined4 *)(this + 0x3c));
    iVar5 = FUN_042bd0f0(0x17);
    iVar7 = FUN_042bcfe8(*(undefined4 *)(this + 0x38));
    iVar8 = FUN_042bd0f0(0x24);
    iVar9 = FUN_042bd0f0(0x14);
    Sexy::Insets::Insets((Insets *)local_50,iVar3,iVar4 - iVar5,iVar7 - iVar8,iVar9);
    uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_12_Outline);
    Sexy::Color::Color((Color *)local_40,1);
    WriteWordInRect(param_1,local_58,(Insets *)local_50,uVar14,(Insets *)local_40,5,1);
    FUN_05476c50(local_58);
  }
  else {
LAB_042be448:
    if (iVar3 != 4) goto LAB_042be450;
    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x228));
    fVar19 = *(float *)(lVar11 + 0x24);
    fVar16 = (float)PVZ_T();
    local_50[0] = 0;
    local_58[0] = ((fVar19 - *(float *)(this + 0x210)) + fVar16) / fVar19;
    pfVar12 = eastl::max_alt<float>(local_58,(float *)local_50);
    local_40[0] = 0x3f800000;
    pfVar12 = eastl::min_alt<float>(pfVar12,(float *)local_40);
    fVar16 = *pfVar12;
    iVar3 = FUN_042bcfe8(*(undefined4 *)(this + 0x38));
    iVar4 = FUN_042bcfec(*(undefined4 *)(this + 0x3c));
    iVar5 = FUN_042bd0f0(0x1e);
    Sexy::Insets::Insets((Insets *)local_50,0,0,0,100);
    Sexy::Insets::Insets((Insets *)local_40,0xff,0xff,0xff,0);
    DrawRadialCooldown(fVar16,(float)(iVar3 / 2),(float)(iVar4 / 2),(float)iVar5,param_1,
                       (Insets *)local_50,(Insets *)local_40);
    uVar6 = GetRespawnSunCost(this);
    if (uVar6 != 0) {
      pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6590);
      iVar3 = FUN_042bd0f0(0x12);
      iVar4 = FUN_042bcfec(*(undefined4 *)(this + 0x3c));
      iVar5 = FUN_042bd0f0(0x19);
      iVar7 = FUN_042bcfe8(*(undefined4 *)(this + 0x38));
      iVar8 = FUN_042bd0f0(0x24);
      iVar9 = FUN_042bd0f0(0x17);
      Sexy::Graphics::DrawImage(param_1,pIVar13,iVar3,iVar4 - iVar5,iVar7 - iVar8,iVar9);
      pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af64f0);
      iVar3 = FUN_042bd0f0(10);
      iVar4 = FUN_042bcfec(*(undefined4 *)(this + 0x3c));
      iVar5 = FUN_042bd0f0(0x1e);
      iVar7 = FUN_042bd0f0(0x1f);
      Sexy::Graphics::DrawImage(param_1,pIVar13,iVar3,iVar4 - iVar5,iVar7,iVar7);
      Sexy::StrFormat(L"%d",local_58,(ulong)uVar6);
      iVar3 = FUN_042bd0f0(0x12);
      iVar4 = FUN_042bcfec(*(undefined4 *)(this + 0x3c));
      iVar5 = FUN_042bd0f0(0x17);
      iVar7 = FUN_042bcfe8(*(undefined4 *)(this + 0x38));
      iVar8 = FUN_042bd0f0(0x24);
      iVar9 = FUN_042bd0f0(0x14);
      Sexy::Insets::Insets((Insets *)local_50,iVar3,iVar4 - iVar5,iVar7 - iVar8,iVar9);
      uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_12_Outline);
      Sexy::Color::Color((Color *)local_40,1);
      WriteWordInRect(param_1,local_58,(Insets *)local_50,uVar14,(Insets *)local_40,5,1);
      FUN_05476c50(local_58);
    }
  }
  if ((((*(int *)(this + 0x214) == 3) && (this[0x208] != (BoardHeroPlantButton)0x0)) &&
      (fVar16 = (float)PVZ_T(), *(float *)(this + 0x20c) < fVar16)) &&
     (*(long *)(this + 0x1f0) != 0)) {
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
    Sexy::SexyTransform2D::Scale(aSStack_30,*(float *)(param_1 + 0x18),*(float *)(param_1 + 0x1c));
    iVar3 = FUN_042bd0f0(0xffffffd8);
    iVar4 = FUN_042bd0f0(0xffffffc4);
    FUN_042bcfc0((float)iVar3,(float)iVar4,auStack_28,auStack_1c);
    PopAnimRig::Draw(*(PopAnimRig **)(this + 0x1f0),param_1,aSStack_30);
  }
LAB_042be450:
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardHeroPlantButton::Draw(Sexy::Graphics*) */

void __thiscall BoardHeroPlantButton::Draw(BoardHeroPlantButton *this,Graphics *param_1)

{
  float fVar1;
  float fVar2;
  
  DrawHightLight(this,param_1);
  fVar2 = *(float *)(this + 0x1f8);
  fVar1 = (float)PVZ_T();
  if (fVar1 <= fVar2) {
    DrawSwitchAnim(this,param_1);
    return;
  }
  DrawNormal(this,param_1);
  return;
}


/* non-virtual thunk to BoardHeroPlantButton::Draw(Sexy::Graphics*) */

void __thiscall BoardHeroPlantButton::Draw(BoardHeroPlantButton *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* BoardHeroPlantButton::onUpdate() */

void __thiscall BoardHeroPlantButton::onUpdate(BoardHeroPlantButton *this)

{
  int iVar1;
  char cVar2;
  PopAnimRig *pPVar3;
  HeroPlantModule *this_00;
  float fVar4;
  float fVar5;
  
  pPVar3 = *(PopAnimRig **)(this + 0x1e0);
  if (pPVar3 != (PopAnimRig *)0x0) {
    fVar4 = (float)PVZ_T();
    fVar5 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar3,fVar4,fVar5);
  }
  pPVar3 = *(PopAnimRig **)(this + 0x1e8);
  if (pPVar3 != (PopAnimRig *)0x0) {
    fVar4 = (float)PVZ_T();
    fVar5 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar3,fVar4,fVar5);
  }
  pPVar3 = *(PopAnimRig **)(this + 0x1f0);
  if (pPVar3 != (PopAnimRig *)0x0) {
    fVar4 = (float)PVZ_T();
    fVar5 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar3,fVar4,fVar5);
  }
  iVar1 = *(int *)(this + 0x214);
  if (iVar1 == 1) {
    cVar2 = CheckPlantRequirement(this);
    if (cVar2 != '\0') {
      SetHeroButtonState(this,2);
      this_00 = (HeroPlantModule *)
                FUN_042bef58(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
      if (this_00 != (HeroPlantModule *)0x0) {
        HeroPlantModule::StopCollect(this_00);
      }
      Sexy::LazySingleton<HeroPlantMgr>::GetInstance();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x220));
      nop();
      return;
    }
  }
  else if (iVar1 == 3) {
    cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)(this + 0x218));
    if (cVar2 != '\0') {
      SetHeroButtonState(this,4);
      Sexy::LazySingleton<HeroPlantMgr>::GetInstance();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x220));
      nop();
      return;
    }
    if (((this[0x230] != (BoardHeroPlantButton)0x0) && (this[0x208] != (BoardHeroPlantButton)0x0))
       && (fVar4 = (float)PVZ_T(), *(float *)(this + 0x20c) < fVar4)) {
      this[0x230] = (BoardHeroPlantButton)0x0;
      Sexy::LazySingleton<HeroPlantMgr>::GetInstance();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x220));
      nop();
      return;
    }
  }
  else if ((iVar1 == 4) && (fVar4 = (float)PVZ_T(), *(float *)(this + 0x210) < fVar4)) {
    SetHeroButtonState(this,2);
    return;
  }
  return;
}


/* BoardHeroPlantButton::updateButtonStates(int, int, bool) */

void __thiscall
BoardHeroPlantButton::updateButtonStates
          (BoardHeroPlantButton *this,int param_1,int param_2,bool param_3)

{
  char cVar1;
  string *psVar2;
  
  cVar1 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2);
  if (cVar1 == '\0') {
    FUN_042bcff0(this + 0x160);
  }
  else {
    cVar1 = FUN_042bcff8(this[0x160]);
    if (cVar1 == '\0') {
      psVar2 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(psVar2,this + 0x198);
      FUN_042bcff0(this + 0x160,param_3);
    }
  }
  if ((!param_3) &&
     (cVar1 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2), cVar1 != '\0')) {
    if (this[0x1a8] == (BoardHeroPlantButton)0x0) {
      psVar2 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(psVar2,this + 0x1a0);
    }
    OnClick(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardHeroPlantButton::InitData(std::string const&) */

void BoardHeroPlantButton::InitData(string *param_1)

{
  RtWeakPtr<PowerPropertySheet> *this;
  string *psVar1;
  char cVar2;
  string sVar3;
  string *psVar4;
  PlantType *this_00;
  long lVar5;
  wchar16 *pwVar6;
  PopAnim *pPVar7;
  RtClass *pRVar8;
  PopAnimRig *pPVar9;
  UnchartedBoostMgr *pUVar10;
  Sexy *in_x1;
  string *extraout_x1;
  string *extraout_x1_00;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  float fVar11;
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  this = (RtWeakPtr<PowerPropertySheet> *)(param_1 + 0x220);
  local_8 = ___stack_chk_guard;
  psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this,(RtWeakPtr *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this);
  if (cVar2 != '\0') {
    this_00 = (PlantType *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    cVar2 = PlantType::IsHeroPlant(this_00);
    if (cVar2 != '\0') {
      psVar4 = asStack_48;
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(param_1 + 0x228),(RtWeakPtr *)(lVar5 + 0x130));
      std::string::string((string *)aRStack_40,"IMAGE_UI_HEROPLANT_BUTTON_FRAME");
      UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)param_1,(string *)aRStack_40);
      std::string::~string((string *)aRStack_40);
      nop();
      psVar1 = gLawnApp;
      Sexy::StringToUpper(in_x1,extraout_x1);
      std::operator+("IMAGE_UI_HEROPLANT_BUTTON_",asStack_50);
      LawnApp::GetUIImageFromStringId(psVar1);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(param_1 + 0x1d0),(RtWeakPtr *)aRStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      std::string::~string(psVar4);
      std::string::~string(asStack_50);
      psVar1 = gLawnApp;
      Sexy::StringToUpper(in_x1,extraout_x1_00);
      std::operator+("IMAGE_UI_HEROPLANT_BUTTON_",asStack_58);
      std::operator+(asStack_50,"_DOWN");
      LawnApp::GetUIImageFromStringId(psVar1);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(param_1 + 0x1d8),(RtWeakPtr *)aRStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      std::string::~string(psVar4);
      std::string::~string(asStack_50);
      std::string::~string(asStack_58);
      std::string::string((string *)aRStack_40,"Play_UI_Map_Select_Universe_Press");
      DEditorNode::setRootName(param_1);
      std::string::~string((string *)aRStack_40);
      nop();
      std::string::string((string *)aRStack_40,"Play_UI_Map_Select_Universe_Release");
      UIEasyButtonWidget::SetSoundReleased(param_1);
      std::string::~string((string *)aRStack_40);
      nop();
      SetHeroButtonState((BoardHeroPlantButton *)param_1,1);
      pwVar6 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
      std::string::string((string *)aRStack_40,"FreePlanting");
      sVar3 = (string)EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                                (pwVar6,(wchar16 *)aRStack_40,(LineBreakCategory *)psVar4,in_x3,
                                 in_x4);
      if (sVar3 == (string)0x0) {
        pUVar10 = (UnchartedBoostMgr *)Sexy::LazySingleton<UnchartedBoostMgr>::GetInstancePtr();
        fVar11 = (float)UnchartedBoostMgr::GetBoostValue(pUVar10,0,0x13,0);
        sVar3 = (string)(0.0 < fVar11);
      }
      param_1[0x208] = sVar3;
      std::string::~string((string *)aRStack_40);
      nop();
      std::string::string((string *)aRStack_40,"POPANIM_UI_HEROPLANT_EFFECTS_HIGHLIGHT");
      pPVar7 = (PopAnim *)StringHelper::ToAnimRig((string *)aRStack_40,false);
      std::string::~string((string *)aRStack_40);
      nop();
      if (pPVar7 != (PopAnim *)0x0) {
        pRVar8 = (RtClass *)PopAnimRig::StaticGetClass();
        pPVar9 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable(pPVar7,pRVar8);
        *(PopAnimRig **)(param_1 + 0x1e0) = pPVar9;
        std::string::string((string *)aRStack_40,"ANIMATION");
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
        PopAnimRig::PlayAndContinue(pPVar9,aRStack_40,0,aDStack_38);
        std::string::~string((string *)aRStack_40);
        nop();
      }
      std::string::string((string *)aRStack_40,"POPANIM_UI_HEROPLANT_EFFECTS_ARMORFLAME");
      pPVar7 = (PopAnim *)StringHelper::ToAnimRig((string *)aRStack_40,false);
      std::string::~string((string *)aRStack_40);
      nop();
      if (pPVar7 != (PopAnim *)0x0) {
        pRVar8 = (RtClass *)PopAnimRig::StaticGetClass();
        pPVar9 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable(pPVar7,pRVar8);
        *(PopAnimRig **)(param_1 + 0x1e8) = pPVar9;
        std::string::string((string *)aRStack_40,"01");
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
        PopAnimRig::PlayAndContinue(pPVar9,aRStack_40,0,aDStack_38);
        std::string::~string((string *)aRStack_40);
        nop();
      }
      std::string::string((string *)aRStack_40,"POPANIM_UI_HEROPLANT_EFFECTS_LIGHTING");
      pPVar7 = (PopAnim *)StringHelper::ToAnimRig((string *)aRStack_40,false);
      std::string::~string((string *)aRStack_40);
      nop();
      if (pPVar7 != (PopAnim *)0x0) {
        pRVar8 = (RtClass *)PopAnimRig::StaticGetClass();
        pPVar9 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable(pPVar7,pRVar8);
        *(PopAnimRig **)(param_1 + 0x1f0) = pPVar9;
        std::string::string((string *)aRStack_40,"ANIMATION");
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
        PopAnimRig::PlayAndContinue(pPVar9,aRStack_40,0,aDStack_38);
        std::string::~string((string *)aRStack_40);
        nop();
      }
      goto LAB_042bfabc;
    }
  }
  cVar2 = '\0';
  SetHeroButtonState((BoardHeroPlantButton *)param_1,0);
LAB_042bfabc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}

