// Class: HeroPlantFramework


/* HeroPlantFramework::onCancelEvent() */

void __thiscall HeroPlantFramework::onCancelEvent(HeroPlantFramework *this)

{
  *(undefined8 *)(this + 0x58) = 0;
  return;
}


/* HeroPlantFramework::TakeSmashAttack(Sexy::RtWeakPtr<Zombie>) */

void HeroPlantFramework::TakeSmashAttack(long param_1)

{
  char cVar1;
  
  cVar1 = Plant::IsInvincible(*(Plant **)(param_1 + 0x10),false);
  if (cVar1 == '\0') {
    if (*(float *)(param_1 + 0x50) <= 0.0) {
      Plant::KillPlant(*(Plant **)(param_1 + 0x10),0,0,1);
      return;
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}


/* HeroPlantFramework::onApplyCondition(PlantConditions) */

void __thiscall HeroPlantFramework::onApplyCondition(HeroPlantFramework *this,undefined4 param_2)

{
  if (0.0 < *(float *)(this + 0x50)) {
    switch(param_2) {
    case 1:
      *(undefined4 *)(this + 0x50) = 0;
      Plant::EndCondition(*(Plant **)(this + 0x10),1);
      return;
    case 2:
      *(undefined4 *)(this + 0x50) = 0;
      Plant::EndCondition(*(Plant **)(this + 0x10),2);
      return;
    case 6:
      *(undefined4 *)(this + 0x50) = 0;
      Plant::EndCondition(*(Plant **)(this + 0x10),6);
      return;
    case 0x1d:
      *(undefined4 *)(this + 0x50) = 0;
      Plant::EndCondition(*(Plant **)(this + 0x10),0x1d);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantFramework::StaticClassInit() */

void HeroPlantFramework::StaticClassInit(void)

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
    std::string::string(asStack_10,"HeroPlantFramework");
    (*pcVar2)(plVar1,asStack_10,FUN_042b2fd8,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeroPlantFramework::StaticGetClass() */

long * HeroPlantFramework::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"HeroPlantFramework",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeroPlantFramework::GetClass() const */

long * HeroPlantFramework::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"HeroPlantFramework",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeroPlantFramework::ClearTouch() */

void __thiscall HeroPlantFramework::ClearTouch(HeroPlantFramework *this)

{
  *(undefined8 *)(this + 0x58) = 0;
  return;
}


/* HeroPlantFramework::GetTalentLevel(int) */

undefined4 __thiscall HeroPlantFramework::GetTalentLevel(HeroPlantFramework *this,int param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0x38);
  uVar2 = FUN_042b22a4(uVar4,*(undefined8 *)(this + 0x40));
  uVar1 = 0;
  if ((ulong)(long)param_1 < uVar2) {
    puVar3 = (undefined4 *)FUN_042b22f8(uVar4,(long)param_1);
    uVar1 = *puVar3;
  }
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantFramework::TryBlockZombossRush(Zombie*) */

void HeroPlantFramework::TryBlockZombossRush(Zombie *param_1)

{
  code *pcVar1;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  fVar2 = *(float *)(param_1 + 0x50);
  local_8 = ___stack_chk_guard;
  if (0.0 < fVar2) {
    pcVar1 = *(code **)(*(long *)param_1 + 0x310);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    (*pcVar1)(param_1,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0.0 < fVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantFramework::GetTalentLevelUpCost(int) */

void __thiscall HeroPlantFramework::GetTalentLevelUpCost(HeroPlantFramework *this,int param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar9 = (ulong)param_1;
  local_8 = ___stack_chk_guard;
  Plant::GetType();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)(lVar3 + 0x130));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_18);
  if (bVar1) {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    iVar2 = FUN_042b22d8(*(undefined8 *)(lVar3 + 0x60),*(undefined8 *)(lVar3 + 0x68));
    if (param_1 < iVar2) {
      uVar8 = *(undefined8 *)(this + 0x38);
      uVar4 = FUN_042b22a4(uVar8,*(undefined8 *)(this + 0x40));
      if (uVar9 < uVar4) {
        piVar5 = (int *)FUN_042b22f8(uVar8,uVar9);
        iVar2 = *piVar5;
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        lVar3 = FUN_042b2300(*(undefined8 *)(lVar3 + 0x60),uVar9);
        if (iVar2 < *(int *)(lVar3 + 0x18)) {
          lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
          lVar3 = FUN_042b2300(*(undefined8 *)(lVar3 + 0x60),uVar9);
          iVar2 = FUN_042b22a4(*(undefined8 *)(lVar3 + 0x20),*(undefined8 *)(lVar3 + 0x28));
          piVar5 = (int *)FUN_042b22f8(*(undefined8 *)(this + 0x38),uVar9);
          if (*piVar5 < iVar2) {
            lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
            lVar3 = FUN_042b2300(*(undefined8 *)(lVar3 + 0x60),uVar9);
            piVar5 = (int *)FUN_042b22f8(*(undefined8 *)(this + 0x38),uVar9);
            puVar6 = (undefined4 *)FUN_042b22b0(*(undefined8 *)(lVar3 + 0x20),(long)*piVar5);
            uVar7 = *puVar6;
          }
          else {
            lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
            lVar3 = FUN_042b2300(*(undefined8 *)(lVar3 + 0x60),uVar9);
            puVar6 = (undefined4 *)FUN_042b22b0(*(undefined8 *)(lVar3 + 0x20),(long)(iVar2 + -1));
            uVar7 = *puVar6;
          }
          goto LAB_042b2d50;
        }
      }
    }
  }
  uVar7 = 9999;
LAB_042b2d50:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


/* HeroPlantFramework::CanTalentLevelUp(int) */

bool __thiscall HeroPlantFramework::CanTalentLevelUp(HeroPlantFramework *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x34);
  iVar2 = GetTalentLevelUpCost(this,param_1);
  return iVar2 <= iVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantFramework::IsTalentLevelMax(int) */

void __thiscall HeroPlantFramework::IsTalentLevelMax(HeroPlantFramework *this,int param_1)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  ulong uVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar7 = (ulong)param_1;
  local_8 = ___stack_chk_guard;
  Plant::GetType();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)(lVar3 + 0x130));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_18);
  if (bVar2) {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    uVar4 = FUN_042b22d8(*(undefined8 *)(lVar3 + 0x60),*(undefined8 *)(lVar3 + 0x68));
    if (uVar7 < uVar4) {
      uVar6 = *(undefined8 *)(this + 0x38);
      uVar4 = FUN_042b22a4(uVar6,*(undefined8 *)(this + 0x40));
      if (uVar7 < uVar4) {
        piVar5 = (int *)FUN_042b22f8(uVar6,uVar7);
        iVar1 = *piVar5;
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        lVar3 = FUN_042b2300(*(undefined8 *)(lVar3 + 0x60),uVar7);
        bVar2 = *(int *)(lVar3 + 0x18) <= iVar1;
        goto LAB_042b2f24;
      }
    }
  }
  bVar2 = false;
LAB_042b2f24:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantFramework::onKilled(bool) */

void HeroPlantFramework::onKilled(bool param_1)

{
  bool bVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(long *)((ulong)param_1 + 0x10) == 0) ||
     (bVar1 = TestFlag<DamageTypeFlags>
                        (*(undefined8 *)(*(long *)((ulong)param_1 + 0x10) + 0x108),0x40000000000),
     !bVar1)) {
    Sexy::LazySingleton<HeroPlantMgr>::GetInstance();
    Plant::GetType();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  else {
    Sexy::LazySingleton<HeroPlantMgr>::GetInstance();
    Plant::GetType();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantFramework::AddToRenderQueue(RenderQueue*) */

void __thiscall HeroPlantFramework::AddToRenderQueue(HeroPlantFramework *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,DrawHeroPlantHud);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<HeroPlantFramework,void(HeroPlantFramework::*)(Sexy::Graphics*)>(aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,799999,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeroPlantFramework::HeroPlantFramework() */

void __thiscall HeroPlantFramework::HeroPlantFramework(HeroPlantFramework *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_0682b7d0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  return;
}


/* HeroPlantFramework::StaticNew() */

HeroPlantFramework * HeroPlantFramework::StaticNew(void)

{
  HeroPlantFramework *this;
  
  this = ::operator_new(0x60);
  HeroPlantFramework(this);
  return this;
}


/* HeroPlantFramework::~HeroPlantFramework() */

void __thiscall HeroPlantFramework::~HeroPlantFramework(HeroPlantFramework *this)

{
  *(undefined ***)this = &PTR_GetClass_0682b7d0;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x38));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* HeroPlantFramework::~HeroPlantFramework() */

void __thiscall HeroPlantFramework::~HeroPlantFramework(HeroPlantFramework *this)

{
  ~HeroPlantFramework(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantFramework::registerForEvents() */

void __thiscall HeroPlantFramework::registerForEvents(HeroPlantFramework *this)

{
  Board *pBVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a8 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_a0 [8];
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar1 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTouchEvent);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<HeroPlantFramework,bool(HeroPlantFramework::*)(Sexy::Touch_const&)>
            (aDStack_68,aCStack_98);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a0,(RtWeakPtrBase *)aRStack_a8);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCancelEvent);
  Sexy::Delegate0::Delegate0<HeroPlantFramework,void(HeroPlantFramework::*)()>
            (aDStack_38,aCStack_80);
  Board::RegisterTouchGameplayObject(pBVar1,aDStack_68,2,aRStack_a0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantFramework::GetTalentPointsFromGradeUp(int) */

void __thiscall HeroPlantFramework::GetTalentPointsFromGradeUp(HeroPlantFramework *this,int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetType();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)(lVar4 + 0x130));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_18);
  if (bVar1) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    iVar3 = FUN_042b2310(*(undefined8 *)(lVar4 + 0x30),*(undefined8 *)(lVar4 + 0x38));
    if (param_1 <= iVar3) {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      lVar4 = FUN_042b231c(*(undefined8 *)(lVar4 + 0x30),(long)(param_1 + -1));
      uVar5 = *(undefined4 *)(lVar4 + 8);
      goto LAB_042b428c;
    }
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    cVar2 = std::vector<HeroPlantGradeUp,std::allocator<HeroPlantGradeUp>>::empty
                      ((vector<HeroPlantGradeUp,std::allocator<HeroPlantGradeUp>> *)(lVar4 + 0x30));
    if (cVar2 == '\0') {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      lVar4 = FUN_042b231c(*(undefined8 *)(lVar4 + 0x30),(long)(iVar3 + -1));
      uVar5 = *(undefined4 *)(lVar4 + 8);
      goto LAB_042b428c;
    }
  }
  uVar5 = 0;
LAB_042b428c:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantFramework::GetExpForGradeUp(int) */

void __thiscall HeroPlantFramework::GetExpForGradeUp(HeroPlantFramework *this,int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetType();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)(lVar4 + 0x130));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_18);
  if (bVar1) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    iVar3 = FUN_042b2310(*(undefined8 *)(lVar4 + 0x30),*(undefined8 *)(lVar4 + 0x38));
    if (param_1 <= iVar3) {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      lVar4 = FUN_042b231c(*(undefined8 *)(lVar4 + 0x30),(long)(param_1 + -1));
      uVar5 = *(undefined4 *)(lVar4 + 0xc);
      goto LAB_042b43a4;
    }
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    cVar2 = std::vector<HeroPlantGradeUp,std::allocator<HeroPlantGradeUp>>::empty
                      ((vector<HeroPlantGradeUp,std::allocator<HeroPlantGradeUp>> *)(lVar4 + 0x30));
    if (cVar2 == '\0') {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      lVar4 = FUN_042b231c(*(undefined8 *)(lVar4 + 0x30),(long)(iVar3 + -1));
      uVar5 = *(undefined4 *)(lVar4 + 0xc);
      goto LAB_042b43a4;
    }
  }
  uVar5 = 99999;
LAB_042b43a4:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* HeroPlantFramework::GetExpSliceImage() */

undefined8 __thiscall HeroPlantFramework::GetExpSliceImage(HeroPlantFramework *this)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  
  if (*(int *)(this + 0x2c) == *(int *)(this + 0x30)) {
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af5c38);
    return uVar2;
  }
  iVar1 = GetExpForGradeUp(this,*(int *)(this + 0x2c));
  fVar3 = (float)*(int *)(this + 0x28) / (float)iVar1;
  if (fVar3 < 0.125) {
    return 0;
  }
  if (fVar3 < 0.25) {
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af5d60);
    return uVar2;
  }
  if (fVar3 < 0.375) {
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af5ce8);
    return uVar2;
  }
  if (fVar3 < 0.5) {
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af5e88);
    return uVar2;
  }
  if (fVar3 < 0.625) {
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af5fc8);
    return uVar2;
  }
  if (fVar3 < 0.75) {
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af5db0);
    return uVar2;
  }
  if (0.875 <= fVar3) {
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6050);
    return uVar2;
  }
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6028);
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantFramework::DrawHeroPlantHud(Sexy::Graphics*) */

void __thiscall HeroPlantFramework::DrawHeroPlantHud(HeroPlantFramework *this,Graphics *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  Image *pIVar7;
  Plant *this_00;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int local_38;
  int local_34;
  undefined1 auStack_30 [8];
  GraphicsAutoState aGStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  lVar6 = *(long *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  fVar10 = *(float *)(lVar6 + 0x1c);
  fVar9 = (float)FUN_042b2454(*(undefined4 *)(lVar6 + 0x18),fVar10,*(undefined4 *)(lVar6 + 0x20));
  fVar9 = (float)FUN_042b2740(fVar9 - 35.0);
  fVar10 = (float)FUN_042b2740(fVar10 + 10.0);
  Sexy::Point::Point((Point *)&local_38,(int)fVar9,(int)fVar10);
  if (0 < *(int *)(this + 0x34)) {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_28,param_1);
    fVar9 = (float)PVZ_T();
    fVar9 = cosf(fVar9 * 3.0);
    Sexy::Graphics::SetColorizeImages(param_1,true);
    uVar1 = (int)(fVar9 * 255.0) >> 0x1f;
    Sexy::Insets::Insets(aIStack_18,0xff,0xff,0xff,((int)(fVar9 * 255.0) ^ uVar1) - uVar1);
    Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
    pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af5d38);
    Sexy::Graphics::DrawImage(param_1,pIVar7,local_38,local_34);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_28);
  }
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af5ef0);
  iVar5 = local_38;
  iVar2 = FUN_042b2760(0x20);
  iVar4 = local_34;
  iVar3 = FUN_042b2760(0x11);
  Sexy::Graphics::DrawImage(param_1,pIVar7,iVar5 + iVar2,iVar4 + iVar3);
  this_00 = *(Plant **)(this + 0x10);
  fVar9 = (float)FUN_042b229c(*(undefined4 *)(this_00 + 0xd8));
  fVar10 = (float)Plant::GetMaxHealth(this_00);
  if (fVar10 <= fVar9 + *(float *)(this + 0x50)) {
    lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af5ef0);
    fVar11 = (fVar9 * (float)*(int *)(lVar6 + 0x38)) / (fVar9 + *(float *)(this + 0x50));
    lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af5ef0);
    fVar10 = ((float)*(int *)(lVar6 + 0x38) * *(float *)(this + 0x50)) /
             (fVar9 + *(float *)(this + 0x50));
  }
  else {
    lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af5ef0);
    fVar11 = (fVar9 * (float)*(int *)(lVar6 + 0x38)) / fVar10;
    lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af5ef0);
    fVar10 = ((float)*(int *)(lVar6 + 0x38) * *(float *)(this + 0x50)) / fVar10;
  }
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6120);
  iVar5 = local_38;
  iVar2 = FUN_042b2760(0x20);
  iVar4 = local_34;
  iVar3 = FUN_042b2760(0x11);
  lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6120);
  Sexy::Graphics::DrawImage
            (param_1,pIVar7,iVar5 + iVar2,iVar4 + iVar3,(int)fVar11,*(int *)(lVar6 + 0x3c));
  if (0 < (int)fVar10) {
    pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af5f48);
    iVar5 = local_38;
    iVar2 = FUN_042b2760(0x20);
    iVar4 = local_34;
    iVar3 = FUN_042b2760(0x11);
    lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af5f48);
    Sexy::Graphics::DrawImage
              (param_1,pIVar7,iVar5 + iVar2 + (int)fVar11,iVar4 + iVar3,(int)fVar10,
               *(int *)(lVar6 + 0x3c));
  }
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af5dd8);
  iVar5 = local_38;
  iVar2 = FUN_042b2760(0x20);
  iVar4 = local_34;
  iVar3 = FUN_042b2760(0x11);
  Sexy::Graphics::DrawImage(param_1,pIVar7,iVar5 + iVar2,iVar4 + iVar3);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af5cc0);
  iVar5 = local_38;
  iVar4 = FUN_042b2760(10);
  Sexy::Graphics::DrawImage(param_1,pIVar7,iVar5 + iVar4,iVar4 + local_34);
  pIVar7 = (Image *)GetExpSliceImage(this);
  iVar5 = local_38;
  if (pIVar7 != (Image *)0x0) {
    iVar4 = FUN_042b2760(0xb);
    Sexy::Graphics::DrawImage(param_1,pIVar7,iVar5 + iVar4,iVar4 + local_34);
  }
  Sexy::StrFormat(L"%d",auStack_30,(ulong)*(uint *)(this + 0x2c));
  iVar5 = FUN_042b2760(0xb);
  iVar4 = FUN_042b2760(0x16);
  Sexy::Insets::Insets((Insets *)aGStack_28,local_38 + iVar5,iVar5 + local_34,iVar4,iVar4);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_12_Outline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aGStack_28,uVar8,(Color *)aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeroPlantFramework::CanGradeUp() */

bool __thiscall HeroPlantFramework::CanGradeUp(HeroPlantFramework *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = false;
  if (*(int *)(this + 0x2c) < *(int *)(this + 0x30)) {
    iVar1 = *(int *)(this + 0x28);
    iVar2 = GetExpForGradeUp(this,*(int *)(this + 0x2c));
    bVar3 = iVar2 <= iVar1;
  }
  return bVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantFramework::GetGradgeUpInfo(int) */

void __thiscall HeroPlantFramework::GetGradgeUpInfo(HeroPlantFramework *this,int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetType();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)(lVar4 + 0x130));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_18);
  if (bVar1) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    iVar3 = FUN_042b2310(*(undefined8 *)(lVar4 + 0x30),*(undefined8 *)(lVar4 + 0x38));
    if (iVar3 < param_1) {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      cVar2 = std::vector<HeroPlantGradeUp,std::allocator<HeroPlantGradeUp>>::empty
                        ((vector<HeroPlantGradeUp,std::allocator<HeroPlantGradeUp>> *)(lVar4 + 0x30)
                        );
      if (cVar2 != '\0') goto LAB_042b4ad8;
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      param_1 = iVar3;
    }
    else {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    }
    puVar5 = (undefined8 *)FUN_042b231c(*(undefined8 *)(lVar4 + 0x30),(long)(param_1 + -1));
    uVar7 = *puVar5;
    uVar6 = puVar5[1];
  }
  else {
LAB_042b4ad8:
    uVar7 = 0;
    uVar6 = 0x270f00000000;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7,uVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantFramework::IsShieldMoudleUnlocked() */

void HeroPlantFramework::IsShieldMoudleUnlocked(void)

{
  char cVar1;
  wchar16 *pwVar2;
  UnchartedBoostMgr *pUVar3;
  LineBreakCategory *pLVar4;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  float fVar5;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  pLVar4 = aLStack_18;
  local_8 = ___stack_chk_guard;
  pwVar2 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_10,"FreePlanting");
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar2,(wchar16 *)asStack_10,pLVar4,in_x3,in_x4);
  std::string::~string(asStack_10);
  nop();
  if (cVar1 == '\0') {
    pUVar3 = (UnchartedBoostMgr *)Sexy::LazySingleton<UnchartedBoostMgr>::GetInstancePtr();
    fVar5 = (float)UnchartedBoostMgr::GetBoostValue(pUVar3,0,0x13,0);
    cVar1 = 0.0 < fVar5;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantFramework::UpdateUnconditionally() */

void __thiscall HeroPlantFramework::UpdateUnconditionally(HeroPlantFramework *this)

{
  char cVar1;
  float *pfVar2;
  float fVar3;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsShieldMoudleUnlocked();
  if ((cVar1 != '\0') && (fVar3 = (float)PVZ_T(), *(float *)(this + 0x54) < fVar3)) {
    fVar3 = (float)PVZ_T();
    local_10 = *(float *)(this + 0x50) + 1000.0;
    *(float *)(this + 0x54) = fVar3 + 10.0;
    local_c = 4000.0;
    pfVar2 = eastl::min_alt<float>(&local_10,&local_c);
    *(float *)(this + 0x50) = *pfVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantFramework::GradeUp() */

void __thiscall HeroPlantFramework::GradeUp(HeroPlantFramework *this)

{
  int iVar1;
  int iVar2;
  float extraout_var;
  Effect_PopAnim *pEVar3;
  ResourceInfo *pRVar4;
  float *pfVar5;
  code *pcVar6;
  Plant *pPVar7;
  float fVar8;
  undefined4 uVar9;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = GetExpForGradeUp(this,*(int *)(this + 0x2c));
  pcVar6 = *(code **)(*(long *)this + 0x120);
  iVar2 = *(int *)(this + 0x28) - iVar2;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  *(int *)(this + 0x28) = iVar2;
  iVar2 = (*pcVar6)(this);
  GetGradgeUpInfo(this,*(int *)(this + 0x2c));
  pPVar7 = *(Plant **)(this + 0x10);
  fVar8 = (float)Plant::GetMaxHealth(pPVar7);
  Plant::SetMaxHealth(pPVar7,fVar8 + extraout_var * (float)iVar2);
  pPVar7 = *(Plant **)(this + 0x10);
  fVar8 = (float)FUN_042b229c(*(undefined4 *)(pPVar7 + 0xd8));
  Plant::SetHealth(pPVar7,fVar8 + extraout_var * (float)iVar2);
  pPVar7 = (Plant *)0x0;
  if (0 < *(int *)(this + 0x2c)) {
    iVar2 = 1;
    do {
      iVar1 = iVar2 + 1;
      fVar8 = (float)GetGradgeUpInfo(this,iVar2);
      pPVar7 = (Plant *)((float)pPVar7 + fVar8);
      iVar2 = iVar1;
    } while (iVar1 <= *(int *)(this + 0x2c));
  }
  uVar9 = PVZ_EOT();
  Plant::ApplyAddition(pPVar7,uVar9,*(undefined8 *)(this + 0x10),0,2);
  iVar2 = GetTalentPointsFromGradeUp(this,*(int *)(this + 0x2c));
  *(int *)(this + 0x34) = *(int *)(this + 0x34) + iVar2;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  pEVar3 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_UI_HEROPLANT_EFFECTS_GRADEUPBACK");
  GetPAMByName(asStack_20);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar3,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,*pfVar5,pfVar5[1],0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar3,(SexyVector3 *)aRStack_18,-1);
  Effect_PopAnim::SetCentered(pEVar3,true);
  FUN_042b2290(pEVar3 + 0x1c,0x621ec);
  std::string::string((string *)aRStack_18,"animation");
  Effect_PopAnim::PlaySingleAnimation(pEVar3,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  pEVar3 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_UI_HEROPLANT_EFFECTS_GRADEUPFRONT");
  GetPAMByName(asStack_20);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar3,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,*pfVar5,pfVar5[1],0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar3,(SexyVector3 *)aRStack_18,-1);
  Effect_PopAnim::SetCentered(pEVar3,true);
  FUN_042b2290(pEVar3 + 0x1c,0x622b4);
  std::string::string((string *)aRStack_18,"animation");
  Effect_PopAnim::PlaySingleAnimation(pEVar3,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  MessageRouter::Post<Plant*,int,Plant*,int>
            ((MessageRouter *)gMessageRouter,Message::HeroPlantGradeUp,*(Plant **)(this + 0x10),
             *(int *)(this + 0x2c));
  Sexy::LazySingleton<HeroPlantMgr>::GetInstance();
  Plant::GetType();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeroPlantFramework::AddExperience(int) */

void __thiscall HeroPlantFramework::AddExperience(HeroPlantFramework *this,int param_1)

{
  char cVar1;
  
  if (*(int *)(this + 0x2c) < *(int *)(this + 0x30)) {
    *(int *)(this + 0x28) = *(int *)(this + 0x28) + param_1;
  }
  while (cVar1 = CanGradeUp(this), cVar1 != '\0') {
    GradeUp(this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantFramework::TakeDamage(DamageInfo const&) */

void HeroPlantFramework::TakeDamage(DamageInfo *param_1)

{
  float *pfVar1;
  DamageInfo *in_x1;
  DamageInfo *in_x8;
  float local_70;
  float local_6c;
  DamageInfo aDStack_68 [8];
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(float *)(param_1 + 0x50) <= 0.0) {
    DamageInfo::DamageInfo(in_x8,in_x1);
  }
  else {
    DamageInfo::DamageInfo(aDStack_68,in_x1);
    local_6c = 0.0;
    local_70 = *(float *)(param_1 + 0x50) - *(float *)(in_x1 + 8);
    pfVar1 = eastl::max_alt<float>(&local_70,&local_6c);
    local_60 = 0;
    *(float *)(param_1 + 0x50) = *pfVar1;
    DamageInfo::DamageInfo(in_x8,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantFramework::GetTalentConfig(int) */

void HeroPlantFramework::GetTalentConfig(int param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  HeroPlantTalent *pHVar4;
  int in_w1;
  HeroPlantTalent *in_x8;
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetType();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)(lVar2 + 0x130));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_48);
  if (bVar1) {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    uVar3 = FUN_042b22d8(*(undefined8 *)(lVar2 + 0x60),*(undefined8 *)(lVar2 + 0x68));
    if ((ulong)(long)in_w1 < uVar3) {
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
      pHVar4 = (HeroPlantTalent *)FUN_042b2300(*(undefined8 *)(lVar2 + 0x60),(long)in_w1);
      HeroPlantTalent::HeroPlantTalent(in_x8,pHVar4);
      goto LAB_042b59b8;
    }
  }
  HeroPlantTalent::HeroPlantTalent((HeroPlantTalent *)aRStack_40);
  HeroPlantTalent::HeroPlantTalent(in_x8,(HeroPlantTalent *)aRStack_40);
  HeroPlantTalent::~HeroPlantTalent((HeroPlantTalent *)aRStack_40);
LAB_042b59b8:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantFramework::GetTalentName(int, int) */

void HeroPlantFramework::GetTalentName(int param_1,int param_2)

{
  wstring awStack_48 [8];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetTalentConfig(param_1);
  Sexy::ToWString(asStack_40);
  TodStringTranslate(awStack_48);
  FUN_05476c50(awStack_48);
  HeroPlantTalent::~HeroPlantTalent((HeroPlantTalent *)asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantFramework::GetTalentDescription(int, int, bool) */

void HeroPlantFramework::GetTalentDescription(int param_1,int param_2,bool param_3)

{
  char *pcVar1;
  char in_w3;
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  HeroPlantTalent aHStack_40 [16];
  string asStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetTalentConfig(param_1);
  std::operator+("[",asStack_30);
  Sexy::StrFormat("_%d",asStack_58,(ulong)param_3);
  std::operator+(asStack_60,asStack_58);
  if (in_w3 == '\0') {
    pcVar1 = "";
  }
  else {
    pcVar1 = "_PRESS";
  }
  std::operator+(asStack_50,pcVar1);
  std::operator+(asStack_48,"]");
  std::string::~string(asStack_48);
  std::string::~string(asStack_50);
  std::string::~string(asStack_58);
  std::string::~string(asStack_60);
  HeroPlantTalent::~HeroPlantTalent(aHStack_40);
  Sexy::ToWString(asStack_68);
  TodStringTranslate((wstring *)aHStack_40);
  FUN_05476c50(aHStack_40);
  std::string::~string(asStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantFramework::TalentLevelUp(int) */

void __thiscall HeroPlantFramework::TalentLevelUp(HeroPlantFramework *this,int param_1)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  HeroPlantTalentSubsystem *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_042b22a4(*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40));
  if ((ulong)(long)param_1 < uVar2) {
    iVar1 = GetTalentLevelUpCost(this,param_1);
    *(int *)(this + 0x34) = *(int *)(this + 0x34) - iVar1;
    piVar3 = (int *)FUN_042b22f8(*(undefined8 *)(this + 0x38),(long)param_1);
    *piVar3 = *piVar3 + 1;
    this_00 = Board::GetGameSubSystem<HeroPlantTalentSubsystem>(*(Board **)(gLawnApp + 0x9f0));
    HeroPlantTalentSubsystem::RefreshButtons(this_00);
    MessageRouter::Post<Plant*,int,Plant*,int>
              ((MessageRouter *)gMessageRouter,Message::HeroPlantTalenLevelUp,
               *(Plant **)(this + 0x10),param_1);
    Sexy::LazySingleton<HeroPlantMgr>::GetInstance();
    Plant::GetType();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantFramework::SaveHeroPlantInfo() */

void __thiscall HeroPlantFramework::SaveHeroPlantInfo(HeroPlantFramework *this)

{
  BoardHeroPlantManager *this_00;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  vector<int,std::allocator<int>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::FindGameSubSystem<BoardHeroPlantManager>(*(Board **)(gLawnApp + 0x9f0));
  if (this_00 != (BoardHeroPlantManager *)0x0) {
    HeroPlantSaveInfo::HeroPlantSaveInfo((HeroPlantSaveInfo *)&local_30);
    local_30 = *(undefined4 *)(this + 0x28);
    local_2c = *(undefined4 *)(this + 0x2c);
    local_28 = *(undefined4 *)(this + 0x30);
    std::vector<int,std::allocator<int>>::operator=(avStack_20,(vector *)(this + 0x38));
    local_24 = *(undefined4 *)(this + 0x34);
    BoardHeroPlantManager::SaveHeroPlantInfo(this_00,(HeroPlantSaveInfo *)&local_30);
    HeroPlantSaveInfo::~HeroPlantSaveInfo((HeroPlantSaveInfo *)&local_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeroPlantFramework::onDestroy() */

void __thiscall HeroPlantFramework::onDestroy(HeroPlantFramework *this)

{
  SaveHeroPlantInfo(this);
  PlantFramework::onDestroy((PlantFramework *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantFramework::InitGradeUpInfo() */

void __thiscall HeroPlantFramework::InitGradeUpInfo(HeroPlantFramework *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined4 *puVar5;
  int iVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  undefined4 local_10 [2];
  long local_8;
  
  *(undefined4 *)(this + 0x2c) = 1;
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x30) = 6;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  Plant::GetType();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)(lVar4 + 0x130));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_18);
  if (bVar1) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    iVar3 = FUN_042b22c4(*(undefined8 *)(lVar4 + 0x48),*(undefined8 *)(lVar4 + 0x50));
    if (iVar3 < 1) {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      cVar2 = std::vector<HeroPlantGradeRange,std::allocator<HeroPlantGradeRange>>::empty
                        ((vector<HeroPlantGradeRange,std::allocator<HeroPlantGradeRange>> *)
                         (lVar4 + 0x48));
      if (cVar2 == '\0') {
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        puVar5 = (undefined4 *)FUN_042b22d0(*(undefined8 *)(lVar4 + 0x48),(long)(iVar3 + -1));
        *(undefined4 *)(this + 0x2c) = *puVar5;
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        lVar4 = FUN_042b22d0(*(undefined8 *)(lVar4 + 0x48),(long)(iVar3 + -1));
        *(undefined4 *)(this + 0x30) = *(undefined4 *)(lVar4 + 4);
      }
    }
    else {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      puVar5 = (undefined4 *)FUN_042b22d0(*(undefined8 *)(lVar4 + 0x48),0);
      *(undefined4 *)(this + 0x2c) = *puVar5;
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      lVar4 = FUN_042b22d0(*(undefined8 *)(lVar4 + 0x48),0);
      *(undefined4 *)(this + 0x30) = *(undefined4 *)(lVar4 + 4);
    }
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    iVar3 = FUN_042b22d8(*(undefined8 *)(lVar4 + 0x60),*(undefined8 *)(lVar4 + 0x68));
    if (0 < iVar3) {
      iVar6 = 0;
      do {
        local_10[0] = 0;
        iVar6 = iVar6 + 1;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)(this + 0x38),(int *)local_10);
      } while (iVar6 != iVar3);
    }
  }
  iVar3 = 0;
  if (1 < *(int *)(this + 0x2c)) {
    do {
      iVar3 = iVar3 + 1;
      GradeUp(this);
    } while (iVar3 < *(int *)(this + 0x2c) + -1);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantFramework::InitByHeroPlantSaveInfo() */

void __thiscall HeroPlantFramework::InitByHeroPlantSaveInfo(HeroPlantFramework *this)

{
  int iVar1;
  int iVar2;
  BoardHeroPlantManager *this_00;
  float extraout_var;
  int iVar3;
  Plant *pPVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  vector avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::FindGameSubSystem<BoardHeroPlantManager>(*(Board **)(gLawnApp + 0x9f0));
  if (this_00 == (BoardHeroPlantManager *)0x0) {
    InitGradeUpInfo(this);
  }
  else {
    HeroPlantSaveInfo::HeroPlantSaveInfo((HeroPlantSaveInfo *)&local_30);
    BoardHeroPlantManager::LoadHeroPlantInfo(this_00,(HeroPlantSaveInfo *)&local_30);
    *(undefined4 *)(this + 0x28) = local_30;
    *(undefined4 *)(this + 0x2c) = local_2c;
    *(undefined4 *)(this + 0x30) = local_28;
    std::vector<int,std::allocator<int>>::operator=
              ((vector<int,std::allocator<int>> *)(this + 0x38),avStack_20);
    *(undefined4 *)(this + 0x34) = local_24;
    fVar7 = 0.0;
    if (1 < *(int *)(this + 0x2c)) {
      iVar3 = 1;
      do {
        iVar2 = (**(code **)(*(long *)this + 0x120))(this);
        iVar1 = iVar3 + 1;
        GetGradgeUpInfo(this,iVar3);
        fVar7 = fVar7 + extraout_var * (float)iVar2;
        iVar3 = iVar1;
      } while (iVar1 < *(int *)(this + 0x2c));
    }
    pPVar4 = *(Plant **)(this + 0x10);
    fVar5 = (float)Plant::GetMaxHealth(pPVar4);
    Plant::SetMaxHealth(pPVar4,fVar5 + fVar7);
    pPVar4 = *(Plant **)(this + 0x10);
    fVar5 = (float)FUN_042b229c(*(undefined4 *)(pPVar4 + 0xd8));
    Plant::SetHealth(pPVar4,fVar5 + fVar7);
    pPVar4 = (Plant *)0x0;
    if (1 < *(int *)(this + 0x2c)) {
      iVar3 = 1;
      do {
        iVar1 = iVar3 + 1;
        fVar7 = (float)GetGradgeUpInfo(this,iVar3);
        pPVar4 = (Plant *)((float)pPVar4 + fVar7);
        iVar3 = iVar1;
      } while (iVar1 < *(int *)(this + 0x2c));
    }
    uVar6 = PVZ_EOT();
    Plant::ApplyAddition(pPVar4,uVar6,*(undefined8 *)(this + 0x10),0,2);
    HeroPlantSaveInfo::~HeroPlantSaveInfo((HeroPlantSaveInfo *)&local_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeroPlantFramework::PostInitialize() */

void __thiscall HeroPlantFramework::PostInitialize(HeroPlantFramework *this)

{
  char cVar1;
  EASquaredImpl *this_00;
  undefined4 uVar2;
  
  *(undefined8 *)(this + 0x58) = 0;
  this_00 = (EASquaredImpl *)Board::GetBoardHeroPlantManager(*(Board **)(gLawnApp + 0x9f0));
  cVar1 = EASquaredImpl::IsEnabledForUser(this_00);
  if (cVar1 == '\0') {
    InitByHeroPlantSaveInfo(this);
    *(undefined4 *)(this + 0x50) = 0;
    uVar2 = PVZ_T();
    *(undefined4 *)(this + 0x54) = uVar2;
    return;
  }
  InitGradeUpInfo(this);
  *(undefined4 *)(this + 0x50) = 0;
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x54) = uVar2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantFramework::DoPressHeroPlant() */

void HeroPlantFramework::DoPressHeroPlant(void)

{
  HeroPlantTalentSubsystem *pHVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pHVar1 = Board::GetGameSubSystem<HeroPlantTalentSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  HeroPlantTalentSubsystem::ShowHeroPlantTalentPannel(pHVar1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* HeroPlantFramework::onTouchEvent(Sexy::Touch const&) */

undefined8 __thiscall HeroPlantFramework::onTouchEvent(HeroPlantFramework *this,Touch *param_1)

{
  char cVar1;
  TRect<int> *pTVar2;
  undefined8 uVar3;
  code *pcVar4;
  Plant *this_00;
  long *plVar5;
  float fVar6;
  float fVar7;
  
  cVar1 = Plant::IsSuspended(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    this_00 = *(Plant **)(this + 0x10);
    cVar1 = FUN_042b2298(this_00[0x278]);
    if ((((cVar1 == '\0') && (cVar1 = Plant::IsWatering(this_00), cVar1 == '\0')) &&
        (cVar1 = Plant::HasCondition(*(undefined8 *)(this + 0x10),0x11), cVar1 == '\0')) &&
       (cVar1 = Plant::HasCondition(*(undefined8 *)(this + 0x10),0x17), cVar1 == '\0')) {
      if ((*(long *)(this + 0x58) == 0) && (*(int *)(param_1 + 0x30) == 0)) {
        fVar6 = (float)FUN_042b2750((float)*(int *)(param_1 + 0x10));
        fVar7 = (float)FUN_042b2750((float)*(int *)(param_1 + 0x14));
        pTVar2 = (TRect<int> *)
                 (**(code **)(**(long **)(this + 0x10) + 0x178))(*(long **)(this + 0x10));
        cVar1 = Sexy::TRect<int>::Contains(pTVar2,(int)fVar6,(int)fVar7);
        if (cVar1 != '\0') {
          *(undefined8 *)(this + 0x58) = *(undefined8 *)param_1;
          return 0;
        }
      }
      else {
        if (*(long *)(this + 0x58) != *(long *)param_1) {
          return 0;
        }
        if (*(int *)(param_1 + 0x30) != 4) {
          if (*(int *)(param_1 + 0x30) != 3) {
            return 0;
          }
          ClearTouch(this);
          if ((*(long *)(gLawnApp + 0x9f0) != 0) &&
             (cVar1 = FUN_042b22a0(*(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + 0x887)),
             cVar1 == '\0')) {
            return 0;
          }
          pcVar4 = *(code **)(*(long *)*(Plant **)(this + 0x10) + 0x1f8);
          if (pcVar4 == Plant::IsInPlantFoodState) {
            cVar1 = Plant::IsInPlantFoodState(*(Plant **)(this + 0x10));
          }
          else {
            cVar1 = (*pcVar4)();
          }
          if (cVar1 != '\0') {
            return 0;
          }
          plVar5 = *(long **)(this + 0x10);
          cVar1 = FUN_042b2c28((int)plVar5[5]);
          if (cVar1 != '\0') {
            return 0;
          }
          fVar6 = (float)FUN_042b2750((float)*(int *)(param_1 + 0x10));
          fVar7 = (float)FUN_042b2750((float)*(int *)(param_1 + 0x14));
          pTVar2 = (TRect<int> *)(**(code **)(*plVar5 + 0x178))(plVar5);
          cVar1 = Sexy::TRect<int>::Contains(pTVar2,(int)fVar6,(int)fVar7);
          if (cVar1 == '\0') {
            return 0;
          }
          uVar3 = DoPressHeroPlant();
          return uVar3;
        }
      }
      ClearTouch(this);
    }
  }
  return 0;
}

