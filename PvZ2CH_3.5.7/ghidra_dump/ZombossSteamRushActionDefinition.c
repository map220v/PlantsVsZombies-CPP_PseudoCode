// Class: ZombossSteamRushActionDefinition


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamRushActionDefinition::StaticClassInit() */

void ZombossSteamRushActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossSteamRushActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_03c49910,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSteamRushActionDefinition::StaticGetClass() */

long * ZombossSteamRushActionDefinition::StaticGetClass(void)

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
  uVar2 = ZombossRushActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSteamRushActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSteamRushActionDefinition::GetClass() const */

long * ZombossSteamRushActionDefinition::GetClass(void)

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
  uVar2 = ZombossRushActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSteamRushActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSteamRushActionDefinition::ZombossSteamRushActionDefinition() */

void __thiscall
ZombossSteamRushActionDefinition::ZombossSteamRushActionDefinition
          (ZombossSteamRushActionDefinition *this)

{
  ZombossRushActionDefinition::ZombossRushActionDefinition((ZombossRushActionDefinition *)this);
  *(undefined ***)this = &PTR_GetClass_06752340;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x68));
  *(undefined4 *)(this + 0x70) = 0;
  return;
}


/* ZombossSteamRushActionDefinition::StaticNew() */

ZombossSteamRushActionDefinition * ZombossSteamRushActionDefinition::StaticNew(void)

{
  ZombossSteamRushActionDefinition *this;
  
  this = ::operator_new(0x78);
  ZombossSteamRushActionDefinition(this);
  return this;
}


/* ZombossSteamRushActionDefinition::~ZombossSteamRushActionDefinition() */

void __thiscall
ZombossSteamRushActionDefinition::~ZombossSteamRushActionDefinition
          (ZombossSteamRushActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_06752340;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
  ZombossRushActionDefinition::~ZombossRushActionDefinition((ZombossRushActionDefinition *)this);
  return;
}


/* ZombossSteamRushActionDefinition::~ZombossSteamRushActionDefinition() */

void __thiscall
ZombossSteamRushActionDefinition::~ZombossSteamRushActionDefinition
          (ZombossSteamRushActionDefinition *this)

{
  ~ZombossSteamRushActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x03c4f344 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossSteamRushActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition const>,
   ZombieWithActions*) const */

void ZombossSteamRushActionDefinition::TryStartAction
               (ZombieWithActions *param_1,RtWeakPtrBase *param_2)

{
  ZombossSteamJumpActionHandler *this;
  ZombieWithActions *extraout_x0;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(param_1 + 0x68));
  this = ZombieWithActions::QueueAction<ZombossSteamJumpActionHandler>(param_1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  nop();
  ZombossJumpActionHandler::SetJumpTarget
            ((ZombossJumpActionHandler *)this,(Point *)(extraout_x0 + 0x44));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieWithActions::QueueAction<ZombossSteamRushActionHandler>(extraout_x0,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

