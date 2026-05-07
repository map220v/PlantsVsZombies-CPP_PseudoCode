// Class: ZombieProjectileEliteActionHandler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieProjectileEliteActionHandler::StaticClassInit() */

void ZombieProjectileEliteActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieProjectileEliteActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_0462de84,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieProjectileEliteActionHandler::StaticGetClass() */

long * ZombieProjectileEliteActionHandler::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieProjectileEliteActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieProjectileEliteActionHandler::GetClass() const */

long * ZombieProjectileEliteActionHandler::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieProjectileEliteActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieProjectileEliteActionHandler::ZombieProjectileEliteActionHandler() */

void __thiscall
ZombieProjectileEliteActionHandler::ZombieProjectileEliteActionHandler
          (ZombieProjectileEliteActionHandler *this)

{
  ZombieProjectileActionHandler::ZombieProjectileActionHandler
            ((ZombieProjectileActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_0687ee90;
  return;
}


/* ZombieProjectileEliteActionHandler::StaticNew() */

ZombieProjectileEliteActionHandler * ZombieProjectileEliteActionHandler::StaticNew(void)

{
  ZombieProjectileEliteActionHandler *this;
  
  this = ::operator_new(0x28);
  ZombieProjectileEliteActionHandler(this);
  return this;
}


/* ZombieProjectileEliteActionHandler::~ZombieProjectileEliteActionHandler() */

void __thiscall
ZombieProjectileEliteActionHandler::~ZombieProjectileEliteActionHandler
          (ZombieProjectileEliteActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_0687ee90;
  ZombieProjectileActionHandler::~ZombieProjectileActionHandler
            ((ZombieProjectileActionHandler *)this);
  return;
}


/* ZombieProjectileEliteActionHandler::~ZombieProjectileEliteActionHandler() */

void __thiscall
ZombieProjectileEliteActionHandler::~ZombieProjectileEliteActionHandler
          (ZombieProjectileEliteActionHandler *this)

{
  ~ZombieProjectileEliteActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieProjectileEliteActionHandler::fireProjectile() */

void ZombieProjectileEliteActionHandler::fireProjectile(void)

{
  bool bVar1;
  ZombieActionHandler *in_x0;
  Zombie *this;
  ZombossHydraSprayActionDefinition *pZVar2;
  CreatureConditionTracker *this_00;
  SexyVector3 *pSVar3;
  Projectile *this_01;
  ZombieIceAgeHunterElite *pZVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var5;
  undefined8 uVar6;
  float fVar7;
  Board *pBVar8;
  undefined8 in_d1;
  undefined8 in_d2;
  RtWeakPtr aRStack_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (Zombie *)ZombieActionHandler::getZombie(in_x0);
  pZVar2 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  this_00 = (CreatureConditionTracker *)Zombie::GetConditionTracker(this);
  fVar7 = (float)CreatureConditionTracker::GetDrawScale(this_00);
  pSVar3 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_18 = Sexy::SexyVector3::operator*((SexyVector3 *)(pZVar2 + 0x48),fVar7);
  local_14 = (undefined4)in_d1;
  local_10 = (undefined4)in_d2;
  pBVar8 = (Board *)Sexy::SexyVector3::operator+(pSVar3,(SexyVector3 *)&local_18);
  local_28 = SUB84(pBVar8,0);
  local_24 = (undefined4)in_d1;
  local_20 = (undefined4)in_d2;
  uVar6 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)(pZVar2 + 0x38));
  this_01 = (Projectile *)
            Board::AddProjectile
                      (pBVar8,in_d1,in_d2,uVar6,(RtWeakPtr<Sexy::SoundResource> *)&local_18,this,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  SharkMinion::getRow((SharkMinion *)this);
  pZVar4 = Sexy::RtObject::Cast<ZombieIceAgeHunterElite>((RtObject *)this);
  ZombieIceAgeHunterElite::FindNearestTargetInRange((int)pZVar4);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_30);
  if (bVar1) {
    p_Var5 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    pSVar3 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(p_Var5);
    Projectile::LaunchAt(this_01,pSVar3,0.0,0.5);
  }
  pZVar4 = Sexy::RtObject::Cast<ZombieIceAgeHunterElite>((RtObject *)this);
  ZombieIceAgeHunterElite::FindNearestTargetInRange((int)pZVar4);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)aRStack_30,(RtWeakPtr *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_30);
  if (bVar1) {
    p_Var5 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    pSVar3 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(p_Var5);
    Projectile::LaunchAt(this_01,pSVar3,0.0,0.5);
  }
  pZVar4 = Sexy::RtObject::Cast<ZombieIceAgeHunterElite>((RtObject *)this);
  ZombieIceAgeHunterElite::FindNearestTargetInRange((int)pZVar4);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)aRStack_30,(RtWeakPtr *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_30);
  if (bVar1) {
    p_Var5 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    pSVar3 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(p_Var5);
    Projectile::LaunchAt(this_01,pSVar3,0.0,0.5);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

