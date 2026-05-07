// Class: PoisonPeashooterCounter


/* PoisonPeashooterCounter::SetPlant(Sexy::RtWeakPtr<Plant>) */

void __thiscall PoisonPeashooterCounter::SetPlant(PoisonPeashooterCounter *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xa8),param_2);
  return;
}


/* PoisonPeashooterCounter::SetOffset(Sexy::SexyVector3) */

void PoisonPeashooterCounter::SetOffset
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = param_1;
  local_c = param_2;
  local_8 = param_3;
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_4 + 0x18),(SexyVector3 *)&local_10);
  return;
}


/* PoisonPeashooterCounter::SetPlantAction(PlantAction) */

void __thiscall
PoisonPeashooterCounter::SetPlantAction(PoisonPeashooterCounter *this,PlantAction *param_2)

{
  PlantAction::operator=((PlantAction *)(this + 0x28),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PoisonPeashooterCounter::StaticClassInit() */

void PoisonPeashooterCounter::StaticClassInit(void)

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
    std::string::string(asStack_10,"PoisonPeashooterCounter");
    (*pcVar2)(plVar1,asStack_10,FUN_04ccbdd0,0xb0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PoisonPeashooterCounter::StaticGetClass() */

long * PoisonPeashooterCounter::StaticGetClass(void)

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
  uVar2 = PlantFoodCounter::StaticGetClass();
  (*pcVar3)(plVar1,"PoisonPeashooterCounter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PoisonPeashooterCounter::GetClass() const */

long * PoisonPeashooterCounter::GetClass(void)

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
  uVar2 = PlantFoodCounter::StaticGetClass();
  (*pcVar3)(plVar1,"PoisonPeashooterCounter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PoisonPeashooterCounter::~PoisonPeashooterCounter() */

void __thiscall PoisonPeashooterCounter::~PoisonPeashooterCounter(PoisonPeashooterCounter *this)

{
  *(undefined ***)this = &PTR_GetClass_0699ba10;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  PlantAction::~PlantAction((PlantAction *)(this + 0x28));
  PlantFoodCounter::~PlantFoodCounter((PlantFoodCounter *)this);
  return;
}


/* PoisonPeashooterCounter::~PoisonPeashooterCounter() */

void __thiscall PoisonPeashooterCounter::~PoisonPeashooterCounter(PoisonPeashooterCounter *this)

{
  ~PoisonPeashooterCounter(this);
  AK::FreeHook(this);
  return;
}


/* PoisonPeashooterCounter::PoisonPeashooterCounter() */

void __thiscall PoisonPeashooterCounter::PoisonPeashooterCounter(PoisonPeashooterCounter *this)

{
  PlantFoodCounter::PlantFoodCounter((PlantFoodCounter *)this);
  *(undefined ***)this = &PTR_GetClass_0699ba10;
  DVec3::DVec3((DVec3 *)(this + 0x18));
  PlantAction::PlantAction((PlantAction *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa8));
  return;
}


/* PoisonPeashooterCounter::StaticNew() */

PoisonPeashooterCounter * PoisonPeashooterCounter::StaticNew(void)

{
  PoisonPeashooterCounter *this;
  
  this = ::operator_new(0xb0);
  PoisonPeashooterCounter(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PoisonPeashooterCounter::Update() */

void __thiscall PoisonPeashooterCounter::Update(PoisonPeashooterCounter *this)

{
  int iVar1;
  undefined8 uVar2;
  RtObject *this_00;
  PlantPoisonPeashooterLevel5Projectile *this_01;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  float fVar7;
  Board *pBVar13;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_18;
  float local_14;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = PlantFoodCounter::GetNumShotsToFireSinceLastUpdate((PlantFoodCounter *)this);
  if (0 < iVar1) {
    iVar5 = 0;
    do {
      while( true ) {
                    /* WARNING: Load size is inaccurate */
        pBVar13._0_4_ = *(Board **)(this + 0x18);
        uVar8 = *(undefined4 *)(this + 0x1c);
        uVar10 = *(undefined4 *)(this + 0x20);
        uVar6 = *(undefined8 *)(gLawnApp + 0x9f0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)(this + 0x30));
        uVar2 = Sexy::RtWeakPtr<Plant>::GetPtr((RtWeakPtr<Plant> *)(this + 0xa8));
        this_00 = (RtObject *)
                  Board::AddProjectile
                            (pBVar13._0_4_,uVar8,uVar10,uVar6,
                             (RtWeakPtr<Sexy::SoundResource> *)&local_18,uVar2,0);
        this_01 = Sexy::RtObject::Cast<PlantPoisonPeashooterLevel5Projectile>(this_00);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        lVar4 = *(long *)(this + 0xa0);
        fVar9 = *(float *)(lVar4 + 0x2c8);
        fVar11 = *(float *)(lVar4 + 0x2cc);
        PlantPoisonPeashooterProjectile::InitializeValues
                  ((PlantPoisonPeashooterProjectile *)this_01,(float)*(int *)(lVar4 + 0x2c4),fVar9,
                   fVar11,*(float *)(lVar4 + 0x2d0));
        fVar12 = *(float *)(this + 0x58);
        if (fVar12 == 0.0) break;
        puVar3 = (undefined8 *)Projectile::GetVelocity((Projectile *)this_01);
        local_28 = *puVar3;
        local_20 = *(undefined4 *)(puVar3 + 1);
        fVar7 = (float)DVec3::getLength((DVec3 *)&local_28);
        local_18 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_28,fVar12 / fVar7);
        local_14 = fVar9;
        local_10 = fVar11;
        Projectile::SetVelocity((Projectile *)this_01,(SexyVector3 *)&local_18);
        iVar5 = iVar5 + 1;
        StreamBuffer::SetBuffReadPos((StreamBuffer *)this,1);
        if (iVar5 == iVar1) goto LAB_04ccac44;
      }
      iVar5 = iVar5 + 1;
      StreamBuffer::SetBuffReadPos((StreamBuffer *)this,1);
    } while (iVar5 != iVar1);
  }
LAB_04ccac44:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

