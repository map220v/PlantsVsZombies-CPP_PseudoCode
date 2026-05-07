// Class: CypripediumLv5


/* CypripediumLv5::~CypripediumLv5() */

void __thiscall CypripediumLv5::~CypripediumLv5(CypripediumLv5 *this)

{
  *(undefined ***)this = &PTR_GetClass_06820ef0;
  *(undefined ***)(this + 0x10) = &PTR__CypripediumLv5_068210e0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to CypripediumLv5::~CypripediumLv5() */

void __thiscall CypripediumLv5::~CypripediumLv5(CypripediumLv5 *this)

{
  ~CypripediumLv5(this + -0x10);
  return;
}


/* CypripediumLv5::~CypripediumLv5() */

void __thiscall CypripediumLv5::~CypripediumLv5(CypripediumLv5 *this)

{
  ~CypripediumLv5(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CypripediumLv5::~CypripediumLv5() */

void __thiscall CypripediumLv5::~CypripediumLv5(CypripediumLv5 *this)

{
  ~CypripediumLv5(this + -0x10);
  return;
}


/* CypripediumLv5::CypripediumLv5() */

void __thiscall CypripediumLv5::CypripediumLv5(CypripediumLv5 *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06820ef0;
  *(undefined ***)(this + 0x10) = &PTR__CypripediumLv5_068210e0;
  return;
}


/* CypripediumLv5::StaticNew() */

CypripediumLv5 * CypripediumLv5::StaticNew(void)

{
  CypripediumLv5 *this;
  
  this = ::operator_new(0x1a8);
  CypripediumLv5(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CypripediumLv5::StaticClassInit() */

void CypripediumLv5::StaticClassInit(void)

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
    std::string::string(asStack_10,"CypripediumLv5");
    (*pcVar2)(plVar1,asStack_10,FUN_04272d90,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CypripediumLv5::StaticGetClass() */

long * CypripediumLv5::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CypripediumLv5",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CypripediumLv5::GetClass() const */

long * CypripediumLv5::GetClass(void)

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
  (*pcVar3)(plVar1,"CypripediumLv5",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CypripediumLv5::OnCollideEntity(BoardEntity*) */

void __thiscall CypripediumLv5::OnCollideEntity(CypripediumLv5 *this,BoardEntity *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  Zombie *pZVar6;
  RtObject *this_00;
  CypripediumProjectileProps *pCVar7;
  RtObject *this_01;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    uVar2 = operator|(2,4);
    uVar3 = BoardEntity::CalcColumnPosition(param_1);
    uVar4 = SharkMinion::getRow((SharkMinion *)param_1);
    EntityFinder::GetEntitiesAtGridSquare(avStack_20,uVar2,uVar3,uVar4);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30)
      ;
      this_01 = (RtObject *)*puVar5;
      pZVar6 = Sexy::RtObject::Cast<Zombie>(this_01);
      if (pZVar6 != (Zombie *)0x0) {
        Zombie::ApplyCondition((Zombie *)0x40400000,0,pZVar6,0x54,1);
        this_00 = (RtObject *)Projectile::getProps((Projectile *)this);
        pCVar7 = Sexy::RtObject::Cast<CypripediumProjectileProps>(this_00);
        Zombie::SetConditionTracker(*(undefined4 *)(pCVar7 + 0x1e0),pZVar6,0x54);
      }
      if (this_01 != (RtObject *)param_1) {
        (**(code **)(*(long *)this + 0x1b0))(this,this_01);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  Projectile::OnCollideEntity((Projectile *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

