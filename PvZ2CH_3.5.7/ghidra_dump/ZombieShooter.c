// Class: ZombieShooter


/* ZombieShooter::ZombieShooter() */

void __thiscall ZombieShooter::ZombieShooter(ZombieShooter *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_069009b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieShooter_069013d0;
  return;
}


/* ZombieShooter::~ZombieShooter() */

void __thiscall ZombieShooter::~ZombieShooter(ZombieShooter *this)

{
  *(undefined ***)this = &PTR_GetClass_069009b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieShooter_069013d0;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieShooter::~ZombieShooter() */

void __thiscall ZombieShooter::~ZombieShooter(ZombieShooter *this)

{
  ~ZombieShooter(this + -0x10);
  return;
}


/* ZombieShooter::~ZombieShooter() */

void __thiscall ZombieShooter::~ZombieShooter(ZombieShooter *this)

{
  ~ZombieShooter(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieShooter::~ZombieShooter() */

void __thiscall ZombieShooter::~ZombieShooter(ZombieShooter *this)

{
  ~ZombieShooter(this + -0x10);
  return;
}


/* ZombieShooter::StaticNew() */

ZombieShooter * ZombieShooter::StaticNew(void)

{
  ZombieShooter *this;
  
  this = ::operator_new(0x800);
  ZombieShooter(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieShooter::StaticClassInit() */

void ZombieShooter::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieShooter");
    (*pcVar2)(plVar1,asStack_10,FUN_0480e194,0x800,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieShooter::StaticGetClass() */

long * ZombieShooter::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieShooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieShooter::GetClass() const */

long * ZombieShooter::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieShooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieShooter::tryShoot() */

void ZombieShooter::tryShoot(void)

{
  int iVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  SexyVector3 *pSVar2;
  ZombieShooterProps *pZVar3;
  Projectile *this;
  undefined8 uVar4;
  float fVar5;
  Board *pBVar6;
  undefined4 local_28 [4];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar2 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(in_x0);
  pZVar3 = Zombie::GetProps<ZombieShooterProps>((Zombie *)in_x0);
  pBVar6 = (Board *)Sexy::SexyVector3::operator+(pSVar2,(SexyVector3 *)(pZVar3 + 0x210));
  uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
  pZVar3 = Zombie::GetProps<ZombieShooterProps>((Zombie *)in_x0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)(pZVar3 + 0x220));
  this = (Projectile *)Board::AddProjectile(pBVar6,uVar4,(RtWeakPtr<Sexy::SoundResource> *)local_18)
  ;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  if (this != (Projectile *)0x0) {
    pSVar2 = (SexyVector3 *)Projectile::GetVelocity(this);
    fVar5 = (float)Zombie::GetFacingMultiplier((Zombie *)in_x0);
    local_28[0] = Sexy::SexyVector3::operator*(pSVar2,fVar5);
    local_18[0] = Sexy::SexyVector3::operator*((SexyVector3 *)local_28,-1.0);
    Projectile::SetVelocity(this,(SexyVector3 *)local_18);
    iVar1 = Zombie::GetFacing((Zombie *)in_x0);
    FUN_0480dcb4(this + 0xd4,iVar1 == 0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieShooter::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieShooter::onPopAnimCommand(string *param_1,float param_2,string *param_3,string *param_4)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if (cVar1 == '\0') {
      Zombie::onPopAnimCommand(param_1,param_2,param_3,param_4);
      bVar2 = std::operator==(param_4,"use_action");
      if (bVar2) {
        (**(code **)(*(long *)param_1 + 0xa08))(param_1);
        return;
      }
    }
  }
  return;
}

