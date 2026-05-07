// Class: PomegranateJewelerTwoProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PomegranateJewelerTwoProjectile::StaticClassInit() */

void PomegranateJewelerTwoProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"PomegranateJewelerTwoProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04cd0460,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PomegranateJewelerTwoProjectile::StaticGetClass() */

long * PomegranateJewelerTwoProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PomegranateJewelerTwoProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PomegranateJewelerTwoProjectile::GetClass() const */

long * PomegranateJewelerTwoProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"PomegranateJewelerTwoProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PomegranateJewelerTwoProjectile::PomegranateJewelerTwoProjectile() */

void __thiscall
PomegranateJewelerTwoProjectile::PomegranateJewelerTwoProjectile
          (PomegranateJewelerTwoProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined4 *)(this + 0x1a8) = 1;
  *(undefined ***)this = &PTR_GetClass_0699d2a0;
  *(undefined ***)(this + 0x10) = &PTR__PomegranateJewelerTwoProjectile_0699d490;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1b0));
  return;
}


/* PomegranateJewelerTwoProjectile::StaticNew() */

PomegranateJewelerTwoProjectile * PomegranateJewelerTwoProjectile::StaticNew(void)

{
  PomegranateJewelerTwoProjectile *this;
  
  this = ::operator_new(0x1b8);
  PomegranateJewelerTwoProjectile(this);
  return this;
}


/* PomegranateJewelerTwoProjectile::~PomegranateJewelerTwoProjectile() */

void __thiscall
PomegranateJewelerTwoProjectile::~PomegranateJewelerTwoProjectile
          (PomegranateJewelerTwoProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0699d2a0;
  *(undefined ***)(this + 0x10) = &PTR__PomegranateJewelerTwoProjectile_0699d490;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to PomegranateJewelerTwoProjectile::~PomegranateJewelerTwoProjectile() */

void __thiscall
PomegranateJewelerTwoProjectile::~PomegranateJewelerTwoProjectile
          (PomegranateJewelerTwoProjectile *this)

{
  ~PomegranateJewelerTwoProjectile(this + -0x10);
  return;
}


/* PomegranateJewelerTwoProjectile::~PomegranateJewelerTwoProjectile() */

void __thiscall
PomegranateJewelerTwoProjectile::~PomegranateJewelerTwoProjectile
          (PomegranateJewelerTwoProjectile *this)

{
  ~PomegranateJewelerTwoProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PomegranateJewelerTwoProjectile::~PomegranateJewelerTwoProjectile() */

void __thiscall
PomegranateJewelerTwoProjectile::~PomegranateJewelerTwoProjectile
          (PomegranateJewelerTwoProjectile *this)

{
  ~PomegranateJewelerTwoProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PomegranateJewelerTwoProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
PomegranateJewelerTwoProjectile::OnCollideEntity
          (PomegranateJewelerTwoProjectile *this,BoardEntity *param_1)

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
    LaunchSecondaryProjectile((undefined4)local_18,local_18._4_4_,local_10,2,aRStack_20,uVar3,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    uVar1 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

