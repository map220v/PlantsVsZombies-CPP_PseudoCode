// Class: ZombieProjectileLaunchActionHandler


/* ZombieProjectileLaunchActionHandler::SetTarget(Sexy::RtWeakPtr<BoardEntity>, Sexy::SexyVector3)
    */

void ZombieProjectileLaunchActionHandler::SetTarget
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
               RtWeakPtr *param_5)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = param_1;
  local_c = param_2;
  local_8 = param_3;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(param_4 + 0x30),param_5);
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_4 + 0x24),(SexyVector3 *)&local_10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieProjectileLaunchActionHandler::StaticClassInit() */

void ZombieProjectileLaunchActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieProjectileLaunchActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_0462f470,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieProjectileLaunchActionHandler::StaticGetClass() */

long * ZombieProjectileLaunchActionHandler::StaticGetClass(void)

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
  uVar2 = ZombieProjectileActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieProjectileLaunchActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieProjectileLaunchActionHandler::GetClass() const */

long * ZombieProjectileLaunchActionHandler::GetClass(void)

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
  uVar2 = ZombieProjectileActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieProjectileLaunchActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieProjectileLaunchActionHandler::ZombieProjectileLaunchActionHandler() */

void __thiscall
ZombieProjectileLaunchActionHandler::ZombieProjectileLaunchActionHandler
          (ZombieProjectileLaunchActionHandler *this)

{
  ZombieProjectileActionHandler::ZombieProjectileActionHandler
            ((ZombieProjectileActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_0687eff0;
  DVec3::DVec3((DVec3 *)(this + 0x24));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  return;
}


/* ZombieProjectileLaunchActionHandler::StaticNew() */

ZombieProjectileLaunchActionHandler * ZombieProjectileLaunchActionHandler::StaticNew(void)

{
  ZombieProjectileLaunchActionHandler *this;
  
  this = ::operator_new(0x38);
  ZombieProjectileLaunchActionHandler(this);
  return this;
}


/* ZombieProjectileLaunchActionHandler::~ZombieProjectileLaunchActionHandler() */

void __thiscall
ZombieProjectileLaunchActionHandler::~ZombieProjectileLaunchActionHandler
          (ZombieProjectileLaunchActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_0687eff0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  ZombieProjectileActionHandler::~ZombieProjectileActionHandler
            ((ZombieProjectileActionHandler *)this);
  return;
}


/* ZombieProjectileLaunchActionHandler::~ZombieProjectileLaunchActionHandler() */

void __thiscall
ZombieProjectileLaunchActionHandler::~ZombieProjectileLaunchActionHandler
          (ZombieProjectileLaunchActionHandler *this)

{
  ~ZombieProjectileLaunchActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieProjectileLaunchActionHandler::launchProjectile(Sexy::SexyVector3, Sexy::SexyVector3,
   Sexy::RtWeakPtr<ProjectilePropertySheet>, float, float) */

void ZombieProjectileLaunchActionHandler::launchProjectile
               (Board *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,float param_7,float param_8,
               ZombieActionHandler *param_9,RtWeakPtrBase *param_10)

{
  undefined8 uVar1;
  Projectile *this;
  undefined8 uVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = *(undefined8 *)(gLawnApp + 0x9f0);
  local_20 = SUB84(param_1,0);
  local_1c = (undefined4)param_2;
  local_18 = (undefined4)param_3;
  local_30 = param_4;
  local_2c = param_5;
  local_28 = param_6;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_10);
  uVar1 = ZombieActionHandler::getZombie(param_9);
  this = (Projectile *)Board::AddProjectile(param_1,param_2,param_3,uVar2,aRStack_10,uVar1,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Projectile::LaunchAt(this,(SexyVector3 *)&local_30,param_7,param_8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieProjectileLaunchActionHandler::fireProjectile() */

void __thiscall
ZombieProjectileLaunchActionHandler::fireProjectile(ZombieProjectileLaunchActionHandler *this)

{
  ZombossHydraSprayActionDefinition *pZVar1;
  Zombie *pZVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0xb0))();
  pZVar1 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  if (pZVar1[0x82] != (ZombossHydraSprayActionDefinition)0x0) {
    pZVar2 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x30));
    Zombie::AddToTargetHistory(pZVar2,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieProjectileLaunchActionHandler::launchProjectile() */

void ZombieProjectileLaunchActionHandler::launchProjectile(void)

{
  ZombieActionHandler *in_x0;
  Zombie *this;
  ZombossHydraSprayActionDefinition *pZVar1;
  CreatureConditionTracker *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  SexyVector3 *this_02;
  undefined4 *puVar2;
  code *pcVar3;
  float fVar4;
  undefined4 in_s1;
  undefined4 in_s2;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  undefined4 local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (Zombie *)ZombieActionHandler::getZombie(in_x0);
  pZVar1 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  this_00 = (CreatureConditionTracker *)Zombie::GetConditionTracker(this);
  fVar4 = (float)CreatureConditionTracker::GetDrawScale(this_00);
  pcVar3 = *(code **)(*(long *)this + 0x1f8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)(*pcVar3)(this,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)
                              &local_20);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             &local_20);
  if (this_01 !=
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       *)0x0) {
    this_02 = (SexyVector3 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this);
    local_30[0] = Sexy::SexyVector3::operator*((SexyVector3 *)(pZVar1 + 0x48),fVar4);
    local_20 = Sexy::SexyVector3::operator+(this_02,(SexyVector3 *)local_30);
    local_1c = in_s1;
    local_18 = in_s2;
    puVar2 = (undefined4 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_01);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)(pZVar1 + 0x38));
    launchProjectile(local_20,local_1c,local_18,*puVar2,puVar2[1],puVar2[2],
                     *(undefined4 *)(pZVar1 + 0x78),*(undefined4 *)(pZVar1 + 0x7c));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

