// Class: ImpatiensProjectile_5


/* ImpatiensProjectile_5::~ImpatiensProjectile_5() */

void __thiscall ImpatiensProjectile_5::~ImpatiensProjectile_5(ImpatiensProjectile_5 *this)

{
  *(undefined ***)this = &PTR_GetClass_067c0b70;
  *(undefined ***)(this + 0x10) = &PTR__ImpatiensProjectile_5_067c0d68;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ImpatiensProjectile_5::~ImpatiensProjectile_5() */

void __thiscall ImpatiensProjectile_5::~ImpatiensProjectile_5(ImpatiensProjectile_5 *this)

{
  ~ImpatiensProjectile_5(this + -0x10);
  return;
}


/* ImpatiensProjectile_5::~ImpatiensProjectile_5() */

void __thiscall ImpatiensProjectile_5::~ImpatiensProjectile_5(ImpatiensProjectile_5 *this)

{
  ~ImpatiensProjectile_5(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ImpatiensProjectile_5::~ImpatiensProjectile_5() */

void __thiscall ImpatiensProjectile_5::~ImpatiensProjectile_5(ImpatiensProjectile_5 *this)

{
  ~ImpatiensProjectile_5(this + -0x10);
  return;
}


/* ImpatiensProjectile_5::ImpatiensProjectile_5() */

void __thiscall ImpatiensProjectile_5::ImpatiensProjectile_5(ImpatiensProjectile_5 *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067c0b70;
  *(undefined ***)(this + 0x10) = &PTR__ImpatiensProjectile_5_067c0d68;
  return;
}


/* ImpatiensProjectile_5::StaticNew() */

ImpatiensProjectile_5 * ImpatiensProjectile_5::StaticNew(void)

{
  ImpatiensProjectile_5 *this;
  
  this = ::operator_new(0x1a8);
  ImpatiensProjectile_5(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ImpatiensProjectile_5::StaticClassInit() */

void ImpatiensProjectile_5::StaticClassInit(void)

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
    std::string::string(asStack_10,"ImpatiensProjectile_5");
    (*pcVar2)(plVar1,asStack_10,FUN_04051f20,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ImpatiensProjectile_5::StaticGetClass() */

long * ImpatiensProjectile_5::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ImpatiensProjectile_5",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ImpatiensProjectile_5::GetClass() const */

long * ImpatiensProjectile_5::GetClass(void)

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
  (*pcVar3)(plVar1,"ImpatiensProjectile_5",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ImpatiensProjectile_5::applyConditions(BoardEntity*) */

ImpatiensProjectile_5 * __thiscall
ImpatiensProjectile_5::applyConditions(ImpatiensProjectile_5 *this,BoardEntity *param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  Zombie *this_00;
  ImpatiensProjectile_5 *pIVar4;
  
  if (param_1 != (BoardEntity *)0x0) {
    bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
    this = (ImpatiensProjectile_5 *)(ulong)bVar1;
    if ((bVar1) &&
       (this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1),
       this = (ImpatiensProjectile_5 *)0x0, this_00 != (Zombie *)0x0)) {
      bVar2 = Zombie::IsBoss(this_00);
      this = (ImpatiensProjectile_5 *)(ulong)bVar2;
      if (bVar2 == 0) {
        cVar3 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00);
        if ((cVar3 == '\0') &&
           (cVar3 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar3 == '\0')) {
          Zombie::ApplyCondition((Zombie *)0x40000000,0,this_00,0x18,1);
          pIVar4 = (ImpatiensProjectile_5 *)
                   Zombie::ApplyCondition((Zombie *)0x40000000,0,this_00,0x22,1);
          return pIVar4;
        }
        this = (ImpatiensProjectile_5 *)(**(code **)(*(long *)this_00 + 0x4e8))(this_00);
        if ((int)this == 1) {
          Zombie::ApplyCondition((Zombie *)0x40000000,0,this_00,0x18,(ulong)this & 0xffffffff);
          pIVar4 = (ImpatiensProjectile_5 *)
                   Zombie::ApplyCondition
                             ((Zombie *)0x40000000,0,this_00,0x22,(ulong)this & 0xffffffff);
          return pIVar4;
        }
      }
    }
  }
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ImpatiensProjectile_5::OnCollideEntity(BoardEntity*) */

void __thiscall
ImpatiensProjectile_5::OnCollideEntity(ImpatiensProjectile_5 *this,BoardEntity *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  BoardTransforms *this_00;
  long lVar3;
  long *extraout_x0;
  code *pcVar4;
  DamageInfo *pDVar5;
  int local_f8;
  int local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  Point aPStack_e0 [8];
  Insets aIStack_d8 [16];
  undefined8 local_c8;
  undefined8 local_c0;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_b0 [24];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_98 [24];
  undefined4 local_80;
  undefined4 local_7c;
  vector<BoardEntity*,std::allocator<BoardEntity*>> avStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x1e0))();
  this_00 = (BoardTransforms *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_1);
  BoardTransforms::BoardSpaceToGrid(this_00,*(float *)this_00,*(float *)(this_00 + 4));
  Sexy::Insets::Insets(aIStack_d8,local_f8 + -1,local_f4 + -1,3,3);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_c8);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_c8,2,aIStack_d8
            );
  lVar3 = FUN_04050da4(local_c8,local_c0);
  if (lVar3 != 0) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_b0);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80,(vector *)&local_c8);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector(avStack_68,(vector *)avStack_b0);
    ContainerUtil::SubtractContainer<BoardEntity*>
              ((ContainerUtil *)avStack_98,
               (vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80,avStack_68);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_68);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
    local_f0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(avStack_98);
    local_e8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(avStack_98);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_f0,(__normal_iterator *)&local_e8), bVar1)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_f0);
      nop();
      if (extraout_x0 != (long *)0x0) {
        (**(code **)(*(long *)this + 0x1e0))(this,extraout_x0);
        pcVar4 = *(code **)(*extraout_x0 + 0x110);
        pDVar5._0_4_ = (DamageInfo *)FUN_04050d8c(*(undefined4 *)(this + 0xd8));
        Sexy::Point::Point(aPStack_e0,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_80,1.0,0.0);
        DamageInfo::DamageInfo(pDVar5._0_4_,local_80,local_7c,avStack_68,aPStack_e0,0);
        (*pcVar4)(extraout_x0,avStack_68);
        DamageInfo::~DamageInfo((DamageInfo *)avStack_68);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_f0);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_98);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_b0);
  }
  uVar2 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

