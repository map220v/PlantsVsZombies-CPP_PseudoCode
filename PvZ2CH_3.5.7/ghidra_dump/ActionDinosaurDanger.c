// Class: ActionDinosaurDanger


/* ActionDinosaurDanger::~ActionDinosaurDanger() */

void __thiscall ActionDinosaurDanger::~ActionDinosaurDanger(ActionDinosaurDanger *this)

{
  *(undefined ***)this = &PTR_GetClass_06859d40;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionDinosaurDanger::~ActionDinosaurDanger() */

void __thiscall ActionDinosaurDanger::~ActionDinosaurDanger(ActionDinosaurDanger *this)

{
  ~ActionDinosaurDanger(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionDinosaurDanger::End() */

void ActionDinosaurDanger::End(void)

{
  LuaFunctionCallback *pLVar1;
  string asStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_8 = ___stack_chk_guard;
  local_14 = 0;
  local_10 = 0;
  pLVar1 = (LuaFunctionCallback *)Lua::LuaFunctionCallback::Begin((LuaFunctionCallback *)&local_28);
  std::string::string(asStack_30,"luaDinosaurDangerDlg:Close");
  pLVar1 = (LuaFunctionCallback *)Lua::LuaFunctionCallback::Execute(pLVar1,asStack_30,0,(bool *)0x0)
  ;
  Lua::LuaFunctionCallback::End(pLVar1);
  std::string::~string(asStack_30);
  nop();
  Lua::LuaFunctionCallback::~LuaFunctionCallback((LuaFunctionCallback *)&local_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionDinosaurDanger::Update() */

void __thiscall ActionDinosaurDanger::Update(ActionDinosaurDanger *this)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  
  lVar1 = ___stack_chk_guard;
  if (((DAT_06b104d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b104d8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b10328,"DinosaurDangerDlg");
    __cxa_guard_release(&DAT_06b104d8);
    __cxa_atexit(std::string::~string,&DAT_06b10328,&DAT_06a88000);
    nop();
  }
  pcVar3 = (char *)FUN_0547429c(&DAT_06b10328);
  lVar4 = Lua::CUIDialog::GetDialog(pcVar3);
  if (lVar4 == 0) {
    this[9] = (ActionDinosaurDanger)0x1;
  }
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ActionDinosaurDanger::StaticGetClass() */

long * ActionDinosaurDanger::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionDinosaurDanger",uVar2,StaticNew);
  return sClass;
}


/* ActionDinosaurDanger::GetClass() const */

long * ActionDinosaurDanger::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionDinosaurDanger",uVar2,StaticNew);
  return sClass;
}


/* ActionDinosaurDanger::ActionDinosaurDanger() */

void __thiscall ActionDinosaurDanger::ActionDinosaurDanger(ActionDinosaurDanger *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_06859d40;
  return;
}


/* ActionDinosaurDanger::StaticNew() */

ActionDinosaurDanger * ActionDinosaurDanger::StaticNew(void)

{
  ActionDinosaurDanger *this;
  
  this = ::operator_new(0x18);
  ActionDinosaurDanger(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionDinosaurDanger::Start() */

void __thiscall ActionDinosaurDanger::Start(ActionDinosaurDanger *this)

{
  char cVar1;
  int iVar2;
  LuaFunctionCallback *pLVar3;
  bool local_b1;
  string asStack_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  if (local_70 != '\0') {
    cVar1 = LawnApp::IsNetworkModuleOK();
    if (cVar1 != '\0') {
      ActiveItem::~ActiveItem(aAStack_88);
      local_b1 = false;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 0;
      local_94 = 0;
      local_90 = 0;
      pLVar3 = (LuaFunctionCallback *)
               Lua::LuaFunctionCallback::Begin((LuaFunctionCallback *)&local_a8);
      std::string::string(asStack_b0,"luaDinosaurDangerDlg:CreateUI");
      pLVar3 = (LuaFunctionCallback *)
               Lua::LuaFunctionCallback::Execute(pLVar3,asStack_b0,1,&local_b1);
      Lua::LuaFunctionCallback::End(pLVar3);
      std::string::~string(asStack_b0);
      nop();
      if (local_b1 == false) {
        this[9] = (ActionDinosaurDanger)0x1;
      }
      Lua::LuaFunctionCallback::~LuaFunctionCallback((LuaFunctionCallback *)&local_a8);
      goto LAB_0456000c;
    }
  }
  ActiveItem::~ActiveItem(aAStack_88);
  this[9] = (ActionDinosaurDanger)0x1;
LAB_0456000c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionDinosaurDanger::CreateIfNeed(bool&) */

void ActionDinosaurDanger::CreateIfNeed(bool *param_1)

{
  char cVar1;
  int iVar2;
  wchar16 *pwVar3;
  ActionDinosaurDanger *this;
  LineBreakCategory *pLVar4;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_98 [8];
  string asStack_90 [8];
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  pLVar4 = aLStack_98;
  local_8 = ___stack_chk_guard;
  pwVar3 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_90,"PopUpDisabled");
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar3,(wchar16 *)asStack_90,pLVar4,in_x3,in_x4);
  std::string::~string(asStack_90);
  nop();
  if ((cVar1 == '\0') && (*param_1 == false)) {
    cVar1 = LawnApp::IsNetworkModuleOK();
    if (cVar1 != '\0') {
      iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar2);
      ActiveItem::~ActiveItem(aAStack_88);
      if (local_70 != '\0') {
        this = ::operator_new(0x18);
        *(undefined8 *)this = 0;
        this[8] = (ActionDinosaurDanger)0x0;
        this[9] = (ActionDinosaurDanger)0x0;
        this[10] = (ActionDinosaurDanger)0x0;
        *(undefined4 *)(this + 0xc) = 0;
        *(undefined4 *)(this + 0x10) = 0;
        ActionDinosaurDanger(this);
        goto LAB_04560bb8;
      }
    }
  }
  this = (ActionDinosaurDanger *)0x0;
LAB_04560bb8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}

