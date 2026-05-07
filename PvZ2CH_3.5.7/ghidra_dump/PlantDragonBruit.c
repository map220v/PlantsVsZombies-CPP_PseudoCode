// Class: PlantDragonBruit


/* PlantDragonBruit::IsDelayDestroy() */

PlantDragonBruit __thiscall PlantDragonBruit::IsDelayDestroy(PlantDragonBruit *this)

{
  return this[0x90];
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonBruit::getTargetInRow(int) */

void PlantDragonBruit::getTargetInRow(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  RtObject *this;
  int in_w1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_38 [8];
  undefined8 local_30;
  RtMixedPtrBase aRStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined1 auStack_18 [4];
  int local_14;
  long local_8;
  
  plVar4 = (long *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_38);
  local_30 = (**(code **)(*plVar4 + 0x3f8))(plVar4,0);
  (**(code **)(*plVar4 + 0x2b0))(auStack_18,plVar4,0);
  if (in_w1 != 0) {
    iVar1 = in_w1 + local_14;
    if ((iVar1 < 0) || (iVar3 = BoardConstants::NUMBER_OF_ROWS(), iVar3 <= iVar1)) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (in_x8);
      goto LAB_03bd75d0;
    }
    local_14 = local_14 + in_w1;
  }
  (**(code **)(*plVar4 + 0xd8))(aRStack_28,plVar4,auStack_18,0,&local_30);
  (**(code **)(*plVar4 + 0x100))(aRStack_20,plVar4,auStack_18,0);
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
  if (cVar2 == '\0') {
    if (this != (RtObject *)0x0) goto LAB_03bd7684;
  }
  else {
    this = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
LAB_03bd7684:
    Sexy::RtObject::Cast<BoardEntity>(this);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)a_Stack_38,(RtWeakPtrBase *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)in_x8,(RtWeakPtrBase *)a_Stack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
LAB_03bd75d0:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantDragonBruit::CanApplyPlantfood() */

byte __thiscall PlantDragonBruit::CanApplyPlantfood(PlantDragonBruit *this)

{
  return (byte)this[0x90] ^ 1;
}


/* PlantDragonBruit::CanBeTargeted() */

undefined8 __thiscall PlantDragonBruit::CanBeTargeted(PlantDragonBruit *this)

{
  undefined8 uVar1;
  
  if (this[0x90] == (PlantDragonBruit)0x0) {
    uVar1 = PlantFramework::CanBeTargeted();
    return uVar1;
  }
  return 0;
}


/* PlantDragonBruit::CanBeTargetedBy(BoardEntity const*) */

undefined8 PlantDragonBruit::CanBeTargetedBy(BoardEntity *param_1)

{
  undefined8 uVar1;
  
  if (param_1[0x90] == (BoardEntity)0x0) {
    uVar1 = PlantFramework::CanBeTargetedBy(param_1);
    return uVar1;
  }
  return 0;
}


/* PlantDragonBruit::IsInvincible() const */

ulong __thiscall PlantDragonBruit::IsInvincible(PlantDragonBruit *this)

{
  ulong uVar1;
  
  if ((byte)this[0x90] == 0) {
    uVar1 = PlantFramework::IsInvincible();
    return uVar1;
  }
  return (ulong)(uint)(byte)this[0x90];
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonBruit::StaticClassInit() */

void PlantDragonBruit::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantDragonBruit");
    (*pcVar2)(plVar1,asStack_10,FUN_04d78a5c,0xb8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDragonBruit::StaticGetClass() */

long * PlantDragonBruit::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantDragonBruit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantDragonBruit::GetClass() const */

long * PlantDragonBruit::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantDragonBruit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonBruit::CanTargetZombie(Sexy::RtWeakPtr<Zombie>, PlantWeapon) */

void PlantDragonBruit::CanTargetZombie(TextureInfo *param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  cVar1 = (**(code **)(*plVar4 + 0x330))();
  if (cVar1 == '\0') {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = (**(code **)(*plVar4 + 0x328))();
    if (cVar1 == '\0') {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      cVar1 = FUN_04d77d58(*(undefined4 *)(lVar5 + 0xcc));
      if (cVar1 == '\0') {
        uVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
        uVar3 = FUN_04d76b08(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x24));
        cVar1 = RealObject::IsOnTeam(uVar6,uVar3);
        if (cVar1 == '\0') {
          uVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
          cVar1 = Zombie::HasCondition(uVar6,0x19);
          if (cVar1 == '\0') {
            plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
            pcVar7 = *(code **)(*plVar4 + 0x3d0);
            Plant::GetType();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
            cVar1 = (*pcVar7)(plVar4,aRStack_10,0);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
            uVar2 = 0;
            if (cVar1 != '\0') {
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
              uVar2 = EA::Text::GlyphCache_Memory::EndUpdate(param_1);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
            }
            goto LAB_04d77e1c;
          }
        }
      }
    }
  }
  uVar2 = 0;
LAB_04d77e1c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* PlantDragonBruit::ApplyPlantfood() */

void __thiscall PlantDragonBruit::ApplyPlantfood(PlantDragonBruit *this)

{
  char cVar1;
  undefined4 uVar2;
  
  this[0x96] = this[0x92];
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    this[0x92] = (PlantDragonBruit)0x1;
    uVar2 = PVZ_T();
    *(undefined4 *)(this + 0x9c) = uVar2;
    *(undefined4 *)(this + 0x98) = 0x41500000;
  }
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonBruit::FindTargetAndFire(PlantWeapon) */

void __thiscall PlantDragonBruit::FindTargetAndFire(PlantDragonBruit *this,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  RtMixedPtrBase aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  bVar3 = 0;
  local_8 = ___stack_chk_guard;
  if (this[0x90] == (PlantDragonBruit)0x0) {
    if (param_2 == 1) {
      bVar3 = PlantFramework::FindTargetAndFire();
    }
    else {
      iVar5 = (int)this;
      getTargetInRow(iVar5);
      bVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
      getTargetInRow(iVar5);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)aRStack_18,(RtWeakPtr *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      bVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
      getTargetInRow(iVar5);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)aRStack_18,(RtWeakPtr *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      bVar3 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
      bVar3 = bVar2 | bVar1 | bVar3;
      if (bVar3 != 0) {
        fVar8 = *(float *)(this + 0x98);
        fVar7 = *(float *)(this + 0x9c);
        this[0x95] = (PlantDragonBruit)0x1;
        fVar6 = (float)PVZ_T();
        if (((fVar7 + fVar8) - fVar6 < 3.0) &&
           (cVar4 = Plant::HasCondition(*(undefined8 *)(this + 0x10),0x13), cVar4 == '\0')) {
          this[0x92] = (PlantDragonBruit)0x0;
        }
        (**(code **)(*(long *)this + 0x1a0))(this);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* PlantDragonBruit::PlantDragonBruit() */

void __thiscall PlantDragonBruit::PlantDragonBruit(PlantDragonBruit *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_069b6d70;
  DamageInfo::DamageInfo((DamageInfo *)(this + 0x30));
  this[0x90] = (PlantDragonBruit)0x0;
  this[0x91] = (PlantDragonBruit)0x0;
  this[0x92] = (PlantDragonBruit)0x0;
  this[0x93] = (PlantDragonBruit)0x1;
  this[0x94] = (PlantDragonBruit)0x0;
  this[0x95] = (PlantDragonBruit)0x0;
  this[0x96] = (PlantDragonBruit)0x0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb0));
  return;
}


/* PlantDragonBruit::StaticNew() */

PlantDragonBruit * PlantDragonBruit::StaticNew(void)

{
  PlantDragonBruit *this;
  
  this = ::operator_new(0xb8);
  PlantDragonBruit(this);
  return this;
}


/* PlantDragonBruit::GetLaunchDelayMultiplier() */

undefined1  [16] __thiscall PlantDragonBruit::GetLaunchDelayMultiplier(PlantDragonBruit *this)

{
  long lVar1;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  lVar1 = FUN_04d79900(*(undefined8 *)(this + 0x10));
  if (this[0x93] != (PlantDragonBruit)0x0) {
    this[0x93] = (PlantDragonBruit)0x0;
    PlantFramework::GetLaunchDelayMultiplier();
    auVar2._4_4_ = extraout_var;
    auVar2._0_4_ = extraout_s0;
    auVar2._8_8_ = extraout_var_00;
    return auVar2;
  }
  return ZEXT416(*(uint *)(lVar1 + 0x334));
}


/* PlantDragonBruit::GetPlantFoodPlayCount() */

undefined4 __thiscall PlantDragonBruit::GetPlantFoodPlayCount(PlantDragonBruit *this)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = FUN_04d79900(*(undefined8 *)(this + 0x10));
  uVar2 = PlantFramework::GetPlantFoodPlayCount();
  if ((lVar3 != 0) &&
     ((this[0x92] != (PlantDragonBruit)0x0 ||
      (cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10)), cVar1 != '\0')))) {
    uVar2 = *(undefined4 *)(lVar3 + 800);
  }
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonBruit::launchSpecialProjectile(Sexy::SexyVector3, Sexy::RtWeakPtr<Zombie>,
   Sexy::RtWeakPtr<BoardEntity> const&) */

void PlantDragonBruit::launchSpecialProjectile
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long *param_4,
               RtWeakPtrBase *param_5,RtWeakPtr *param_6)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  float *pfVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  Projectile *this;
  Projectile *this_00;
  float fVar10;
  Board *pBVar16;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  string asStack_30 [8];
  wstring awStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_50 = param_1;
  local_4c = param_2;
  local_48 = param_3;
  lVar5 = FUN_04d79900(param_4[2]);
  if (lVar5 != 0) {
    FUN_04d76bdc(aRStack_18,param_4[2]);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    iVar4 = FUN_04d76c00(param_4[2]);
    pfVar7 = (float *)FUN_04d76c34(*(undefined8 *)(lVar6 + 0x208),(long)(iVar4 + -1));
    fVar15 = *pfVar7;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    if ((*(char *)((long)param_4 + 0x96) == '\0') &&
       (cVar1 = Plant::GetAvatarEnable((Plant *)param_4[2]), cVar1 == '\0')) {
      *(undefined4 *)(param_4[2] + 0x150) = 1;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,param_5);
      Plant::Fire((Plant *)param_4[2],aRStack_18,*(undefined4 *)((Plant *)param_4[2] + 0x110),1);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      uVar8 = FUN_04d76bac(*(undefined8 *)(this_00 + 0xe0));
      uVar8 = operator|(uVar8,0x2000);
      FUN_04d76bb0(this_00 + 0xe0,uVar8);
      Projectile::LaunchAtFromProps
                (this_00,(SexyVector3 *)&local_50,(PultProjectileProps *)(lVar5 + 0x2e0));
      Projectile::SetTarget(this_00,param_6);
      bVar2 = *(bool *)((long)param_4 + 0x96);
      fVar12 = *(float *)(lVar5 + 0x308);
      fVar10 = *(float *)(lVar5 + 0x31c);
      iVar4 = FUN_04d76c00(param_4[2]);
      fVar14 = *(float *)(lVar5 + 0x30c);
      bVar3 = (bool)(**(code **)(*param_4 + 0x180))(param_4);
      DragonBruitProjectile::SetData
                ((DragonBruitProjectile *)this_00,bVar2,fVar10,fVar15 * fVar12,fVar14,false,iVar4,
                 bVar3);
      *(undefined4 *)(param_4[2] + 0x150) = 0xffffffff;
    }
    else {
      uVar8 = Sexy::LazySingleton<PVZDB>::GetInstance();
      std::string::string(asStack_30,"DragonBruitPlantfoodPoisonDefault");
      Sexy::ToWString(asStack_30);
      Sexy::RtName::RtName((RtName *)aRStack_18,awStack_28);
      PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,uVar8,0xc,aRStack_18);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      Sexy::RtName::~RtName((RtName *)aRStack_18);
      FUN_05476c50(awStack_28);
      std::string::~string(asStack_30);
      nop();
      puVar9 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)param_4[2]);
                    /* WARNING: Load size is inaccurate */
      pBVar16._0_4_ = *puVar9;
      uVar11 = *(undefined4 *)((long)puVar9 + 4);
      uVar13 = *(undefined4 *)(puVar9 + 1);
      uVar8 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_38);
      Board::AddProjectile(pBVar16._0_4_,uVar11,uVar13,uVar8,aRStack_18,param_4[2],0);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      lVar6 = FUN_04d79900(param_4[2]);
      Projectile::LaunchAtFromProps
                (this,(SexyVector3 *)&local_50,(PultProjectileProps *)(lVar6 + 0x2e0));
      uVar8 = FUN_04d76bac(*(undefined8 *)(this + 0xe0));
      uVar8 = operator|(uVar8,0x2000);
      FUN_04d76bb0(this + 0xe0,uVar8);
      cVar1 = Plant::GetAvatarEnable((Plant *)param_4[2]);
      if (cVar1 == '\0') {
        fVar12 = *(float *)(lVar5 + 0x308);
        fVar10 = *(float *)(lVar5 + 0x31c);
        iVar4 = FUN_04d76c00(param_4[2]);
        fVar14 = *(float *)(lVar5 + 0x30c);
        bVar2 = (bool)(**(code **)(*param_4 + 0x180))(param_4);
        DragonBruitProjectile::SetData
                  ((DragonBruitProjectile *)this,true,fVar10,fVar15 * fVar12,fVar14,false,iVar4,
                   bVar2);
      }
      else {
        fVar12 = *(float *)(lVar5 + 0x308);
        fVar10 = *(float *)(lVar5 + 0x324);
        iVar4 = FUN_04d76c00(param_4[2]);
        fVar14 = *(float *)(lVar5 + 0x30c);
        bVar2 = (bool)(**(code **)(*param_4 + 0x180))(param_4);
        DragonBruitProjectile::SetData
                  ((DragonBruitProjectile *)this,true,fVar10,fVar15 * fVar12,fVar14,false,iVar4,
                   bVar2);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      *(undefined4 *)(param_4[2] + 0x150) = 0xffffffff;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonBruit::PlayAttackAnimation() */

void __thiscall PlantDragonBruit::PlayAttackAnimation(PlantDragonBruit *this)

{
  int iVar1;
  PopAnimRig *pPVar2;
  char *pcVar3;
  undefined8 uVar4;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  uVar4 = *(undefined8 *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04d76c00(uVar4);
  if ((iVar1 == 5) && (*(int *)(this + 0x28) != 0)) {
    pPVar2 = (PopAnimRig *)FUN_04d79878(uVar4);
    if (pPVar2 != (PopAnimRig *)0x0) {
      if (this[0x92] == (PlantDragonBruit)0x0) {
        iVar1 = *(int *)(this + 0x28);
        if (iVar1 == 1) {
          pcVar3 = "dragonbruit_idle_bs_rt_2";
        }
        else if (iVar1 == 2) {
          pcVar3 = "dragonbruit_idle_bs_rt_1";
        }
        else {
          if (iVar1 != 3) goto LAB_04d79f10;
          pcVar3 = "dragonbruit_idle_bs_rt_3";
        }
        std::string::string(asStack_68,pcVar3);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
        std::string::string(asStack_58,"onAnimStoppedCallback");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   aRStack_60,asStack_58);
        PopAnimRig::PlayAndStop(pPVar2,asStack_68,0,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string(asStack_58);
        nop();
        Sexy::RtId::~RtId(aRStack_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70)
        ;
        std::string::~string(asStack_68);
        nop();
      }
      else {
        iVar1 = *(int *)(this + 0x28);
        if (iVar1 == 1) {
          PlantAnimRig::SetState((PlantAnimRig *)pPVar2,0xe);
          pcVar3 = "dragonbruit_idle_bs_rt_2_1";
        }
        else if (iVar1 == 2) {
          PlantAnimRig::SetState((PlantAnimRig *)pPVar2,0xe);
          pcVar3 = "dragonbruit_idle_bs_rt_1_1";
        }
        else {
          if (iVar1 != 3) goto LAB_04d79f10;
          PlantAnimRig::SetState((PlantAnimRig *)pPVar2,0xe);
          pcVar3 = "dragonbruit_idle_bs_rt_3_1";
        }
        std::string::string(asStack_68,pcVar3);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
        std::string::string(asStack_58,"onAnimStoppedCallback");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   aRStack_60,asStack_58);
        PopAnimRig::PlayAndStop(pPVar2,asStack_68,0,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string(asStack_58);
        nop();
        Sexy::RtId::~RtId(aRStack_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70)
        ;
        std::string::~string(asStack_68);
        nop();
      }
    }
  }
  else {
    PlantFramework::PlayAttackAnimation((PlantFramework *)this);
  }
LAB_04d79f10:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDragonBruit::~PlantDragonBruit() */

void __thiscall PlantDragonBruit::~PlantDragonBruit(PlantDragonBruit *this)

{
  *(undefined ***)this = &PTR_GetClass_069b6d70;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
  DamageInfo::~DamageInfo((DamageInfo *)(this + 0x30));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantDragonBruit::~PlantDragonBruit() */

void __thiscall PlantDragonBruit::~PlantDragonBruit(PlantDragonBruit *this)

{
  ~PlantDragonBruit(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonBruit::LaunchPlantFood() */

void __thiscall PlantDragonBruit::LaunchPlantFood(PlantDragonBruit *this)

{
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar4;
  RtObject *this_01;
  code *pcVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_38 [8];
  undefined8 local_30;
  undefined4 local_28;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0xd0))(avStack_20,this,1);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_20);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_20);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_48);
    if (!bVar1) {
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      ~vector((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_58,pRVar3);
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    puVar4 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_00);
    local_30 = *puVar4;
    local_28 = *(undefined4 *)(puVar4 + 1);
    this_01 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    bVar1 = Sexy::RtObject::IsA<Zombie>(this_01);
    if (bVar1) {
      pcVar5 = *(code **)(*(long *)this + 0x3e0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
      nop();
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)a_Stack_38,(RtWeakPtrBase *)aRStack_40);
      cVar2 = (*pcVar5)(this,a_Stack_38,4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      if (cVar2 == '\0') goto LAB_04d7aa10;
      local_28 = 0x42480000;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)a_Stack_38,(RtWeakPtrBase *)aRStack_58);
    }
    else {
LAB_04d7aa10:
      local_28 = 0x41c80000;
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_38);
    }
    launchSpecialProjectile((undefined4)local_30,local_30._4_4_,local_28,this,a_Stack_38,aRStack_58)
    ;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonBruit::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantDragonBruit::Fire
               (undefined1 param_1 [16],ulong param_2,ulong param_3,PlantFramework *param_4,
               RtWeakPtrBase *param_5,undefined8 param_6,undefined4 param_7)

{
  PlantFramework PVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  RtObject *pRVar8;
  float *pfVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  Projectile *this;
  long lVar12;
  Projectile *this_00;
  Zombie *pZVar13;
  GridItem *pGVar14;
  DragonBruitProjectile *this_01;
  Plant *pPVar15;
  code *pcVar16;
  float fVar17;
  float fVar18;
  Board *pBVar22;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  RtMixedPtrBase aRStack_50 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [8];
  string asStack_40 [8];
  wstring awStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = (**(code **)(*(long *)param_4 + 0x180))();
  if (cVar3 != '\0') {
    LaunchPlantFood((PlantDragonBruit *)param_4);
    this_01 = (DragonBruitProjectile *)0x0;
    goto LAB_04d7aee0;
  }
  lVar7 = FUN_04d79900(*(undefined8 *)(param_4 + 0x10));
  if (lVar7 == 0) {
    this_01 = (DragonBruitProjectile *)0x0;
    goto LAB_04d7aee0;
  }
  iVar5 = FUN_04d76c00(*(undefined8 *)(param_4 + 0x10));
  if (iVar5 < 2) goto LAB_04d7ac48;
  fVar17 = (float)PlantFramework::Rand(param_4,1.0);
  fVar18 = (float)PlantFramework::Rand(param_4,1.0);
  if (param_4[0x92] == (PlantFramework)0x0) {
    iVar5 = FUN_04d76c00(*(undefined8 *)(param_4 + 0x10));
    bVar2 = false;
    if (iVar5 < 3) {
      if (0.3 <= fVar17) goto LAB_04d7ac48;
      param_4[0x92] = (PlantFramework)0x1;
      uVar19 = PVZ_T();
      *(undefined4 *)(param_4 + 0x9c) = uVar19;
      *(undefined4 *)(param_4 + 0x98) = 0x41500000;
    }
    else if (fVar17 < 0.5) {
      param_4[0x92] = (PlantFramework)0x1;
      uVar19 = PVZ_T();
      *(undefined4 *)(param_4 + 0x9c) = uVar19;
      *(undefined4 *)(param_4 + 0x98) = 0x41900000;
    }
    else {
LAB_04d7ac48:
      bVar2 = false;
    }
  }
  else {
    iVar5 = FUN_04d76c00(*(undefined8 *)(param_4 + 0x10));
    if (iVar5 < 3) {
      param_2 = 0x3e99999a;
      bVar2 = fVar18 < 0.3;
    }
    else {
      param_2 = 0x3f000000;
      bVar2 = fVar18 < 0.5;
    }
  }
  iVar5 = -1;
  this_01 = (DragonBruitProjectile *)0x0;
  do {
    getTargetInRow((int)param_4);
    cVar3 = Sexy::RtMixedPtrBase::IsValid(aRStack_50);
    if (cVar3 == '\0') goto LAB_04d7aec8;
    DVec3::DVec3((DVec3 *)&local_28);
    pRVar8 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    bVar4 = Sexy::RtObject::IsA<Zombie>(pRVar8);
    if (bVar4) {
      pcVar16 = *(code **)(*(long *)param_4 + 0x3e0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
      nop();
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_30);
      cVar3 = (*pcVar16)(param_4,(RtWeakPtr<Sexy::SoundResource> *)&local_18,param_7);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
      uVar20 = (undefined4)param_3;
      uVar19 = (undefined4)param_2;
      if (cVar3 == '\0') goto LAB_04d7acb4;
      pRVar8 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50)
      ;
      pZVar13 = Sexy::RtObject::Cast<Zombie>(pRVar8);
      pcVar16 = *(code **)(*(long *)pZVar13 + 0x3b0);
      lVar12 = FUN_04d79900(*(undefined8 *)(param_4 + 0x10));
      local_18 = (*pcVar16)(*(undefined4 *)(lVar12 + 0x2c8),pZVar13);
      local_14 = uVar19;
      local_10 = uVar20;
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)&local_18);
      fVar17 = local_28;
      pfVar9 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(param_4 + 0x10));
      fVar18 = *pfVar9;
      if (fVar17 < fVar18) {
        iVar6 = BoardConstants::GRIDSQUARE_WIDTH();
        local_28 = fVar18 + (float)iVar6 * 0.5;
      }
LAB_04d7acf4:
      if (param_4[0x92] == (PlantFramework)0x0) {
        pPVar15 = *(Plant **)(param_4 + 0x10);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_5);
        Plant::Fire(pPVar15,(RtName *)&local_18,iVar5,param_7);
        nop();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        lVar12 = FUN_04d79900(*(undefined8 *)(param_4 + 0x10));
        Projectile::LaunchAtFromProps
                  (this_00,(SexyVector3 *)&local_28,(PultProjectileProps *)(lVar12 + 0x2b8));
        this_01 = (DragonBruitProjectile *)this_00;
      }
      else {
        uVar10 = Sexy::LazySingleton<PVZDB>::GetInstance();
        std::string::string(asStack_40,"DragonBruitPoisonDefault");
        Sexy::ToWString(asStack_40);
        Sexy::RtName::RtName((RtName *)&local_18,awStack_38);
        PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_30,uVar10,0xc,(RtName *)&local_18);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)aRStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
        Sexy::RtName::~RtName((RtName *)&local_18);
        FUN_05476c50(awStack_38);
        std::string::~string(asStack_40);
        nop();
        puVar11 = (undefined8 *)
                  std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  **)(param_4 + 0x10));
                    /* WARNING: Load size is inaccurate */
        pBVar22._0_4_ = *puVar11;
        uVar19 = *(undefined4 *)((long)puVar11 + 4);
        uVar20 = *(undefined4 *)(puVar11 + 1);
        uVar10 = *(undefined8 *)(gLawnApp + 0x9f0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_48);
        Board::AddProjectile
                  (pBVar22._0_4_,uVar19,uVar20,uVar10,(RtName *)&local_18,
                   *(undefined8 *)(param_4 + 0x10),0);
        nop();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        lVar12 = FUN_04d79900(*(undefined8 *)(param_4 + 0x10));
        Projectile::LaunchAtFromProps
                  (this,(SexyVector3 *)&local_28,(PultProjectileProps *)(lVar12 + 0x2b8));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48)
        ;
        this_01 = (DragonBruitProjectile *)this;
      }
      FUN_04d76bdc((RtName *)&local_18,*(undefined8 *)(param_4 + 0x10));
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      iVar6 = FUN_04d76c00(*(undefined8 *)(param_4 + 0x10));
      pfVar9 = (float *)FUN_04d76c34(*(undefined8 *)(lVar12 + 0x208),(long)(iVar6 + -1));
      fVar18 = *pfVar9;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      PVar1 = param_4[0x92];
      fVar17 = *(float *)(lVar7 + 0x310);
      fVar18 = fVar18 * *(float *)(lVar7 + 0x308);
      param_2 = (ulong)(uint)fVar18;
      iVar6 = FUN_04d76c00(*(undefined8 *)(param_4 + 0x10));
      fVar21 = *(float *)(lVar7 + 0x30c);
      param_3 = (ulong)(uint)fVar21;
      bVar4 = (bool)(**(code **)(*(long *)param_4 + 0x180))(param_4);
      DragonBruitProjectile::SetData(this_01,(bool)PVar1,fVar17,fVar18,fVar21,bVar2,iVar6,bVar4);
    }
    else {
LAB_04d7acb4:
      pRVar8 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50)
      ;
      bVar4 = Sexy::RtObject::IsA<GridItem>(pRVar8);
      if (!bVar4) {
        pfVar9 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          **)(param_4 + 0x10));
        local_24 = pfVar9[1];
        local_28 = *pfVar9 + 600.0;
        local_20 = 0;
        goto LAB_04d7acf4;
      }
      pRVar8 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50)
      ;
      pGVar14 = Sexy::RtObject::Cast<GridItem>(pRVar8);
      cVar3 = (**(code **)(*(long *)pGVar14 + 0x200))();
      if (cVar3 != '\0') {
        cVar3 = (**(code **)(*(long *)pGVar14 + 0x218))(pGVar14,*(undefined8 *)(param_4 + 0x10));
        uVar20 = (undefined4)param_3;
        uVar19 = (undefined4)param_2;
        if (cVar3 != '\0') {
          pcVar16 = *(code **)(*(long *)pGVar14 + 0x238);
          lVar12 = FUN_04d79900(*(undefined8 *)(param_4 + 0x10));
          local_18 = (*pcVar16)(*(undefined4 *)(lVar12 + 0x2c8),pGVar14);
          local_14 = uVar19;
          local_10 = uVar20;
          Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)&local_18);
          goto LAB_04d7acf4;
        }
      }
    }
LAB_04d7aec8:
    iVar5 = iVar5 + 1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  } while (iVar5 != 2);
LAB_04d7aee0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_01);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonBruit::launchSpecialBabyBruitProjectiles() */

void PlantDragonBruit::launchSpecialBabyBruitProjectiles(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  long *in_x0;
  ulong uVar5;
  RtObject *pRVar6;
  Zombie *pZVar7;
  long lVar8;
  float *pfVar9;
  PlantAction *pPVar10;
  Projectile *this;
  GridItem *pGVar11;
  Projectile *this_00;
  undefined8 uVar12;
  int iVar13;
  ulong uVar14;
  undefined8 uVar15;
  Projectile *pPVar16;
  code *pcVar17;
  float fVar18;
  float fVar19;
  undefined8 in_d1;
  undefined8 in_d2;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  Point aPStack_d0 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_c8 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_c0 [8];
  float local_b8;
  float local_b4;
  undefined4 local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78 [9];
  int local_54;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar14 = 0;
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)&local_98,&DAT_05755a80,3,
             (RtWeakPtr<Sexy::SoundResource> *)&local_80);
  do {
    uVar5 = FUN_04d76c1c(local_98,local_90);
    if (uVar5 <= uVar14) {
      pPVar16 = (Projectile *)0x0;
LAB_04d7b560:
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_98);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(pPVar16);
    }
    Sexy::Point::Point(aPStack_d0);
    FUN_04d76c5c(local_98,uVar14);
    getTargetInRow((int)in_x0);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_c8);
    if (cVar1 != '\0') {
      DVec3::DVec3((DVec3 *)&local_b8);
      pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_c8);
      bVar2 = Sexy::RtObject::IsA<Zombie>(pRVar6);
      if (bVar2) {
        pcVar17 = *(code **)(*in_x0 + 0x3e0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_c8);
        nop();
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_80,(RtWeakPtrBase *)&local_a8);
        cVar1 = (*pcVar17)();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_a8);
        if (cVar1 == '\0') goto LAB_04d7b1ec;
        pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_c8);
        pZVar7 = Sexy::RtObject::Cast<Zombie>(pRVar6);
        pcVar17 = *(code **)(*(long *)pZVar7 + 0x3b0);
        lVar8 = FUN_04d79900(in_x0[2]);
        local_80 = (*pcVar17)(*(undefined4 *)(lVar8 + 0x2c8),pZVar7);
        local_7c = (undefined4)in_d1;
        local_78[0] = (undefined4)in_d2;
        Sexy::SexyVector3::operator=((SexyVector3 *)&local_b8,(SexyVector3 *)&local_80);
        fVar18 = local_b8;
        pfVar9 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)in_x0[2]);
        fVar23 = *pfVar9;
        if (fVar23 <= fVar18) goto LAB_04d7b220;
        iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
        fVar19 = (float)in_d2;
        iVar13 = (int)in_x0[5];
        in_d1 = 0x3f000000;
        fVar18 = 0.5;
        local_b8 = fVar23 + (float)iVar3 * 0.5;
        if (iVar13 != 1) goto LAB_04d7b22c;
LAB_04d7b378:
        lVar8 = FUN_04d79900(in_x0[2]);
        pPVar10 = (PlantAction *)FUN_04d76c64(*(undefined8 *)(lVar8 + 0x70),5);
        PlantAction::PlantAction((PlantAction *)&local_80,pPVar10);
        fVar23 = (float)(**(code **)(*in_x0 + 0x110))(*(undefined4 *)(in_x0[2] + 0xc4));
        local_a8 = fVar23;
        local_a4 = fVar18;
        local_a0 = fVar19;
        pfVar9 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)in_x0[2]);
        fVar22 = *pfVar9;
        fVar21 = pfVar9[1];
        fVar20 = pfVar9[2];
        uVar15 = *(undefined8 *)(gLawnApp + 0x9f0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_c0,(RtWeakPtrBase *)local_78);
        Board::AddProjectile
                  ((Board *)(fVar23 + fVar22),fVar18 + fVar21,fVar19 + fVar20,uVar15,aRStack_c0,
                   in_x0[2],0);
        nop();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c0)
        ;
        lVar8 = FUN_04d79900(in_x0[2]);
        Projectile::LaunchAtFromProps
                  (this,(SexyVector3 *)&local_b8,(PultProjectileProps *)(lVar8 + 0x2b8));
        uVar4 = FUN_04d76c00(in_x0[2]);
        SpecialBabyBruitProjectile::InitializeValues
                  (local_b8,local_b4,local_b0,(float)local_54,this,uVar4,(int)in_x0[5],
                   *(undefined4 *)((long)in_x0 + 0x2c));
        lVar8 = FUN_04d79900(in_x0[2]);
        fVar18 = *(float *)(lVar8 + 0x314);
        lVar8 = FUN_04d79900(in_x0[2]);
        SpecialBabyBruitProjectile::SetData
                  ((SpecialBabyBruitProjectile *)this,fVar18,*(float *)(lVar8 + 0x318));
        PlantAction::~PlantAction((PlantAction *)&local_80);
        pPVar16 = this;
      }
      else {
LAB_04d7b1ec:
        pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_c8);
        bVar2 = Sexy::RtObject::IsA<GridItem>(pRVar6);
        if (bVar2) {
          pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_c8);
          pGVar11 = Sexy::RtObject::Cast<GridItem>(pRVar6);
          cVar1 = (**(code **)(*(long *)pGVar11 + 0x200))();
          if ((cVar1 == '\0') ||
             (cVar1 = (**(code **)(*(long *)pGVar11 + 0x218))(pGVar11,in_x0[2]), cVar1 == '\0'))
          goto LAB_04d7b23c;
          pcVar17 = *(code **)(*(long *)pGVar11 + 0x238);
          lVar8 = FUN_04d79900(in_x0[2]);
          local_80 = (*pcVar17)(*(undefined4 *)(lVar8 + 0x2c8),pGVar11);
          local_7c = (undefined4)in_d1;
          local_78[0] = (undefined4)in_d2;
          Sexy::SexyVector3::operator=((SexyVector3 *)&local_b8,(SexyVector3 *)&local_80);
        }
        else {
          pfVar9 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           *)in_x0[2]);
          local_b4 = pfVar9[1];
          local_b8 = *pfVar9 + 600.0;
          local_b0 = 0;
        }
LAB_04d7b220:
        fVar19 = (float)in_d2;
        fVar18 = (float)in_d1;
        iVar13 = (int)in_x0[5];
        if (iVar13 == 1) goto LAB_04d7b378;
LAB_04d7b22c:
        fVar23 = (float)in_d2;
        fVar18 = (float)in_d1;
        if (iVar13 == 2) {
          lVar8 = FUN_04d79900(in_x0[2]);
          uVar15 = *(undefined8 *)(lVar8 + 0x70);
          uVar12 = 6;
        }
        else {
          if (iVar13 != 3) goto LAB_04d7b23c;
          lVar8 = FUN_04d79900(in_x0[2]);
          uVar15 = *(undefined8 *)(lVar8 + 0x70);
          uVar12 = 7;
        }
        pPVar10 = (PlantAction *)FUN_04d76c64(uVar15,uVar12);
        PlantAction::PlantAction((PlantAction *)&local_80,pPVar10);
        fVar19 = (float)(**(code **)(*in_x0 + 0x110))(*(undefined4 *)(in_x0[2] + 0xc4));
        local_a8 = fVar19;
        local_a4 = fVar18;
        local_a0 = fVar23;
        pfVar9 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)in_x0[2]);
        fVar22 = *pfVar9;
        fVar21 = pfVar9[1];
        fVar20 = pfVar9[2];
        uVar15 = *(undefined8 *)(gLawnApp + 0x9f0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_c0,(RtWeakPtrBase *)local_78);
        Board::AddProjectile
                  ((Board *)(fVar19 + fVar22),fVar18 + fVar21,fVar23 + fVar20,uVar15,aRStack_c0,
                   in_x0[2],0);
        nop();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c0)
        ;
        lVar8 = FUN_04d79900(in_x0[2]);
        Projectile::LaunchAtFromProps
                  (this_00,(SexyVector3 *)&local_b8,(PultProjectileProps *)(lVar8 + 0x2b8));
        uVar4 = FUN_04d76c00(in_x0[2]);
        SpecialBabyBruitProjectile::InitializeValues
                  (local_b8,local_b4,local_b0,(float)local_54,this_00,uVar4,(int)in_x0[5],
                   *(undefined4 *)((long)in_x0 + 0x2c));
        PlantAction::~PlantAction((PlantAction *)&local_80);
        pPVar16 = this_00;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_c8);
      goto LAB_04d7b560;
    }
LAB_04d7b23c:
    uVar14 = uVar14 + 1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_c8);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonBruit::emptyGridSpaceTester(Sexy::TRect<int>, std::vector<Sexy::Point,
   std::allocator<Sexy::Point> >&) */

void __thiscall
PlantDragonBruit::emptyGridSpaceTester
          (PlantDragonBruit *this,int *param_2,
          vector<Sexy::Point,std::allocator<Sexy::Point>> *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long extraout_x0;
  string *psVar7;
  RtObject *this_00;
  Board *pBVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar4 = operator|(1,2);
  uVar3 = operator|(uVar4,4);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,uVar3,
             param_2);
  lVar5 = FUN_04d79900(*(undefined8 *)(this + 0x10));
  if (lVar5 == 0) {
    bVar1 = false;
  }
  else {
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
    while( true ) {
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
      if (!bVar1) break;
      puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30)
      ;
      this_00 = (RtObject *)*puVar6;
      bVar1 = Sexy::RtObject::IsA<Plant>(this_00);
      if (((((bVar1) && (nop(), extraout_x0 != 0)) &&
           (*(RtObject **)(extraout_x0 + 0xa8) != (RtObject *)0x0)) &&
          (bVar1 = Sexy::RtObject::IsA<PlantLilyPad>(*(RtObject **)(extraout_x0 + 0xa8)), bVar1)) ||
         (cVar2 = ClassRestrictionSet::IsIncluded
                            ((ClassRestrictionSet *)(lVar5 + 0x338),(GameObject *)this_00),
         cVar2 != '\0')) {
        bVar1 = true;
        goto LAB_04d7b9a0;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
    bVar1 = false;
  }
LAB_04d7b9a0:
  psVar7 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string((string *)&local_28,"dragonbabybruit");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar7);
  std::string::~string((string *)&local_28);
  nop();
  pBVar8 = *(Board **)(gLawnApp + 0x9f0);
  lVar5 = FUN_04d76c50(local_20,local_18);
  if (((lVar5 == 0) || (bVar1)) &&
     (cVar2 = (**(code **)(*(long *)this + 1000))(this,*param_2,param_2[1]), cVar2 != '\0')) {
    Sexy::Point::Point((Point *)&local_30,*param_2,param_2[1]);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_28,(RtWeakPtrBase *)aRStack_38);
    cVar2 = Board::CanPlantAt(pBVar8,(Point *)&local_30,(string *)&local_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
    if (cVar2 != '\0') {
      Sexy::Point::Point((Point *)&local_28,*param_2,param_2[1]);
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back(param_3,(Point *)&local_28);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonBruit::findEmptyGridSpacesInRow(int) */

void PlantDragonBruit::findEmptyGridSpacesInRow(int param_1)

{
  int iVar1;
  int in_w1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  int iVar2;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  for (iVar2 = 0; iVar1 = BoardConstants::NUMBER_OF_COLUMNS(), iVar2 < iVar1; iVar2 = iVar2 + 1) {
    Sexy::Insets::Insets(aIStack_28,iVar2,in_w1,1,1);
    Sexy::Insets::Insets(aIStack_18,aIStack_28);
    emptyGridSpaceTester((PlantDragonBruit *)param_1,aIStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonBruit::findEmptyGridSpacesOnBoard() */

void PlantDragonBruit::findEmptyGridSpacesOnBoard(void)

{
  int iVar1;
  int iVar2;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  int iVar3;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  if (0 < iVar1) {
    do {
      for (iVar1 = 0; iVar2 = BoardConstants::NUMBER_OF_ROWS(), iVar1 < iVar2; iVar1 = iVar1 + 1) {
        Sexy::Insets::Insets(aIStack_28,iVar3,iVar1,1,1);
        Sexy::Insets::Insets(aIStack_18,aIStack_28);
        emptyGridSpaceTester();
      }
      iVar3 = iVar3 + 1;
      iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
    } while (iVar3 < iVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonBruit::getBabyBruitSpawnLocation(int, Sexy::Point&, std::vector<Sexy::Point,
   std::allocator<Sexy::Point> >&) */

void __thiscall
PlantDragonBruit::getBabyBruitSpawnLocation
          (PlantDragonBruit *this,int param_1,Point *param_2,vector *param_3)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  BoardTransforms *this_00;
  long lVar6;
  TPoint *pTVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined1 uVar11;
  int local_6c;
  Point aPStack_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  Point aPStack_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (BoardTransforms *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            **)(this + 0x10));
  BoardTransforms::BoardSpaceToGrid(this_00,*(float *)this_00,*(float *)(this_00 + 4));
  if ((param_1 == 0) ||
     ((-1 < param_1 + local_6c &&
      (iVar4 = BoardConstants::NUMBER_OF_ROWS(), param_1 + local_6c < iVar4)))) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
    findEmptyGridSpacesInRow((int)this);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::operator=
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38,(vector *)local_20);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)local_20);
    lVar6 = FUN_04d76c3c(local_38,local_30);
  }
  else {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
    lVar6 = FUN_04d76c3c(local_38,local_30);
  }
  if (lVar6 == 0) {
    findEmptyGridSpacesOnBoard();
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::operator=
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38,(vector *)local_20);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)local_20);
  }
  local_60 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_3);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)param_3);
  bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_60,(__normal_iterator *)&local_58);
  if (bVar2) {
    do {
      pTVar7 = (TPoint *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
      Sexy::Point::Point(aPStack_68,pTVar7);
      uVar9 = 0;
      do {
        uVar1 = local_38;
        iVar4 = (int)uVar9;
        uVar8 = FUN_04d76c3c(local_38,local_30);
        if (uVar8 <= uVar9) {
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
          goto LAB_04d7be48;
        }
        pTVar7 = (TPoint *)FUN_04d76c48(uVar1,uVar9);
        Sexy::Point::Point(aPStack_50,pTVar7);
        cVar3 = Sexy::TPoint<int>::operator==((TPoint<int> *)aPStack_68,(TPoint *)aPStack_50);
        uVar9 = uVar9 + 1;
      } while (cVar3 == '\0');
      local_48 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_38);
      local_40 = __gnu_cxx::
                 __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                 ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                              *)&local_48,(long)iVar4);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)local_20,(__normal_iterator *)&local_40);
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::erase
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38,local_20[0]);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
LAB_04d7be48:
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_60,(__normal_iterator *)&local_58);
    } while (bVar2);
  }
  uVar11 = 0;
  lVar6 = FUN_04d76c3c(local_38,local_30);
  if (lVar6 != 0) {
    iVar5 = rand();
    uVar11 = 1;
    uVar9 = FUN_04d76c3c(local_38,local_30);
    iVar4 = 0;
    if (uVar9 != 0) {
      iVar4 = (int)((ulong)(long)iVar5 / uVar9);
    }
    puVar10 = (undefined8 *)FUN_04d76c48(local_38,(long)(iVar5 - iVar4 * (int)uVar9));
    *(undefined8 *)param_2 = *puVar10;
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonBruit::handleAnimation(DamageInfo const&) */

void PlantDragonBruit::handleAnimation(DamageInfo *param_1)

{
  undefined8 uVar1;
  PlantAnimRig_DragonBruit *pPVar2;
  DamageInfo *in_x1;
  DamageInfo *in_x8;
  float fVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo(in_x8,in_x1);
  fVar3 = (float)FUN_04d76bd4(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0xd8));
  if ((fVar3 - *(float *)(in_x8 + 8) <= 0.0) || (*(long *)(in_x8 + 0x10) == 0x10000000000)) {
    DamageInfo::operator=(param_1 + 0x30,in_x1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(in_x8 + 8) = 0;
    param_1[0x90] = (DamageInfo)0x1;
    pPVar2 = (PlantAnimRig_DragonBruit *)FUN_04d79878(uVar1);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PlantAnimRig_DragonBruit::PlayDeathAnim(pPVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonBruit::TakeDamage(DamageInfo const&) */

void PlantDragonBruit::TakeDamage(DamageInfo *param_1)

{
  long in_x1;
  DamageInfo *pDVar1;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0x91] == (DamageInfo)0x0) {
                    /* WARNING: Load size is inaccurate */
    pDVar1._0_4_ = *(DamageInfo **)(in_x1 + 8);
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo(pDVar1._0_4_,local_70,local_6c,aDStack_68,aPStack_78,0);
    handleAnimation(param_1);
    DamageInfo::~DamageInfo(aDStack_68);
  }
  else {
    PlantMagicbeans::TakeDamage(param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonBruit::TakeSmashAttack(Sexy::RtWeakPtr<Zombie>) */

void __thiscall PlantDragonBruit::TakeSmashAttack(PlantDragonBruit *this,RtWeakPtr *param_2)

{
  char cVar1;
  int iVar2;
  ResourceInfo *pRVar3;
  Point aPStack_d0 [8];
  DamageInfo aDStack_c8 [96];
  undefined4 local_68;
  undefined4 local_64;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::IsInvincible(*(Plant **)(this + 0x10),false);
  if (cVar1 == '\0') {
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0xb0),param_2);
    if (this[0x91] == (PlantDragonBruit)0x0) {
      iVar2 = (**(code **)(*(long *)this + 0x120))(this);
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2);
      Sexy::Point::Point(aPStack_d0,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_68,1.0,0.0);
      DamageInfo::DamageInfo
                ((DamageInfo *)(float)iVar2,local_68,local_64,aDStack_c8,0x10000000000,pRVar3,
                 aPStack_d0,0);
      handleAnimation((DamageInfo *)this);
      DamageInfo::~DamageInfo((DamageInfo *)&local_68);
      DamageInfo::~DamageInfo(aDStack_c8);
    }
    else {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_68,(RtWeakPtrBase *)param_2);
      PlantTupistraStalker::TakeSmashAttack(this,(RtWeakPtr<Sexy::SoundResource> *)&local_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDragonBruit::queueShot(float, Sexy::Point const&) */

void __thiscall PlantDragonBruit::queueShot(PlantDragonBruit *this,float param_1,Point *param_2)

{
  DragonBruitLauncherSubSystem *pDVar1;
  undefined4 in_register_00005004;
  
  pDVar1 = Board::GetGameSubSystem<DragonBruitLauncherSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  DragonBruitLauncherSubSystem::QueueShot
            ((DragonBruitLauncherSubSystem *)CONCAT44(in_register_00005004,param_1),pDVar1,this,
             param_2,this[0x94],*(undefined4 *)(this + 0x2c));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonBruit::launchBabyBruitProjectiles() */

void __thiscall PlantDragonBruit::launchBabyBruitProjectiles(PlantDragonBruit *this)

{
  char cVar1;
  long lVar2;
  int iVar3;
  float fVar4;
  Point aPStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  iVar3 = -1;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  do {
    Sexy::Point::Point(aPStack_28);
    cVar1 = getBabyBruitSpawnLocation(this,iVar3,aPStack_28,(vector *)avStack_20);
    if (cVar1 != '\0') {
      fVar4 = (float)PVZ_T();
      lVar2 = FUN_04d79900(*(undefined8 *)(this + 0x10));
      queueShot(this,fVar4 + *(float *)(lVar2 + 0x330),aPStack_28);
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20,aPStack_28);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 2);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDragonBruit::DoSpecial(int) */

void PlantDragonBruit::DoSpecial(int param_1)

{
  ((PlantDragonBruit *)(ulong)(uint)param_1)[0x94] = (PlantDragonBruit)0x1;
  launchBabyBruitProjectiles((PlantDragonBruit *)(ulong)(uint)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonBruit::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantDragonBruit::onAnimStoppedCallback(PlantDragonBruit *this,string *param_1)

{
  bool bVar1;
  PlantAnimRig *pPVar2;
  PlantAnimRig_DragonBruit *this_00;
  PlantAnimRig_DragonBruit *this_01;
  char *__s;
  undefined4 uVar3;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = (PlantAnimRig *)FUN_04d79878(*(undefined8 *)(this + 0x10));
  if (pPVar2 == (PlantAnimRig *)0x0) goto LAB_04d7da1c;
  bVar1 = std::operator==(param_1,"death");
  if (bVar1) {
    this[0x91] = (PlantDragonBruit)0x1;
    this[0x90] = (PlantDragonBruit)0x0;
    MessageRouter::Post<Plant*,Plant*>
              ((MessageRouter *)gMessageRouter,Message::PlantDied,*(Plant **)(this + 0x10));
    (**(code **)(**(long **)(this + 0x10) + 0x48))(*(long **)(this + 0x10));
    goto LAB_04d7da1c;
  }
  bVar1 = std::operator==(param_1,"attack");
  if (bVar1) {
    this[0x95] = (PlantDragonBruit)0x0;
    goto LAB_04d7da1c;
  }
  bVar1 = std::operator==(param_1,"bianshen_1");
  if ((((bVar1) || (bVar1 = std::operator==(param_1,"bianshen_2"), bVar1)) ||
      (bVar1 = std::operator==(param_1,"bianshen_3"), bVar1)) ||
     (((bVar1 = std::operator==(param_1,"bianshen_1_1"), bVar1 ||
       (bVar1 = std::operator==(param_1,"bbianshen_1_2"), bVar1)) ||
      (bVar1 = std::operator==(param_1,"bianshen_1_3"), bVar1)))) {
LAB_04d7daa4:
    (**(code **)(*(long *)pPVar2 + 0x118))(pPVar2);
  }
  else {
    bVar1 = std::operator==(param_1,"dragonbruit_idle_bs_rt_1");
    if (((bVar1) || (bVar1 = std::operator==(param_1,"dragonbruit_idle_bs_rt_2"), bVar1)) ||
       (bVar1 = std::operator==(param_1,"dragonbruit_idle_bs_rt_3"), bVar1)) {
      launchSpecialBabyBruitProjectiles();
      uVar3 = PVZ_T();
      *(undefined4 *)(this + 0x28) = 0;
      this[0xa0] = (PlantDragonBruit)0x1;
      *(undefined4 *)(this + 0xa8) = uVar3;
      UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      nop();
      PlantAnimRig_DragonBruit::getIdleWeights(this_00,*(int *)(this + 0x28));
      PlantAnimRig::SetState(pPVar2,0xe);
      __s = "dragonbruit_idle_bs_rt_1end";
    }
    else {
      bVar1 = std::operator==(param_1,"dragonbruit_idle_bs_rt_1_1");
      if (((!bVar1) && (bVar1 = std::operator==(param_1,"dragonbruit_idle_bs_rt_2_1"), !bVar1)) &&
         (bVar1 = std::operator==(param_1,"dragonbruit_idle_bs_rt_3_1"), !bVar1)) {
        bVar1 = std::operator==(param_1,"dragonbruit_idle_bs_rt_1_end");
        if ((!bVar1) && (bVar1 = std::operator==(param_1,"dragonbruit_idle_bs_rt_1end"), !bVar1))
        goto LAB_04d7da1c;
        goto LAB_04d7daa4;
      }
      launchSpecialBabyBruitProjectiles();
      uVar3 = PVZ_T();
      *(undefined4 *)(this + 0x28) = 0;
      this[0xa0] = (PlantDragonBruit)0x1;
      *(undefined4 *)(this + 0xa8) = uVar3;
      UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      nop();
      PlantAnimRig_DragonBruit::getIdleWeights(this_01,*(int *)(this + 0x28));
      PlantAnimRig::SetState(pPVar2,0xe);
      __s = "dragonbruit_idle_bs_rt_1_end";
    }
    std::string::string(asStack_68,__s);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PopAnimRig::PlayAndStop((PopAnimRig *)pPVar2,asStack_68,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    nop();
  }
LAB_04d7da1c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonBruit::updateTransformState() */

void __thiscall PlantDragonBruit::updateTransformState(PlantDragonBruit *this)

{
  char cVar1;
  int iVar2;
  PopAnimRig *pPVar3;
  PlantAnimRig_DragonBruit *this_00;
  char *pcVar4;
  undefined4 uVar5;
  float fVar6;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar3 = (PopAnimRig *)FUN_04d79878(*(undefined8 *)(this + 0x10));
  if (pPVar3 == (PopAnimRig *)0x0) goto LAB_04d7ddd0;
  iVar2 = PlantFramework::Rand((PlantFramework *)this,3);
  fVar6 = (float)PVZ_T();
  if ((((*(float *)(this + 0xa4) + *(float *)(this + 0xa8) <= fVar6) &&
       (this[0xa0] != (PlantDragonBruit)0x0)) && (this[0x95] == (PlantDragonBruit)0x0)) &&
     ((cVar1 = (**(code **)(*(long *)this + 0x180))(this), cVar1 == '\0' &&
      (this[0x90] == (PlantDragonBruit)0x0)))) {
    if (iVar2 == 1) {
      if (this[0x92] != (PlantDragonBruit)0x0) {
        pcVar4 = "bianshen_1_1";
        this[0xa0] = (PlantDragonBruit)0x0;
        uVar5 = 2;
        goto LAB_04d7df54;
      }
      pcVar4 = "bianshen_1";
      this[0xa0] = (PlantDragonBruit)0x0;
      uVar5 = 2;
LAB_04d7e050:
      *(undefined4 *)(this + 0x28) = uVar5;
      std::string::string(asStack_68,pcVar4);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      PopAnimRig::PlayAndStop(pPVar3,asStack_68,0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_68);
    }
    else {
      if (iVar2 != 2) {
        if (iVar2 == 0) {
          if (this[0x92] == (PlantDragonBruit)0x0) {
            pcVar4 = "bianshen_3";
          }
          else {
            pcVar4 = "bianshen_1_3";
          }
          *(undefined4 *)(this + 0x28) = 3;
          this[0xa0] = (PlantDragonBruit)0x0;
          std::string::string(asStack_68,pcVar4);
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
          std::string::string(asStack_58,"onAnimStoppedCallback");
          RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                     aRStack_60,asStack_58);
          PopAnimRig::PlayAndStop(pPVar3,asStack_68,0,aRStack_50);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate(aRStack_50);
          std::string::~string(asStack_58);
          nop();
          Sexy::RtId::~RtId(aRStack_60);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
          std::string::~string(asStack_68);
          goto LAB_04d7df0c;
        }
        goto LAB_04d7ddc8;
      }
      if (this[0x92] == (PlantDragonBruit)0x0) {
        pcVar4 = "bianshen_2";
        this[0xa0] = (PlantDragonBruit)0x0;
        uVar5 = 1;
        goto LAB_04d7e050;
      }
      pcVar4 = "bbianshen_1_2";
      this[0xa0] = (PlantDragonBruit)0x0;
      uVar5 = 1;
LAB_04d7df54:
      *(undefined4 *)(this + 0x28) = uVar5;
      std::string::string(asStack_68,pcVar4);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      PopAnimRig::PlayAndStop(pPVar3,asStack_68,0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_68);
    }
LAB_04d7df0c:
    nop();
    UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    nop();
    PlantAnimRig_DragonBruit::getIdleWeights(this_00,*(int *)(this + 0x28));
  }
LAB_04d7ddc8:
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(this + 0x28);
LAB_04d7ddd0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonBruit::updateRigLayers() */

void __thiscall PlantDragonBruit::updateRigLayers(PlantDragonBruit *this)

{
  PlantDragonBruit PVar1;
  PlantAnimRig_DragonBruit *this_00;
  undefined8 *puVar2;
  float fVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = (float)PVZ_T();
  if (*(float *)(this + 0x9c) + *(float *)(this + 0x98) + -3.0 < fVar3) {
    PVar1 = (PlantDragonBruit)Plant::HasCondition(*(undefined8 *)(this + 0x10),0x13);
    this[0x92] = PVar1;
  }
  this_00 = (PlantAnimRig_DragonBruit *)FUN_04d79878(*(undefined8 *)(this + 0x10));
  if (this_00 != (PlantAnimRig_DragonBruit *)0x0) {
    PlantAnimRig_DragonBruit::SetShadowState(this_00,(bool)this[0x92]);
    if (this[0x92] == (PlantDragonBruit)0x0) {
      puVar2 = &k_boostedOffLayerSetName;
    }
    else {
      puVar2 = &k_boostedOnLayerSetName;
    }
    FUN_05475d88(asStack_10,puVar2);
    PlantAnimRig_DragonBruit::ShowBoostedLayerSet(this_00,asStack_10);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDragonBruit::Initialize() */

void __thiscall PlantDragonBruit::Initialize(PlantDragonBruit *this)

{
  undefined4 uVar1;
  
  PlantFramework::Initialize((PlantFramework *)this);
  updateRigLayers(this);
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  this[0x93] = (PlantDragonBruit)0x1;
  this[0xa0] = (PlantDragonBruit)0x1;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0xa8) = uVar1;
  *(undefined4 *)(this + 0xa4) = 0x41a00000;
  return;
}


/* PlantDragonBruit::UpdateActions() */

void __thiscall PlantDragonBruit::UpdateActions(PlantDragonBruit *this)

{
  int iVar1;
  
  updateRigLayers(this);
  iVar1 = FUN_04d76c00(*(undefined8 *)(this + 0x10));
  if (iVar1 != 5) {
    return;
  }
  updateTransformState(this);
  return;
}

