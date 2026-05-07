// Class: PlantBitPeashooter


/* PlantBitPeashooter::Initialize() */

void __thiscall PlantBitPeashooter::Initialize(PlantBitPeashooter *this)

{
  PlantFramework::Initialize((PlantFramework *)this);
  *(undefined4 *)(this + 0x44) = 0;
  this[0x4c] = (PlantBitPeashooter)0x0;
  *(undefined4 *)(this + 0x54) = 10;
  *(undefined4 *)(this + 0x48) = 0x3f800000;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBitPeashooter::StaticClassInit() */

void PlantBitPeashooter::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantBitPeashooter");
    (*pcVar2)(plVar1,asStack_10,FUN_03afa434,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBitPeashooter::StaticGetClass() */

long * PlantBitPeashooter::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantBitPeashooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBitPeashooter::GetClass() const */

long * PlantBitPeashooter::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantBitPeashooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBitPeashooter::PlantBitPeashooter() */

void __thiscall PlantBitPeashooter::PlantBitPeashooter(PlantBitPeashooter *this)

{
  undefined4 uVar1;
  
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_06726e10;
  ZombossSkyCityLineShoot::ZombossSkyCityLineShoot((ZombossSkyCityLineShoot *)(this + 0x28));
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x50) = uVar1;
  return;
}


/* PlantBitPeashooter::StaticNew() */

PlantBitPeashooter * PlantBitPeashooter::StaticNew(void)

{
  PlantBitPeashooter *this;
  
  this = ::operator_new(0x58);
  PlantBitPeashooter(this);
  return this;
}


/* PlantBitPeashooter::GetProjectIndex() */

undefined4 __thiscall PlantBitPeashooter::GetProjectIndex(PlantBitPeashooter *this)

{
  undefined4 uVar1;
  float fVar2;
  
  uVar1 = 0;
  if (this[0x4c] != (PlantBitPeashooter)0x0) {
    fVar2 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    if ((0.98 < fVar2) || (0.8 < fVar2)) {
      return 5;
    }
    uVar1 = 4;
    if ((fVar2 <= 0.6) && ((uVar1 = 3, fVar2 <= 0.4 && (uVar1 = 2, fVar2 <= 0.2)))) {
      uVar1 = 1;
    }
  }
  return uVar1;
}


/* PlantBitPeashooter::SetArtifactPraram(int, float, bool, int) */

void __thiscall
PlantBitPeashooter::SetArtifactPraram
          (PlantBitPeashooter *this,int param_1,float param_2,bool param_3,int param_4)

{
  *(float *)(this + 0x48) = param_2;
  *(int *)(this + 0x44) = param_1;
  this[0x4c] = (PlantBitPeashooter)param_3;
  *(int *)(this + 0x54) = param_4;
  return;
}


/* PlantBitPeashooter::~PlantBitPeashooter() */

void __thiscall PlantBitPeashooter::~PlantBitPeashooter(PlantBitPeashooter *this)

{
  *(undefined ***)this = &PTR_GetClass_06726e10;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantBitPeashooter::~PlantBitPeashooter() */

void __thiscall PlantBitPeashooter::~PlantBitPeashooter(PlantBitPeashooter *this)

{
  ~PlantBitPeashooter(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBitPeashooter::UpdatePlantfood() */

void __thiscall PlantBitPeashooter::UpdatePlantfood(PlantBitPeashooter *this)

{
  int iVar1;
  float *pfVar2;
  long lVar3;
  ulong uVar4;
  PlantAction *pPVar5;
  ulong uVar6;
  Plant *pPVar7;
  float fVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  EATextSquish::Vec3::Vec3(aVStack_18,*pfVar2,pfVar2[1],pfVar2[2]);
  iVar1 = GetProjectIndex(this);
  uVar6 = (ulong)iVar1;
  Plant::GetProps();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  uVar4 = FUN_03afa2dc(*(undefined8 *)(lVar3 + 0x70),*(undefined8 *)(lVar3 + 0x78));
  if (uVar4 <= uVar6) {
    uVar6 = 0;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  pPVar7 = *(Plant **)(this + 0x10);
  fVar8 = *(float *)(pPVar7 + 0xc4);
  Plant::GetProps();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  pPVar5 = (PlantAction *)FUN_03afa2f0(*(undefined8 *)(lVar3 + 0x70),uVar6);
  PeashooterPlantfood::Update
            ((PeashooterPlantfood *)(this + 0x28),pPVar7,(SexyVector3 *)aVStack_18,fVar8,pPVar5);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBitPeashooter::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantBitPeashooter::Fire(PlantBitPeashooter *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  float *pfVar5;
  ulong uVar6;
  undefined8 uVar7;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  RealObject *this_00;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_1 + 0x180))();
  if (cVar1 == '\0') {
    iVar2 = GetProjectIndex(param_1);
    uVar6 = (ulong)iVar2;
    Plant::GetProps();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    uVar4 = FUN_03afa2dc(*(undefined8 *)(lVar3 + 0x70),*(undefined8 *)(lVar3 + 0x78));
    if (uVar4 <= uVar6) {
      uVar6 = 0;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Plant::GetProps();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    lVar3 = FUN_03afa2f0(*(undefined8 *)(lVar3 + 0x70),uVar6);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    this = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             **)(param_1 + 0x10);
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this);
    fVar11 = *(float *)(this + 0xc4);
    fVar13 = *pfVar5;
    fVar12 = pfVar5[2];
    fVar9 = *(float *)(lVar3 + 0x6c);
    fVar8 = *(float *)(lVar3 + 0x68);
    fVar10 = pfVar5[1];
    uVar7 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)(lVar3 + 8));
    lVar3 = Board::AddProjectile
                      ((Board *)(fVar13 + fVar8 * fVar11),fVar10,fVar12 - fVar11 * fVar9,uVar7,
                       aRStack_10,*(undefined8 *)(param_1 + 0x10),0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    uVar7 = FUN_03afa294(*(undefined8 *)(lVar3 + 0xe0));
    uVar7 = operator|(uVar7,0x2000);
    FUN_03afa298((undefined8 *)(lVar3 + 0xe0),uVar7);
    fVar8 = (float)FUN_03afa2a0(*(undefined4 *)(lVar3 + 0xd8));
    FUN_03afa2a4(fVar8 + (float)*(int *)(param_1 + 0x44),(undefined4 *)(lVar3 + 0xd8));
    this_00 = *(RealObject **)(param_1 + 0x10);
    std::string::string((string *)aRStack_10,"Play_Repeater_Cannon_Fire");
    RealObject::PlayPositionalSound(this_00,(string *)aRStack_10,0.0);
    std::string::~string((string *)aRStack_10);
    nop();
  }
  else {
    lVar3 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}


/* PlantBitPeashooter::UpdateActions() */

void __thiscall PlantBitPeashooter::UpdateActions(PlantBitPeashooter *this)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x50) < fVar1) {
    Plant::KillPlant(*(Plant **)(this + 0x10),1,0,1);
    uVar2 = PVZ_EOT();
    *(undefined4 *)(this + 0x50) = uVar2;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBitPeashooter::ApplyPlantfood() */

void __thiscall PlantBitPeashooter::ApplyPlantfood(PlantBitPeashooter *this)

{
  long *plVar1;
  long lVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  (**(code **)(*plVar1 + 0x80))(0x41200000);
  FUN_03afa2ac(aRStack_10,*(undefined8 *)(this + 0x10));
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  ZombossSkyCityLineShoot::Start
            ((ZombossSkyCityLineShoot *)(this + 0x28),*(float *)(lVar2 + 0x38),*(int *)(this + 0x54)
             ,(float)*(int *)(this + 0x44));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBitPeashooter::CancelPlantfood() */

void __thiscall PlantBitPeashooter::CancelPlantfood(PlantBitPeashooter *this)

{
  long *plVar1;
  float fVar2;
  
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  (**(code **)(*plVar1 + 0x88))();
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x50) = fVar2 + *(float *)(this + 0x48);
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  return;
}

