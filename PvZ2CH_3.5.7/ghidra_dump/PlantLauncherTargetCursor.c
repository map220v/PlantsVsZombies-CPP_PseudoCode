// Class: PlantLauncherTargetCursor


/* PlantLauncherTargetCursor::getCursorAnimOffset() const */

undefined1  [16] __thiscall
PlantLauncherTargetCursor::getCursorAnimOffset(PlantLauncherTargetCursor *this)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *(ulong *)(this + 0x78) & 0xffffffff;
  return auVar1;
}


/* PlantLauncherTargetCursor::~PlantLauncherTargetCursor() */

void __thiscall
PlantLauncherTargetCursor::~PlantLauncherTargetCursor(PlantLauncherTargetCursor *this)

{
  *(undefined ***)this = &PTR_GetClass_068266c0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::string::~string((string *)(this + 0x70));
  BaseCursor::~BaseCursor((BaseCursor *)this);
  return;
}


/* PlantLauncherTargetCursor::~PlantLauncherTargetCursor() */

void __thiscall
PlantLauncherTargetCursor::~PlantLauncherTargetCursor(PlantLauncherTargetCursor *this)

{
  ~PlantLauncherTargetCursor(this);
  AK::FreeHook(this);
  return;
}


/* PlantLauncherTargetCursor::onPlantDied(Plant*) */

void __thiscall
PlantLauncherTargetCursor::onPlantDied(PlantLauncherTargetCursor *this,Plant *param_1)

{
  if (*(long *)(param_1 + 0xa8) != *(long *)(this + 0x80)) {
    return;
  }
  BaseCursor::Destroy((BaseCursor *)this);
  return;
}


/* PlantLauncherTargetCursor::StaticGetClass() */

long * PlantLauncherTargetCursor::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantLauncherTargetCursor",uVar2,StaticNew);
  return sClass;
}


/* PlantLauncherTargetCursor::GetClass() const */

long * PlantLauncherTargetCursor::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantLauncherTargetCursor",uVar2,StaticNew);
  return sClass;
}


/* PlantLauncherTargetCursor::PlantLauncherTargetCursor() */

void __thiscall
PlantLauncherTargetCursor::PlantLauncherTargetCursor(PlantLauncherTargetCursor *this)

{
  BaseCursor::BaseCursor((BaseCursor *)this);
  *(undefined ***)this = &PTR_GetClass_068266c0;
  Sexy::Delegate1<Sexy::Point_const&>::Delegate1((DummyInit *)(this + 0x40));
  Set8BytesTo0(this + 0x70);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x78));
  *(undefined8 *)(this + 0x80) = 0;
  return;
}


/* PlantLauncherTargetCursor::StaticNew() */

PlantLauncherTargetCursor * PlantLauncherTargetCursor::StaticNew(void)

{
  PlantLauncherTargetCursor *this;
  
  this = ::operator_new(0x88);
  PlantLauncherTargetCursor(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLauncherTargetCursor::onTouchEvent(Sexy::Touch const&) */

void __thiscall
PlantLauncherTargetCursor::onTouchEvent(PlantLauncherTargetCursor *this,Touch *param_1)

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
        Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
                  ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x40),(SexyURL *)&local_20);
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
/* PlantLauncherTargetCursor::PlantLauncherTargetCursor(Sexy::Touch const&, PlantFramework*,
   std::string const&, Sexy::Delegate1<Sexy::Point const&>) */

void __thiscall
PlantLauncherTargetCursor::PlantLauncherTargetCursor
          (PlantLauncherTargetCursor *this,Touch *param_1,long param_2,undefined8 param_3,
          Delegate1 *param_5)

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
  *(undefined ***)this = &PTR_GetClass_068266c0;
  Sexy::Delegate1<Sexy::Point_const&>::Delegate1
            ((Delegate1<Sexy::Point_const&> *)(this + 0x40),param_5);
  FUN_05475d88((string *)(this + 0x70),param_3);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x78));
  *(long *)(this + 0x80) = param_2;
  GetPAMByName((string *)(this + 0x70));
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
  FUN_0428bc38((Insets *)&local_60,(string *)&local_50);
  BaseCursor::setCursorBoardOrigin((BaseCursor *)this,(TRect *)&local_60);
  Sexy::Insets::Insets((Insets *)&local_60);
  (**(code **)(*(long *)pPVar4 + 0x90))(pPVar4,(Insets *)&local_60);
  uVar6 = FUN_0428b6a0((float)local_60 + (float)local_58 * 0.5);
  *(undefined4 *)(this + 0x78) = uVar6;
  uVar6 = FUN_0428b6a0((float)local_5c + (float)local_54 * 0.5);
  *(undefined4 *)(this + 0x7c) = uVar6;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantDied);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<PlantLauncherTargetCursor,void(PlantLauncherTargetCursor::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,&local_90);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

