// Class: EscapeRootCursor


/* EscapeRootCursor::getCursorAnimOffset() const */

undefined1  [16] __thiscall EscapeRootCursor::getCursorAnimOffset(EscapeRootCursor *this)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *(ulong *)(this + 0x40) & 0xffffffff;
  return auVar1;
}


/* EscapeRootCursor::~EscapeRootCursor() */

void __thiscall EscapeRootCursor::~EscapeRootCursor(EscapeRootCursor *this)

{
  *(undefined ***)this = &PTR_GetClass_067fe640;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  BaseCursor::~BaseCursor((BaseCursor *)this);
  return;
}


/* EscapeRootCursor::~EscapeRootCursor() */

void __thiscall EscapeRootCursor::~EscapeRootCursor(EscapeRootCursor *this)

{
  ~EscapeRootCursor(this);
  AK::FreeHook(this);
  return;
}


/* EscapeRootCursor::onPlantDied(Plant*) */

void __thiscall EscapeRootCursor::onPlantDied(EscapeRootCursor *this,Plant *param_1)

{
  if (*(long *)(param_1 + 0xa8) != *(long *)(this + 0x48)) {
    return;
  }
  BaseCursor::Destroy((BaseCursor *)this);
  return;
}


/* EscapeRootCursor::EscapeRootCursor() */

void __thiscall EscapeRootCursor::EscapeRootCursor(EscapeRootCursor *this)

{
  BaseCursor::BaseCursor((BaseCursor *)this);
  *(undefined ***)this = &PTR_GetClass_067fe640;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x40));
  return;
}


/* EscapeRootCursor::StaticNew() */

EscapeRootCursor * EscapeRootCursor::StaticNew(void)

{
  EscapeRootCursor *this;
  
  this = ::operator_new(0x50);
  EscapeRootCursor(this);
  return this;
}


/* EscapeRootCursor::StaticGetClass() */

long * EscapeRootCursor::StaticGetClass(void)

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
  uVar2 = BaseCursor::StaticGetClass();
  (*pcVar3)(plVar1,"EscapeRootCursor",uVar2,StaticNew);
  return sClass;
}


/* EscapeRootCursor::GetClass() const */

long * EscapeRootCursor::GetClass(void)

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
  uVar2 = BaseCursor::StaticGetClass();
  (*pcVar3)(plVar1,"EscapeRootCursor",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EscapeRootCursor::onTouchEvent(Sexy::Touch const&) */

void __thiscall EscapeRootCursor::onTouchEvent(EscapeRootCursor *this,Touch *param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  PlantEscapeRoot *pPVar4;
  float fVar5;
  int local_30;
  int local_2c;
  TRect<int> aTStack_28 [16];
  TRect<int> aTStack_18 [16];
  long local_8;
  
  iVar1 = *(int *)(param_1 + 0x30);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 4) {
    BaseCursor::Destroy((BaseCursor *)this);
    iVar1 = *(int *)(param_1 + 0x30);
  }
  cVar3 = '\0';
  if (iVar1 == 3) {
    cVar3 = *(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119);
    if (cVar3 == '\0') {
      cVar3 = (**(code **)(*(long *)this + 0x48))(this);
      if (cVar3 == '\0') {
        Board::GetGridBoundingRect();
        BaseCursor::GetBoardPosition();
        cVar3 = Sexy::TRect<int>::Contains(aTStack_18,(TPoint *)aTStack_28);
        if (cVar3 != '\0') {
          pPVar4 = *(PlantEscapeRoot **)(this + 0x48);
          BaseCursor::GetBoardPosition();
          PlantEscapeRoot::SwapPlantAt(pPVar4,aTStack_18);
        }
        cVar3 = '\x01';
        BaseCursor::Destroy((BaseCursor *)this);
        goto LAB_041a3b50;
      }
    }
    else {
      BaseCursor::GetBoardPosition();
      fVar5 = (float)Board::calculateRoofOffsetZ((float)local_30);
      local_2c = (int)(fVar5 + (float)local_2c);
      PrismBeamTracker::GetColor();
      cVar2 = Sexy::TRect<int>::Contains(aTStack_28,(TPoint *)&local_30);
      if (cVar2 == '\0') {
        Board::GetGridBoundingRect();
        cVar2 = Sexy::TRect<int>::Contains(aTStack_18,(TPoint *)&local_30);
        if (cVar2 != '\0') {
          pPVar4 = *(PlantEscapeRoot **)(this + 0x48);
          Sexy::Point::Point((Point *)aTStack_18,(TPoint *)&local_30);
          PlantEscapeRoot::SwapPlantAt(pPVar4,aTStack_18);
        }
        BaseCursor::Destroy((BaseCursor *)this);
        goto LAB_041a3b50;
      }
    }
    BaseCursor::cacheOrDestroyCursor((BaseCursor *)this);
  }
LAB_041a3b50:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EscapeRootCursor::EscapeRootCursor(Sexy::Touch const&, PlantEscapeRoot*) */

void __thiscall
EscapeRootCursor::EscapeRootCursor(EscapeRootCursor *this,Touch *param_1,PlantEscapeRoot *param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  PopAnimRig *pPVar4;
  string *psVar5;
  Insets *pIVar6;
  undefined1 local_90 [16];
  undefined8 local_80;
  RtMixedPtrBase aRStack_68 [8];
  TRect aTStack_60 [16];
  int local_50;
  int iStack_4c;
  int local_48;
  int local_44;
  undefined8 local_40;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BaseCursor::BaseCursor((BaseCursor *)this,param_1);
  *(undefined ***)this = &PTR_GetClass_067fe640;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x40));
  *(PlantEscapeRoot **)(this + 0x48) = param_2;
  if ((param_2 != (PlantEscapeRoot *)0x0) && (*(long *)(param_2 + 0x10) != 0)) {
    Plant::GetType();
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_68);
    if (cVar2 != '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_50,(RtWeakPtrBase *)aRStack_68);
      pPVar4 = (PopAnimRig *)
               CreateStandalonePlantAnimRig((RtWeakPtr<Sexy::SoundResource> *)&local_50,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
      psVar5 = (string *)ProfileUtils::Profile();
      cVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      uVar3 = PlayerInfo::GetPlantAvatar(psVar5,(bool)(cVar2 + '\b'));
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_50,(RtWeakPtrBase *)aRStack_68);
      PlantAnimRig::ShowAvatarLayers
                ((PlantAnimRig *)pPVar4,(RtWeakPtr<Sexy::SoundResource> *)&local_50,uVar3);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
      std::string::string((string *)&local_50,"active_loop");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(pPVar4,(RtWeakPtr<Sexy::SoundResource> *)&local_50,0,aDStack_38);
      std::string::~string((string *)&local_50);
      nop();
      BaseCursor::setAnimRig((BaseCursor *)this,pPVar4);
      pIVar6 = (Insets *)
               (**(code **)(**(long **)(param_2 + 0x10) + 0x178))(*(long **)(param_2 + 0x10));
      Sexy::Insets::Insets((Insets *)&local_50,pIVar6);
      FUN_041a1d7c(aTStack_60,(RtWeakPtr<Sexy::SoundResource> *)&local_50);
      BaseCursor::setCursorBoardOrigin((BaseCursor *)this,aTStack_60);
      Sexy::Insets::Insets((Insets *)&local_50);
      (**(code **)(*(long *)pPVar4 + 0x90))(pPVar4,(RtWeakPtr<Sexy::SoundResource> *)&local_50);
      uVar3 = FUN_041a0c10((float)local_50 + (float)local_48 * 0.5);
      *(undefined4 *)(this + 0x40) = uVar3;
      uVar3 = FUN_041a0c10((float)iStack_4c + (float)local_44 * 0.5);
      *(undefined4 *)(this + 0x44) = uVar3;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantDied);
  local_80 = local_40;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<EscapeRootCursor,void(EscapeRootCursor::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,local_90);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

