// Class: ActionLimitedGacha


/* ActionLimitedGacha::~ActionLimitedGacha() */

void __thiscall ActionLimitedGacha::~ActionLimitedGacha(ActionLimitedGacha *this)

{
  *(undefined ***)this = &PTR_GetClass_06859040;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionLimitedGacha::~ActionLimitedGacha() */

void __thiscall ActionLimitedGacha::~ActionLimitedGacha(ActionLimitedGacha *this)

{
  ~ActionLimitedGacha(this);
  AK::FreeHook(this);
  return;
}


/* ActionLimitedGacha::Update() */

void __thiscall ActionLimitedGacha::Update(ActionLimitedGacha *this)

{
  char cVar1;
  
  cVar1 = UILimitedGacha::isActive();
  if (cVar1 == '\0') {
    this[9] = (ActionLimitedGacha)0x1;
  }
  return;
}


/* ActionLimitedGacha::StaticGetClass() */

long * ActionLimitedGacha::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionLimitedGacha",uVar2,StaticNew);
  return sClass;
}


/* ActionLimitedGacha::GetClass() const */

long * ActionLimitedGacha::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionLimitedGacha",uVar2,StaticNew);
  return sClass;
}


/* ActionLimitedGacha::ActionLimitedGacha() */

void __thiscall ActionLimitedGacha::ActionLimitedGacha(ActionLimitedGacha *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_06859040;
  return;
}


/* ActionLimitedGacha::StaticNew() */

ActionLimitedGacha * ActionLimitedGacha::StaticNew(void)

{
  ActionLimitedGacha *this;
  
  this = ::operator_new(0x18);
  ActionLimitedGacha(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionLimitedGacha::Start() */

void __thiscall ActionLimitedGacha::Start(ActionLimitedGacha *this)

{
  char cVar1;
  int iVar2;
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
      UILimitedGacha::createWithNetwork();
      goto LAB_0455f018;
    }
  }
  ActiveItem::~ActiveItem(aAStack_88);
  this[9] = (ActionLimitedGacha)0x1;
LAB_0455f018:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionLimitedGacha::CreateIfNeed(bool&) */

void ActionLimitedGacha::CreateIfNeed(bool *param_1)

{
  char cVar1;
  int iVar2;
  wchar16 *pwVar3;
  ProfileMgr *this;
  PlayerInfo *pPVar4;
  ActionLimitedGacha *this_00;
  LineBreakCategory *pLVar5;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_98 [8];
  string asStack_90 [8];
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  pLVar5 = aLStack_98;
  local_8 = ___stack_chk_guard;
  pwVar3 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_90,"PopUpDisabled");
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar3,(wchar16 *)asStack_90,pLVar5,in_x3,in_x4);
  std::string::~string(asStack_90);
  nop();
  if ((cVar1 == '\0') && (*param_1 == false)) {
    cVar1 = LawnApp::IsNetworkModuleOK();
    if (cVar1 != '\0') {
      iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar2);
      ActiveItem::~ActiveItem(aAStack_88);
      if (local_70 != '\0') {
        std::string::string(asStack_90,"egypt3");
        this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
        cVar1 = ProfileUtils::HasCompletedLevel(asStack_90,false,pPVar4);
        std::string::~string(asStack_90);
        nop();
        if ((cVar1 != '\0') && (cVar1 = RiftUtils::IsWorldMapButtonsEnabled(), cVar1 != '\0')) {
          this_00 = ::operator_new(0x18);
          *(undefined8 *)this_00 = 0;
          this_00[8] = (ActionLimitedGacha)0x0;
          this_00[9] = (ActionLimitedGacha)0x0;
          this_00[10] = (ActionLimitedGacha)0x0;
          *(undefined4 *)(this_00 + 0xc) = 0;
          *(undefined4 *)(this_00 + 0x10) = 0;
          ActionLimitedGacha(this_00);
          goto LAB_04560628;
        }
      }
    }
  }
  this_00 = (ActionLimitedGacha *)0x0;
LAB_04560628:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}

