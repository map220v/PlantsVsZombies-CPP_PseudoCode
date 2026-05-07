// Class: PlantWintersweet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWintersweet::StaticClassInit() */

void PlantWintersweet::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantWintersweet");
    (*pcVar2)(plVar1,asStack_10,FUN_040f2894,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWintersweet::StaticGetClass() */

long * PlantWintersweet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantWintersweet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWintersweet::GetClass() const */

long * PlantWintersweet::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantWintersweet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWintersweet::PlantWintersweet() */

void __thiscall PlantWintersweet::PlantWintersweet(PlantWintersweet *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067e0110;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  return;
}


/* PlantWintersweet::StaticNew() */

PlantWintersweet * PlantWintersweet::StaticNew(void)

{
  PlantWintersweet *this;
  
  this = ::operator_new(0x50);
  PlantWintersweet(this);
  return this;
}


/* PlantWintersweet::~PlantWintersweet() */

void __thiscall PlantWintersweet::~PlantWintersweet(PlantWintersweet *this)

{
  *(undefined ***)this = &PTR_GetClass_067e0110;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantWintersweet::~PlantWintersweet() */

void __thiscall PlantWintersweet::~PlantWintersweet(PlantWintersweet *this)

{
  ~PlantWintersweet(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWintersweet::ApplyPlantfood() */

void __thiscall PlantWintersweet::ApplyPlantfood(PlantWintersweet *this)

{
  PlantAnimRig_Wintersweet *this_00;
  undefined4 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  uVar1 = PVZ_EOT();
  this[0x48] = (PlantWintersweet)0x0;
  *(undefined4 *)(this + 0x44) = uVar1;
  this_00 = (PlantAnimRig_Wintersweet *)FUN_040f2d8c(*(undefined8 *)(this + 0x10));
  std::string::string(asStack_10,"red");
  PlantAnimRig_Wintersweet::updateIdleAnimState(this_00,asStack_10,4);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWintersweet::setState(unsigned int) */

void __thiscall PlantWintersweet::setState(PlantWintersweet *this,uint param_1)

{
  PlantAnimRig_Wintersweet *pPVar1;
  long lVar2;
  char *__s;
  float fVar3;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(uint *)(*(long *)(this + 0x10) + 200) != param_1) {
    *(uint *)(*(long *)(this + 0x10) + 200) = param_1;
    if (param_1 == 0xf) {
      pPVar1 = (PlantAnimRig_Wintersweet *)FUN_040f2d8c();
      __s = "grow01";
    }
    else {
      if (param_1 != 0x10) {
        if (param_1 == 0xc) {
          pPVar1 = (PlantAnimRig_Wintersweet *)FUN_040f2d8c();
          std::string::string(asStack_58,"");
          PlantAnimRig_Wintersweet::updateIdleAnimState(pPVar1,asStack_58,0);
          std::string::~string(asStack_58);
          nop();
          fVar3 = (float)PVZ_T();
          FUN_040f18c0(asStack_58,*(undefined8 *)(this + 0x10));
          lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
          lVar2 = FUN_040f18f8(*(undefined8 *)(lVar2 + 0x70));
          *(float *)(this + 0x44) = fVar3 + *(float *)(lVar2 + 0x24);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
          this[0x48] = (PlantWintersweet)0x1;
        }
        goto LAB_040f33c8;
      }
      pPVar1 = (PlantAnimRig_Wintersweet *)FUN_040f2d8c();
      __s = "grow02";
    }
    std::string::string(asStack_58,__s);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_60,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
               asStack_60);
    PlantAnimRig_Wintersweet::playGrowAnim(pPVar1,asStack_58,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_60);
    nop();
    Sexy::RtId::~RtId(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_58);
    nop();
  }
LAB_040f33c8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWintersweet::UpdateActions() */

void __thiscall PlantWintersweet::UpdateActions(PlantWintersweet *this)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x48] != (PlantWintersweet)0x0) {
    FUN_040f18c0(aRStack_10,*(undefined8 *)(this + 0x10));
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    lVar1 = FUN_040f18f8(*(undefined8 *)(lVar1 + 0x70));
    fVar4 = *(float *)(lVar1 + 0x24);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    fVar3 = *(float *)(this + 0x44);
    fVar2 = (float)PVZ_T();
    if (fVar3 - fVar2 < fVar4 * 0.33333334) {
      setState(this,0x10);
    }
    else {
      fVar3 = *(float *)(this + 0x44);
      fVar2 = (float)PVZ_T();
      if (fVar3 - fVar2 < fVar4 * 0.6666667) {
        setState(this,0xf);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWintersweet::CancelPlantfood() */

void __thiscall PlantWintersweet::CancelPlantfood(PlantWintersweet *this)

{
  long lVar1;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  *(undefined4 *)(this + 0x40) = 0;
  setState(this,0xc);
  fVar2 = (float)PVZ_T();
  FUN_040f18c0(aRStack_10,*(undefined8 *)(this + 0x10));
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  lVar1 = FUN_040f18f8(*(undefined8 *)(lVar1 + 0x70));
  *(float *)(this + 0x44) = fVar2 + *(float *)(lVar1 + 0x24);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  lVar1 = ___stack_chk_guard;
  this[0x48] = (PlantWintersweet)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWintersweet::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantWintersweet::onAnimStoppedCallback(PlantWintersweet *this,string *param_1)

{
  bool bVar1;
  PlantAnimRig_Wintersweet *pPVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"grow01");
  if (bVar1) {
    plVar3 = (long *)FUN_040f2d8c(*(undefined8 *)(this + 0x10));
    (**(code **)(*plVar3 + 0x118))();
    pPVar2 = (PlantAnimRig_Wintersweet *)FUN_040f2d8c(*(undefined8 *)(this + 0x10));
    std::string::string(asStack_10,"red");
    PlantAnimRig_Wintersweet::updateIdleAnimState(pPVar2,asStack_10,3);
    std::string::~string(asStack_10);
    nop();
  }
  else {
    bVar1 = std::operator==(param_1,"grow02");
    if (bVar1) {
      plVar3 = (long *)FUN_040f2d8c(*(undefined8 *)(this + 0x10));
      (**(code **)(*plVar3 + 0x118))();
      pPVar2 = (PlantAnimRig_Wintersweet *)FUN_040f2d8c(*(undefined8 *)(this + 0x10));
      std::string::string(asStack_10,"red");
      PlantAnimRig_Wintersweet::updateIdleAnimState(pPVar2,asStack_10,4);
      std::string::~string(asStack_10);
      nop();
      uVar5 = PVZ_EOT();
      this[0x48] = (PlantWintersweet)0x0;
      *(undefined4 *)(this + 0x44) = uVar5;
      setState(this,1);
    }
    else {
      bVar1 = std::operator==(param_1,"grow03");
      if (bVar1) {
        setState(this,0x10);
        pPVar2 = (PlantAnimRig_Wintersweet *)FUN_040f2d8c(*(undefined8 *)(this + 0x10));
        std::string::string(asStack_10,"white");
        PlantAnimRig_Wintersweet::updateIdleAnimState(pPVar2,asStack_10,4);
        std::string::~string(asStack_10);
        nop();
        lVar4 = *(long *)(this + 0x10);
        uVar5 = PVZ_T();
        *(undefined4 *)(lVar4 + 300) = uVar5;
        this[0x49] = (PlantWintersweet)0x1;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWintersweet::normalFire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantWintersweet::normalFire
          (PlantWintersweet *this,RtWeakPtrBase *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  Projectile *this_00;
  PlantAnimRig_Wintersweet *pPVar4;
  undefined8 uVar5;
  int *piVar6;
  WintersweetProjectile *this_01;
  WintersweetProjectile *this_02;
  Plant *pPVar7;
  RealObject *this_03;
  long lVar8;
  float fVar9;
  float fVar10;
  RtMixedPtr aRStack_78 [8];
  RtId aRStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_03 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_60,"Play_Plant_StarFruit_Attack");
  RealObject::PlayPositionalSound(this_03,asStack_60,0.0);
  std::string::~string(asStack_60);
  nop();
  cVar1 = (**(code **)(*(long *)this + 0x180))(this);
  if (cVar1 != '\0') {
    iVar2 = 0;
    this_00 = (Projectile *)0x0;
    cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    iVar3 = *(int *)(this + 0x40);
    uVar5 = *(undefined8 *)(this + 0x28);
    *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0;
    piVar6 = (int *)FUN_040f18f0(uVar5,(long)iVar3);
    if (0 < *piVar6) {
      do {
        pPVar7 = *(Plant **)(this + 0x10);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)asStack_60,param_2);
        this_00 = (Projectile *)Plant::Fire(pPVar7,asStack_60,param_3,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60)
        ;
        fVar10 = (float)RandRangeFloat(-30.0,30.0);
        fVar10 = (float)Sexy::SexyMath::DegToRad(fVar10);
        fVar9 = cosf(fVar10);
        fVar10 = sinf(fVar10);
        EATextSquish::Vec3::Vec3((Vec3 *)asStack_60,fVar9 * 333.0,fVar10 * 333.0,0.0);
        Projectile::SetVelocity(this_00,(SexyVector3 *)asStack_60);
        if ((cVar1 != '\0') && (iVar3 = RandRangeInt(0,1), iVar3 == 1)) {
          nop();
          WintersweetProjectile::setLevelAttack(this_01,true);
        }
        iVar2 = iVar2 + 1;
        iVar3 = *(int *)(this + 0x40);
        piVar6 = (int *)FUN_040f18f0(*(undefined8 *)(this + 0x28),(long)iVar3);
      } while (iVar2 < *piVar6);
    }
    *(int *)(this + 0x40) = iVar3 + 1;
    goto LAB_040f3cf4;
  }
  lVar8 = *(long *)(this + 0x10);
  iVar2 = FUN_040f18b8(*(undefined4 *)(lVar8 + 0x50));
  if (iVar2 < 2) {
LAB_040f3ca8:
    setState(this,0xc);
  }
  else {
    if (iVar2 == 2) {
      lVar8 = FUN_040f2e14(lVar8);
      fVar10 = *(float *)(lVar8 + 0x2b8);
    }
    else {
      lVar8 = FUN_040f2e14(lVar8);
      fVar10 = *(float *)(lVar8 + 700);
    }
    fVar9 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    if (fVar10 <= fVar9) goto LAB_040f3ca8;
    pPVar4 = (PlantAnimRig_Wintersweet *)FUN_040f2d8c(*(undefined8 *)(this + 0x10));
    std::string::string(asStack_60,"grow03");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
    std::string::string(asStack_68,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_70,
               asStack_68);
    PlantAnimRig_Wintersweet::playGrowAnim(pPVar4,asStack_60,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_68);
    nop();
    Sexy::RtId::~RtId(aRStack_70);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
    std::string::~string(asStack_60);
    nop();
  }
  pPVar7 = *(Plant **)(this + 0x10);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_60,param_2);
  this_00 = (Projectile *)Plant::Fire(pPVar7,asStack_60,param_3,param_4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
  if (this[0x49] != (PlantWintersweet)0x0) {
    nop();
    WintersweetProjectile::setLevelAttack(this_02,true);
  }
  this[0x49] = (PlantWintersweet)0x0;
LAB_040f3cf4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWintersweet::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantWintersweet::Fire
          (PlantWintersweet *this,RtWeakPtrBase *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  uVar1 = normalFire(this,aRStack_10,param_3,param_4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWintersweet::separatePlantfoodFlower() */

void __thiscall PlantWintersweet::separatePlantfoodFlower(PlantWintersweet *this)

{
  char cVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    lVar2 = FUN_040f2e14(*(undefined8 *)(this + 0x10));
    iVar4 = *(int *)(lVar2 + 0x2c0);
  }
  else {
    lVar2 = FUN_040f2e14(*(undefined8 *)(this + 0x10));
    iVar4 = *(int *)(lVar2 + 0x2c4);
  }
  local_c = iVar4 / 9;
  std::vector<int,std::allocator<int>>::resize
            ((vector<int,std::allocator<int>> *)(this + 0x28),9,&local_c);
  iVar4 = iVar4 + local_c * -9;
  if (0 < iVar4) {
    uVar6 = *(undefined8 *)(this + 0x28);
    lVar2 = 8;
    do {
      lVar5 = lVar2 + -1;
      piVar3 = (int *)FUN_040f18f0(uVar6,lVar2);
      *piVar3 = *piVar3 + 1;
      lVar2 = lVar5;
    } while (lVar5 != 7 - (ulong)(iVar4 - 1));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWintersweet::Initialize() */

void __thiscall PlantWintersweet::Initialize(PlantWintersweet *this)

{
  undefined4 uVar1;
  
  PlantFramework::Initialize((PlantFramework *)this);
  *(undefined4 *)(this + 0x40) = 0;
  this[0x48] = (PlantWintersweet)0x0;
  uVar1 = PVZ_EOT();
  this[0x49] = (PlantWintersweet)0x0;
  *(undefined4 *)(this + 0x44) = uVar1;
  separatePlantfoodFlower(this);
  return;
}

