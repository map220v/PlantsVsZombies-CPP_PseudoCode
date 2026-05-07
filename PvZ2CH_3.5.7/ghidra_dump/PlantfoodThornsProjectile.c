// Class: PlantfoodThornsProjectile


/* PlantfoodThornsProjectile::onUpdate(float) */

float PlantfoodThornsProjectile::onUpdate(float param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  float *pfVar1;
  float fVar2;
  
  fVar2 = *(float *)(in_x0 + 0x1f0);
  if (0.0 < fVar2) {
    pfVar1 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(in_x0);
    param_1 = *pfVar1;
    if (fVar2 < param_1) {
      param_1 = (float)(**(code **)(*(long *)in_x0 + 0x48))();
    }
  }
  return param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodThornsProjectile::StaticClassInit() */

void PlantfoodThornsProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantfoodThornsProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04e4faa8,0x200,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantfoodThornsProjectile::StaticGetClass() */

long * PlantfoodThornsProjectile::StaticGetClass(void)

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
  uVar2 = ThornsProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"PlantfoodThornsProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantfoodThornsProjectile::GetClass() const */

long * PlantfoodThornsProjectile::GetClass(void)

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
  uVar2 = ThornsProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"PlantfoodThornsProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantfoodThornsProjectile::PlantfoodThornsProjectile() */

void __thiscall
PlantfoodThornsProjectile::PlantfoodThornsProjectile(PlantfoodThornsProjectile *this)

{
  ThornsProjectile::ThornsProjectile((ThornsProjectile *)this);
  *(undefined ***)this = &PTR_GetClass_069e04e0;
  *(undefined ***)(this + 0x10) = &PTR__PlantfoodThornsProjectile_069e06d0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1d8));
  *(undefined4 *)(this + 0x1f8) = 0;
  *(undefined4 *)(this + 0x1f0) = 0xbf800000;
  return;
}


/* PlantfoodThornsProjectile::StaticNew() */

PlantfoodThornsProjectile * PlantfoodThornsProjectile::StaticNew(void)

{
  PlantfoodThornsProjectile *this;
  
  this = ::operator_new(0x200);
  PlantfoodThornsProjectile(this);
  return this;
}


/* PlantfoodThornsProjectile::handleImpact(BoardEntity*) */

undefined8 __thiscall
PlantfoodThornsProjectile::handleImpact(PlantfoodThornsProjectile *this,BoardEntity *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x1f8);
  *(int *)(this + 0x1f8) = iVar1 + 1;
  if (iVar1 < *(int *)(this + 500)) {
    ThornsProjectile::handleImpact((ThornsProjectile *)this,param_1);
  }
  return 0;
}


/* PlantfoodThornsProjectile::onProjectileInitialized() */

void __thiscall PlantfoodThornsProjectile::onProjectileInitialized(PlantfoodThornsProjectile *this)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar3 = *pfVar2;
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  this[0x1c0] = (PlantfoodThornsProjectile)0x1;
  *(float *)(this + 0x1f0) = (float)(iVar1 * 3) + fVar3;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1d8));
  return;
}


/* PlantfoodThornsProjectile::~PlantfoodThornsProjectile() */

void __thiscall
PlantfoodThornsProjectile::~PlantfoodThornsProjectile(PlantfoodThornsProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069e04e0;
  *(undefined ***)(this + 0x10) = &PTR__PlantfoodThornsProjectile_069e06d0;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1d8));
  ThornsProjectile::~ThornsProjectile((ThornsProjectile *)this);
  return;
}


/* non-virtual thunk to PlantfoodThornsProjectile::~PlantfoodThornsProjectile() */

void __thiscall
PlantfoodThornsProjectile::~PlantfoodThornsProjectile(PlantfoodThornsProjectile *this)

{
  ~PlantfoodThornsProjectile(this + -0x10);
  return;
}


/* PlantfoodThornsProjectile::~PlantfoodThornsProjectile() */

void __thiscall
PlantfoodThornsProjectile::~PlantfoodThornsProjectile(PlantfoodThornsProjectile *this)

{
  ~PlantfoodThornsProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantfoodThornsProjectile::~PlantfoodThornsProjectile() */

void __thiscall
PlantfoodThornsProjectile::~PlantfoodThornsProjectile(PlantfoodThornsProjectile *this)

{
  ~PlantfoodThornsProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodThornsProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
PlantfoodThornsProjectile::OnCollideEntity(PlantfoodThornsProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  Zombie *this_01;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
  if ((this_01 == (Zombie *)0x0) || (cVar1 = Zombie::IsFlying(this_01), cVar1 == '\0')) {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x1d8);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<BoardEntity>>
                         (uVar5,uVar6,aRStack_20);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if ((bVar2) && (bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_20), bVar2))
    {
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )this_00,(RtWeakPtr *)aRStack_20);
      (**(code **)(*(long *)this + 0x1b0))(this,param_1);
      if (this_01 != (Zombie *)0x0) {
        fVar7 = (float)FUN_04e4e8c0(*(undefined4 *)(this_01 + 0x18),*(undefined4 *)(this_01 + 0x1c),
                                    *(undefined4 *)(this_01 + 0x20));
        iVar3 = BoardTransforms::BoardSpaceToGridX(fVar7);
        if (-1 < iVar3) {
          fVar7 = (float)FUN_04e4e8c0(*(undefined4 *)(this_01 + 0x18),
                                      *(undefined4 *)(this_01 + 0x1c),
                                      *(undefined4 *)(this_01 + 0x20));
          iVar3 = BoardTransforms::BoardSpaceToGridX(fVar7);
          iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
          if ((((iVar3 <= iVar4) && (cVar1 = Zombie::IsFlying(this_01), cVar1 == '\0')) &&
              (cVar1 = Zombie::IsBoss(this_01), cVar1 == '\0')) &&
             (((cVar1 = Zombie::HasCondition(this_01,0x8c), cVar1 == '\0' &&
               (cVar1 = (**(code **)(*(long *)this_01 + 0x330))(this_01), cVar1 == '\0')) &&
              (cVar1 = (**(code **)(*(long *)this_01 + 0x328))(this_01), cVar1 == '\0')))) {
            (**(code **)(*(long *)this + 0x168))(this,param_1);
          }
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}

