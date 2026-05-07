// Class: SeedPacket_PVP


/* SeedPacket_PVP::~SeedPacket_PVP() */

void __thiscall SeedPacket_PVP::~SeedPacket_PVP(SeedPacket_PVP *this)

{
  *(undefined ***)this = &PTR_GetClass_06948960;
  *(undefined ***)(this + 0x10) = &PTR__SeedPacket_PVP_06948ba0;
  FUN_05476c50(this + 0x210);
  SeedPacket::~SeedPacket((SeedPacket *)this);
  return;
}


/* non-virtual thunk to SeedPacket_PVP::~SeedPacket_PVP() */

void __thiscall SeedPacket_PVP::~SeedPacket_PVP(SeedPacket_PVP *this)

{
  ~SeedPacket_PVP(this + -0x10);
  return;
}


/* SeedPacket_PVP::~SeedPacket_PVP() */

void __thiscall SeedPacket_PVP::~SeedPacket_PVP(SeedPacket_PVP *this)

{
  ~SeedPacket_PVP(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SeedPacket_PVP::~SeedPacket_PVP() */

void __thiscall SeedPacket_PVP::~SeedPacket_PVP(SeedPacket_PVP *this)

{
  ~SeedPacket_PVP(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_PVP::StaticClassInit() */

void SeedPacket_PVP::StaticClassInit(void)

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
    std::string::string(asStack_10,"SeedPacket_PVP");
    (*pcVar2)(plVar1,asStack_10,FUN_04ab89d8,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedPacket_PVP::StaticGetClass() */

long * SeedPacket_PVP::StaticGetClass(void)

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
  uVar2 = SeedPacket::StaticGetClass();
  (*pcVar3)(plVar1,"SeedPacket_PVP",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SeedPacket_PVP::GetClass() const */

long * SeedPacket_PVP::GetClass(void)

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
  uVar2 = SeedPacket::StaticGetClass();
  (*pcVar3)(plVar1,"SeedPacket_PVP",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SeedPacket_PVP::SeedPacket_PVP() */

void __thiscall SeedPacket_PVP::SeedPacket_PVP(SeedPacket_PVP *this)

{
  SeedPacket::SeedPacket((SeedPacket *)this);
  *(undefined4 *)(this + 0x200) = 1;
  *(undefined4 *)(this + 0x204) = 1;
  *(undefined ***)this = &PTR_GetClass_06948960;
  *(undefined4 *)(this + 0x208) = 0;
  *(undefined ***)(this + 0x10) = &PTR__SeedPacket_PVP_06948ba0;
  this[0x20c] = (SeedPacket_PVP)0x0;
  this[0x20d] = (SeedPacket_PVP)0x0;
  FUN_05476574(this + 0x210);
  return;
}


/* SeedPacket_PVP::StaticNew() */

SeedPacket_PVP * SeedPacket_PVP::StaticNew(void)

{
  SeedPacket_PVP *this;
  
  this = ::operator_new(0x218);
  SeedPacket_PVP(this);
  return this;
}


/* SeedPacket_PVP::SetCost(int) */

void __thiscall SeedPacket_PVP::SetCost(SeedPacket_PVP *this,int param_1)

{
  *(int *)(this + 0x208) = param_1;
  return;
}


/* SeedPacket_PVP::SetLocked(bool, std::wstring const&) */

void __thiscall SeedPacket_PVP::SetLocked(SeedPacket_PVP *this,bool param_1,wstring *param_2)

{
  this[0x20c] = (SeedPacket_PVP)param_1;
  SeedPacket::SetDisabled((SeedPacket *)this,param_1);
  thunk_FUN_05477b9c(this + 0x210,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_PVP::IsAffordable() */

void __thiscall SeedPacket_PVP::IsAffordable(SeedPacket_PVP *this)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  PVPManager *this_00;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = FUN_04ab8ce0(*(undefined4 *)(this + 400));
  if (bVar2 == 0) {
    bVar1 = 0 < *(int *)(this + 0x200);
    this_00 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    cVar3 = PVPManager::IsInPVPMap(this_00);
    bVar2 = bVar1;
    if (cVar3 == '\0') {
      SeedPacket::GetPlantType();
      bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      if (bVar4) {
        bVar2 = SeedPacket::IsAffordable((SeedPacket *)this);
        bVar2 = bVar2 & bVar1;
      }
    }
    else {
      bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x168));
      if (bVar4) {
        iVar5 = Board::GetSunCurrency(*(Board **)(gLawnApp + 0x9f0));
        iVar6 = (**(code **)(*(long *)this + 0x228))(this);
        bVar2 = 0;
        if (iVar6 <= iVar5) {
          bVar2 = bVar1;
        }
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_PVP::SetCurNum(int) */

void __thiscall SeedPacket_PVP::SetCurNum(SeedPacket_PVP *this,int param_1)

{
  long lVar1;
  int *piVar2;
  int local_14 [2];
  int local_c;
  long local_8;
  
  local_c = 0;
  local_8 = ___stack_chk_guard;
  local_14[0] = param_1;
  piVar2 = eastl::max_alt<int>(&local_c,local_14);
  lVar1 = ___stack_chk_guard;
  *(int *)(this + 0x200) = *piVar2;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedPacket_PVP::onSeedPacketPlanted(SeedPacket*) */

void __thiscall SeedPacket_PVP::onSeedPacketPlanted(SeedPacket_PVP *this,SeedPacket *param_1)

{
  char cVar1;
  
  cVar1 = FUN_04ab8ce0(*(undefined4 *)(this + 400));
  if (((cVar1 == '\0') && (this == (SeedPacket_PVP *)param_1)) && (0 < *(int *)(this + 0x204))) {
    SetCurNum(this,*(int *)(this + 0x200) + -1);
    return;
  }
  return;
}


/* SeedPacket_PVP::SetMaxNum(int) */

void __thiscall SeedPacket_PVP::SetMaxNum(SeedPacket_PVP *this,int param_1)

{
  int *piVar1;
  
  *(int *)(this + 0x204) = param_1;
  if (0 < param_1) {
    piVar1 = eastl::min_alt<int>((int *)(this + 0x200),(int *)(this + 0x204));
    *(int *)(this + 0x200) = *piVar1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_PVP::DrawText(Sexy::Graphics*) */

void __thiscall SeedPacket_PVP::DrawText(SeedPacket_PVP *this,Graphics *param_1)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  Image *pIVar8;
  undefined4 uVar9;
  undefined1 auStack_40 [8];
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x1a0) == 0) goto LAB_04ab9210;
  cVar2 = FUN_04ab8888(this[0x20c]);
  if (cVar2 != '\0') {
    cVar2 = FUN_054765e8(this + 0x210);
    if (cVar2 == '\0') {
      iVar4 = FUN_04ab8890(10);
      iVar5 = FUN_04ab8874(*(undefined4 *)(this + 0x38));
      iVar6 = FUN_04ab8890(0x14);
      iVar7 = FUN_04ab8878(*(undefined4 *)(this + 0x3c));
      Sexy::Insets::Insets((Insets *)&local_28,iVar4,iVar4,iVar5 - iVar6,iVar7);
      uVar1 = PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline;
      Sexy::Insets::Insets((Insets *)&local_18,0xff,0x52,0x52,0xff);
      WriteWordInRect(param_1,this + 0x210,(Insets *)&local_28,uVar1,(Insets *)&local_18,5,1);
    }
    goto LAB_04ab9210;
  }
  if (-1 < *(int *)(this + 0x208)) {
    Sexy::Color::Color((Color *)&local_28,0xff,0xff,0xff);
    uVar9 = *(undefined4 *)(this + 400);
    cVar2 = FUN_04ab8d20(uVar9);
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*(long *)this + 0x1c0))(this);
      if (cVar2 != '\0') {
        uVar9 = *(undefined4 *)(this + 400);
        goto LAB_04ab9050;
      }
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x168));
      if ((cVar2 != '\0') && (this[0x20d] != (SeedPacket_PVP)0x0)) {
        iVar4 = 0xff;
        goto LAB_04ab93bc;
      }
      Sexy::Color::Color((Color *)&local_18,0xff,0,0);
      local_28 = local_18;
      uStack_20 = uStack_10;
    }
    else {
LAB_04ab9050:
      cVar2 = FUN_04ab8d28(uVar9);
      if (cVar2 != '\0') {
        iVar4 = 0x80;
LAB_04ab93bc:
        Sexy::Color::Color((Color *)&local_18,iVar4,iVar4,iVar4);
        local_28 = local_18;
        uStack_20 = uStack_10;
      }
    }
    Sexy::StrFormat(L"%d",(wstring *)&local_18,(ulong)*(uint *)(this + 0x208));
    Sexy::PrimeTextWidget::SetText(*(PrimeTextWidget **)(this + 0x1a0),(wstring *)&local_18);
    (**(code **)(**(long **)(this + 0x1a0) + 0x170))(*(long **)(this + 0x1a0),0,(Color *)&local_28);
    (**(code **)(**(long **)(this + 0x1a0) + 0x128))(*(long **)(this + 0x1a0),param_1);
    FUN_05476c50((wstring *)&local_18);
  }
  if (0 < *(int *)(this + 0x204)) {
    Sexy::StrFormat(L"%d",auStack_40,(ulong)*(uint *)(this + 0x200));
    iVar4 = FUN_04ab8890(10);
    iVar5 = FUN_04ab8890(0);
    iVar6 = FUN_04ab8890(0x32);
    iVar7 = FUN_04ab8890(0x1e);
    Sexy::Insets::Insets((Insets *)&local_38,iVar4,iVar5,iVar6,iVar7);
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x178));
    if (!bVar3) {
      local_38 = FUN_04ab8890(9);
      local_34 = FUN_04ab8890(0x27);
      pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b80948);
      iVar4 = FUN_04ab8890(3);
      iVar5 = FUN_04ab8890(0x24);
      Sexy::Graphics::DrawImage(param_1,pIVar8,iVar4,iVar5);
    }
    else {
      local_38 = FUN_04ab8890(10);
      local_38 = -local_38;
      iVar4 = FUN_04ab8878(*(undefined4 *)(this + 0x3c));
      local_34 = FUN_04ab8890(5);
      local_34 = iVar4 - local_34;
      local_30 = FUN_04ab8874(*(undefined4 *)(this + 0x38));
    }
    Sexy::Color::Color((Color *)&local_28,0xff,0xff,0xff);
    cVar2 = FUN_04ab8d28(*(undefined4 *)(this + 400));
    if ((cVar2 != '\0') || (*(int *)(this + 0x200) == 0)) {
      Sexy::Color::Color((Color *)&local_18,0x80,0x80,0x80);
      local_28 = local_18;
      uStack_20 = uStack_10;
    }
    uVar1 = PrimeText_Game::Typeface_CafeteriaBlack_22_ThickOutline;
    Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&local_28);
    WriteWordInRect(param_1,auStack_40,(Insets *)&local_38,uVar1,(Insets *)&local_18,bVar3,1);
    FUN_05476c50(auStack_40);
  }
LAB_04ab9210:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_PVP::TryUse(PacketCursor*) */

void __thiscall SeedPacket_PVP::TryUse(SeedPacket_PVP *this,PacketCursor *param_1)

{
  int iVar1;
  ZombieCursor *pZVar2;
  SexyVector3 *pSVar3;
  undefined8 uVar4;
  long *plVar5;
  code *pcVar6;
  int local_20;
  int local_1c;
  float local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 == (PacketCursor *)0x0) ||
     (pZVar2 = Sexy::RtObject::Cast<ZombieCursor>((RtObject *)param_1),
     pZVar2 == (ZombieCursor *)0x0)) {
    uVar4 = 0;
  }
  else {
    (**(code **)(*(long *)pZVar2 + 0x80))(&local_20);
    plVar5 = *(long **)(gLawnApp + 0x9f0);
    pcVar6 = *(code **)(*plVar5 + 0x318);
    PowerupUI::GetPowerupDownImage();
    pSVar3 = (SexyVector3 *)(*pcVar6)(plVar5,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18,0,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    EATextSquish::Vec3::Vec3((Vec3 *)&local_18,0.0,0.0,0.0);
    iVar1 = BoardTransforms::GridToBoardSpaceX(local_20);
    local_18 = (float)iVar1;
    iVar1 = BoardTransforms::GridToBoardSpaceY(local_1c);
    local_14 = (float)iVar1;
    BoardEntity::PlaceOnBoard(pSVar3);
    MessageRouter::Post<SeedPacket*,SeedPacket_PVP*>
              ((MessageRouter *)gMessageRouter,Message::SeedPacketPlanted,this);
    uVar4 = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_PVP::Draw(Sexy::Graphics*) */

void __thiscall SeedPacket_PVP::Draw(SeedPacket_PVP *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SeedPacket::Draw((SeedPacket *)this,param_1);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  cVar1 = FUN_04ab8888(this[0x20c]);
  if (cVar1 != '\0') {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b80970);
    iVar2 = FUN_04ab8890(0xfffffff6);
    this_00 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b80970);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    this_01 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b80970);
    iVar4 = SalesProgressBar::GetCurrentLevel(this_01);
    Sexy::Graphics::DrawImage
              (param_1,pIVar5,iVar2,iVar2,(int)((float)iVar3 * 0.8),(int)((float)iVar4 * 0.8));
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to SeedPacket_PVP::Draw(Sexy::Graphics*) */

void __thiscall SeedPacket_PVP::Draw(SeedPacket_PVP *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* SeedPacket_PVP::updateAffordability(int) */

void __thiscall SeedPacket_PVP::updateAffordability(SeedPacket_PVP *this,int param_1)

{
  bool bVar1;
  int iVar2;
  
  SeedPacket::updateAffordability((SeedPacket *)this,param_1);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x168));
  if (!bVar1) {
    return;
  }
  iVar2 = (**(code **)(*(long *)this + 0x228))(this);
  this[0x20d] = (SeedPacket_PVP)(iVar2 <= param_1);
  SetCost(this,iVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_PVP::OnTouch(Sexy::Touch const&) */

void __thiscall SeedPacket_PVP::OnTouch(SeedPacket_PVP *this,Touch *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  BaseCursor *pBVar6;
  wchar_t *pwVar7;
  Board *pBVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [8];
  Touch aTStack_40 [16];
  Point aPStack_30 [8];
  Point aPStack_28 [32];
  long local_8;
  
  cVar1 = '\0';
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x30) != 0) goto LAB_04ab9838;
  if ((*(int *)(this + 0x200) != 0) ||
     (bVar2 = TestFlag<VaseFlags>(*(undefined4 *)(this + 400),0x20), bVar2)) {
    cVar1 = FUN_04ab8888(this[0x20c]);
    if (cVar1 == '\0') {
      SeedPacket::CheckResourceLoaded((SeedPacket *)this);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x168));
      if (bVar2) {
        iVar3 = Board::GetSunCurrency(*(Board **)(gLawnApp + 0x9f0));
        iVar4 = (**(code **)(*(long *)this + 0x228))(this);
        if (iVar3 < iVar4) {
          pBVar8 = *(Board **)(gLawnApp + 0x9f0);
          pwVar7 = L"[ADVICE_NOT_ENOUGH_SUN]";
          goto LAB_04ab98a8;
        }
      }
      else {
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x178));
        if (bVar2) {
          Sexy::Touch::Touch(aTStack_40,param_1);
          Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),aPStack_30);
          Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),aPStack_28);
          pBVar8 = *(Board **)(gLawnApp + 0x9f0);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)aRStack_50);
          pBVar6 = ::operator_new(0x58);
          ArenaZombieCursor::ArenaZombieCursor((ArenaZombieCursor *)pBVar6,aTStack_40,aRStack_48);
          Board::TryToAddCursor(pBVar8,pBVar6,true);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
          (**(code **)(*(long *)this + 0xe8))(this,4);
          MessageRouter::Post<SeedPacket*,SeedPacket_PVP*>
                    ((MessageRouter *)gMessageRouter,Message::ZombieSeedPacketSelected,this);
          cVar1 = '\x01';
          goto LAB_04ab9838;
        }
      }
      cVar1 = SeedPacket::OnTouch((SeedPacket *)this,param_1);
      goto LAB_04ab9838;
    }
    Board::DisplayAdvice(*(Board **)(gLawnApp + 0x9f0),this + 0x210,7,2);
  }
  else {
    pwVar7 = L"[ADVICE_NOT_ENOUGH_TIMES]";
    pBVar8 = *(Board **)(gLawnApp + 0x9f0);
LAB_04ab98a8:
    cVar1 = '\x01';
    FUN_05478178(aTStack_40,pwVar7,aRStack_48);
    Board::DisplayAdvice(pBVar8,aTStack_40,7,2);
    FUN_05476c50(aTStack_40);
    nop();
  }
  pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar5,"Play_Buzzer");
LAB_04ab9838:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* SeedPacket_PVP::CopyFrom(SeedPacket*) */

void __thiscall SeedPacket_PVP::CopyFrom(SeedPacket_PVP *this,SeedPacket *param_1)

{
  bool bVar1;
  int iVar2;
  SeedPacket_PVP *pSVar3;
  
  SeedPacket::CopyFrom((SeedPacket *)this,param_1);
  if ((param_1 != (SeedPacket *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<SeedPacket_PVP>((RtObject *)param_1), bVar1)) {
    pSVar3 = Sexy::RtObject::Cast<SeedPacket_PVP>((RtObject *)param_1);
    iVar2 = FUN_04ab8880(*(undefined4 *)(pSVar3 + 0x204));
    SetMaxNum(this,iVar2);
    iVar2 = FUN_04ab887c(*(undefined4 *)(pSVar3 + 0x200));
    SetCurNum(this,iVar2);
    iVar2 = FUN_04ab8884(*(undefined4 *)(pSVar3 + 0x208));
    SetCost(this,iVar2);
    return;
  }
  return;
}

