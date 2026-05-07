// Class: CrazyNPCManager


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPCManager::onNarrativeFinishedWithLUA() */

void __thiscall CrazyNPCManager::onNarrativeFinishedWithLUA(CrazyNPCManager *this)

{
  int iVar1;
  CLuaEngine *pCVar2;
  string asStack_10 [8];
  long local_8;
  
  pCVar2 = gLuaEngine;
  iVar1 = *(int *)(this + 0x284);
  local_8 = ___stack_chk_guard;
  if (iVar1 != 0) {
    FUN_05475d88(asStack_10,this + 0x288);
    Lua::CLuaEngine::ExecuteListener(pCVar2,iVar1,asStack_10,0);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CrazyNPCManager::onEnterState_Ready(CrazyNPCManagerState) */

void CrazyNPCManager::onEnterState_Ready(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_03c84018(*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0xe0));
  if (lVar1 != 0) {
    *(undefined1 *)(param_1 + 0x6c) = 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPCManager::updateState_Finished() */

void __thiscall CrazyNPCManager::updateState_Finished(CrazyNPCManager *this)

{
  int iVar1;
  Delegate0 aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_03c83f94(*(undefined8 *)(this + 0x140),*(undefined8 *)(this + 0x150));
  if (iVar1 != 0) {
    if (this[0x280] != (CrazyNPCManager)0x0) {
      this[0x280] = (CrazyNPCManager)0x0;
      Sexy::WidgetManager::RemoveBaseModal(*(WidgetManager **)(gLawnApp + 0x360),(Widget *)this);
      (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))(*(long **)(gLawnApp + 0x360),0);
    }
    Sexy::Delegate0::Delegate0(aDStack_68,(Delegate0 *)(this + 0x138));
    Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
    Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
              ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x138),(Delegate2 *)aDStack_38);
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)aDStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPCManager::updateState_Initializing() */

void __thiscall CrazyNPCManager::updateState_Initializing(CrazyNPCManager *this)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  char *pcVar4;
  ulong uVar5;
  CrazyNPC *this_00;
  undefined8 uVar6;
  
  lVar1 = ___stack_chk_guard;
  uVar6 = *(undefined8 *)(this + 0xd8);
  uVar5 = 0;
  uVar2 = FUN_03c84018(uVar6,*(undefined8 *)(this + 0xe0));
  if (uVar2 != 0) {
    do {
      puVar3 = (undefined8 *)FUN_03c84058(uVar6,uVar5);
      this_00 = (CrazyNPC *)*puVar3;
      pcVar4 = (char *)CrazyNPC::IsInitialized(this_00);
      if (*pcVar4 == '\0') {
        (**(code **)(*(long *)this_00 + 0x48))(this_00);
        uVar6 = *(undefined8 *)(this + 0xd8);
        uVar2 = FUN_03c84018(uVar6,*(undefined8 *)(this + 0xe0));
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  (**(code **)(*(long *)this + 800))(this);
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* CrazyNPCManager::StaticGetClass() */

long * CrazyNPCManager::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"CrazyNPCManager",uVar2,StaticNew);
  return sClass;
}


/* CrazyNPCManager::GetClass() const */

long * CrazyNPCManager::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"CrazyNPCManager",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPCManager::clearCurrentNarrativeData() */

void __thiscall CrazyNPCManager::clearCurrentNarrativeData(CrazyNPCManager *this)

{
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_054772c4(this + 0x108,&DAT_056f11a8);
  *(undefined4 *)(this + 0x110) = 0;
  FUN_054772c4(this + 0x128,&DAT_056f11a8);
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x138),(Delegate2 *)aDStack_38);
  *(undefined4 *)(this + 0x284) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CrazyNPCManager::IsNarrationActive() const */

bool __thiscall CrazyNPCManager::IsNarrationActive(CrazyNPCManager *this)

{
  int iVar1;
  
  iVar1 = FUN_03c84014(*(undefined4 *)(this + 0x1c8));
  return iVar1 != 7;
}


/* CrazyNPCManager::SetTutorialMarkerDelegate(Sexy::Delegate0) */

void __thiscall CrazyNPCManager::SetTutorialMarkerDelegate(CrazyNPCManager *this,Delegate2 *param_2)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x168),param_2);
  return;
}


/* CrazyNPCManager::SetNarrativePaused(bool) */

void __thiscall CrazyNPCManager::SetNarrativePaused(CrazyNPCManager *this,bool param_1)

{
  this[0x1bc] = (CrazyNPCManager)param_1;
  return;
}


/* CrazyNPCManager::StartLoad() */

void __thiscall CrazyNPCManager::StartLoad(CrazyNPCManager *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0xd8);
    uVar2 = FUN_03c84018(uVar4,*(undefined8 *)(this + 0xe0));
    if (uVar2 <= uVar3) break;
    puVar1 = (undefined8 *)FUN_03c84058(uVar4,uVar3);
    CrazyNPC::PrepForLoading((CrazyNPC *)*puVar1);
    uVar3 = uVar3 + 1;
  }
  if (*(int *)(this + 0x19c) == 0) {
    return;
  }
  LawnApp::PrepareLoadGroup(gLawnApp,(string *)(this + 0x1a0));
  return;
}


/* CrazyNPCManager::onEnterState_HeroShotLoading(CrazyNPCManagerState) */

void CrazyNPCManager::onEnterState_HeroShotLoading(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(param_1 + 0xd8);
    uVar2 = FUN_03c84018(uVar4,*(undefined8 *)(param_1 + 0xe0));
    if (uVar2 <= uVar3) break;
    puVar1 = (undefined8 *)FUN_03c84058(uVar4,uVar3);
    CrazyNPC::PrepForLoading((CrazyNPC *)*puVar1);
    uVar3 = uVar3 + 1;
  }
  if (*(int *)(param_1 + 0x19c) == 0) {
    return;
  }
  LawnApp::PrepareLoadGroup(gLawnApp,(string *)(param_1 + 0x1a0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPCManager::CompleteLoad() */

void __thiscall CrazyNPCManager::CompleteLoad(CrazyNPCManager *this)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  lVar1 = ___stack_chk_guard;
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(this + 0xd8);
    uVar3 = FUN_03c84018(uVar5,*(undefined8 *)(this + 0xe0));
    if (uVar3 <= uVar4) break;
    puVar2 = (undefined8 *)FUN_03c84058(uVar5,uVar4);
    CrazyNPC::CompleteLoad((CrazyNPC *)*puVar2);
    uVar4 = uVar4 + 1;
  }
  if (*(int *)(this + 0x19c) != 0) {
    LawnApp::FinalizeGroupLoad(gLawnApp,(string *)(this + 0x1a0));
  }
  (**(code **)(*(long *)this + 800))(this);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CrazyNPCManager::UnloadResources() */

void __thiscall CrazyNPCManager::UnloadResources(CrazyNPCManager *this)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0xd8);
    uVar1 = FUN_03c84018(uVar4,*(undefined8 *)(this + 0xe0));
    if (uVar1 <= uVar3) break;
    puVar2 = (undefined8 *)FUN_03c84058(uVar4,uVar3);
    CrazyNPC::UnloadResources((CrazyNPC *)*puVar2);
    uVar3 = uVar3 + 1;
  }
  if (*(int *)(this + 0x19c) == 0) {
    return;
  }
  puVar2 = &gLawnApp;
  LawnApp::DeleteGroup(gLawnApp,(string *)(this + 0x1a0));
  *(undefined4 *)(this + 0x19c) = 0;
  std::string::append((string *)(this + 0x1a0),"",(size_t)puVar2);
  return;
}


/* CrazyNPCManager::checkLoadComplete() */

undefined8 __thiscall CrazyNPCManager::checkLoadComplete(CrazyNPCManager *this)

{
  char cVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar4 = 0;
  do {
    uVar5 = *(undefined8 *)(this + 0xd8);
    uVar3 = FUN_03c84018(uVar5,*(undefined8 *)(this + 0xe0));
    if (uVar3 <= uVar4) {
      if (*(int *)(this + 0x19c) == 0) {
        return 1;
      }
      uVar5 = LawnApp::IsGroupLoadComplete(gLawnApp,(string *)(this + 0x1a0));
      return uVar5;
    }
    puVar2 = (undefined8 *)FUN_03c84058(uVar5,uVar4);
    cVar1 = CrazyNPC::IsLoadComplete((CrazyNPC *)*puVar2);
    uVar4 = uVar4 + 1;
  } while (cVar1 != '\0');
  return 0;
}


/* CrazyNPCManager::updateState_Loading() */

void __thiscall CrazyNPCManager::updateState_Loading(CrazyNPCManager *this)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar5 = 0;
  uVar6 = *(undefined8 *)(this + 0xd8);
  lVar2 = FUN_03c84018(uVar6,*(undefined8 *)(this + 0xe0));
  if (lVar2 != 0) {
    do {
      puVar3 = (undefined8 *)FUN_03c84058(uVar6,uVar5);
      cVar1 = CrazyNPC::IsLoaded((CrazyNPC *)*puVar3);
      if (cVar1 != '\0') {
        puVar3 = (undefined8 *)FUN_03c84058(*(undefined8 *)(this + 0xd8),uVar5);
        (**(code **)(*(long *)*puVar3 + 0x50))((long *)*puVar3);
      }
      uVar5 = uVar5 + 1;
      uVar6 = *(undefined8 *)(this + 0xd8);
      uVar4 = FUN_03c84018(uVar6,*(undefined8 *)(this + 0xe0));
    } while (uVar5 < uVar4);
  }
  cVar1 = checkLoadComplete(this);
  if (cVar1 != '\0') {
    CompleteLoad(this);
    return;
  }
  return;
}


/* CrazyNPCManager::finishNarrative() */

void __thiscall CrazyNPCManager::finishNarrative(CrazyNPCManager *this)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar5 = 0;
  uVar6 = *(undefined8 *)(this + 0xd8);
  lVar2 = FUN_03c84018(uVar6,*(undefined8 *)(this + 0xe0));
  if (lVar2 != 0) {
    do {
      puVar3 = (undefined8 *)FUN_03c84058(uVar6,uVar5);
      cVar1 = CrazyNPC::IsLeaving((CrazyNPC *)*puVar3);
      if (cVar1 == '\0') {
        puVar3 = (undefined8 *)FUN_03c84058(*(undefined8 *)(this + 0xd8),uVar5);
        CrazyNPC::Leave((CrazyNPC *)*puVar3);
      }
      uVar5 = uVar5 + 1;
      uVar6 = *(undefined8 *)(this + 0xd8);
      uVar4 = FUN_03c84018(uVar6,*(undefined8 *)(this + 0xe0));
    } while (uVar5 < uVar4);
  }
  return;
}


/* CrazyNPCManager::ForceEndNarrative() */

void __thiscall CrazyNPCManager::ForceEndNarrative(CrazyNPCManager *this)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar5 = 0;
  uVar6 = *(undefined8 *)(this + 0xd8);
  lVar2 = FUN_03c84018(uVar6,*(undefined8 *)(this + 0xe0));
  if (lVar2 != 0) {
    do {
      puVar3 = (undefined8 *)FUN_03c84058(uVar6,uVar5);
      cVar1 = CrazyNPC::IsLeaving((CrazyNPC *)*puVar3);
      if (cVar1 == '\0') {
        puVar3 = (undefined8 *)FUN_03c84058(*(undefined8 *)(this + 0xd8),uVar5);
        CrazyNPC::Leave((CrazyNPC *)*puVar3);
      }
      uVar5 = uVar5 + 1;
      uVar6 = *(undefined8 *)(this + 0xd8);
      uVar4 = FUN_03c84018(uVar6,*(undefined8 *)(this + 0xe0));
    } while (uVar5 < uVar4);
  }
  return;
}


/* CrazyNPCManager::stopAllTalking() */

void __thiscall CrazyNPCManager::stopAllTalking(CrazyNPCManager *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0xd8);
    uVar2 = FUN_03c84018(uVar4,*(undefined8 *)(this + 0xe0));
    if (uVar2 <= uVar3) break;
    puVar1 = (undefined8 *)FUN_03c84058(uVar4,uVar3);
    CrazyNPC::StopTalking((CrazyNPC *)*puVar1);
    uVar3 = uVar3 + 1;
  }
  return;
}


/* CrazyNPCManager::FinisAllTalking() */

void __thiscall CrazyNPCManager::FinisAllTalking(CrazyNPCManager *this)

{
  stopAllTalking(this);
  finishNarrative(this);
  return;
}


/* CrazyNPCManager::getState() const */

void __thiscall CrazyNPCManager::getState(CrazyNPCManager *this)

{
  FUN_03c84014(*(undefined4 *)(this + 0x1c8));
  return;
}


/* CrazyNPCManager::IsLoaded() */

bool __thiscall CrazyNPCManager::IsLoaded(CrazyNPCManager *this)

{
  int iVar1;
  
  iVar1 = getState(this);
  return iVar1 != 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPCManager::PrepForLoading() */

void __thiscall CrazyNPCManager::PrepForLoading(CrazyNPCManager *this)

{
  long lVar1;
  int iVar2;
  
  lVar1 = ___stack_chk_guard;
  iVar2 = getState(this);
  if (iVar2 == -1) {
    (**(code **)(*(long *)this + 800))(this);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CrazyNPCManager::IsInHeroShot() */

bool __thiscall CrazyNPCManager::IsInHeroShot(CrazyNPCManager *this)

{
  int iVar1;
  
  iVar1 = getState(this);
  if ((iVar1 != 4) && (iVar1 = getState(this), iVar1 != 5)) {
    iVar1 = getState(this);
    return iVar1 == 6;
  }
  return true;
}


/* CrazyNPCManager::isInState(unsigned int const&) const */

bool __thiscall CrazyNPCManager::isInState(CrazyNPCManager *this,uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_03c84014(*(undefined4 *)(this + 0x1c8));
  return uVar1 == *param_1;
}


/* CrazyNPCManager::MakeSureNotInModel() */

void __thiscall CrazyNPCManager::MakeSureNotInModel(CrazyNPCManager *this)

{
  Widget *pWVar1;
  
  pWVar1 = *(Widget **)(*(WidgetManager **)(gLawnApp + 0x360) + 0xe0);
  if (pWVar1 != (Widget *)this) {
    return;
  }
  Sexy::WidgetManager::RemoveBaseModal(*(WidgetManager **)(gLawnApp + 0x360),pWVar1);
  return;
}


/* CrazyNPCManager::getActiveNPCByName(std::string const&) */

undefined8 __thiscall CrazyNPCManager::getActiveNPCByName(CrazyNPCManager *this,string *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  string *psVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar5 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)(this + 0xd8);
    uVar4 = FUN_03c84018(uVar6,*(undefined8 *)(this + 0xe0));
    if (uVar4 <= uVar5) {
      return 0;
    }
    puVar2 = (undefined8 *)FUN_03c84058(uVar6,uVar5);
    psVar3 = (string *)CrazyNPC::GetNPCName((CrazyNPC *)*puVar2);
    cVar1 = std::operator==(psVar3,param_1);
    if (cVar1 != '\0') break;
    uVar5 = uVar5 + 1;
  }
  puVar2 = (undefined8 *)FUN_03c84058(*(undefined8 *)(this + 0xd8),uVar5);
  return *puVar2;
}


/* CrazyNPCManager::parseSpecialNarrativeCommand(std::string const&) */

void __thiscall CrazyNPCManager::parseSpecialNarrativeCommand(CrazyNPCManager *this,string *param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = FUN_05474374(param_1,"special",0);
  if (lVar2 != -1) {
    bVar1 = std::operator==(param_1,"special1");
    if (bVar1) {
      FUN_03c84004(*(long *)(this + 0x130) + 0x20,5);
      return;
    }
    bVar1 = std::operator==(param_1,"special2");
    if (bVar1) {
      FUN_03c84004(*(long *)(this + 0x130) + 0x20,6);
      return;
    }
    bVar1 = std::operator==(param_1,"special3");
    if (bVar1) {
      FUN_03c84004(*(long *)(this + 0x130) + 0x20,7);
      return;
    }
    bVar1 = std::operator==(param_1,"special4");
    if (bVar1) {
      FUN_03c84004(*(long *)(this + 0x130) + 0x20,8);
      return;
    }
    bVar1 = std::operator==(param_1,"special5");
    if (bVar1) {
      FUN_03c84004(*(long *)(this + 0x130) + 0x20,9);
      return;
    }
    bVar1 = std::operator==(param_1,"special6");
    if (bVar1) {
      FUN_03c84004(*(long *)(this + 0x130) + 0x20,10);
      return;
    }
    bVar1 = std::operator==(param_1,"special7");
    if (bVar1) {
      FUN_03c84004(*(long *)(this + 0x130) + 0x20,0xb);
      return;
    }
    bVar1 = std::operator==(param_1,"special8");
    if (bVar1) {
      FUN_03c84004(*(long *)(this + 0x130) + 0x20,0xc);
      return;
    }
    bVar1 = std::operator==(param_1,"special9");
    if (bVar1) {
      FUN_03c84004(*(long *)(this + 0x130) + 0x20,0xd);
      return;
    }
    bVar1 = std::operator==(param_1,"special10");
    if (bVar1) {
      FUN_03c84004(*(long *)(this + 0x130) + 0x20,0xe);
      return;
    }
    bVar1 = std::operator==(param_1,"special11");
    if (bVar1) {
      FUN_03c84004(*(long *)(this + 0x130) + 0x20,0xf);
      return;
    }
    bVar1 = std::operator==(param_1,"special12");
    if (bVar1) {
      FUN_03c84004(*(long *)(this + 0x130) + 0x20,0x10);
      return;
    }
    bVar1 = std::operator==(param_1,"special13");
    if (bVar1) {
      FUN_03c84004(*(long *)(this + 0x130) + 0x20,0x11);
      return;
    }
    bVar1 = std::operator==(param_1,"special14");
    if (bVar1) {
      FUN_03c84004(*(long *)(this + 0x130) + 0x20,0x12);
      return;
    }
    bVar1 = std::operator==(param_1,"special15");
    if (bVar1) {
      FUN_03c84004(*(long *)(this + 0x130) + 0x20,0x13);
      return;
    }
    bVar1 = std::operator==(param_1,"special16");
    if (bVar1) {
      FUN_03c84004(*(long *)(this + 0x130) + 0x20,0x14);
      return;
    }
    bVar1 = std::operator==(param_1,"special17");
    if (bVar1) {
      FUN_03c84004(*(long *)(this + 0x130) + 0x20,0x15);
      return;
    }
  }
  return;
}


/* CrazyNPCManager::updateStateMachine() */

void __thiscall CrazyNPCManager::updateStateMachine(CrazyNPCManager *this)

{
  StateMachine<CrazyNPCManagerState>::UpdateState
            ((StateMachine<CrazyNPCManagerState> *)(this + 0x1c8));
  return;
}


/* CrazyNPCManager::StartFadeIn() */

void __thiscall CrazyNPCManager::StartFadeIn(CrazyNPCManager *this)

{
  float fVar1;
  
  *(undefined4 *)(this + 0x1b0) = 1;
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x1ac) = fVar1;
  *(float *)(this + 0x1a8) = fVar1 + 0.3;
  return;
}


/* CrazyNPCManager::StartFadeOut() */

void __thiscall CrazyNPCManager::StartFadeOut(CrazyNPCManager *this)

{
  float fVar1;
  
  *(undefined4 *)(this + 0x1b0) = 2;
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x1ac) = fVar1;
  *(float *)(this + 0x1a8) = fVar1 + 0.3;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPCManager::startHeroShot(HeroShotType) */

void CrazyNPCManager::startHeroShot(CrazyNPCManager *param_1,undefined8 param_2,size_t param_3)

{
  string *this;
  long lVar1;
  float fVar2;
  
  lVar1 = ___stack_chk_guard;
  this = (string *)(param_1 + 0x1a0);
  if (*(int *)(param_1 + 0x19c) != 0) {
    LawnApp::DeleteGroup(gLawnApp,this);
    *(undefined4 *)(param_1 + 0x19c) = 0;
    std::string::append(this,"",param_3);
  }
  *(undefined4 *)(param_1 + 0x19c) = 0;
  std::string::append(this,"",param_3);
  if (*(int *)(param_1 + 0x19c) != 0) {
    (**(code **)(*(long *)param_1 + 800))(param_1);
    fVar2 = (float)PVZ_T();
    *(float *)(param_1 + 0x198) = fVar2 + 60.0;
    StartFadeOut(param_1);
  }
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPCManager::endHeroShot() */

void __thiscall CrazyNPCManager::endHeroShot(CrazyNPCManager *this)

{
  long lVar1;
  float fVar2;
  
  lVar1 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 800))();
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x198) = fVar2 + 60.0;
  StartFadeOut(this);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CrazyNPCManager::canAdvanceNarrative() */

undefined1 __thiscall CrazyNPCManager::canAdvanceNarrative(CrazyNPCManager *this)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  float fVar8;
  
  fVar8 = (float)PVZ_T();
  if (((fVar8 < *(float *)(this + 0x198)) || (this[0x1bc] != (CrazyNPCManager)0x0)) ||
     ((cVar1 = IsInHeroShot(this), cVar1 != '\0' && (iVar2 = getState(this), iVar2 != 5)))) {
    uVar7 = 0;
  }
  else {
    uVar5 = 0;
    while( true ) {
      uVar6 = *(undefined8 *)(this + 0xd8);
      uVar3 = FUN_03c84018(uVar6,*(undefined8 *)(this + 0xe0));
      if (uVar3 <= uVar5) break;
      puVar4 = (undefined8 *)FUN_03c84058(uVar6,uVar5);
      cVar1 = CrazyNPC::IsLoaded((CrazyNPC *)*puVar4);
      if (cVar1 == '\0') {
        return 0;
      }
      puVar4 = (undefined8 *)FUN_03c84058(*(undefined8 *)(this + 0xd8),uVar5);
      cVar1 = CrazyNPC::IsEntering((CrazyNPC *)*puVar4);
      if (cVar1 != '\0') {
        return 0;
      }
      puVar4 = (undefined8 *)FUN_03c84058(*(undefined8 *)(this + 0xd8),uVar5);
      cVar1 = CrazyNPC::IsLeaving((CrazyNPC *)*puVar4);
      uVar5 = uVar5 + 1;
      if (cVar1 != '\0') {
        return 0;
      }
    }
    uVar7 = 1;
  }
  return uVar7;
}


/* CrazyNPCManager::talkNarrative(std::wstring const&) */

void CrazyNPCManager::talkNarrative(wstring *param_1)

{
  char cVar1;
  long lVar2;
  
  stopAllTalking((CrazyNPCManager *)param_1);
  if ((((*(CrazyNPC **)(param_1 + 0x130) != (CrazyNPC *)0x0) &&
       (cVar1 = CrazyNPC::IsLoaded(*(CrazyNPC **)(param_1 + 0x130)), cVar1 != '\0')) &&
      (cVar1 = CrazyNPC::IsEntering(*(CrazyNPC **)(param_1 + 0x130)), cVar1 == '\0')) &&
     ((cVar1 = CrazyNPC::IsLeaving(*(CrazyNPC **)(param_1 + 0x130)), cVar1 == '\0' &&
      (lVar2 = FUN_054765d0(param_1 + 0x120), lVar2 != 0)))) {
    CrazyNPC::StartTalking(*(wstring **)(param_1 + 0x130));
    FUN_03c853c0(param_1 + 0x198);
    return;
  }
  return;
}


/* CrazyNPCManager::onEventNPCFinishedEntering(CrazyNPC*) */

void __thiscall CrazyNPCManager::onEventNPCFinishedEntering(CrazyNPCManager *this,CrazyNPC *param_1)

{
  long lVar1;
  wstring *pwVar2;
  
  pwVar2 = *(wstring **)(this + 0x130);
  if ((pwVar2 == (wstring *)param_1) && (lVar1 = FUN_054765d0(this + 0x120), lVar1 != 0)) {
    CrazyNPC::StartTalking(pwVar2);
    FUN_03c853c0(this + 0x198);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPCManager::updateState_HeroShotLoading() */

void __thiscall CrazyNPCManager::updateState_HeroShotLoading(CrazyNPCManager *this)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  float fVar8;
  
  lVar1 = ___stack_chk_guard;
  uVar6 = 0;
  uVar7 = *(undefined8 *)(this + 0xd8);
  lVar3 = FUN_03c84018(uVar7,*(undefined8 *)(this + 0xe0));
  if (lVar3 != 0) {
    do {
      puVar4 = (undefined8 *)FUN_03c84058(uVar7,uVar6);
      cVar2 = CrazyNPC::IsLoaded((CrazyNPC *)*puVar4);
      if (cVar2 != '\0') {
        puVar4 = (undefined8 *)FUN_03c84058(*(undefined8 *)(this + 0xd8),uVar6);
        (**(code **)(*(long *)*puVar4 + 0x50))((long *)*puVar4);
      }
      uVar6 = uVar6 + 1;
      uVar7 = *(undefined8 *)(this + 0xd8);
      uVar5 = FUN_03c84018(uVar7,*(undefined8 *)(this + 0xe0));
    } while (uVar6 < uVar5);
  }
  fVar8 = (float)PVZ_T();
  if ((*(float *)(this + 0x1a8) <= fVar8) && (cVar2 = checkLoadComplete(this), cVar2 != '\0')) {
    CompleteLoad(this);
    (**(code **)(*(long *)this + 800))(this);
    fVar8 = (float)PVZ_T();
    *(float *)(this + 0x198) = fVar8 + 60.0;
    StartFadeIn(this);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPCManager::getNarrativeText(int) */

void CrazyNPCManager::getNarrativeText(int param_1)

{
  wchar_t *pwVar1;
  ProfileMgr *this;
  PlayerInfo *this_00;
  undefined8 uVar2;
  uint in_w1;
  string *extraout_x1;
  wstring *in_x8;
  undefined1 auStack_40 [8];
  Sexy aSStack_38 [8];
  undefined1 auStack_30 [8];
  wstring awStack_28 [8];
  undefined1 auStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  bool *local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::WStringToString((Sexy *)((ulong)(uint)param_1 + 0x108),(wstring *)0x0,___stack_chk_guard);
  std::operator+("[NARRATIVE_",asStack_18);
  std::operator+(asStack_10,"%d]");
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  Sexy::UTF8StringToWString(aSStack_38,extraout_x1);
  pwVar1 = (wchar_t *)FUN_054766ec(auStack_30);
  Sexy::StrFormat(pwVar1,(ulong)in_w1);
  FUN_05478178(awStack_28,L"invalid",asStack_10);
  nop();
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    PlayerInfo::AM_GetName();
    FUN_054766c8(awStack_28,asStack_10);
    FUN_05476c50(asStack_10);
    PlayerInfo::GetNumCoins(this_00,false);
  }
  TodReplaceString(in_x8,L"{PLAYER_NAME}",awStack_28);
  FUN_054766c8();
  FUN_05476c50(asStack_10);
  LawnApp::GetMoneyString((int)gLawnApp);
  uVar2 = FUN_054766ec(auStack_20);
  FUN_05478178(asStack_18,uVar2,auStack_40);
  TodReplaceString(in_x8,L"{MONEY}",(wstring *)asStack_18);
  FUN_054766c8();
  FUN_05476c50(asStack_10);
  FUN_05476c50(asStack_18);
  nop();
  FUN_05476c50(auStack_20);
  FUN_05476c50(awStack_28);
  FUN_05476c50(auStack_30);
  std::string::~string((string *)aSStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* CrazyNPCManager::setStateHelper(StateDefinition<CrazyNPCManagerState> const&) */

void __thiscall CrazyNPCManager::setStateHelper(CrazyNPCManager *this,StateDefinition *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = StateMachine<CrazyNPCManagerState>::SetState
                    ((StateMachine<CrazyNPCManagerState> *)(this + 0x1c8),param_1);
  if (cVar1 != '\0') {
    uVar2 = PVZ_T();
    *(undefined4 *)(this + 0x1c0) = uVar2;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPCManager::setState(CrazyNPCManagerState const&) */

void __thiscall CrazyNPCManager::setState(CrazyNPCManager *this,CrazyNPCManagerState *param_1)

{
  undefined8 uVar1;
  string asStack_228 [8];
  CBMemberTranslatorX aCStack_220 [24];
  CBMemberTranslatorX aCStack_208 [24];
  CBMemberTranslatorX aCStack_1f0 [24];
  Delegate1<CrazyNPCManagerState> aDStack_1d8 [48];
  Delegate0 aDStack_1a8 [48];
  Delegate1<CrazyNPCManagerState> aDStack_178 [48];
  StateDefinition<CrazyNPCManagerState> aSStack_148 [160];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StateDefinition<CrazyNPCManagerState>::StateDefinition(aSStack_148);
  if (*(uint *)param_1 < 8) {
    switch(*(uint *)param_1) {
    case 0:
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x328);
      Sexy::Delegate1<CrazyNPCManagerState>::
      Delegate1<CrazyNPCManager,void(CrazyNPCManager::*)(CrazyNPCManagerState)>
                (aDStack_1d8,aCStack_220);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x330);
      Sexy::Delegate0::Delegate0<CrazyNPCManager,void(CrazyNPCManager::*)()>
                (aDStack_1a8,aCStack_208);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x338);
      Sexy::Delegate1<CrazyNPCManagerState>::
      Delegate1<CrazyNPCManager,void(CrazyNPCManager::*)(CrazyNPCManagerState)>
                (aDStack_178,aCStack_1f0);
      std::string::string(asStack_228,"CNM_Loading");
      uVar1 = 0;
      break;
    case 1:
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x340);
      Sexy::Delegate1<CrazyNPCManagerState>::
      Delegate1<CrazyNPCManager,void(CrazyNPCManager::*)(CrazyNPCManagerState)>
                (aDStack_1d8,aCStack_220);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x348);
      Sexy::Delegate0::Delegate0<CrazyNPCManager,void(CrazyNPCManager::*)()>
                (aDStack_1a8,aCStack_208);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x350);
      Sexy::Delegate1<CrazyNPCManagerState>::
      Delegate1<CrazyNPCManager,void(CrazyNPCManager::*)(CrazyNPCManagerState)>
                (aDStack_178,aCStack_1f0);
      std::string::string(asStack_228,"CNM_Initializing");
      uVar1 = 1;
      break;
    case 2:
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x358);
      Sexy::Delegate1<CrazyNPCManagerState>::
      Delegate1<CrazyNPCManager,void(CrazyNPCManager::*)(CrazyNPCManagerState)>
                (aDStack_1d8,aCStack_220);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x360);
      Sexy::Delegate0::Delegate0<CrazyNPCManager,void(CrazyNPCManager::*)()>
                (aDStack_1a8,aCStack_208);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x368);
      Sexy::Delegate1<CrazyNPCManagerState>::
      Delegate1<CrazyNPCManager,void(CrazyNPCManager::*)(CrazyNPCManagerState)>
                (aDStack_178,aCStack_1f0);
      std::string::string(asStack_228,"CNM_Ready");
      uVar1 = 2;
      break;
    case 3:
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x370);
      Sexy::Delegate1<CrazyNPCManagerState>::
      Delegate1<CrazyNPCManager,void(CrazyNPCManager::*)(CrazyNPCManagerState)>
                (aDStack_1d8,aCStack_220);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x378);
      Sexy::Delegate0::Delegate0<CrazyNPCManager,void(CrazyNPCManager::*)()>
                (aDStack_1a8,aCStack_208);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x380);
      Sexy::Delegate1<CrazyNPCManagerState>::
      Delegate1<CrazyNPCManager,void(CrazyNPCManager::*)(CrazyNPCManagerState)>
                (aDStack_178,aCStack_1f0);
      std::string::string(asStack_228,"CNM_Paused");
      uVar1 = 3;
      break;
    case 4:
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x3a0);
      Sexy::Delegate1<CrazyNPCManagerState>::
      Delegate1<CrazyNPCManager,void(CrazyNPCManager::*)(CrazyNPCManagerState)>
                (aDStack_1d8,aCStack_220);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x3a8);
      Sexy::Delegate0::Delegate0<CrazyNPCManager,void(CrazyNPCManager::*)()>
                (aDStack_1a8,aCStack_208);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x3b0);
      Sexy::Delegate1<CrazyNPCManagerState>::
      Delegate1<CrazyNPCManager,void(CrazyNPCManager::*)(CrazyNPCManagerState)>
                (aDStack_178,aCStack_1f0);
      std::string::string(asStack_228,"CNM_HeroShotLoading");
      uVar1 = 4;
      break;
    case 5:
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x3b8);
      Sexy::Delegate1<CrazyNPCManagerState>::
      Delegate1<CrazyNPCManager,void(CrazyNPCManager::*)(CrazyNPCManagerState)>
                (aDStack_1d8,aCStack_220);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x3c0);
      Sexy::Delegate0::Delegate0<CrazyNPCManager,void(CrazyNPCManager::*)()>
                (aDStack_1a8,aCStack_208);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x3c8);
      Sexy::Delegate1<CrazyNPCManagerState>::
      Delegate1<CrazyNPCManager,void(CrazyNPCManager::*)(CrazyNPCManagerState)>
                (aDStack_178,aCStack_1f0);
      std::string::string(asStack_228,"CNM_HeroShotReady");
      uVar1 = 5;
      break;
    case 6:
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x3d0);
      Sexy::Delegate1<CrazyNPCManagerState>::
      Delegate1<CrazyNPCManager,void(CrazyNPCManager::*)(CrazyNPCManagerState)>
                (aDStack_1d8,aCStack_220);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x3d8);
      Sexy::Delegate0::Delegate0<CrazyNPCManager,void(CrazyNPCManager::*)()>
                (aDStack_1a8,aCStack_208);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x3e0);
      Sexy::Delegate1<CrazyNPCManagerState>::
      Delegate1<CrazyNPCManager,void(CrazyNPCManager::*)(CrazyNPCManagerState)>
                (aDStack_178,aCStack_1f0);
      std::string::string(asStack_228,"CNM_HeroShotUnloading");
      uVar1 = 6;
      break;
    case 7:
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x388);
      Sexy::Delegate1<CrazyNPCManagerState>::
      Delegate1<CrazyNPCManager,void(CrazyNPCManager::*)(CrazyNPCManagerState)>
                (aDStack_1d8,aCStack_220);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x390);
      Sexy::Delegate0::Delegate0<CrazyNPCManager,void(CrazyNPCManager::*)()>
                (aDStack_1a8,aCStack_208);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x398);
      Sexy::Delegate1<CrazyNPCManagerState>::
      Delegate1<CrazyNPCManager,void(CrazyNPCManager::*)(CrazyNPCManagerState)>
                (aDStack_178,aCStack_1f0);
      std::string::string(asStack_228,"CNM_Finished");
      uVar1 = 7;
    }
    StateDefinition<CrazyNPCManagerState>::StateDefinition
              (aSStack_a8,uVar1,aDStack_1d8,aDStack_1a8,aDStack_178,asStack_228);
    StateDefinition<WorldMapState>::operator=
              ((StateDefinition<WorldMapState> *)aSStack_148,(StateDefinition *)aSStack_a8);
    StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
    std::string::~string(asStack_228);
    nop();
  }
  setStateHelper(this,(StateDefinition *)aSStack_148);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_148);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPCManager::getNPCDataSheet(Sexy::RtName) */

void CrazyNPCManager::getNPCDataSheet
               (RtWeakPtr<Sexy::SoundResource> *param_1,undefined8 param_2,RtName *param_3)

{
  undefined8 uVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtName::RtName(aRStack_18,param_3);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,uVar1,0x13,aRStack_18);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1,(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPCManager::getNPCDataSheetByNPCName(std::string const&) */

void CrazyNPCManager::getNPCDataSheetByNPCName(string *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long extraout_x0;
  int extraout_w1;
  string *in_x1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x13);
  do {
    bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar2) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (in_x8);
LAB_03c864f4:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    nop();
    cVar1 = std::operator==((string *)(extraout_x0 + 0x28),in_x1);
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)in_x8,(RtWeakPtrBase *)aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      goto LAB_03c864f4;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x03c86830 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* CrazyNPCManager::Draw(Sexy::Graphics*) */

void __thiscall CrazyNPCManager::Draw(CrazyNPCManager *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined4 local_28;
  undefined4 local_24;
  GraphicsAutoState aGStack_20 [8];
  Color aCStack_18 [12];
  int local_c;
  long local_8;
  
  uVar6 = 0;
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
  uVar7 = *(undefined8 *)(this + 0xd8);
  lVar3 = FUN_03c84018(uVar7,*(undefined8 *)(this + 0xe0));
  if (lVar3 != 0) {
    do {
      puVar4 = (undefined8 *)FUN_03c84058(uVar7,uVar6);
      cVar1 = CrazyNPC::IsLoaded((CrazyNPC *)*puVar4);
      if (cVar1 != '\0') {
        puVar4 = (undefined8 *)FUN_03c84058(*(undefined8 *)(this + 0xd8),uVar6);
        (**(code **)(*(long *)*puVar4 + 0x58))((long *)*puVar4,param_1);
      }
      uVar6 = uVar6 + 1;
      uVar7 = *(undefined8 *)(this + 0xd8);
      uVar5 = FUN_03c84018(uVar7,*(undefined8 *)(this + 0xe0));
    } while (uVar6 < uVar5);
  }
  iVar2 = getState(this);
  if (iVar2 != 5) {
    getState(this);
  }
  if (*(int *)(this + 0x1b0) != 0) {
    Sexy::Color::Color(aCStack_18,0);
    if (*(int *)(this + 0x1b0) == 2) {
      uVar10 = *(undefined4 *)(this + 0x1a8);
      auVar9 = PVZ_T();
      local_28 = 0;
      local_24 = 0x437f0000;
      fVar8 = CurveLerp<float>(auVar9,uVar10,auVar9._0_4_,&local_28,&local_24,1);
      local_c = (int)fVar8;
    }
    else if (*(int *)(this + 0x1b0) == 1) {
      uVar10 = *(undefined4 *)(this + 0x1a8);
      auVar9 = PVZ_T();
      local_28 = 0x437f0000;
      local_24 = 0;
      fVar8 = CurveLerp<float>(auVar9,uVar10,auVar9._0_4_,&local_28,&local_24,1);
      local_c = (int)fVar8;
    }
    Sexy::Graphics::SetColor(param_1,aCStack_18);
    Sexy::Graphics::FillRect(param_1,(TRect *)(gLawnApp + 0x71c));
  }
  MessageRouter::Post<Sexy::Graphics*,Sexy::Graphics*>
            ((MessageRouter *)gMessageRouter,Message::NPCDrawed,param_1);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPCManager::CrazyNPCManager() */

void __thiscall CrazyNPCManager::CrazyNPCManager(CrazyNPCManager *this)

{
  undefined *puVar1;
  size_t __n;
  undefined4 uVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_0675a7d0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf0));
  FUN_05476574(this + 0x108);
  Set8BytesTo0(this + 0x118);
  FUN_05476574(this + 0x120);
  FUN_05476574(this + 0x128);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x138),(DummyInit *)0x0);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x168),(DummyInit *)0x0);
  Set8BytesTo0((string *)(this + 0x1a0));
  StateMachine<CrazyNPCManagerState>::StateMachine
            ((StateMachine<CrazyNPCManagerState> *)(this + 0x1c8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x268));
  *(undefined4 *)(this + 0x284) = 0;
  Set8BytesTo0(this + 0x288);
  __n = 0;
  Sexy::Widget::Resize((Widget *)this,0,0,*(int *)(gLawnApp + 0xd4),*(int *)(gLawnApp + 0xd8));
  this[0x6c] = (CrazyNPCManager)0x0;
  this[0x1bc] = (CrazyNPCManager)0x0;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x1c0) = uVar2;
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x268));
  *(undefined8 *)(this + 0x130) = 0;
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x138),(Delegate2 *)aDStack_38);
  *(undefined4 *)(this + 0x19c) = 0;
  *(undefined4 *)(this + 0x198) = 0;
  std::string::append((string *)(this + 0x1a0),"",__n);
  *(undefined4 *)(this + 0x1b0) = 0;
  this[0x1b4] = (CrazyNPCManager)0x0;
  this[0x1bd] = (CrazyNPCManager)0x0;
  this[0x280] = (CrazyNPCManager)0x0;
  *(undefined4 *)(this + 0x1a8) = uVar2;
  *(undefined4 *)(this + 0x1ac) = uVar2;
  *(undefined4 *)(this + 0x1b8) = uVar2;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onEventNPCFinishedEntering);
  local_80 = local_58;
  local_90 = local_68;
  uStack_88 = uStack_60;
  MessageRouter::
  Subscribe<CrazyNPC*,Sexy::CBMemberTranslatorX<CrazyNPCManager,void(CrazyNPCManager::*)(CrazyNPC*)>>
            ((MessageRouter *)puVar1,Message::NPCFinishedEntering,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onEventNPCFinishedExiting);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<CrazyNPC*,Sexy::CBMemberTranslatorX<CrazyNPCManager,void(CrazyNPCManager::*)(CrazyNPC*)>>
            ((MessageRouter *)puVar1,Message::NPCFinishedExiting,&local_90);
  PrepForLoading(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CrazyNPCManager::StaticNew() */

CrazyNPCManager * CrazyNPCManager::StaticNew(void)

{
  CrazyNPCManager *this;
  
  this = ::operator_new(0x290);
  CrazyNPCManager(this);
  return this;
}


/* CrazyNPCManager::onEnterState_Finished(CrazyNPCManagerState) */

void CrazyNPCManager::onEnterState_Finished(Widget *param_1)

{
  char *pcVar1;
  
  if (param_1[0x280] != (Widget)0x0) {
    param_1[0x280] = (Widget)0x0;
    Sexy::WidgetManager::RemoveBaseModal(*(WidgetManager **)(gLawnApp + 0x360),param_1);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))(*(long **)(gLawnApp + 0x360),0);
  }
  if (param_1[0x1be] != (Widget)0x0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Stop_DaveTimeMachine_Underscore");
    param_1[0x1be] = (Widget)0x0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPCManager::killDeadNPCs() */

void __thiscall CrazyNPCManager::killDeadNPCs(CrazyNPCManager *this)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0xf0);
    uVar1 = FUN_03c84018(uVar4,*(undefined8 *)(this + 0xf8));
    if (uVar1 <= uVar3) break;
    plVar2 = (long *)FUN_03c84058(uVar4,uVar3);
    if (*(long *)(this + 0x130) == *plVar2) {
      *(undefined8 *)(this + 0x130) = 0;
    }
    plVar2 = (long *)FUN_03c84058(uVar4,0);
    if ((long *)*plVar2 != (long *)0x0) {
      (**(code **)(*(long *)*plVar2 + 0x18))();
    }
    uVar3 = uVar3 + 1;
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0xf0));
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    std::vector<CrazyNPC*,std::allocator<CrazyNPC*>>::erase
              ((vector<CrazyNPC*,std::allocator<CrazyNPC*>> *)(this + 0xf0),local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPCManager::updateState_Ready() */

void __thiscall CrazyNPCManager::updateState_Ready(CrazyNPCManager *this)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  
  lVar1 = ___stack_chk_guard;
  killDeadNPCs(this);
  if (this[0x1b4] != (CrazyNPCManager)0x0) {
    fVar6 = (float)PVZ_EOT();
    if (*(float *)(this + 0x1b8) == fVar6) {
      fVar6 = (float)PVZ_T();
      *(float *)(this + 0x1b8) = fVar6 + 0.5;
    }
    else {
      fVar7 = (float)PVZ_T();
      if (*(float *)(this + 0x1b8) <= fVar7) {
        *(float *)(this + 0x1b8) = fVar6;
        finishNarrative(this);
      }
    }
  }
  uVar5 = *(undefined8 *)(this + 0xd8);
  uVar2 = FUN_03c84018(uVar5,*(undefined8 *)(this + 0xe0));
  if (uVar2 == 0) {
    (**(code **)(*(long *)this + 800))(this);
    this[0x6c] = (CrazyNPCManager)0x0;
    uVar8 = PVZ_EOT();
    *(undefined4 *)(this + 0x1b8) = uVar8;
  }
  else {
    for (uVar4 = 0; uVar4 < uVar2; uVar4 = uVar4 + 1) {
      puVar3 = (undefined8 *)FUN_03c84058(uVar5,uVar4);
      (**(code **)(*(long *)*puVar3 + 0x50))((long *)*puVar3);
      uVar5 = *(undefined8 *)(this + 0xd8);
      uVar2 = FUN_03c84018(uVar5,*(undefined8 *)(this + 0xe0));
    }
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CrazyNPCManager::updateState_HeroShotReady() */

void __thiscall CrazyNPCManager::updateState_HeroShotReady(CrazyNPCManager *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  killDeadNPCs(this);
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0xd8);
    uVar2 = FUN_03c84018(uVar4,*(undefined8 *)(this + 0xe0));
    if (uVar2 <= uVar3) break;
    puVar1 = (undefined8 *)FUN_03c84058(uVar4,uVar3);
    (**(code **)(*(long *)*puVar1 + 0x50))((long *)*puVar1);
    uVar3 = uVar3 + 1;
  }
  fVar5 = (float)PVZ_EOT();
  if ((*(float *)(this + 0x1a8) != fVar5) &&
     (fVar6 = (float)PVZ_T(), *(float *)(this + 0x1a8) <= fVar6)) {
    *(float *)(this + 0x1a8) = fVar5;
    *(undefined4 *)(this + 0x1b0) = 0;
    FUN_03c853c0(this + 0x198);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPCManager::killAllNPCs() */

void __thiscall CrazyNPCManager::killAllNPCs(CrazyNPCManager *this)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0xd8);
    uVar2 = FUN_03c84018(uVar4,*(undefined8 *)(this + 0xe0));
    if (uVar2 <= uVar3) break;
    plVar1 = (long *)FUN_03c84058(uVar4,0);
    if ((long *)*plVar1 != (long *)0x0) {
      (**(code **)(*(long *)*plVar1 + 0x18))();
    }
    uVar3 = uVar3 + 1;
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0xd8));
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    std::vector<CrazyNPC*,std::allocator<CrazyNPC*>>::erase
              ((vector<CrazyNPC*,std::allocator<CrazyNPC*>> *)(this + 0xd8),local_10);
  }
  killDeadNPCs(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CrazyNPCManager::~CrazyNPCManager() */

void __thiscall CrazyNPCManager::~CrazyNPCManager(CrazyNPCManager *this)

{
  *(undefined ***)this = &PTR_GetClass_0675a7d0;
  if (*(int *)(this + 0x284) != 0) {
    Lua::CLuaEngine::RemoveScriptHandler((int)gLuaEngine);
    *(undefined4 *)(this + 0x284) = 0;
  }
  killAllNPCs(this);
  UnloadResources(this);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::string::~string((string *)(this + 0x288));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x268));
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0x1c8));
  std::string::~string((string *)(this + 0x1a0));
  FUN_05476c50(this + 0x128);
  FUN_05476c50(this + 0x120);
  std::string::~string((string *)(this + 0x118));
  FUN_05476c50(this + 0x108);
  std::vector<CrazyNPC*,std::allocator<CrazyNPC*>>::~vector
            ((vector<CrazyNPC*,std::allocator<CrazyNPC*>> *)(this + 0xf0));
  std::vector<CrazyNPC*,std::allocator<CrazyNPC*>>::~vector
            ((vector<CrazyNPC*,std::allocator<CrazyNPC*>> *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* CrazyNPCManager::~CrazyNPCManager() */

void __thiscall CrazyNPCManager::~CrazyNPCManager(CrazyNPCManager *this)

{
  ~CrazyNPCManager(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPCManager::createNPC(std::string const&) */

void CrazyNPCManager::createNPC(string *param_1)

{
  uint uVar1;
  CrazyNPC *pCVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  CrazyNPC *local_18;
  uint local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getNPCDataSheetByNPCName(param_1);
  pCVar2 = ::operator_new(0x130);
  CrazyNPC::CrazyNPC(pCVar2);
  local_18 = pCVar2;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)local_10,(RtWeakPtrBase *)aRStack_20);
  CrazyNPC::SetNPCSheet(pCVar2,(RtWeakPtr<Sexy::SoundResource> *)local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  std::vector<CrazyNPC*,std::allocator<CrazyNPC*>>::push_back
            ((vector<CrazyNPC*,std::allocator<CrazyNPC*>> *)(param_1 + 0xd8),&local_18);
  local_10[0] = 0;
  uVar1 = isInState((CrazyNPCManager *)param_1,local_10);
  if ((uVar1 & 0xff) == 0) {
    local_10[0] = uVar1 & 0xff;
    (**(code **)(*(long *)param_1 + 800))(param_1,(RtWeakPtr<Sexy::SoundResource> *)local_10);
  }
  else {
    StartLoad((CrazyNPCManager *)param_1);
  }
  pCVar2 = local_18;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pCVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPCManager::parseSingleNarrativeCommand(std::wstring const&) */

void __thiscall CrazyNPCManager::parseSingleNarrativeCommand(CrazyNPCManager *this,wstring *param_1)

{
  bool bVar1;
  CrazyNPCManager CVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  char *pcVar7;
  string *extraout_x1;
  string *extraout_x1_00;
  bool *pbVar8;
  long lVar9;
  string *psVar10;
  CrazyNPC *this_00;
  string asStack_28 [8];
  string asStack_20 [8];
  Sexy aSStack_18 [8];
  Sexy aSStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_054765d0(param_1);
  lVar9 = 0;
  do {
    iVar4 = (int)lVar9;
    if (iVar3 <= iVar4) {
      this_00 = (CrazyNPC *)0x0;
      Set8BytesTo0(asStack_28);
      iVar4 = FUN_054765d0(param_1);
      goto LAB_03c87564;
    }
    piVar5 = (int *)FUN_054765fc(param_1,lVar9);
    lVar9 = lVar9 + 1;
  } while (*piVar5 != 0x3a);
  this_00 = (CrazyNPC *)0x0;
  Set8BytesTo0(asStack_28);
  iVar3 = FUN_054765d0(param_1);
  iVar3 = (iVar3 - iVar4) + 1;
  if (0 < iVar3) {
    FUN_05477da4((wstring *)asStack_20,param_1,(long)(iVar4 + 1),(long)iVar3);
    Sexy::ToString((wstring *)asStack_20);
    Sexy::StringToLower(aSStack_18,extraout_x1_00);
    FUN_05474278(asStack_28,(string *)aSStack_10);
    std::string::~string((string *)aSStack_10);
    std::string::~string((string *)aSStack_18);
    this_00 = (CrazyNPC *)getActiveNPCByName(this,asStack_28);
    if (this_00 != (CrazyNPC *)0x0) {
      *(CrazyNPC **)(this + 0x130) = this_00;
    }
    FUN_05476c50((wstring *)asStack_20);
  }
LAB_03c87564:
  if (iVar4 < 1) goto LAB_03c8760c;
  pbVar8 = (bool *)(long)iVar4;
  FUN_05477da4(aSStack_18,param_1,0);
  Sexy::WStringToString(aSStack_18,(wstring *)0x0,pbVar8);
  Sexy::StringToLower(aSStack_10,extraout_x1);
  std::string::~string((string *)aSStack_10);
  FUN_05476c50(aSStack_18);
  if (*(long *)(this + 0x130) == 0) {
LAB_03c875e8:
    bVar1 = std::operator==(asStack_20,"npc_enter");
    if (bVar1) goto LAB_03c87600;
LAB_03c876e4:
    bVar1 = std::operator==(asStack_20,"npc_exit");
    if (bVar1) {
      if (this_00 != (CrazyNPC *)0x0) {
        *(CrazyNPC **)(this + 0x130) = this_00;
        CrazyNPC::Leave(this_00);
      }
    }
    else {
      bVar1 = std::operator==(asStack_20,"tutorial");
      if ((bVar1) &&
         (iVar3 = FUN_03c83f94(*(undefined8 *)(this + 0x170),*(undefined8 *)(this + 0x180)),
         iVar3 != 0)) {
        Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x168))
        ;
      }
    }
  }
  else {
    bVar1 = std::operator==(asStack_20,"say");
    if (((bVar1) || (bVar1 = std::operator==(asStack_20,"normal"), bVar1)) ||
       (bVar1 = std::operator==(asStack_20,"general"), bVar1)) {
      FUN_03c84004(*(long *)(this + 0x130) + 0x20,0);
      goto LAB_03c875e8;
    }
    bVar1 = std::operator==(asStack_20,"excited");
    if (!bVar1) {
      bVar1 = std::operator==(asStack_20,"playful");
      if (bVar1) {
        FUN_03c84004(*(long *)(this + 0x130) + 0x20,2);
      }
      else {
        bVar1 = std::operator==(asStack_20,"tired");
        if (bVar1) {
          FUN_03c84004(*(long *)(this + 0x130) + 0x20,3);
        }
        else {
          bVar1 = std::operator==(asStack_20,"shout");
          if ((bVar1) || (bVar1 = std::operator==(asStack_20,"crazy"), bVar1)) {
            FUN_03c84004(*(long *)(this + 0x130) + 0x20,4);
          }
          else {
            bVar1 = std::operator==(asStack_20,"bringout_taco");
            if (bVar1) {
              psVar10 = *(string **)(this + 0x130);
              std::string::string((string *)aSStack_10,"taco");
              CrazyNPC::StartHolding(psVar10);
              std::string::~string((string *)aSStack_10);
              nop();
            }
            else {
              bVar1 = std::operator==(asStack_20,"eat_taco");
              if (bVar1) {
                psVar10 = *(string **)(this + 0x130);
                std::string::string((string *)aSStack_10,"taco");
                CrazyNPC::StartEating(psVar10);
                std::string::~string((string *)aSStack_10);
                nop();
              }
              else {
                bVar1 = std::operator==(asStack_20,"spawn_coins");
                if (bVar1) {
                  MessageRouter::Post((_func_void *)gMessageRouter);
                }
                else {
                  CVar2 = (CrazyNPCManager)std::operator==(asStack_20,"start_dialog_music");
                  if ((bool)CVar2) {
                    pcVar7 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
                    AudioMgr::SendEvent(pcVar7,"Play_DaveTimeMachine_Underscore");
                    this[0x1be] = (CrazyNPCManager)0x1;
                  }
                  else {
                    bVar1 = std::operator==(asStack_20,"stop_dialog_music");
                    if (bVar1) {
                      pcVar7 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
                      AudioMgr::SendEvent(pcVar7,"Stop_DaveTimeMachine_Underscore");
                      this[0x1be] = CVar2;
                    }
                    else {
                      bVar1 = std::operator==(asStack_20,"short");
                      if (bVar1) {
                        FUN_02fd3d4c(*(long *)(this + 0x130) + 0x24,1);
                      }
                      else {
                        bVar1 = std::operator==(asStack_20,"medium");
                        if ((bVar1) || (bVar1 = std::operator==(asStack_20,"med"), bVar1)) {
                          FUN_02fd3d4c(*(long *)(this + 0x130) + 0x24,2);
                        }
                        else {
                          bVar1 = std::operator==(asStack_20,"long");
                          if (bVar1) {
                            FUN_02fd3d4c(*(long *)(this + 0x130) + 0x24,3);
                          }
                          else {
                            parseSpecialNarrativeCommand(this,asStack_20);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_03c875e8;
    }
    FUN_03c84004(*(long *)(this + 0x130) + 0x20,1);
    bVar1 = std::operator==(asStack_20,"npc_enter");
    if (!bVar1) goto LAB_03c876e4;
LAB_03c87600:
    if (this_00 == (CrazyNPC *)0x0) {
      uVar6 = createNPC((string *)this);
      *(undefined8 *)(this + 0x130) = uVar6;
    }
  }
  std::string::~string(asStack_20);
LAB_03c8760c:
  std::string::~string(asStack_28);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPCManager::parseNarrativeCommands() */

void __thiscall CrazyNPCManager::parseNarrativeCommands(CrazyNPCManager *this)

{
  wstring *pwVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  wstring awStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  pwVar1 = (wstring *)(this + 0x120);
  local_8 = ___stack_chk_guard;
  thunk_FUN_05477b9c(pwVar1,this + 0x128);
  cVar3 = FUN_0547419c((Sexy *)(this + 0x118));
  if (cVar3 == '\0') {
    Sexy::UTF8StringToWString((Sexy *)(this + 0x118),(string *)awStack_20);
    TodStringTranslate(awStack_20);
    TodReplaceString(pwVar1,L"{CONTENT}",(wstring *)&local_18);
    FUN_054766c8(pwVar1,&local_10);
    FUN_05476c50(&local_10);
    FUN_05476c50((wstring *)&local_18);
    FUN_05476c50(awStack_20);
  }
  iVar8 = 0;
  iVar9 = 0;
  iVar4 = FUN_054765d0(pwVar1);
  bVar2 = false;
  if (0 < iVar4) {
    do {
      if (bVar2) {
        piVar5 = (int *)FUN_05476f5c(pwVar1,(long)iVar8);
        if (*piVar5 == 0x7d) {
          iVar4 = (iVar8 - iVar9) + -1;
          if (0 < iVar4) {
            FUN_05477da4((wstring *)&local_10,pwVar1,(long)(iVar9 + 1),(long)iVar4);
            parseSingleNarrativeCommand(this,(wstring *)&local_10);
            FUN_05476c50((wstring *)&local_10);
          }
          bVar2 = false;
          local_10 = FUN_05476ef0(pwVar1);
          uVar6 = __gnu_cxx::
                  __normal_iterator<wchar_t*,std::vector<wchar_t,std::allocator<wchar_t>>>::
                  operator+((__normal_iterator<wchar_t*,std::vector<wchar_t,std::allocator<wchar_t>>>
                             *)&local_10,(long)iVar9);
          local_10 = FUN_05476ef0(pwVar1);
          local_18 = __gnu_cxx::
                     __normal_iterator<wchar_t*,std::vector<wchar_t,std::allocator<wchar_t>>>::
                     operator+((__normal_iterator<wchar_t*,std::vector<wchar_t,std::allocator<wchar_t>>>
                                *)&local_10,(long)iVar8);
          uVar7 = __gnu_cxx::
                  __normal_iterator<wchar_t*,std::vector<wchar_t,std::allocator<wchar_t>>>::
                  operator+((__normal_iterator<wchar_t*,std::vector<wchar_t,std::allocator<wchar_t>>>
                             *)&local_18,1);
          FUN_05477010(pwVar1,uVar6,uVar7);
          iVar8 = iVar9;
        }
        else {
          iVar8 = iVar8 + 1;
        }
      }
      else {
        piVar5 = (int *)FUN_05476f5c(pwVar1,(long)iVar8);
        if (*piVar5 == 0x7b) {
          iVar9 = iVar8;
        }
        bVar2 = *piVar5 == 0x7b;
        iVar8 = iVar8 + 1;
      }
      iVar4 = FUN_054765d0(pwVar1);
    } while (iVar8 < iVar4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPCManager::setNarrativeID(int) */

void __thiscall CrazyNPCManager::setNarrativeID(CrazyNPCManager *this,int param_1)

{
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getNarrativeText((int)this);
  *(int *)(this + 0x110) = param_1;
  TodStringTranslate(awStack_18);
  FUN_054766c8(this + 0x128,auStack_10);
  FUN_05476c50(auStack_10);
  parseNarrativeCommands(this);
  if (*(int *)(this + 0x1b0) == 0) {
    talkNarrative((wstring *)this);
  }
  else {
    stopAllTalking(this);
  }
  FUN_05476c50(awStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPCManager::StartNarrativeID(std::string const&, Sexy::Delegate0, std::string const&) */

void __thiscall
CrazyNPCManager::StartNarrativeID
          (CrazyNPCManager *this,Sexy *param_1,RtInvokeVariant *param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *__nptr;
  wchar_t *pwVar4;
  WidgetManager *this_00;
  undefined8 uVar5;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  bool *pbVar6;
  ulong uVar7;
  Sexy aSStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  bool *local_8;
  
  local_8 = ___stack_chk_guard;
  pbVar6 = ___stack_chk_guard;
  thunk_FUN_05475e00(this + 0x118,param_4);
  __nptr = (char *)FUN_0547429c(param_1);
  uVar2 = atoi(__nptr);
  uVar7 = (ulong)uVar2;
  if ((int)uVar2 < 1) {
    Sexy::Upper(param_1,extraout_x1);
    uVar7 = 1;
    uVar5 = FUN_0547429c((string *)aSStack_20);
    Sexy::StrFormat("%s_",(Sexy *)asStack_18,uVar5);
    Sexy::UTF8StringToWString((Sexy *)asStack_18,extraout_x1_01);
    FUN_054766c8(this + 0x108,asStack_10);
    FUN_05476c50(asStack_10);
    std::string::~string(asStack_18);
    std::string::~string((string *)aSStack_20);
  }
  else {
    FUN_054772c4(this + 0x108,&DAT_056f11a8);
  }
  Sexy::WStringToString((Sexy *)(this + 0x108),(wstring *)0x0,pbVar6);
  std::operator+("[NARRATIVE_",asStack_18);
  std::operator+(asStack_10,"%d]");
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  Sexy::UTF8StringToWString(aSStack_20,extraout_x1_00);
  pwVar4 = (wchar_t *)FUN_054766ec(asStack_18);
  Sexy::StrFormat(pwVar4,asStack_10,uVar7);
  cVar1 = TodStringListExists((wstring *)asStack_10);
  if (cVar1 == '\0') {
    iVar3 = FUN_03c83f94(*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x18));
    if (iVar3 != 0) {
      Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn(param_3);
    }
  }
  else {
    this[0x280] = (CrazyNPCManager)0x1;
    Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
              ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x138),(Delegate2 *)param_3);
    setNarrativeID(this,(int)uVar7);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))(*(long **)(gLawnApp + 0x360),this);
    LawnApp::PushOverlaysToTop(gLawnApp);
    this_00 = *(WidgetManager **)(gLawnApp + 0x360);
    if (this != *(CrazyNPCManager **)(this_00 + 0xe0)) {
      Sexy::WidgetManager::AddBaseModal(this_00,(Widget *)this);
      this_00 = *(WidgetManager **)(gLawnApp + 0x360);
    }
    (**(code **)(*(long *)this_00 + 0x98))(this_00,this);
    if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
      Board::ClearCursors(*(Board **)(gLawnApp + 0x9f0));
    }
  }
  FUN_05476c50(asStack_10);
  FUN_05476c50(asStack_18);
  std::string::~string((string *)aSStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPCManager::StartNarrativeIDWithLUA(std::string const&, int, std::string const&) */

void __thiscall
CrazyNPCManager::StartNarrativeIDWithLUA
          (CrazyNPCManager *this,string *param_1,int param_2,string *param_3)

{
  CBMemberTranslatorX aCStack_80 [24];
  Delegate0 aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  thunk_FUN_05475e00(this + 0x288);
  *(int *)(this + 0x284) = param_2;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNarrativeFinishedWithLUA);
  Sexy::Delegate0::Delegate0<CrazyNPCManager,void(CrazyNPCManager::*)()>(aDStack_68,aCStack_80);
  Sexy::Delegate0::Delegate0(aDStack_38,aDStack_68);
  StartNarrativeID(this,param_1,aDStack_38,param_3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPCManager::advanceNarrative() */

void CrazyNPCManager::advanceNarrative(void)

{
  char cVar1;
  int iVar2;
  CrazyNPCManager *in_x0;
  wchar_t *pwVar3;
  string *extraout_x1;
  bool *in_x2;
  Sexy aSStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  in_x0[0x1bd] = (CrazyNPCManager)0x0;
  local_8 = ___stack_chk_guard;
  cVar1 = IsInHeroShot(in_x0);
  if (cVar1 == '\0') {
    iVar2 = *(int *)(in_x0 + 0x110);
    Sexy::WStringToString((Sexy *)(in_x0 + 0x108),(wstring *)0x0,in_x2);
    std::operator+("[NARRATIVE_",asStack_18);
    std::operator+(asStack_10,"%d]");
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    Sexy::UTF8StringToWString(aSStack_20,extraout_x1);
    pwVar3 = (wchar_t *)FUN_054766ec(asStack_18);
    Sexy::StrFormat(pwVar3,asStack_10,(ulong)(iVar2 + 1U));
    cVar1 = TodStringListExists((wstring *)asStack_10);
    if (cVar1 == '\0') {
      finishNarrative(in_x0);
    }
    else {
      setNarrativeID(in_x0,iVar2 + 1U);
    }
    FUN_05476c50(asStack_10);
    FUN_05476c50(asStack_18);
    std::string::~string((string *)aSStack_20);
  }
  else {
    cVar1 = '\0';
    iVar2 = getState(in_x0);
    if (iVar2 == 5) {
      endHeroShot(in_x0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* CrazyNPCManager::Update() */

void __thiscall CrazyNPCManager::Update(CrazyNPCManager *this)

{
  char cVar1;
  
  updateStateMachine(this);
  if ((this[0x1bd] != (CrazyNPCManager)0x0) && (cVar1 = canAdvanceNarrative(this), cVar1 != '\0')) {
    advanceNarrative();
    return;
  }
  return;
}


/* CrazyNPCManager::TouchBegan(Sexy::Touch const&) */

void CrazyNPCManager::TouchBegan(Touch *param_1)

{
  char cVar1;
  
  cVar1 = canAdvanceNarrative((CrazyNPCManager *)param_1);
  if (cVar1 == '\0') {
    return;
  }
  advanceNarrative();
  return;
}


/* CrazyNPCManager::ContinueNarration() */

void __thiscall CrazyNPCManager::ContinueNarration(CrazyNPCManager *this)

{
  char cVar1;
  
  cVar1 = canAdvanceNarrative(this);
  if (cVar1 == '\0') {
    this[0x1bd] = (CrazyNPCManager)0x1;
    return;
  }
  advanceNarrative();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPCManager::updateState_HeroShotUnloading() */

void __thiscall CrazyNPCManager::updateState_HeroShotUnloading(CrazyNPCManager *this)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  
  lVar1 = ___stack_chk_guard;
  killDeadNPCs(this);
  uVar5 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)(this + 0xd8);
    uVar2 = FUN_03c84018(uVar6,*(undefined8 *)(this + 0xe0));
    if (uVar2 <= uVar5) break;
    puVar4 = (undefined8 *)FUN_03c84058(uVar6,uVar5);
    (**(code **)(*(long *)*puVar4 + 0x50))((long *)*puVar4);
    uVar5 = uVar5 + 1;
  }
  if (*(int *)(this + 0x19c) == 0) {
    fVar7 = (float)PVZ_T();
    if (*(float *)(this + 0x1a8) <= fVar7) {
      *(undefined4 *)(this + 0x1b0) = 0;
      uVar8 = PVZ_EOT();
      *(undefined4 *)(this + 0x1a8) = uVar8;
      fVar7 = (float)PVZ_T();
      pcVar3 = *(code **)(*(long *)this + 800);
      *(float *)(this + 0x198) = fVar7 + 0.1;
      (*pcVar3)(this);
      advanceNarrative();
    }
  }
  else {
    fVar7 = (float)PVZ_T();
    if (*(float *)(this + 0x1a8) <= fVar7) {
      puVar4 = &gLawnApp;
      LawnApp::DeleteGroup(gLawnApp,(string *)(this + 0x1a0));
      *(undefined4 *)(this + 0x19c) = 0;
      std::string::append((string *)(this + 0x1a0),"",(size_t)puVar4);
      fVar7 = (float)PVZ_T();
      *(float *)(this + 0x198) = fVar7 + 60.0;
      StartFadeIn(this);
    }
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrazyNPCManager::onEventNPCFinishedExiting(CrazyNPC*) */

void __thiscall CrazyNPCManager::onEventNPCFinishedExiting(CrazyNPCManager *this,CrazyNPC *param_1)

{
  CrazyNPC *pCVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  CrazyNPC *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar5 = *(undefined8 *)(this + 0xd8);
  lVar4 = 0;
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  lVar2 = FUN_03c84018(uVar5,*(undefined8 *)(this + 0xe0));
  pCVar1 = local_28;
  do {
    if (lVar4 == lVar2) {
LAB_03c88414:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar3 = (undefined8 *)FUN_03c84058(uVar5,lVar4);
    if ((CrazyNPC *)*puVar3 == pCVar1) {
      std::vector<CrazyNPC*,std::allocator<CrazyNPC*>>::push_back
                ((vector<CrazyNPC*,std::allocator<CrazyNPC*>> *)(this + 0xf0),&local_28);
      local_20 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(this + 0xd8));
      local_18 = __gnu_cxx::
                 __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                 ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                              *)&local_20,lVar4);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      std::vector<CrazyNPC*,std::allocator<CrazyNPC*>>::erase
                ((vector<CrazyNPC*,std::allocator<CrazyNPC*>> *)(this + 0xd8),local_10);
      goto LAB_03c88414;
    }
    lVar4 = lVar4 + 1;
  } while( true );
}

