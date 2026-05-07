// Class: NarcissusPlantfoodProjectile


/* NarcissusPlantfoodProjectile::~NarcissusPlantfoodProjectile() */

void __thiscall
NarcissusPlantfoodProjectile::~NarcissusPlantfoodProjectile(NarcissusPlantfoodProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_068182a0;
  *(undefined ***)(this + 0x10) = &PTR__NarcissusPlantfoodProjectile_06818490;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to NarcissusPlantfoodProjectile::~NarcissusPlantfoodProjectile() */

void __thiscall
NarcissusPlantfoodProjectile::~NarcissusPlantfoodProjectile(NarcissusPlantfoodProjectile *this)

{
  ~NarcissusPlantfoodProjectile(this + -0x10);
  return;
}


/* NarcissusPlantfoodProjectile::~NarcissusPlantfoodProjectile() */

void __thiscall
NarcissusPlantfoodProjectile::~NarcissusPlantfoodProjectile(NarcissusPlantfoodProjectile *this)

{
  ~NarcissusPlantfoodProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NarcissusPlantfoodProjectile::~NarcissusPlantfoodProjectile() */

void __thiscall
NarcissusPlantfoodProjectile::~NarcissusPlantfoodProjectile(NarcissusPlantfoodProjectile *this)

{
  ~NarcissusPlantfoodProjectile(this + -0x10);
  return;
}


/* NarcissusPlantfoodProjectile::NarcissusPlantfoodProjectile() */

void __thiscall
NarcissusPlantfoodProjectile::NarcissusPlantfoodProjectile(NarcissusPlantfoodProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_068182a0;
  *(undefined ***)(this + 0x10) = &PTR__NarcissusPlantfoodProjectile_06818490;
  return;
}


/* NarcissusPlantfoodProjectile::StaticNew() */

NarcissusPlantfoodProjectile * NarcissusPlantfoodProjectile::StaticNew(void)

{
  NarcissusPlantfoodProjectile *this;
  
  this = ::operator_new(0x1a8);
  NarcissusPlantfoodProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NarcissusPlantfoodProjectile::StaticClassInit() */

void NarcissusPlantfoodProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"NarcissusPlantfoodProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0424dec0,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NarcissusPlantfoodProjectile::StaticGetClass() */

long * NarcissusPlantfoodProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NarcissusPlantfoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NarcissusPlantfoodProjectile::GetClass() const */

long * NarcissusPlantfoodProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"NarcissusPlantfoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NarcissusPlantfoodProjectile::LaunchPlantfoodBubbles(BoardEntity*) */

void __thiscall
NarcissusPlantfoodProjectile::LaunchPlantfoodBubbles
          (NarcissusPlantfoodProjectile *this,BoardEntity *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long extraout_x0;
  long lVar3;
  Board *pBVar6;
  undefined4 uVar4;
  float fVar5;
  string asStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  wstring awStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_30,"NarcissusBasic");
  fVar5 = 20.0;
  nop();
  uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::ToWString(asStack_30);
  Sexy::RtName::RtName(aRStack_18,awStack_20);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_28,uVar1,0xc,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(awStack_20);
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
                    /* WARNING: Load size is inaccurate */
  pBVar6._0_4_ = *puVar2;
  uVar4 = *(undefined4 *)((long)puVar2 + 4);
  lVar3 = *(long *)(gLawnApp + 0x9f0);
  if (*(char *)(lVar3 + 0x119) != '\0') {
    fVar5 = *(float *)(puVar2 + 1) + 20.0;
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_28);
  uVar1 = Projectile::GetInstigator((Projectile *)this);
  Board::AddProjectile(pBVar6._0_4_,uVar4,fVar5,lVar3,aRStack_18,uVar1,0);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  uVar4 = SharkMinion::getRow((SharkMinion *)param_1);
  uVar4 = Board::MakeRenderOrder(0xdbba1,uVar4,0);
  FUN_0424d1fc(extraout_x0 + 0x50,uVar4);
  FUN_0424d280(extraout_x0 + 0x1b0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NarcissusPlantfoodProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
NarcissusPlantfoodProjectile::OnCollideEntity
          (NarcissusPlantfoodProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  string *psVar2;
  PlantType *this_00;
  RtObject *this_01;
  NarcissusShooterProps *pNVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (BoardEntity *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1), bVar1)) {
    fVar4 = (float)Sexy::Rand(1.0);
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_10,"narcissusshooter");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
    std::string::~string(asStack_10);
    nop();
    this_00 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    this_01 = (RtObject *)PlantType::GetProps(this_00);
    pNVar3 = Sexy::RtObject::Cast<NarcissusShooterProps_const>(this_01);
    if (fVar4 < *(float *)(pNVar3 + 0x2b8)) {
      LaunchPlantfoodBubbles(this,param_1);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  Projectile::OnCollideEntity((Projectile *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

