// Class: ActionUnlockDangerRoomSequence


/* ActionUnlockDangerRoomSequence::~ActionUnlockDangerRoomSequence() */

void __thiscall
ActionUnlockDangerRoomSequence::~ActionUnlockDangerRoomSequence
          (ActionUnlockDangerRoomSequence *this)

{
  *(undefined ***)this = &PTR_GetClass_068586c0;
  std::string::~string((string *)(this + 0x18));
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionUnlockDangerRoomSequence::~ActionUnlockDangerRoomSequence() */

void __thiscall
ActionUnlockDangerRoomSequence::~ActionUnlockDangerRoomSequence
          (ActionUnlockDangerRoomSequence *this)

{
  ~ActionUnlockDangerRoomSequence(this);
  AK::FreeHook(this);
  return;
}


/* ActionUnlockDangerRoomSequence::StaticGetClass() */

long * ActionUnlockDangerRoomSequence::StaticGetClass(void)

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
  uVar2 = WorldMapAction::StaticGetClass();
  (*pcVar3)(plVar1,"ActionUnlockDangerRoomSequence",uVar2,StaticNew);
  return sClass;
}


/* ActionUnlockDangerRoomSequence::GetClass() const */

long * ActionUnlockDangerRoomSequence::GetClass(void)

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
  uVar2 = WorldMapAction::StaticGetClass();
  (*pcVar3)(plVar1,"ActionUnlockDangerRoomSequence",uVar2,StaticNew);
  return sClass;
}


/* ActionUnlockDangerRoomSequence::ActionUnlockDangerRoomSequence() */

void __thiscall
ActionUnlockDangerRoomSequence::ActionUnlockDangerRoomSequence(ActionUnlockDangerRoomSequence *this)

{
  undefined8 uVar1;
  
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_068586c0;
  Set8BytesTo0(this + 0x18);
  *(undefined8 *)(this + 0x20) = 0;
  uVar1 = LawnApp::GetLastCompletedLevel(gLawnApp);
  thunk_FUN_05475e00(this + 0x18,uVar1);
  return;
}


/* ActionUnlockDangerRoomSequence::StaticNew() */

ActionUnlockDangerRoomSequence * ActionUnlockDangerRoomSequence::StaticNew(void)

{
  ActionUnlockDangerRoomSequence *this;
  
  this = ::operator_new(0x28);
  ActionUnlockDangerRoomSequence(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionUnlockDangerRoomSequence::onDangerRoomAnimationFinished(std::string const&) */

void ActionUnlockDangerRoomSequence::onDangerRoomAnimationFinished(string *param_1)

{
  long lVar1;
  PopAnimRig *pPVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = *(PopAnimRig **)(param_1 + 0x20);
  std::string::string(asStack_40,"unlocked_idle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  param_1[9] = (string)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionUnlockDangerRoomSequence::Start() */

void __thiscall ActionUnlockDangerRoomSequence::Start(ActionUnlockDangerRoomSequence *this)

{
  short sVar1;
  int iVar2;
  MapEventItem *pMVar3;
  long lVar4;
  WorldMap *this_00;
  long lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  string *psVar9;
  undefined8 uVar10;
  string *extraout_x1;
  PopAnimRig *pPVar11;
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WorldMapAction::DisableInput((WorldMapAction *)this);
  pMVar3 = (MapEventItem *)
           WorldMapUtils::GetDangerRoomUnlockedFromLevelOrEventName((string *)(this + 0x18));
  if (pMVar3 != (MapEventItem *)0x0) {
    lVar4 = FUN_0454b260(*(undefined8 *)(pMVar3 + 0xe8));
    this_00 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
    lVar5 = FUN_0454b28c(*(undefined8 *)(this_00 + 0x2f0));
    if (lVar4 == lVar5) {
      WorldMap::CenterOnMapEvent(this_00,pMVar3,false);
      lVar4 = LawnApp::GetWorldMap(gLawnApp);
      lVar4 = FUN_0454b28c(*(undefined8 *)(lVar4 + 0x2f0));
      sVar1 = FUN_0454b25c(*(undefined2 *)(pMVar3 + 0xe2));
      puVar6 = (undefined8 *)FUN_0454b2d0(*(undefined8 *)(lVar4 + 0x78),(long)sVar1);
      pPVar11 = (PopAnimRig *)*puVar6;
      std::string::string(asStack_58,"unlocked_animation");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onDangerRoomAnimationFinished);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<ActionUnlockDangerRoomSequence,void(ActionUnlockDangerRoomSequence::*)(std::string_const&)>
                (aDStack_38,asStack_50);
      PopAnimRig::PlayAndStop(pPVar11,asStack_58,0,aDStack_38);
      std::string::~string(asStack_58);
      nop();
      Sexy::StringToLower((Sexy *)(lVar4 + 0x38),extraout_x1);
      puVar7 = (undefined1 *)FUN_05474ee8(asStack_58,0);
      pbVar8 = (byte *)FUN_05474ee8(asStack_58,0);
      iVar2 = toupper((uint)*pbVar8);
      *puVar7 = (char)iVar2;
      psVar9 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      uVar10 = FUN_0547429c(asStack_58);
      Sexy::StrFormat("Play_UI_Map_Danger_Reveal_%s",asStack_50,uVar10);
      AudioMgr::SendEvent(psVar9,asStack_50);
      std::string::~string(asStack_50);
      *(PopAnimRig **)(this + 0x20) = pPVar11;
      std::string::~string(asStack_58);
      goto LAB_0455cd00;
    }
  }
  this[9] = (ActionUnlockDangerRoomSequence)0x1;
LAB_0455cd00:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

