// Class: DusklobberPlantfoodProjectileBomb


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DusklobberPlantfoodProjectileBomb::StaticClassInit() */

void DusklobberPlantfoodProjectileBomb::StaticClassInit(void)

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
    std::string::string(asStack_10,"DusklobberPlantfoodProjectileBomb");
    (*pcVar2)(plVar1,asStack_10,FUN_03bda690,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DusklobberPlantfoodProjectileBomb::StaticGetClass() */

long * DusklobberPlantfoodProjectileBomb::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DusklobberPlantfoodProjectileBomb",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DusklobberPlantfoodProjectileBomb::GetClass() const */

long * DusklobberPlantfoodProjectileBomb::GetClass(void)

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
  (*pcVar3)(plVar1,"DusklobberPlantfoodProjectileBomb",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DusklobberPlantfoodProjectileBomb::DusklobberPlantfoodProjectileBomb() */

void __thiscall
DusklobberPlantfoodProjectileBomb::DusklobberPlantfoodProjectileBomb
          (DusklobberPlantfoodProjectileBomb *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_0673de10;
  *(undefined ***)(this + 0x10) = &PTR__DusklobberPlantfoodProjectileBomb_0673e000;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a8));
  return;
}


/* DusklobberPlantfoodProjectileBomb::StaticNew() */

DusklobberPlantfoodProjectileBomb * DusklobberPlantfoodProjectileBomb::StaticNew(void)

{
  DusklobberPlantfoodProjectileBomb *this;
  
  this = ::operator_new(0x1b0);
  DusklobberPlantfoodProjectileBomb(this);
  return this;
}


/* DusklobberPlantfoodProjectileBomb::~DusklobberPlantfoodProjectileBomb() */

void __thiscall
DusklobberPlantfoodProjectileBomb::~DusklobberPlantfoodProjectileBomb
          (DusklobberPlantfoodProjectileBomb *this)

{
  *(undefined ***)this = &PTR_GetClass_0673de10;
  *(undefined ***)(this + 0x10) = &PTR__DusklobberPlantfoodProjectileBomb_0673e000;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to DusklobberPlantfoodProjectileBomb::~DusklobberPlantfoodProjectileBomb() */

void __thiscall
DusklobberPlantfoodProjectileBomb::~DusklobberPlantfoodProjectileBomb
          (DusklobberPlantfoodProjectileBomb *this)

{
  ~DusklobberPlantfoodProjectileBomb(this + -0x10);
  return;
}


/* DusklobberPlantfoodProjectileBomb::~DusklobberPlantfoodProjectileBomb() */

void __thiscall
DusklobberPlantfoodProjectileBomb::~DusklobberPlantfoodProjectileBomb
          (DusklobberPlantfoodProjectileBomb *this)

{
  ~DusklobberPlantfoodProjectileBomb(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DusklobberPlantfoodProjectileBomb::~DusklobberPlantfoodProjectileBomb() */

void __thiscall
DusklobberPlantfoodProjectileBomb::~DusklobberPlantfoodProjectileBomb
          (DusklobberPlantfoodProjectileBomb *this)

{
  ~DusklobberPlantfoodProjectileBomb(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DusklobberPlantfoodProjectileBomb::handleImpact(BoardEntity*) */

void DusklobberPlantfoodProjectileBomb::handleImpact(BoardEntity *param_1)

{
  undefined4 uVar1;
  GridItemDusklobberFlower *this;
  long lVar2;
  GridItemDusklobberFlower *extraout_x0;
  RtObject *this_00;
  PlantDusklobber *pPVar3;
  Board *pBVar4;
  float fVar5;
  float fVar6;
  int local_18;
  int local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (GridItemDusklobberFlower *)
         PlantCrackerPlantfoodProjectileAvatar::GetFlower
                   ((PlantCrackerPlantfoodProjectileAvatar *)param_1);
  if (this == (GridItemDusklobberFlower *)0x0) {
    fVar6 = *(float *)(param_1 + 0x1c);
    fVar5 = (float)FUN_03bd4574(*(undefined4 *)(param_1 + 0x18),fVar6,
                                *(undefined4 *)(param_1 + 0x20));
    Sexy::Point::Point((Point *)&local_18);
    local_18 = BoardTransforms::BoardSpaceToGridXKeepOnBoard(fVar5);
    local_14 = BoardTransforms::BoardSpaceToGridYKeepOnBoard(fVar6);
    pBVar4 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"dusklobberflower");
    lVar2 = Board::GetGridItemAt(pBVar4,asStack_10,local_18,local_14);
    std::string::~string(asStack_10);
    nop();
    if (lVar2 != 0) goto LAB_03bdb084;
    pBVar4 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"dusklobberflower");
    Board::AddGridItem(pBVar4,asStack_10,local_18,local_14,1);
    nop();
    std::string::~string(asStack_10);
    nop();
    lVar2 = Projectile::GetInstigator((Projectile *)param_1);
    if (lVar2 != 0) {
      this_00 = (RtObject *)Projectile::GetInstigator((Projectile *)param_1);
      pPVar3 = Sexy::RtObject::Cast<PlantDusklobber>(this_00);
      if (pPVar3 != (PlantDusklobber *)0x0) {
        uVar1 = FUN_03bd4210(*(undefined4 *)(*(long *)(pPVar3 + 0x10) + 0x24));
        FUN_03bd4214(extraout_x0 + 0x24,uVar1);
      }
    }
    this = extraout_x0;
    if (extraout_x0 == (GridItemDusklobberFlower *)0x0) goto LAB_03bdb084;
  }
  GridItemDusklobberFlower::StartGrowing(this);
LAB_03bdb084:
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}

