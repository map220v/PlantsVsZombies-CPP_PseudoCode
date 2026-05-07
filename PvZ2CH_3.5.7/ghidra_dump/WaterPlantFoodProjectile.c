// Class: WaterPlantFoodProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaterPlantFoodProjectile::StaticClassInit() */

void WaterPlantFoodProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"WaterPlantFoodProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_040a9508,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaterPlantFoodProjectile::StaticGetClass() */

long * WaterPlantFoodProjectile::StaticGetClass(void)

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
  uVar2 = WaterProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"WaterPlantFoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaterPlantFoodProjectile::GetClass() const */

long * WaterPlantFoodProjectile::GetClass(void)

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
  uVar2 = WaterProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"WaterPlantFoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaterPlantFoodProjectile::WaterPlantFoodProjectile() */

void __thiscall WaterPlantFoodProjectile::WaterPlantFoodProjectile(WaterPlantFoodProjectile *this)

{
  WaterProjectile::WaterProjectile((WaterProjectile *)this);
  this[0x1a6] = (WaterPlantFoodProjectile)0x0;
  *(undefined ***)this = &PTR_GetClass_067d2410;
  *(undefined ***)(this + 0x10) = &PTR__WaterPlantFoodProjectile_067d2600;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x1a8));
  return;
}


/* WaterPlantFoodProjectile::StaticNew() */

WaterPlantFoodProjectile * WaterPlantFoodProjectile::StaticNew(void)

{
  WaterPlantFoodProjectile *this;
  
  this = ::operator_new(0x1d8);
  WaterPlantFoodProjectile(this);
  return this;
}


/* WaterPlantFoodProjectile::~WaterPlantFoodProjectile() */

void __thiscall WaterPlantFoodProjectile::~WaterPlantFoodProjectile(WaterPlantFoodProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067d2410;
  *(undefined ***)(this + 0x10) = &PTR__WaterPlantFoodProjectile_067d2600;
  std::
  set<Sexy::RtWeakPtr<BoardEntity>,std::less<Sexy::RtWeakPtr<BoardEntity>>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
  ::~set((set<Sexy::RtWeakPtr<BoardEntity>,std::less<Sexy::RtWeakPtr<BoardEntity>>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
          *)(this + 0x1a8));
  WaterProjectile::~WaterProjectile((WaterProjectile *)this);
  return;
}


/* non-virtual thunk to WaterPlantFoodProjectile::~WaterPlantFoodProjectile() */

void __thiscall WaterPlantFoodProjectile::~WaterPlantFoodProjectile(WaterPlantFoodProjectile *this)

{
  ~WaterPlantFoodProjectile(this + -0x10);
  return;
}


/* WaterPlantFoodProjectile::~WaterPlantFoodProjectile() */

void __thiscall WaterPlantFoodProjectile::~WaterPlantFoodProjectile(WaterPlantFoodProjectile *this)

{
  ~WaterPlantFoodProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WaterPlantFoodProjectile::~WaterPlantFoodProjectile() */

void __thiscall WaterPlantFoodProjectile::~WaterPlantFoodProjectile(WaterPlantFoodProjectile *this)

{
  ~WaterPlantFoodProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaterPlantFoodProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
WaterPlantFoodProjectile::OnCollideEntity(WaterPlantFoodProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  Zombie *this_00;
  undefined8 uVar5;
  RtObject *pRVar6;
  Plant *this_01;
  code *pcVar7;
  float fVar8;
  DamageInfo *pDVar9;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (BoardEntity *)0x0) goto LAB_040a9d20;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)&local_70);
  lVar4 = std::
          set<Sexy::RtWeakPtr<BoardEntity>,std::less<Sexy::RtWeakPtr<BoardEntity>>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
          ::count((set<Sexy::RtWeakPtr<BoardEntity>,std::less<Sexy::RtWeakPtr<BoardEntity>>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                   *)(this + 0x1a8),(RtWeakPtr *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
  if (lVar4 != 0) goto LAB_040a9d20;
  this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
  if (this_00 != (Zombie *)0x0) {
    uVar3 = FUN_040a706c(*(undefined4 *)(this + 0x24));
    cVar1 = RealObject::IsOnOpposingTeam(this_00,uVar3);
    if ((((cVar1 == '\0') ||
         (cVar1 = (**(code **)(*(long *)this_00 + 0xb8))(this_00,7), cVar1 == '\0')) ||
        (cVar1 = Zombie::IsInvisible(this_00), cVar1 != '\0')) ||
       ((cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 != '\0' ||
        (cVar1 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar1 != '\0'))))
    goto LAB_040a9d20;
  }
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)&local_70);
  std::
  set<Sexy::RtWeakPtr<BoardEntity>,std::less<Sexy::RtWeakPtr<BoardEntity>>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
  ::insert((set<Sexy::RtWeakPtr<BoardEntity>,std::less<Sexy::RtWeakPtr<BoardEntity>>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
            *)(this + 0x1a8),(RtWeakPtr *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
  lVar4 = Projectile::GetInstigator((Projectile *)this);
  if (lVar4 == 0) {
LAB_040a9e18:
    pDVar9._0_4_ = (DamageInfo *)0x44160000;
  }
  else {
    Projectile::GetInstigator((Projectile *)this);
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_68);
    if (cVar1 == '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      goto LAB_040a9e18;
    }
    pRVar6 = (RtObject *)Projectile::GetInstigator((Projectile *)this);
    bVar2 = Sexy::RtObject::IsA<Plant>(pRVar6);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    if (!bVar2) goto LAB_040a9e18;
    pRVar6 = (RtObject *)Projectile::GetInstigator((Projectile *)this);
    this_01 = Sexy::RtObject::Cast<Plant>(pRVar6);
    fVar8 = (float)Plant::GetExtraDPSmodifier(this_01);
    pDVar9._0_4_ = (DamageInfo *)(fVar8 * 600.0);
  }
  pcVar7 = *(code **)(*(long *)param_1 + 0x110);
  uVar5 = Projectile::GetInstigator((Projectile *)this);
  Sexy::Point::Point(aPStack_78,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
  DamageInfo::DamageInfo(pDVar9._0_4_,local_70,local_6c,aRStack_68,uVar5,aPStack_78,0);
  (*pcVar7)(param_1,aRStack_68);
  DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
LAB_040a9d20:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

