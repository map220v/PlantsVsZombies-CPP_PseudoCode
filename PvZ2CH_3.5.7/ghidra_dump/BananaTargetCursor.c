// Class: BananaTargetCursor


/* BananaTargetCursor::~BananaTargetCursor() */

void __thiscall BananaTargetCursor::~BananaTargetCursor(BananaTargetCursor *this)

{
  *(undefined ***)this = &PTR_GetClass_067a1cc0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  BaseCursor::~BaseCursor((BaseCursor *)this);
  return;
}


/* BananaTargetCursor::~BananaTargetCursor() */

void __thiscall BananaTargetCursor::~BananaTargetCursor(BananaTargetCursor *this)

{
  ~BananaTargetCursor(this);
  AK::FreeHook(this);
  return;
}


/* BananaTargetCursor::onPlantDied(Plant*) */

void __thiscall BananaTargetCursor::onPlantDied(BananaTargetCursor *this,Plant *param_1)

{
  if (*(long *)(param_1 + 0xa8) != *(long *)(this + 0x48)) {
    return;
  }
  BaseCursor::Destroy((BaseCursor *)this);
  return;
}


/* BananaTargetCursor::BananaTargetCursor() */

void __thiscall BananaTargetCursor::BananaTargetCursor(BananaTargetCursor *this)

{
  BaseCursor::BaseCursor((BaseCursor *)this);
  *(undefined ***)this = &PTR_GetClass_067a1cc0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x40));
  *(undefined8 *)(this + 0x48) = 0;
  return;
}


/* BananaTargetCursor::StaticNew() */

BananaTargetCursor * BananaTargetCursor::StaticNew(void)

{
  BananaTargetCursor *this;
  
  this = ::operator_new(0x50);
  BananaTargetCursor(this);
  return this;
}


/* BananaTargetCursor::StaticGetClass() */

long * BananaTargetCursor::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BananaTargetCursor",uVar2,StaticNew);
  return sClass;
}


/* BananaTargetCursor::GetClass() const */

long * BananaTargetCursor::GetClass(void)

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
  (*pcVar3)(plVar1,"BananaTargetCursor",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BananaTargetCursor::onTouchEvent(Sexy::Touch const&) */

void __thiscall BananaTargetCursor::onTouchEvent(BananaTargetCursor *this,Touch *param_1)

{
  int iVar1;
  char cVar2;
  float fVar3;
  int local_20;
  int local_1c;
  TRect<int> aTStack_18 [16];
  long local_8;
  
  iVar1 = *(int *)(param_1 + 0x30);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 4) {
    BaseCursor::Destroy((BaseCursor *)this);
    iVar1 = *(int *)(param_1 + 0x30);
  }
  cVar2 = '\0';
  if (iVar1 == 3) {
    cVar2 = (**(code **)(*(long *)this + 0x48))(this);
    if (cVar2 == '\0') {
      BaseCursor::GetBoardPosition();
      if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
        fVar3 = (float)Board::calculateRoofOffsetZ((float)local_20);
        local_1c = (int)(fVar3 + (float)local_1c);
      }
      Board::GetGridBoundingRect();
      cVar2 = Sexy::TRect<int>::Contains(aTStack_18,(TPoint *)&local_20);
      if (cVar2 != '\0') {
        PlantBanana::ChooseTarget2Fire(*(PlantBanana **)(this + 0x48),(Point *)&local_20);
      }
      cVar2 = '\x01';
      BaseCursor::Destroy((BaseCursor *)this);
    }
    else {
      BaseCursor::cacheOrDestroyCursor((BaseCursor *)this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BananaTargetCursor::BananaTargetCursor(Sexy::Touch const&, PlantBanana*) */

void __thiscall
BananaTargetCursor::BananaTargetCursor(BananaTargetCursor *this,Touch *param_1,PlantBanana *param_2)

{
  undefined *puVar1;
  ResourceInfo *pRVar2;
  RtClass *pRVar3;
  PopAnimRig *pPVar4;
  Insets *pIVar5;
  undefined4 uVar6;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  RtWeakPtr aRStack_68 [8];
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BaseCursor::BaseCursor((BaseCursor *)this,param_1);
  *(undefined ***)this = &PTR_GetClass_067a1cc0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x40));
  *(PlantBanana **)(this + 0x48) = param_2;
  std::string::string((string *)&local_50,"POPANIM_EFFECTS_BANANA_RETICLE");
  GetPAMByName((string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_68);
  pRVar3 = (RtClass *)PopAnimRig::StaticGetClass();
  pPVar4 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable((PopAnim *)pRVar2,pRVar3);
  std::string::string((string *)&local_50,"banana_lock_recticle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar4,(string *)&local_50,0,aDStack_38);
  std::string::~string((string *)&local_50);
  nop();
  BaseCursor::setAnimRig((BaseCursor *)this,pPVar4);
  pIVar5 = (Insets *)(**(code **)(**(long **)(param_2 + 0x10) + 0x178))(*(long **)(param_2 + 0x10));
  Sexy::Insets::Insets((Insets *)&local_50,pIVar5);
  FUN_03f68edc((Insets *)&local_60,(string *)&local_50);
  BaseCursor::setCursorBoardOrigin((BaseCursor *)this,(TRect *)&local_60);
  Sexy::Insets::Insets((Insets *)&local_60);
  (**(code **)(*(long *)pPVar4 + 0x90))(pPVar4,(Insets *)&local_60);
  uVar6 = FUN_03f68de8((float)local_60 + (float)local_58 * 0.5);
  *(undefined4 *)(this + 0x40) = uVar6;
  uVar6 = FUN_03f68de8((float)local_5c + (float)local_54 * 0.5);
  *(undefined4 *)(this + 0x44) = uVar6;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantDied);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<BananaTargetCursor,void(BananaTargetCursor::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,&local_90);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

