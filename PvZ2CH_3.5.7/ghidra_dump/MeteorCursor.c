// Class: MeteorCursor


/* MeteorCursor::~MeteorCursor() */

void __thiscall MeteorCursor::~MeteorCursor(MeteorCursor *this)

{
  *(undefined ***)this = &PTR_GetClass_0668bb30;
  BaseCursor::~BaseCursor((BaseCursor *)this);
  return;
}


/* MeteorCursor::~MeteorCursor() */

void __thiscall MeteorCursor::~MeteorCursor(MeteorCursor *this)

{
  ~MeteorCursor(this);
  AK::FreeHook(this);
  return;
}


/* MeteorCursor::MeteorCursor() */

void __thiscall MeteorCursor::MeteorCursor(MeteorCursor *this)

{
  BaseCursor::BaseCursor((BaseCursor *)this);
  *(undefined ***)this = &PTR_GetClass_0668bb30;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x40));
  return;
}


/* MeteorCursor::StaticNew() */

MeteorCursor * MeteorCursor::StaticNew(void)

{
  MeteorCursor *this;
  
  this = ::operator_new(0x48);
  MeteorCursor(this);
  return this;
}


/* MeteorCursor::StaticGetClass() */

long * MeteorCursor::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MeteorCursor",uVar2,StaticNew);
  return sClass;
}


/* MeteorCursor::GetClass() const */

long * MeteorCursor::GetClass(void)

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
  (*pcVar3)(plVar1,"MeteorCursor",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MeteorCursor::MeteorCursor(Sexy::Touch const&) */

void __thiscall MeteorCursor::MeteorCursor(MeteorCursor *this,Touch *param_1)

{
  ResourceInfo *pRVar1;
  RtClass *pRVar2;
  PopAnimRig *pPVar3;
  undefined4 uVar4;
  RtWeakPtr aRStack_50 [8];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BaseCursor::BaseCursor((BaseCursor *)this,param_1);
  *(undefined ***)this = &PTR_GetClass_0668bb30;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x40));
  std::string::string((string *)&local_48,"POPANIM_EFFECTS_ARTIFACT_STANDARD_RETICLE");
  GetPAMByName((string *)&local_48);
  std::string::~string((string *)&local_48);
  nop();
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_50);
  pRVar2 = (RtClass *)PopAnimRig::StaticGetClass();
  pPVar3 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable((PopAnim *)pRVar1,pRVar2);
  std::string::string((string *)&local_48,"banana_lock_recticle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar3,(string *)&local_48,0,aDStack_38);
  std::string::~string((string *)&local_48);
  nop();
  BaseCursor::setAnimRig((BaseCursor *)this,pPVar3);
  Sexy::Insets::Insets((Insets *)&local_48,0,0,0,0);
  BaseCursor::setCursorBoardOrigin((BaseCursor *)this,(TRect *)&local_48);
  Sexy::Insets::Insets((Insets *)&local_48);
  (**(code **)(*(long *)pPVar3 + 0x90))(pPVar3,(string *)&local_48);
  uVar4 = FUN_03728ad0((float)local_48 + (float)local_40 * 0.5);
  *(undefined4 *)(this + 0x40) = uVar4;
  uVar4 = FUN_03728ad0((float)local_44 + (float)local_3c * 0.5);
  *(undefined4 *)(this + 0x44) = uVar4;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MeteorCursor::onTouchEvent(Sexy::Touch const&) */

void __thiscall MeteorCursor::onTouchEvent(MeteorCursor *this,Touch *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ArtifactMgr *this_00;
  float fVar4;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  long local_8;
  
  iVar2 = *(int *)(param_1 + 0x30);
  local_8 = ___stack_chk_guard;
  if (iVar2 == 4) {
    BaseCursor::Destroy((BaseCursor *)this);
    iVar2 = *(int *)(param_1 + 0x30);
  }
  cVar1 = '\0';
  if (iVar2 == 3) {
    cVar1 = (**(code **)(*(long *)this + 0x48))(this);
    if (cVar1 == '\0') {
      BaseCursor::GetBoardPosition();
      if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
        fVar4 = (float)Board::calculateRoofOffsetZ((float)local_20);
        local_1c = (int)(fVar4 + (float)local_1c);
      }
      Board::GetGridBoundingRect();
      cVar1 = Sexy::TRect<int>::Contains((TRect<int> *)&local_18,(TPoint *)&local_20);
      if (cVar1 != '\0') {
        BaseCursor::GetBoardPosition();
        iVar2 = BoardTransforms::BoardSpaceToGridX(local_18);
        BaseCursor::GetBoardPosition();
        iVar3 = BoardTransforms::BoardSpaceToGridY(local_14);
        MessageRouter::Post<int,int,int,int>
                  ((MessageRouter *)gMessageRouter,Message::NotifyMeteorCursor,iVar2,iVar3);
        this_00 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
        ArtifactMgr::RequestTriggerArtifact(this_00);
      }
      cVar1 = '\x01';
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
  __stack_chk_fail(cVar1);
}

