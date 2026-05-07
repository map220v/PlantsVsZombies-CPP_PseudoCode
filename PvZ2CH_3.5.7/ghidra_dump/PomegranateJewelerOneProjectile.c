// Class: PomegranateJewelerOneProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PomegranateJewelerOneProjectile::StaticClassInit() */

void PomegranateJewelerOneProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"PomegranateJewelerOneProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04cd02fc,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PomegranateJewelerOneProjectile::StaticGetClass() */

long * PomegranateJewelerOneProjectile::StaticGetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"PomegranateJewelerOneProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PomegranateJewelerOneProjectile::GetClass() const */

long * PomegranateJewelerOneProjectile::GetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"PomegranateJewelerOneProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PomegranateJewelerOneProjectile::PomegranateJewelerOneProjectile() */

void __thiscall
PomegranateJewelerOneProjectile::PomegranateJewelerOneProjectile
          (PomegranateJewelerOneProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined ***)this = &PTR_GetClass_0699d080;
  *(undefined ***)(this + 0x10) = &PTR__PomegranateJewelerOneProjectile_0699d270;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1b0));
  return;
}


/* PomegranateJewelerOneProjectile::StaticNew() */

PomegranateJewelerOneProjectile * PomegranateJewelerOneProjectile::StaticNew(void)

{
  PomegranateJewelerOneProjectile *this;
  
  this = ::operator_new(0x1b8);
  PomegranateJewelerOneProjectile(this);
  return this;
}


/* PomegranateJewelerOneProjectile::~PomegranateJewelerOneProjectile() */

void __thiscall
PomegranateJewelerOneProjectile::~PomegranateJewelerOneProjectile
          (PomegranateJewelerOneProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0699d080;
  *(undefined ***)(this + 0x10) = &PTR__PomegranateJewelerOneProjectile_0699d270;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to PomegranateJewelerOneProjectile::~PomegranateJewelerOneProjectile() */

void __thiscall
PomegranateJewelerOneProjectile::~PomegranateJewelerOneProjectile
          (PomegranateJewelerOneProjectile *this)

{
  ~PomegranateJewelerOneProjectile(this + -0x10);
  return;
}


/* PomegranateJewelerOneProjectile::~PomegranateJewelerOneProjectile() */

void __thiscall
PomegranateJewelerOneProjectile::~PomegranateJewelerOneProjectile
          (PomegranateJewelerOneProjectile *this)

{
  ~PomegranateJewelerOneProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PomegranateJewelerOneProjectile::~PomegranateJewelerOneProjectile() */

void __thiscall
PomegranateJewelerOneProjectile::~PomegranateJewelerOneProjectile
          (PomegranateJewelerOneProjectile *this)

{
  ~PomegranateJewelerOneProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PomegranateJewelerOneProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
PomegranateJewelerOneProjectile::OnCollideEntity
          (PomegranateJewelerOneProjectile *this,BoardEntity *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (BoardEntity *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar2 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_1);
    local_18 = *puVar2;
    local_10 = *(undefined4 *)(puVar2 + 1);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)(this + 0x1b0));
    uVar3 = Projectile::GetInstigator((Projectile *)this);
    LaunchSecondaryProjectile((undefined4)local_18,local_18._4_4_,local_10,1,aRStack_20,uVar3,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    uVar1 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

