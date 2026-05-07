// Class: ElectricPeaPlantfoodProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricPeaPlantfoodProjectile::StaticClassInit() */

void ElectricPeaPlantfoodProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ElectricPeaPlantfoodProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03c14d98,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ElectricPeaPlantfoodProjectile::StaticGetClass() */

long * ElectricPeaPlantfoodProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ElectricPeaPlantfoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ElectricPeaPlantfoodProjectile::GetClass() const */

long * ElectricPeaPlantfoodProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"ElectricPeaPlantfoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ElectricPeaPlantfoodProjectile::SetProjectileData(Sexy::RtWeakPtr<ProjectilePropertySheet>, int,
   float, float) */

void __thiscall
ElectricPeaPlantfoodProjectile::SetProjectileData
          (undefined4 param_1,undefined4 param_2,ElectricPeaPlantfoodProjectile *this,
          RtWeakPtr *param_4,undefined4 param_5)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1a8),param_4);
  *(undefined4 *)(this + 0x1b0) = param_5;
  *(undefined4 *)(this + 0x1b4) = param_1;
  *(undefined4 *)(this + 0x1b8) = param_2;
  return;
}


/* ElectricPeaPlantfoodProjectile::ElectricPeaPlantfoodProjectile() */

void __thiscall
ElectricPeaPlantfoodProjectile::ElectricPeaPlantfoodProjectile(ElectricPeaPlantfoodProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06747850;
  *(undefined ***)(this + 0x10) = &PTR__ElectricPeaPlantfoodProjectile_06747a48;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a8));
  return;
}


/* ElectricPeaPlantfoodProjectile::StaticNew() */

ElectricPeaPlantfoodProjectile * ElectricPeaPlantfoodProjectile::StaticNew(void)

{
  ElectricPeaPlantfoodProjectile *this;
  
  this = ::operator_new(0x1c0);
  ElectricPeaPlantfoodProjectile(this);
  return this;
}


/* ElectricPeaPlantfoodProjectile::~ElectricPeaPlantfoodProjectile() */

void __thiscall
ElectricPeaPlantfoodProjectile::~ElectricPeaPlantfoodProjectile
          (ElectricPeaPlantfoodProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06747850;
  *(undefined ***)(this + 0x10) = &PTR__ElectricPeaPlantfoodProjectile_06747a48;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ElectricPeaPlantfoodProjectile::~ElectricPeaPlantfoodProjectile() */

void __thiscall
ElectricPeaPlantfoodProjectile::~ElectricPeaPlantfoodProjectile
          (ElectricPeaPlantfoodProjectile *this)

{
  ~ElectricPeaPlantfoodProjectile(this + -0x10);
  return;
}


/* ElectricPeaPlantfoodProjectile::~ElectricPeaPlantfoodProjectile() */

void __thiscall
ElectricPeaPlantfoodProjectile::~ElectricPeaPlantfoodProjectile
          (ElectricPeaPlantfoodProjectile *this)

{
  ~ElectricPeaPlantfoodProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ElectricPeaPlantfoodProjectile::~ElectricPeaPlantfoodProjectile() */

void __thiscall
ElectricPeaPlantfoodProjectile::~ElectricPeaPlantfoodProjectile
          (ElectricPeaPlantfoodProjectile *this)

{
  ~ElectricPeaPlantfoodProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricPeaPlantfoodProjectile::CreateSubProjectile(BoardEntity*) */

void ElectricPeaPlantfoodProjectile::CreateSubProjectile(BoardEntity *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  RtObject *this;
  ElectricPeaPlantfoodSubProjectile *this_00;
  undefined8 uVar3;
  int iVar4;
  float __x;
  float fVar5;
  float fVar6;
  Board *pBVar11;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  int local_38;
  int local_34;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __x = (float)RandRangeFloat(0.0,1.5707964);
  if (0 < *(int *)(param_1 + 0x1b0)) {
    iVar4 = 0;
    puVar1 = (undefined8 *)Projectile::GetVelocity((Projectile *)param_1);
    do {
      Projectile::CalcCollisionRectBoardSpace();
      Sexy::TRect<int>::GetCenter();
      Sexy::Point::Point((Point *)&local_38,(TPoint *)&local_28);
      pBVar11._0_4_ = (Board *)(float)local_38;
      fVar7 = (float)local_34;
      uVar3 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)(param_1 + 0x1a8));
      uVar2 = Projectile::GetInstigator((Projectile *)param_1);
      this = (RtObject *)Board::AddProjectile(pBVar11._0_4_,fVar7,0,uVar3,(Vec3 *)&local_18,uVar2,0)
      ;
      this_00 = Sexy::RtObject::Cast<ElectricPeaPlantfoodSubProjectile>(this);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      uVar9 = 0;
      uVar8 = 0;
      EATextSquish::Vec3::Vec3((Vec3 *)&local_28,1.0,0.0,0.0);
      local_18 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_28,*(float *)(param_1 + 0x1b4));
      local_14 = uVar9;
      local_10 = uVar8;
      Projectile::SetVelocity((Projectile *)this_00,(SexyVector3 *)&local_18);
      local_28 = *puVar1;
      local_20 = *(undefined4 *)(puVar1 + 1);
      fVar7 = __x;
      if (3.1415927 < ABS(__x)) {
        dVar10 = 6.2831854820251465;
        if ((long)(double)__x < 0) {
          dVar10 = -6.2831854820251465;
        }
        fVar7 = (float)((double)__x - dVar10);
      }
      iVar4 = iVar4 + 1;
      FUN_03c0fd68(fVar7,this_00 + 0xc4);
      fVar7 = cosf(__x);
      fVar5 = (float)DVec3::getLength((DVec3 *)&local_28);
      fVar6 = sinf(__x);
      EATextSquish::Vec3::Vec3((Vec3 *)&local_18,fVar5 * fVar7,-(fVar6 * fVar5),0.0);
      Projectile::SetVelocity((Projectile *)this_00,(SexyVector3 *)&local_18);
      __x = __x + 6.2831855 / (float)*(int *)(param_1 + 0x1b0);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_30);
      ElectricPeaPlantfoodSubProjectile::SetProjectileData(this_00,(Vec3 *)&local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    } while (iVar4 < *(int *)(param_1 + 0x1b0));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

