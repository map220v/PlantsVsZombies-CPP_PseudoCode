// Class: PomegranateJewelerSmallProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PomegranateJewelerSmallProjectile::StaticClassInit() */

void PomegranateJewelerSmallProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"PomegranateJewelerSmallProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04ccfb40,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PomegranateJewelerSmallProjectile::StaticGetClass() */

long * PomegranateJewelerSmallProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PomegranateJewelerSmallProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PomegranateJewelerSmallProjectile::GetClass() const */

long * PomegranateJewelerSmallProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"PomegranateJewelerSmallProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PomegranateJewelerSmallProjectile::fillDamageInfo(DamageInfo&, BoardEntity*) */

void PomegranateJewelerSmallProjectile::fillDamageInfo(DamageInfo *param_1,BoardEntity *param_2)

{
  char cVar1;
  float *pfVar2;
  long lVar3;
  Plant *this;
  long extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::fillDamageInfo(param_1,param_2);
  if (*(uint *)(param_1 + 0x1ac) < 3) {
    pfVar2 = (float *)FUN_04ccda88(*(undefined8 *)(param_1 + 0x1b8),
                                   (long)(int)*(uint *)(param_1 + 0x1ac));
    *(float *)(param_2 + 8) = *pfVar2 * *(float *)(param_1 + 0x1b0);
  }
  lVar3 = Projectile::GetInstigator((Projectile *)param_1);
  if (lVar3 != 0) {
    Projectile::GetInstigator((Projectile *)param_1);
    nop();
    Plant::GetProps();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (*(code **)(*(long *)this + 0x1f8) == Plant::IsInPlantFoodState) {
      cVar1 = Plant::IsInPlantFoodState(this);
    }
    else {
      cVar1 = (**(code **)(*(long *)this + 0x1f8))();
    }
    if (cVar1 != '\0') {
      *(float *)(param_2 + 8) = *(float *)(param_2 + 8) * *(float *)(extraout_x0 + 0x2d0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PomegranateJewelerSmallProjectile::PomegranateJewelerSmallProjectile() */

void __thiscall
PomegranateJewelerSmallProjectile::PomegranateJewelerSmallProjectile
          (PomegranateJewelerSmallProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined4 *)(this + 0x1a8) = 4;
  *(undefined ***)this = &PTR_GetClass_0699d900;
  *(undefined ***)(this + 0x10) = &PTR__PomegranateJewelerSmallProjectile_0699daf0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b8));
  return;
}


/* PomegranateJewelerSmallProjectile::StaticNew() */

PomegranateJewelerSmallProjectile * PomegranateJewelerSmallProjectile::StaticNew(void)

{
  PomegranateJewelerSmallProjectile *this;
  
  this = ::operator_new(0x1d0);
  PomegranateJewelerSmallProjectile(this);
  return this;
}


/* PomegranateJewelerSmallProjectile::~PomegranateJewelerSmallProjectile() */

void __thiscall
PomegranateJewelerSmallProjectile::~PomegranateJewelerSmallProjectile
          (PomegranateJewelerSmallProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0699d900;
  *(undefined ***)(this + 0x10) = &PTR__PomegranateJewelerSmallProjectile_0699daf0;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x1b8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to PomegranateJewelerSmallProjectile::~PomegranateJewelerSmallProjectile() */

void __thiscall
PomegranateJewelerSmallProjectile::~PomegranateJewelerSmallProjectile
          (PomegranateJewelerSmallProjectile *this)

{
  ~PomegranateJewelerSmallProjectile(this + -0x10);
  return;
}


/* PomegranateJewelerSmallProjectile::~PomegranateJewelerSmallProjectile() */

void __thiscall
PomegranateJewelerSmallProjectile::~PomegranateJewelerSmallProjectile
          (PomegranateJewelerSmallProjectile *this)

{
  ~PomegranateJewelerSmallProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PomegranateJewelerSmallProjectile::~PomegranateJewelerSmallProjectile() */

void __thiscall
PomegranateJewelerSmallProjectile::~PomegranateJewelerSmallProjectile
          (PomegranateJewelerSmallProjectile *this)

{
  ~PomegranateJewelerSmallProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PomegranateJewelerSmallProjectile::InitialSetPosition(float, float, float) */

void __thiscall
PomegranateJewelerSmallProjectile::InitialSetPosition
          (PomegranateJewelerSmallProjectile *this,float param_1,float param_2,float param_3)

{
  vector<float,std::allocator<float>> *pvVar1;
  long lVar2;
  long extraout_x0;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  float local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::InitialSetPosition((Projectile *)this,param_1,param_2,param_3);
  lVar2 = Projectile::GetInstigator((Projectile *)this);
  if (lVar2 == 0) {
    pvVar1 = (vector<float,std::allocator<float>> *)(this + 0x1b8);
    *(undefined4 *)(this + 0x1b0) = 0x3f4ccccd;
    std::vector<float,std::allocator<float>>::clear(pvVar1);
    local_10[0] = 100.0;
    std::vector<float,std::allocator<float>>::push_back(pvVar1,local_10);
    local_10[0] = 150.0;
    std::vector<float,std::allocator<float>>::push_back(pvVar1,local_10);
    local_10[0] = 200.0;
    std::vector<float,std::allocator<float>>::push_back(pvVar1,local_10);
  }
  else {
    pvVar1 = (vector<float,std::allocator<float>> *)(this + 0x1b8);
    Projectile::GetInstigator((Projectile *)this);
    nop();
    Plant::GetProps();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    uVar5 = *(undefined8 *)(extraout_x0 + 0x70);
    *(undefined4 *)(this + 0x1b0) = *(undefined4 *)(extraout_x0 + 0x2d4);
    lVar2 = FUN_04ccda74(uVar5,0);
    lVar3 = FUN_04ccda74(uVar5,1);
    lVar4 = FUN_04ccda74(uVar5,2);
    std::vector<float,std::allocator<float>>::clear(pvVar1);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar2 + 8));
    std::vector<float,std::allocator<float>>::push_back(pvVar1,(float *)(lVar2 + 0x18));
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar3 + 8));
    std::vector<float,std::allocator<float>>::push_back(pvVar1,(float *)(lVar2 + 0x18));
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar4 + 8));
    std::vector<float,std::allocator<float>>::push_back(pvVar1,(float *)(lVar2 + 0x18));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

