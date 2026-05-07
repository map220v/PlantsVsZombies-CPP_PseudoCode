// Class: Action_CardGameCardSelectCheck


/* Action_CardGameCardSelectCheck::~Action_CardGameCardSelectCheck() */

void __thiscall
Action_CardGameCardSelectCheck::~Action_CardGameCardSelectCheck
          (Action_CardGameCardSelectCheck *this)

{
  *(undefined ***)this = &PTR_GetClass_0685a140;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* Action_CardGameCardSelectCheck::~Action_CardGameCardSelectCheck() */

void __thiscall
Action_CardGameCardSelectCheck::~Action_CardGameCardSelectCheck
          (Action_CardGameCardSelectCheck *this)

{
  ~Action_CardGameCardSelectCheck(this);
  AK::FreeHook(this);
  return;
}


/* Action_CardGameCardSelectCheck::StaticGetClass() */

long * Action_CardGameCardSelectCheck::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Action_CardGameCardSelectCheck",uVar2,StaticNew);
  return sClass;
}


/* Action_CardGameCardSelectCheck::GetClass() const */

long * Action_CardGameCardSelectCheck::GetClass(void)

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
  (*pcVar3)(plVar1,"Action_CardGameCardSelectCheck",uVar2,StaticNew);
  return sClass;
}


/* Action_CardGameCardSelectCheck::Action_CardGameCardSelectCheck() */

void __thiscall
Action_CardGameCardSelectCheck::Action_CardGameCardSelectCheck(Action_CardGameCardSelectCheck *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_0685a140;
  return;
}


/* Action_CardGameCardSelectCheck::StaticNew() */

Action_CardGameCardSelectCheck * Action_CardGameCardSelectCheck::StaticNew(void)

{
  Action_CardGameCardSelectCheck *this;
  
  this = ::operator_new(0x18);
  Action_CardGameCardSelectCheck(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Action_CardGameCardSelectCheck::CreateIfNeed(bool&) */

void Action_CardGameCardSelectCheck::CreateIfNeed(bool *param_1)

{
  char cVar1;
  wchar16 *pwVar2;
  vector *pvVar3;
  LineBreakCategory *pLVar4;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  Action_CardGameCardSelectCheck *this;
  LineBreakCategory aLStack_28 [8];
  string asStack_20 [24];
  long local_8;
  
  pLVar4 = aLStack_28;
  local_8 = ___stack_chk_guard;
  pwVar2 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_20,"PopUpDisabled");
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar2,(wchar16 *)asStack_20,pLVar4,in_x3,in_x4);
  std::string::~string(asStack_20);
  nop();
  if ((cVar1 == '\0') && (*param_1 == false)) {
    cVar1 = LawnApp::IsNetworkModuleOK();
    if ((cVar1 != '\0') &&
       ((cVar1 = CardGameUtils::IsInCardGameWorldMap(), cVar1 != '\0' ||
        (cVar1 = CardGameUtils::IsInQueuedCardGameWorldMap(), cVar1 != '\0')))) {
      pvVar3 = (vector *)CardGameUtils::GetCardGameCheckedSelectInfos();
      this = (Action_CardGameCardSelectCheck *)0x0;
      std::vector<CardGameCardInfo,std::allocator<CardGameCardInfo>>::vector
                ((vector<CardGameCardInfo,std::allocator<CardGameCardInfo>> *)asStack_20,pvVar3);
      cVar1 = std::vector<CardGameCardInfo,std::allocator<CardGameCardInfo>>::empty
                        ((vector<CardGameCardInfo,std::allocator<CardGameCardInfo>> *)asStack_20);
      if (cVar1 == '\0') {
        this = ::operator_new(0x18);
        *(undefined8 *)this = 0;
        *(undefined4 *)(this + 0xc) = 0;
        this[8] = (Action_CardGameCardSelectCheck)0x0;
        this[9] = (Action_CardGameCardSelectCheck)0x0;
        this[10] = (Action_CardGameCardSelectCheck)0x0;
        *(undefined4 *)(this + 0x10) = 0;
        Action_CardGameCardSelectCheck(this);
      }
      std::vector<CardGameCardInfo,std::allocator<CardGameCardInfo>>::~vector
                ((vector<CardGameCardInfo,std::allocator<CardGameCardInfo>> *)asStack_20);
      goto LAB_0455cf44;
    }
  }
  this = (Action_CardGameCardSelectCheck *)0x0;
LAB_0455cf44:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Action_CardGameCardSelectCheck::Start() */

void __thiscall Action_CardGameCardSelectCheck::Start(Action_CardGameCardSelectCheck *this)

{
  char cVar1;
  vector *pvVar2;
  vector<CardGameCardInfo,std::allocator<CardGameCardInfo>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar2 = (vector *)CardGameUtils::GetCardGameCheckedSelectInfos();
  std::vector<CardGameCardInfo,std::allocator<CardGameCardInfo>>::vector(avStack_20,pvVar2);
  cVar1 = std::vector<CardGameCardInfo,std::allocator<CardGameCardInfo>>::empty(avStack_20);
  if (cVar1 == '\0') {
    CardSelect::create((vector *)avStack_20);
  }
  (**(code **)(*(long *)this + 0x58))(this);
  std::vector<CardGameCardInfo,std::allocator<CardGameCardInfo>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

