// Class: PlantPoisonPeashooter


/* PlantPoisonPeashooter::Initialize() */

void __thiscall PlantPoisonPeashooter::Initialize(PlantPoisonPeashooter *this)

{
  PlantFramework::Initialize((PlantFramework *)this);
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPoisonPeashooter::StaticClassInit() */

void PlantPoisonPeashooter::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantPoisonPeashooter");
    (*pcVar2)(plVar1,asStack_10,FUN_04cca288,0xd8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPoisonPeashooter::StaticGetClass() */

long * PlantPoisonPeashooter::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantPoisonPeashooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPoisonPeashooter::GetClass() const */

long * PlantPoisonPeashooter::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantPoisonPeashooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPoisonPeashooter::~PlantPoisonPeashooter() */

void __thiscall PlantPoisonPeashooter::~PlantPoisonPeashooter(PlantPoisonPeashooter *this)

{
  *(undefined ***)this = &PTR_GetClass_0699ba70;
  PoisonPeashooterCounter::~PoisonPeashooterCounter((PoisonPeashooterCounter *)(this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantPoisonPeashooter::~PlantPoisonPeashooter() */

void __thiscall PlantPoisonPeashooter::~PlantPoisonPeashooter(PlantPoisonPeashooter *this)

{
  ~PlantPoisonPeashooter(this);
  AK::FreeHook(this);
  return;
}


/* PlantPoisonPeashooter::PlantPoisonPeashooter() */

void __thiscall PlantPoisonPeashooter::PlantPoisonPeashooter(PlantPoisonPeashooter *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_0699ba70;
  PoisonPeashooterCounter::PoisonPeashooterCounter((PoisonPeashooterCounter *)(this + 0x28));
  return;
}


/* PlantPoisonPeashooter::StaticNew() */

PlantPoisonPeashooter * PlantPoisonPeashooter::StaticNew(void)

{
  PlantPoisonPeashooter *this;
  
  this = ::operator_new(0xd8);
  PlantPoisonPeashooter(this);
  return this;
}


/* PlantPoisonPeashooter::ApplyPlantfood() */

void __thiscall PlantPoisonPeashooter::ApplyPlantfood(PlantPoisonPeashooter *this)

{
  long *plVar1;
  UIEasyButtonWidget *this_00;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  *(undefined4 *)(this_00 + 200) = 0;
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
  (**(code **)(*plVar1 + 0x88))();
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPoisonPeashooter::LaunchLevel5Projectile(PlantAction, Sexy::SexyVector3,
   PoisonPeashooterProps const*) */

void PlantPoisonPeashooter::LaunchLevel5Projectile
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
               PlantAction *param_5,long param_6)

{
  PlantFoodCounter *this;
  long lVar1;
  long *plVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_88 [8];
  PlantAction aPStack_80 [120];
  long local_8;
  
  this = (PlantFoodCounter *)(param_4 + 0x28);
  local_8 = ___stack_chk_guard;
  plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_4 + 0x10));
  (**(code **)(*plVar2 + 0x80))(0x41200000);
  PlantFoodCounter::Start(this,*(float *)(param_6 + 700),*(int *)(param_6 + 0x2c0));
  PoisonPeashooterCounter::SetOffset(param_1,param_2,param_3,this);
  PlantAction::PlantAction(aPStack_80,param_5);
  PoisonPeashooterCounter::SetPlantAction((PoisonPeashooterCounter *)this,aPStack_80);
  PlantAction::~PlantAction(aPStack_80);
  FUN_04cc6fa8(param_4 + 200,param_6);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aPStack_80,(RtWeakPtrBase *)aRStack_88);
  PoisonPeashooterCounter::SetPlant((PoisonPeashooterCounter *)this,aPStack_80);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_80);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(*(long *)(param_4 + 0x10) + 200) = 1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPoisonPeashooter::UpdateActions() */

void __thiscall PlantPoisonPeashooter::UpdateActions(PlantPoisonPeashooter *this)

{
  char cVar1;
  long *plVar2;
  UIEasyButtonWidget *this_00;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  if (*(int *)(this_00 + 200) == 1) {
    cVar1 = FUN_04cc6f9c(*(undefined4 *)(this + 0x38),*(undefined4 *)(this + 0x3c));
    if (cVar1 == '\0') {
      PoisonPeashooterCounter::Update((PoisonPeashooterCounter *)(this + 0x28));
      return;
    }
    *(undefined4 *)(this_00 + 200) = 0;
    plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
    (**(code **)(*plVar2 + 0x88))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPoisonPeashooter::firePlantFoodProjectile() */

void PlantPoisonPeashooter::firePlantFoodProjectile(void)

{
  char cVar1;
  long in_x0;
  long lVar2;
  long lVar3;
  float *pfVar4;
  long lVar5;
  RtObject *pRVar6;
  PlantPoisonPeashooterPlantFoodAvatarProjectile *this;
  undefined8 *puVar7;
  long *plVar8;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float in_s1;
  float fVar12;
  float in_s2;
  float fVar13;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_18;
  float local_14;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_04ccad58(*(undefined8 *)(in_x0 + 0x10));
  lVar3 = FUN_04cc6fc8(*(undefined8 *)(lVar2 + 0x70),1);
  plVar8 = *(long **)(*(long *)(in_x0 + 0x10) + 0xa8);
  fVar10 = (float)(**(code **)(*plVar8 + 0x110))(0x3f800000,plVar8,lVar3);
  this_00 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(in_x0 + 0x10);
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(this_00);
  fVar11 = *pfVar4;
  fVar12 = pfVar4[1];
  fVar13 = 0.0;
  if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
    fVar13 = pfVar4[2];
  }
  cVar1 = Plant::GetAvatarEnable((Plant *)this_00);
  if (cVar1 == '\0') {
    uVar9 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)(lVar3 + 8));
    pRVar6 = (RtObject *)
             Board::AddProjectile
                       ((Board *)(fVar10 + fVar11),in_s1 + fVar12,fVar13 + in_s2,uVar9,
                        (RtWeakPtr<Sexy::SoundResource> *)&local_18,*(undefined8 *)(in_x0 + 0x10),0)
    ;
    this = (PlantPoisonPeashooterPlantFoodAvatarProjectile *)
           Sexy::RtObject::Cast<PlantPoisonPeashooterPlantFoodProjectile>(pRVar6);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  }
  else {
    lVar5 = FUN_04cc6fc8(*(undefined8 *)(lVar2 + 0x70),3);
    uVar9 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)(lVar5 + 8));
    pRVar6 = (RtObject *)
             Board::AddProjectile
                       ((Board *)(fVar10 + fVar11),in_s1 + fVar12,fVar13 + in_s2,uVar9,
                        (RtWeakPtr<Sexy::SoundResource> *)&local_18,*(undefined8 *)(in_x0 + 0x10),0)
    ;
    this = Sexy::RtObject::Cast<PlantPoisonPeashooterPlantFoodAvatarProjectile>(pRVar6);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  }
  fVar10 = *(float *)(lVar2 + 0x2d8);
  fVar11 = *(float *)(lVar2 + 0x2dc);
  PlantPoisonPeashooterPlantFoodProjectile::InitializeValues
            (*(float *)(lVar2 + 0x2d4),fVar10,fVar11,*(float *)(lVar2 + 0x2e0),
             *(float *)(lVar2 + 0x2e4),*(float *)(lVar2 + 0x2e8),*(float *)(lVar2 + 0x2ec),
             *(float *)(lVar2 + 0x2f0),*(float *)(lVar2 + 0x2f4),*(float *)(lVar2 + 0x2f8));
  fVar12 = *(float *)(lVar3 + 0x30);
  if (fVar12 != 0.0) {
    puVar7 = (undefined8 *)Projectile::GetVelocity((Projectile *)this);
    local_28 = *puVar7;
    local_20 = *(undefined4 *)(puVar7 + 1);
    fVar13 = (float)DVec3::getLength((DVec3 *)&local_28);
    local_18 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_28,fVar12 / fVar13);
    local_14 = fVar10;
    local_10 = fVar11;
    Projectile::SetVelocity((Projectile *)this,(SexyVector3 *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPoisonPeashooter::firePoisonPeaProjectile() */

void PlantPoisonPeashooter::firePoisonPeaProjectile(void)

{
  char cVar1;
  int iVar2;
  long in_x0;
  long lVar3;
  long lVar4;
  float *pfVar5;
  RtObject *this;
  PlantPoisonPeashooterProjectile *this_00;
  undefined8 *puVar6;
  PopAnimRig *pPVar7;
  long *plVar8;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  long lVar9;
  float fVar10;
  float fVar11;
  float in_s1;
  float fVar12;
  float in_s2;
  float fVar13;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_48;
  float local_44;
  float local_40;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_04ccad58(*(undefined8 *)(in_x0 + 0x10));
  lVar4 = FUN_04cc6fc8(*(undefined8 *)(lVar3 + 0x70),0);
  plVar8 = *(long **)(*(long *)(in_x0 + 0x10) + 0xa8);
  fVar10 = (float)(**(code **)(*plVar8 + 0x110))(0x3f800000,plVar8,lVar4);
  this_01 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(in_x0 + 0x10);
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(this_01);
  fVar11 = *pfVar5;
  fVar12 = pfVar5[1];
  lVar9 = *(long *)(gLawnApp + 0x9f0);
  fVar13 = 0.0;
  if (*(char *)(lVar9 + 0x119) != '\0') {
    fVar13 = pfVar5[2];
  }
  iVar2 = FUN_04cc6f94(this_01);
  if (iVar2 == 5) {
    cVar1 = FUN_04cc7098(lVar3 + 0x2b8);
    if (cVar1 != '\0') {
      pPVar7 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(in_x0 + 0x10));
      std::string::string((string *)&local_48,"attack5");
      Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
      PopAnimRig::PlayAndStop(pPVar7,(string *)&local_48,0,aDStack_38);
      std::string::~string((string *)&local_48);
      nop();
      goto LAB_04ccb1a8;
    }
    lVar9 = *(long *)(gLawnApp + 0x9f0);
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_48,(RtWeakPtrBase *)(lVar4 + 8));
  this = (RtObject *)
         Board::AddProjectile
                   ((Board *)(fVar10 + fVar11),in_s1 + fVar12,fVar13 + in_s2,lVar9,
                    (RtWeakPtr<Sexy::SoundResource> *)&local_48,*(undefined8 *)(in_x0 + 0x10),0);
  this_00 = Sexy::RtObject::Cast<PlantPoisonPeashooterProjectile>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
  fVar10 = *(float *)(lVar3 + 0x2c8);
  fVar11 = *(float *)(lVar3 + 0x2cc);
  PlantPoisonPeashooterProjectile::InitializeValues
            (this_00,(float)*(int *)(lVar3 + 0x2c4),fVar10,fVar11,*(float *)(lVar3 + 0x2d0));
  fVar12 = *(float *)(lVar4 + 0x30);
  if (fVar12 != 0.0) {
    puVar6 = (undefined8 *)Projectile::GetVelocity((Projectile *)this_00);
    local_58 = *puVar6;
    local_50 = *(undefined4 *)(puVar6 + 1);
    fVar13 = (float)DVec3::getLength((DVec3 *)&local_58);
    local_48 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_58,fVar12 / fVar13);
    local_44 = fVar10;
    local_40 = fVar11;
    Projectile::SetVelocity((Projectile *)this_00,(SexyVector3 *)&local_48);
  }
LAB_04ccb1a8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPoisonPeashooter::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantPoisonPeashooter::Fire
          (PlantPoisonPeashooter *this,RtWeakPtr *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  RealObject *pRVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 == '\0') {
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
    if (bVar2) {
      pRVar4 = *(RealObject **)(this + 0x10);
      uVar3 = 0;
      std::string::string(asStack_10,"Play_Throw");
      RealObject::PlayPositionalSound(pRVar4,asStack_10,0.0);
      std::string::~string(asStack_10);
      nop();
      firePoisonPeaProjectile();
    }
    else {
      pRVar4 = *(RealObject **)(this + 0x10);
      std::string::string(asStack_10,"Play_Throw");
      RealObject::PlayPositionalSound(pRVar4,asStack_10,0.0);
      std::string::~string(asStack_10);
      nop();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)param_2);
      uVar3 = PlantFramework::Fire((PlantFramework *)this,asStack_10,param_3,param_4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    }
  }
  else {
    uVar3 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPoisonPeashooter::OnAnimCommand(std::string const&, std::string const&) */

void PlantPoisonPeashooter::OnAnimCommand(string *param_1,string *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  float *pfVar5;
  PlantAction *pPVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float in_s1;
  float fVar10;
  undefined4 in_s2;
  PlantAction aPStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_1 + 0x180))();
  if ((cVar1 == '\0') ||
     ((bVar2 = std::operator==(param_2,"plantfood_start"), !bVar2 &&
      (bVar2 = std::operator==(param_2,"use_action"), !bVar2)))) {
    bVar2 = std::operator==(param_2,"attack5_start");
    if (bVar2) {
      lVar3 = FUN_04ccad58(*(undefined8 *)(param_1 + 0x10));
      plVar7 = *(long **)(*(long *)(param_1 + 0x10) + 0xa8);
      uVar4 = FUN_04cc6fc8(*(undefined8 *)(lVar3 + 0x70),2);
      fVar8 = (float)(**(code **)(*plVar7 + 0x110))(0x3f800000,plVar7,uVar4);
      pfVar5 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(param_1 + 0x10));
      fVar9 = *pfVar5;
      fVar10 = pfVar5[1];
      pPVar6 = (PlantAction *)FUN_04cc6fc8(*(undefined8 *)(lVar3 + 0x70),2);
      PlantAction::PlantAction(aPStack_80,pPVar6);
      LaunchLevel5Projectile(fVar8 + fVar9,in_s1 + fVar10,in_s2,param_1,aPStack_80,lVar3);
      PlantAction::~PlantAction(aPStack_80);
    }
  }
  else {
    firePlantFoodProjectile();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  PlantFramework::OnAnimCommand(param_1,param_2);
  return;
}

