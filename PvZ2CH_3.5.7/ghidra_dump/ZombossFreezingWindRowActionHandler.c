// Class: ZombossFreezingWindRowActionHandler


/* ZombossFreezingWindRowActionHandler::onFreezeAnimationEnd(std::string const&) */

void ZombossFreezingWindRowActionHandler::onFreezeAnimationEnd(string *param_1)

{
  param_1[0x20] = (string)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossFreezingWindRowActionHandler::StaticClassInit() */

void ZombossFreezingWindRowActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossFreezingWindRowActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_0476db38,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossFreezingWindRowActionHandler::StaticGetClass() */

long * ZombossFreezingWindRowActionHandler::StaticGetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossFreezingWindRowActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossFreezingWindRowActionHandler::GetClass() const */

long * ZombossFreezingWindRowActionHandler::GetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossFreezingWindRowActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossFreezingWindRowActionHandler::spawnFreezingWind(int) const */

void __thiscall
ZombossFreezingWindRowActionHandler::spawnFreezingWind
          (ZombossFreezingWindRowActionHandler *this,int param_1)

{
  undefined4 uVar1;
  StandaloneEffect *this_00;
  Board *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"effectobject_frostwind_zomboss");
  this_00 = (StandaloneEffect *)Board::AddEffectObject(this_01,asStack_10,0,param_1);
  std::string::~string(asStack_10);
  nop();
  StandaloneEffect::SetKeepAlive(this_00,false);
  uVar1 = Board::MakeRenderOrder(0x64960,param_1,0);
  FUN_0476a670(this_00 + 0x1c,uVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossFreezingWindRowActionHandler::ZombossFreezingWindRowActionHandler() */

void __thiscall
ZombossFreezingWindRowActionHandler::ZombossFreezingWindRowActionHandler
          (ZombossFreezingWindRowActionHandler *this)

{
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined4 *)(this + 0x24) = 1;
  *(undefined ***)this = &PTR_GetClass_068d4320;
  return;
}


/* ZombossFreezingWindRowActionHandler::StaticNew() */

ZombossFreezingWindRowActionHandler * ZombossFreezingWindRowActionHandler::StaticNew(void)

{
  ZombossFreezingWindRowActionHandler *this;
  
  this = ::operator_new(0x28);
  ZombossFreezingWindRowActionHandler(this);
  return this;
}


/* ZombossFreezingWindRowActionHandler::~ZombossFreezingWindRowActionHandler() */

void __thiscall
ZombossFreezingWindRowActionHandler::~ZombossFreezingWindRowActionHandler
          (ZombossFreezingWindRowActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_068d4320;
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombossFreezingWindRowActionHandler::~ZombossFreezingWindRowActionHandler() */

void __thiscall
ZombossFreezingWindRowActionHandler::~ZombossFreezingWindRowActionHandler
          (ZombossFreezingWindRowActionHandler *this)

{
  ~ZombossFreezingWindRowActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossFreezingWindRowActionHandler::OnPopAnimCommand(std::string const&, float, std::string
   const&, std::string const&) */

void ZombossFreezingWindRowActionHandler::OnPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  char cVar2;
  RtObject *this;
  ZombieZombossMech *pZVar3;
  EliminateModule *this_00;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)param_1);
  pZVar3 = Sexy::RtObject::Cast<ZombieZombossMech>(this);
  bVar1 = std::operator==(param_4,"submerged");
  if (bVar1) {
    this_00 = (EliminateModule *)FUN_0476e034(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    if ((this_00 != (EliminateModule *)0x0) &&
       (cVar2 = EliminateModule::CanFreezingWind(this_00), cVar2 != '\0')) {
      MessageRouter::Post((_func_void *)gMessageRouter);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_10);
      ZombieZombossMech::setLastAction(pZVar3,a_Stack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    }
    spawnFreezingWind((ZombossFreezingWindRowActionHandler *)param_1,*(int *)(param_1 + 0x24));
    spawnFreezingWind((ZombossFreezingWindRowActionHandler *)param_1,*(int *)(param_1 + 0x24) + 1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossFreezingWindRowActionHandler::onStartAction() */

void __thiscall
ZombossFreezingWindRowActionHandler::onStartAction(ZombossFreezingWindRowActionHandler *this)

{
  undefined4 uVar1;
  int iVar2;
  RtObject *this_00;
  ZombieZombossMech *this_01;
  EliminateModule *this_02;
  ZombieHydraHeadAnimRig *pZVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  this_02 = (EliminateModule *)FUN_0476e034(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this_02 == (EliminateModule *)0x0) {
    iVar2 = BoardConstants::NUMBER_OF_ROWS();
    iVar2 = RandRangeInt(0,iVar2 + -2);
  }
  else {
    iVar2 = EliminateModule::GetFreezingWindRow(this_02);
    if (2 < iVar2) {
      *(undefined4 *)(this + 0x24) = 3;
      goto LAB_0476eb58;
    }
  }
  *(int *)(this + 0x24) = iVar2;
LAB_0476eb58:
  pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
  uVar1 = *(undefined4 *)(this + 0x24);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onFreezeAnimationEnd");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossMech_IceAge::PlayFreezeRow
            ((ZombieAnimRig_ZombossMech_IceAge *)pZVar3,uVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  ZombieZombossMech::ForceAnimRateModifierForActiveStage(this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

