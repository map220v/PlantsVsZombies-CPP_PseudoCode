// Class: ShadowVanillaShadowMistProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShadowVanillaShadowMistProjectile::StaticClassInit() */

void ShadowVanillaShadowMistProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ShadowVanillaShadowMistProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04ce4f9c,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ShadowVanillaShadowMistProjectile::StaticGetClass() */

long * ShadowVanillaShadowMistProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ShadowVanillaShadowMistProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ShadowVanillaShadowMistProjectile::GetClass() const */

long * ShadowVanillaShadowMistProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"ShadowVanillaShadowMistProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShadowVanillaShadowMistProjectile::onSetInstigator(BoardEntity*) */

void __thiscall
ShadowVanillaShadowMistProjectile::onSetInstigator
          (ShadowVanillaShadowMistProjectile *this,BoardEntity *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Plant *this_00;
  RtObject *this_01;
  PlantShadowVanillaProps *pPVar3;
  float fVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (BoardEntity *)0x0) &&
     (this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)param_1), this_00 != (Plant *)0x0)) {
    uVar2 = FUN_04cde2c4(*(undefined4 *)(this_00 + 0x50));
    *(undefined4 *)(this + 0x1a8) = uVar2;
    Plant::GetProps();
    this_01 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    pPVar3 = Sexy::RtObject::Cast<PlantShadowVanillaProps_const>(this_01);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (pPVar3 != (PlantShadowVanillaProps *)0x0) {
      fVar5 = *(float *)(pPVar3 + 0x2e4);
      *(undefined4 *)(this + 0x1ac) = *(undefined4 *)(pPVar3 + 0x2e0);
      fVar4 = (float)Plant::GetGeneSkillBoost(this_00);
      uVar2 = *(undefined4 *)(pPVar3 + 0x2e8);
      *(undefined4 *)(this + 0x1b8) = *(undefined4 *)(pPVar3 + 0x2ec);
      uVar1 = *(undefined4 *)(pPVar3 + 0x2f0);
      *(undefined4 *)(this + 0x1b4) = uVar2;
      *(undefined4 *)(this + 0x1bc) = uVar1;
      *(float *)(this + 0x1b0) = fVar4 * fVar5 + fVar5;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ShadowVanillaShadowMistProjectile::ShadowVanillaShadowMistProjectile() */

void __thiscall
ShadowVanillaShadowMistProjectile::ShadowVanillaShadowMistProjectile
          (ShadowVanillaShadowMistProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_069a1120;
  *(undefined ***)(this + 0x10) = &PTR__ShadowVanillaShadowMistProjectile_069a1310;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1c0));
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1b8) = 0;
  *(undefined4 *)(this + 0x1a8) = 1;
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x1b4) = 0;
  *(undefined4 *)(this + 0x1bc) = 0;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1c0));
  return;
}


/* ShadowVanillaShadowMistProjectile::StaticNew() */

ShadowVanillaShadowMistProjectile * ShadowVanillaShadowMistProjectile::StaticNew(void)

{
  ShadowVanillaShadowMistProjectile *this;
  
  this = ::operator_new(0x1d8);
  ShadowVanillaShadowMistProjectile(this);
  return this;
}


/* ShadowVanillaShadowMistProjectile::~ShadowVanillaShadowMistProjectile() */

void __thiscall
ShadowVanillaShadowMistProjectile::~ShadowVanillaShadowMistProjectile
          (ShadowVanillaShadowMistProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069a1120;
  *(undefined ***)(this + 0x10) = &PTR__ShadowVanillaShadowMistProjectile_069a1310;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1c0));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ShadowVanillaShadowMistProjectile::~ShadowVanillaShadowMistProjectile() */

void __thiscall
ShadowVanillaShadowMistProjectile::~ShadowVanillaShadowMistProjectile
          (ShadowVanillaShadowMistProjectile *this)

{
  ~ShadowVanillaShadowMistProjectile(this + -0x10);
  return;
}


/* ShadowVanillaShadowMistProjectile::~ShadowVanillaShadowMistProjectile() */

void __thiscall
ShadowVanillaShadowMistProjectile::~ShadowVanillaShadowMistProjectile
          (ShadowVanillaShadowMistProjectile *this)

{
  ~ShadowVanillaShadowMistProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ShadowVanillaShadowMistProjectile::~ShadowVanillaShadowMistProjectile() */

void __thiscall
ShadowVanillaShadowMistProjectile::~ShadowVanillaShadowMistProjectile
          (ShadowVanillaShadowMistProjectile *this)

{
  ~ShadowVanillaShadowMistProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShadowVanillaShadowMistProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
ShadowVanillaShadowMistProjectile::OnCollideEntity
          (ShadowVanillaShadowMistProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined1 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Zombie *pZVar6;
  long lVar7;
  RtObject *this_01;
  GridItemShadowVanillaHurricane *this_02;
  Board *this_03;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1c0);
  local_8 = ___stack_chk_guard;
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  ToolPacketData::GetProps();
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                       (uVar4,uVar5,aRStack_20);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  uVar2 = 0;
  if (!bVar1) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)&local_18);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              this_00,(RtWeakPtr *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    uVar2 = Projectile::OnCollideEntity((Projectile *)this,param_1);
    if ((param_1 != (BoardEntity *)0x0) &&
       (pZVar6 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), pZVar6 != (Zombie *)0x0)) {
      if ((*(int *)(this + 0x1a8) == 5) &&
         (cVar3 = Zombie::HasCondition(pZVar6,0x51), cVar3 != '\0')) {
        BoardEntity::CalcGridPosition();
        lVar7 = FUN_04ce307c(local_18 & 0xffffffff,local_18._4_4_);
        if (lVar7 == 0) {
          this_03 = *(Board **)(gLawnApp + 0x9f0);
          std::string::string((string *)&local_10,"shadowvanilla_hurricane");
          this_01 = (RtObject *)
                    Board::AddGridItem(this_03,(string *)&local_10,(int)local_18,local_18._4_4_,1);
          this_02 = Sexy::RtObject::Cast<GridItemShadowVanillaHurricane>(this_01);
          std::string::~string((string *)&local_10);
          nop();
          if (this_02 != (GridItemShadowVanillaHurricane *)0x0) {
            GridItemShadowVanillaHurricane::InitParams
                      (this_02,*(int *)(this + 0x1b8),*(float *)(this + 0x1bc),bVar1);
          }
        }
      }
      cVar3 = Zombie::HasCondition(pZVar6,0x51);
      if (cVar3 != '\0') {
        Zombie::EndCondition(pZVar6,0x51);
      }
                    /* WARNING: Load size is inaccurate */
      Zombie::ApplyCondition(*(Zombie **)(this + 0x1b4),0,pZVar6,0x51,1);
      Zombie::SetConditionTracker(*(undefined4 *)(this + 0x1b0),pZVar6,0x51);
      uVar2 = 1;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

