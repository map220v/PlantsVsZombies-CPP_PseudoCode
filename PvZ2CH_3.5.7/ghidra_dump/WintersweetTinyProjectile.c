// Class: WintersweetTinyProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WintersweetTinyProjectile::StaticClassInit() */

void WintersweetTinyProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"WintersweetTinyProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_040f2eec,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WintersweetTinyProjectile::StaticGetClass() */

long * WintersweetTinyProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WintersweetTinyProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WintersweetTinyProjectile::GetClass() const */

long * WintersweetTinyProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"WintersweetTinyProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WintersweetTinyProjectile::WintersweetTinyProjectile() */

void __thiscall
WintersweetTinyProjectile::WintersweetTinyProjectile(WintersweetTinyProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067e0bb0;
  *(undefined ***)(this + 0x10) = &PTR__WintersweetTinyProjectile_067e0da0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a8));
  return;
}


/* WintersweetTinyProjectile::StaticNew() */

WintersweetTinyProjectile * WintersweetTinyProjectile::StaticNew(void)

{
  WintersweetTinyProjectile *this;
  
  this = ::operator_new(0x1b0);
  WintersweetTinyProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WintersweetTinyProjectile::onProjectileInitialized() */

void __thiscall WintersweetTinyProjectile::onProjectileInitialized(WintersweetTinyProjectile *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1a8),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WintersweetTinyProjectile::~WintersweetTinyProjectile() */

void __thiscall
WintersweetTinyProjectile::~WintersweetTinyProjectile(WintersweetTinyProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067e0bb0;
  *(undefined ***)(this + 0x10) = &PTR__WintersweetTinyProjectile_067e0da0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to WintersweetTinyProjectile::~WintersweetTinyProjectile() */

void __thiscall
WintersweetTinyProjectile::~WintersweetTinyProjectile(WintersweetTinyProjectile *this)

{
  ~WintersweetTinyProjectile(this + -0x10);
  return;
}


/* WintersweetTinyProjectile::~WintersweetTinyProjectile() */

void __thiscall
WintersweetTinyProjectile::~WintersweetTinyProjectile(WintersweetTinyProjectile *this)

{
  ~WintersweetTinyProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WintersweetTinyProjectile::~WintersweetTinyProjectile() */

void __thiscall
WintersweetTinyProjectile::~WintersweetTinyProjectile(WintersweetTinyProjectile *this)

{
  ~WintersweetTinyProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WintersweetTinyProjectile::setLevelAttackAnimColor(std::string const&) */

void __thiscall
WintersweetTinyProjectile::setLevelAttackAnimColor(WintersweetTinyProjectile *this,string *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  string *psVar3;
  PopAnimRig *this_00;
  string asStack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  string asStack_30 [8];
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_0547429c(param_1);
  Sexy::StrFormat("petal_%s",asStack_48,uVar2);
  std::string::string(asStack_30,"petal_red");
  std::string::string(asStack_28,"petal_white");
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)&local_20,asStack_30,2,
             (__normal_iterator *)&local_38);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  nop();
  nop();
  local_40 = FUN_040f2bc0(local_20);
  local_38 = FUN_040f2c10(local_18);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    bVar1 = (bool)std::operator==(psVar3,asStack_48);
    this_00 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
    PopAnimRig::SetLayerVisibility(this_00,psVar3,bVar1);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_20);
  std::string::~string(asStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WintersweetTinyProjectile::OnCollideEntity(BoardEntity*) */

undefined8 __thiscall
WintersweetTinyProjectile::OnCollideEntity(WintersweetTinyProjectile *this,BoardEntity *param_1)

{
  BoardEntity *pBVar1;
  undefined8 uVar2;
  
  pBVar1 = (BoardEntity *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8))
  ;
  if (param_1 != pBVar1) {
    uVar2 = Projectile::OnCollideEntity((Projectile *)this,param_1);
    return uVar2;
  }
  return 0;
}

