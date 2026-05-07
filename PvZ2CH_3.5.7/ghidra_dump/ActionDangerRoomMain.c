// Class: ActionDangerRoomMain


/* ActionDangerRoomMain::~ActionDangerRoomMain() */

void __thiscall ActionDangerRoomMain::~ActionDangerRoomMain(ActionDangerRoomMain *this)

{
  *(undefined ***)this = &PTR_GetClass_06859cc0;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionDangerRoomMain::~ActionDangerRoomMain() */

void __thiscall ActionDangerRoomMain::~ActionDangerRoomMain(ActionDangerRoomMain *this)

{
  ~ActionDangerRoomMain(this);
  AK::FreeHook(this);
  return;
}


/* ActionDangerRoomMain::StaticGetClass() */

long * ActionDangerRoomMain::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionDangerRoomMain",uVar2,StaticNew);
  return sClass;
}


/* ActionDangerRoomMain::GetClass() const */

long * ActionDangerRoomMain::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionDangerRoomMain",uVar2,StaticNew);
  return sClass;
}


/* ActionDangerRoomMain::ActionDangerRoomMain() */

void __thiscall ActionDangerRoomMain::ActionDangerRoomMain(ActionDangerRoomMain *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  this[0x18] = (ActionDangerRoomMain)0x0;
  *(undefined ***)this = &PTR_GetClass_06859cc0;
  *(undefined4 *)(this + 0x14) = 0xbf800000;
  return;
}


/* ActionDangerRoomMain::StaticNew() */

ActionDangerRoomMain * ActionDangerRoomMain::StaticNew(void)

{
  ActionDangerRoomMain *this;
  
  this = ::operator_new(0x20);
  ActionDangerRoomMain(this);
  return this;
}


/* ActionDangerRoomMain::OnMsgErrorRequest(int, std::string const&) */

void ActionDangerRoomMain::OnMsgErrorRequest(int param_1,string *param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)(uint)param_1;
  if (*(char *)(uVar1 + 0x18) != '\0') {
    *(undefined1 *)(uVar1 + 0x18) = 0;
    *(undefined1 *)(uVar1 + 9) = 1;
  }
  return;
}


/* ActionDangerRoomMain::CreateIfNeed(bool&) */

ActionDangerRoomMain * ActionDangerRoomMain::CreateIfNeed(bool *param_1)

{
  int iVar1;
  long lVar2;
  ActionDangerRoomMain *this;
  
  lVar2 = Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  iVar1 = FUN_0454b2a4(*(undefined4 *)(lVar2 + 0x100));
  if (iVar1 != 0) {
    lVar2 = Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    FUN_0454b360(lVar2 + 0x100);
    this = ::operator_new(0x20);
    *(undefined8 *)this = 0;
    this[8] = (ActionDangerRoomMain)0x0;
    this[9] = (ActionDangerRoomMain)0x0;
    this[10] = (ActionDangerRoomMain)0x0;
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
    this[0x18] = (ActionDangerRoomMain)0x0;
    *(undefined4 *)(this + 0x14) = 0;
    ActionDangerRoomMain(this);
    return this;
  }
  return (ActionDangerRoomMain *)0x0;
}


/* ActionDangerRoomMain::End() */

void __thiscall ActionDangerRoomMain::End(ActionDangerRoomMain *this)

{
  this[0x18] = (ActionDangerRoomMain)0x0;
  Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  DangerRoomManager::CloseMainDialog();
  return;
}


/* ActionDangerRoomMain::Start() */

void __thiscall ActionDangerRoomMain::Start(ActionDangerRoomMain *this)

{
  DangerRoomManager *this_00;
  undefined4 uVar1;
  
  this_00 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  DangerRoomManager::ShowMainDialog(this_00);
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x14) = uVar1;
  return;
}


/* ActionDangerRoomMain::Update() */

void __thiscall ActionDangerRoomMain::Update(ActionDangerRoomMain *this)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  
  fVar4 = *(float *)(this + 0x14);
  if ((0.0 < fVar4) && (fVar2 = (float)PVZ_T(), fVar4 + 0.5 < fVar2)) {
    uVar3 = PVZ_T();
    *(undefined4 *)(this + 0x14) = uVar3;
    Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    lVar1 = DangerRoomManager::GetMainDialog();
    if (lVar1 == 0) {
      this[9] = (ActionDangerRoomMain)0x1;
      *(undefined4 *)(this + 0x14) = 0xbf800000;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionDangerRoomMain::OnNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
ActionDangerRoomMain::OnNotifyRefreshActivityList
          (ActionDangerRoomMain *this,bool param_1,set *param_2)

{
  bool bVar1;
  DangerRoomManager *this_00;
  undefined4 uVar2;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x18] != (ActionDangerRoomMain)0x0) && (this[0x18] = (ActionDangerRoomMain)0x0, param_1)
     ) {
    local_1c = 0x297e;
    local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (bVar1) {
      this_00 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
      DangerRoomManager::ShowMainDialog(this_00);
      uVar2 = PVZ_T();
      *(undefined4 *)(this + 0x14) = uVar2;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

