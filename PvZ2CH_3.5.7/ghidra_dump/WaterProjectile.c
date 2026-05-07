// Class: WaterProjectile


/* WaterProjectile::~WaterProjectile() */

void __thiscall WaterProjectile::~WaterProjectile(WaterProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067d21f0;
  *(undefined ***)(this + 0x10) = &PTR__WaterProjectile_067d23e0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to WaterProjectile::~WaterProjectile() */

void __thiscall WaterProjectile::~WaterProjectile(WaterProjectile *this)

{
  ~WaterProjectile(this + -0x10);
  return;
}


/* WaterProjectile::~WaterProjectile() */

void __thiscall WaterProjectile::~WaterProjectile(WaterProjectile *this)

{
  ~WaterProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WaterProjectile::~WaterProjectile() */

void __thiscall WaterProjectile::~WaterProjectile(WaterProjectile *this)

{
  ~WaterProjectile(this + -0x10);
  return;
}


/* WaterProjectile::WaterProjectile() */

void __thiscall WaterProjectile::WaterProjectile(WaterProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  this[0x1a5] = (WaterProjectile)0x0;
  *(undefined ***)this = &PTR_GetClass_067d21f0;
  *(undefined ***)(this + 0x10) = &PTR__WaterProjectile_067d23e0;
  return;
}


/* WaterProjectile::StaticNew() */

WaterProjectile * WaterProjectile::StaticNew(void)

{
  WaterProjectile *this;
  
  this = ::operator_new(0x1a8);
  WaterProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaterProjectile::StaticClassInit() */

void WaterProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"WaterProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_040a7c80,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaterProjectile::StaticGetClass() */

long * WaterProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WaterProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaterProjectile::GetClass() const */

long * WaterProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"WaterProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaterProjectile::IsOverColumn() */

bool __thiscall WaterProjectile::IsOverColumn(WaterProjectile *this)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar3 = *pfVar2;
  iVar1 = BoardTransforms::GridToBoardSpaceXUnbounded
                    (*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) + -2);
  return (float)(iVar1 + 0x14) <= fVar3;
}


/* WaterProjectile::onUpdate(float) */

void WaterProjectile::onUpdate(float param_1)

{
  char cVar1;
  WaterProjectile *in_x0;
  
  cVar1 = IsOverColumn(in_x0);
  if (cVar1 == '\0') {
    return;
  }
  (**(code **)(*(long *)in_x0 + 0x168))();
  Projectile::SetPaused((Projectile *)in_x0,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaterProjectile::fillDamageInfo(DamageInfo&, BoardEntity*) */

void __thiscall
WaterProjectile::fillDamageInfo(WaterProjectile *this,DamageInfo *param_1,BoardEntity *param_2)

{
  char cVar1;
  bool bVar2;
  RtObject *this_00;
  float *pfVar3;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::fillDamageInfo((DamageInfo *)this,(BoardEntity *)param_1);
  if (param_2 != (BoardEntity *)0x0) {
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (cVar1 != '\0') {
      cVar1 = DamageInfo::ObtainZombieCondition(param_1,2);
      bVar2 = Sexy::RtObject::IsA<Zomboss>((RtObject *)param_2);
      if ((bVar2) || (bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)param_2), bVar2)) {
        if (cVar1 != '\0') {
          DamageInfo::RemoveZombieCondition(param_1,2);
        }
      }
      else if ((cVar1 != '\0') &&
              (((this[0x1a5] == (WaterProjectile)0x0 &&
                (this_00 = (RtObject *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0)),
                this_00 != (RtObject *)0x0)) &&
               (bVar2 = Sexy::RtObject::IsA<BeachStage>(this_00), bVar2)))) {
        Sexy::RtObject::Cast<BeachStage>(this_00);
        pfVar3 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this);
        BeachStage::AddVortex(*pfVar3 - 75.0,pfVar3[1] - 80.0,2.0);
        this[0x1a5] = (WaterProjectile)0x1;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

