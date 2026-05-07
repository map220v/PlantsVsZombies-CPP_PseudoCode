// Class: VanMistSubsystem


/* VanMistSubsystem::~VanMistSubsystem() */

void __thiscall VanMistSubsystem::~VanMistSubsystem(VanMistSubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_06a18800;
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* VanMistSubsystem::~VanMistSubsystem() */

void __thiscall VanMistSubsystem::~VanMistSubsystem(VanMistSubsystem *this)

{
  ~VanMistSubsystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VanMistSubsystem::StaticClassInit() */

void VanMistSubsystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"VanMistSubsystem");
    (*pcVar2)(plVar1,asStack_10,FUN_04f3d398,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VanMistSubsystem::StaticGetClass() */

long * VanMistSubsystem::StaticGetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"VanMistSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VanMistSubsystem::GetClass() const */

long * VanMistSubsystem::GetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"VanMistSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VanMistSubsystem::CreateVanMist(int, int) */

void __thiscall VanMistSubsystem::CreateVanMist(VanMistSubsystem *this,int param_1,int param_2)

{
  long lVar1;
  GridItemVanMist *this_00;
  Board *pBVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"van_mist");
  lVar1 = Board::GetGridItemAt(pBVar2,asStack_10,param_1,param_2);
  std::string::~string(asStack_10);
  nop();
  if (lVar1 == 0) {
    pBVar2 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"van_mist");
    Board::AddGridItem(pBVar2,asStack_10,param_1,param_2,1);
    std::string::~string(asStack_10);
    nop();
  }
  else {
    nop();
    if (this_00 != (GridItemVanMist *)0x0) {
      GridItemVanMist::Reset(this_00);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VanMistSubsystem::DoBlowVanMist(int, int) */

void __thiscall VanMistSubsystem::DoBlowVanMist(VanMistSubsystem *this,int param_1,int param_2)

{
  long lVar1;
  GridItemVanMist *this_00;
  Board *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"van_mist");
  lVar1 = Board::GetGridItemAt(this_01,asStack_10,param_1,param_2);
  std::string::~string(asStack_10);
  nop();
  if ((lVar1 != 0) && (nop(), this_00 != (GridItemVanMist *)0x0)) {
    GridItemVanMist::BlowMist(this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VanMistSubsystem::LaunchVanMist(int, int, float) */

void __thiscall
VanMistSubsystem::LaunchVanMist(VanMistSubsystem *this,int param_1,int param_2,float param_3)

{
  undefined4 uVar1;
  
  *(int *)(this + 0x10) = param_1;
  *(int *)(this + 0x14) = param_2;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(float *)(this + 0x20) = param_3;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1c) = uVar1;
  return;
}


/* VanMistSubsystem::BlowVanMist(int, int, float) */

void __thiscall
VanMistSubsystem::BlowVanMist(VanMistSubsystem *this,int param_1,int param_2,float param_3)

{
  undefined4 uVar1;
  
  *(int *)(this + 0x10) = param_1;
  *(int *)(this + 0x14) = param_2;
  *(undefined4 *)(this + 0x24) = 1;
  *(undefined4 *)(this + 0x18) = 0;
  *(float *)(this + 0x20) = param_3;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1c) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VanMistSubsystem::BloverBlowVanMist() */

void __thiscall VanMistSubsystem::BloverBlowVanMist(VanMistSubsystem *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  Board *this_00;
  int iVar6;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x24) != 1) {
    iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
    iVar6 = 0;
    iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
    iVar3 = BoardConstants::NUMBER_OF_ROWS();
    if (0 < iVar2) {
      do {
        iVar5 = 0;
        if (0 < iVar3) {
          do {
            this_00 = *(Board **)(gLawnApp + 0x9f0);
            std::string::string(asStack_10,"van_mist");
            lVar4 = Board::GetGridItemAt(this_00,asStack_10,iVar6,iVar5);
            std::string::~string(asStack_10);
            nop();
            if (lVar4 != 0) goto LAB_04f3e504;
            iVar5 = iVar5 + 1;
          } while (iVar5 != iVar3);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 != iVar2);
    }
    iVar6 = 0;
LAB_04f3e504:
    BlowVanMist(this,iVar6,iVar1 + -1,0.2);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* VanMistSubsystem::Update() */

void __thiscall VanMistSubsystem::Update(VanMistSubsystem *this)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  
  if (*(int *)(this + 0x24) == 0) {
    fVar3 = (float)PVZ_T();
    if (fVar3 <= *(float *)(this + 0x1c)) {
      return;
    }
    iVar2 = 0;
    if (*(int *)(this + 0x18) + *(int *)(this + 0x10) <= *(int *)(this + 0x14)) {
      while( true ) {
        iVar1 = BoardConstants::NUMBER_OF_ROWS();
        if (iVar1 <= iVar2) break;
        CreateVanMist(this,*(int *)(this + 0x18) + *(int *)(this + 0x10),iVar2);
        iVar2 = iVar2 + 1;
      }
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
      *(float *)(this + 0x1c) = *(float *)(this + 0x1c) + *(float *)(this + 0x20);
      return;
    }
  }
  else {
    fVar3 = (float)PVZ_T();
    if (fVar3 <= *(float *)(this + 0x1c)) {
      return;
    }
    if (*(int *)(this + 0x18) + *(int *)(this + 0x10) <= *(int *)(this + 0x14)) {
      for (iVar2 = 0; iVar1 = BoardConstants::NUMBER_OF_ROWS(), iVar2 < iVar1; iVar2 = iVar2 + 1) {
        DoBlowVanMist(this,*(int *)(this + 0x18) + *(int *)(this + 0x10),iVar2);
      }
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
      *(float *)(this + 0x1c) = *(float *)(this + 0x1c) + *(float *)(this + 0x20);
      return;
    }
  }
  uVar4 = PVZ_EOT();
  *(undefined4 *)(this + 0x1c) = uVar4;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VanMistSubsystem::VanMistSubsystem() */

void __thiscall VanMistSubsystem::VanMistSubsystem(VanMistSubsystem *this)

{
  undefined *this_00;
  undefined4 uVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined ***)this = &PTR_GetClass_06a18800;
  *(undefined4 *)(this + 0x18) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x1c) = uVar1;
  *(undefined4 *)(this + 0x20) = uVar1;
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,BloverBlowVanMist);
  Sexy::Delegate0::Delegate0<VanMistSubsystem,void(VanMistSubsystem::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::PlantBloverWind,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VanMistSubsystem::StaticNew() */

VanMistSubsystem * VanMistSubsystem::StaticNew(void)

{
  VanMistSubsystem *this;
  
  this = ::operator_new(0x28);
  VanMistSubsystem(this);
  return this;
}

