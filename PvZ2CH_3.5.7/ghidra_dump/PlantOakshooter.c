// Class: PlantOakshooter


/* PlantOakshooter::onOakArrowHitted(int, int) */

void __thiscall PlantOakshooter::onOakArrowHitted(PlantOakshooter *this,int param_1,int param_2)

{
  if (param_1 == 0) {
    (**(code **)(**(long **)(this + 0x10) + 0x1e8))(*(long **)(this + 0x10),param_2);
  }
  return;
}


/* PlantOakshooter::CancelPlantfood() */

void __thiscall PlantOakshooter::CancelPlantfood(PlantOakshooter *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  PlantPhatBeetTossSystem::setStunTime((PlantPhatBeetTossSystem *)(this + 0x28),-1.413);
  OakshooterPlantfood::Start(1.2,(int)(PlantPhatBeetTossSystem *)(this + 0x28),(Plant *)0x28);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOakshooter::StaticClassInit() */

void PlantOakshooter::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantOakshooter");
    (*pcVar2)(plVar1,asStack_10,FUN_04211444,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantOakshooter::StaticGetClass() */

long * PlantOakshooter::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantOakshooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantOakshooter::GetClass() const */

long * PlantOakshooter::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantOakshooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantOakshooter::SetShootTime(float) */

void __thiscall PlantOakshooter::SetShootTime(PlantOakshooter *this,float param_1)

{
  *(float *)(this + 0x70) = param_1;
  return;
}


/* PlantOakshooter::PlantOakshooter() */

void __thiscall PlantOakshooter::PlantOakshooter(PlantOakshooter *this)

{
  undefined4 uVar1;
  
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_0680b8e0;
  OakshooterPlantfood::OakshooterPlantfood((OakshooterPlantfood *)(this + 0x28));
  Sexy::Point::Point((Point *)(this + 0x60));
  this[0x68] = (PlantOakshooter)0x1;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x6c) = uVar1;
  *(undefined4 *)(this + 0x70) = 0x3e99999a;
  return;
}


/* PlantOakshooter::StaticNew() */

PlantOakshooter * PlantOakshooter::StaticNew(void)

{
  PlantOakshooter *this;
  
  this = ::operator_new(0x78);
  PlantOakshooter(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOakshooter::TriggerSuperAttack() */

void __thiscall PlantOakshooter::TriggerSuperAttack(PlantOakshooter *this)

{
  bool bVar1;
  char cVar2;
  long extraout_x0;
  float fVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = FUN_04210174(*(undefined8 *)(this + 0x10));
  bVar1 = false;
  if (cVar2 != '\0') {
    fVar3 = (float)RandRangeFloat(0.0,1.0);
    FUN_04210148(aRStack_10,*(undefined8 *)(this + 0x10));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    bVar1 = fVar3 < *(float *)(extraout_x0 + 0x2b8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOakshooter::UpdateActions() */

void __thiscall PlantOakshooter::UpdateActions(PlantOakshooter *this)

{
  char cVar1;
  float *pfVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  SexyVector3 *pSVar6;
  float fVar7;
  undefined4 uVar8;
  float local_30;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  EATextSquish::Vec3::Vec3(aVStack_18,*pfVar2,pfVar2[1],0.0);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  pSVar6 = *(SexyVector3 **)(this + 0x10);
  if (cVar1 == '\0') {
    local_30 = *(float *)(pSVar6 + 0xc4);
    Plant::GetProps();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    uVar4 = *(undefined8 *)(lVar3 + 0x70);
    uVar5 = 1;
  }
  else {
    local_30 = *(float *)(pSVar6 + 0xc4);
    Plant::GetProps();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    uVar4 = *(undefined8 *)(lVar3 + 0x70);
    uVar5 = 2;
  }
  FUN_0421019c(uVar4,uVar5);
  OakshooterPlantfood::Update((Plant *)(this + 0x28),pSVar6,local_30,(PlantAction *)aVStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  fVar7 = (float)PVZ_T();
  if (*(float *)(this + 0x6c) < fVar7) {
    this[0x68] = (PlantOakshooter)0x1;
    uVar8 = PVZ_EOT();
    *(undefined4 *)(this + 0x6c) = uVar8;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOakshooter::FireProjectile(int, int, Sexy::RtWeakPtr<ProjectilePropertySheet>, int) */

void __thiscall
PlantOakshooter::FireProjectile
          (PlantOakshooter *this,int param_1,int param_2,RtWeakPtrBase *param_4,undefined4 param_5)

{
  float *pfVar1;
  long lVar2;
  Projectile *this_00;
  ValueRange *pVVar3;
  undefined8 uVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var5;
  float fVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  p_Var5 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(p_Var5);
  fVar13 = *pfVar1;
  FUN_04210148(aRStack_10,p_Var5);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  lVar2 = FUN_0421019c(*(undefined8 *)(lVar2 + 0x70),(long)param_1);
  fVar6 = *(float *)(lVar2 + 0x68);
  fVar9 = *(float *)(*(long *)(this + 0x10) + 0xc4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  p_Var5 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             **)(this + 0x10);
  lVar2 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(p_Var5);
  uVar10 = *(undefined4 *)(lVar2 + 4);
  FUN_04210148(aRStack_10,p_Var5);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  lVar2 = FUN_0421019c(*(undefined8 *)(lVar2 + 0x70),(long)param_1);
  fVar11 = *(float *)(lVar2 + 0x6c);
  fVar12 = *(float *)(*(long *)(this + 0x10) + 0xc4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,param_4);
  this_00 = (Projectile *)
            Board::AddProjectile
                      ((Board *)(fVar13 + fVar6 * fVar9),uVar10,-(fVar11 * fVar12),uVar4,aRStack_10,
                       *(undefined8 *)(this + 0x10),param_5);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  FUN_04210138(this_00 + 0x174,param_5);
  lVar2 = Projectile::GetProps(this_00);
  fVar6 = (float)Sexy::SexyMath::DegToRad(30.0);
  dVar7 = cos((double)fVar6);
  pVVar3 = (ValueRange *)FUN_042101d4(*(undefined8 *)(lVar2 + 0x78));
  fVar9 = (float)ValueRange::GetRandomValue(pVVar3);
  dVar8 = sin((double)fVar6);
  pVVar3 = (ValueRange *)FUN_042101d4(*(undefined8 *)(lVar2 + 0x78));
  fVar11 = (float)ValueRange::GetRandomValue(pVVar3);
  if (param_2 == 0) {
    Projectile::SetVelocity
              (this_00,(float)((double)fVar9 * dVar7),-(float)((double)fVar11 * dVar8),0.0);
    FUN_04210130(fVar6,this_00 + 0xc4);
  }
  else if (param_2 == 2) {
    Projectile::SetVelocity
              (this_00,(float)((double)fVar9 * dVar7),(float)((double)fVar11 * dVar8),0.0);
    Sexy::SexyMath::DegToRad(-30.0);
    FUN_04210130(this_00 + 0xc4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOakshooter::FireSpecial() */

void __thiscall PlantOakshooter::FireSpecial(PlantOakshooter *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  string asStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 == '\0') {
    uVar6 = *(undefined8 *)(this + 0x10);
    iVar2 = FUN_0421016c(uVar6);
    if (1 < iVar2) {
      FUN_04210148(aRStack_10,uVar6);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      lVar3 = FUN_0421019c(*(undefined8 *)(lVar3 + 0x70),0);
      FUN_05475d88(asStack_20,lVar3 + 0x50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      cVar1 = FUN_0547419c(asStack_20);
      if (cVar1 == '\0') {
        RealObject::PlayPositionalSound(*(RealObject **)(this + 0x10),asStack_20,0.0);
      }
      FUN_04210148(aRStack_10,*(undefined8 *)(this + 0x10));
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      lVar3 = FUN_0421019c(*(undefined8 *)(lVar3 + 0x70),0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)(lVar3 + 8));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_18);
      if (cVar1 == '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
        ;
        std::string::~string(asStack_20);
        uVar6 = 0;
      }
      else {
        iVar2 = FUN_0421016c(*(undefined8 *)(this + 0x10));
        uVar7 = 0;
        if (2 < iVar2) {
          uVar7 = 2;
        }
        cVar1 = TriggerSuperAttack(this);
        if (cVar1 != '\0') {
          uVar4 = 0;
          do {
            uVar6 = 9;
            uVar8 = 9;
            uVar5 = uVar4;
            while( true ) {
              FUN_04210148(aRStack_10,*(undefined8 *)(this + 0x10));
              lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
              lVar3 = FUN_0421019c(*(undefined8 *)(lVar3 + 0x70),uVar6);
              Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                        ((RtWeakPtr<PowerPropertySheet> *)aRStack_18,(RtWeakPtr *)(lVar3 + 8));
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
              uVar4 = uVar5 + 1;
              uVar6 = FireProjectile(this,uVar8,uVar5,aRStack_10,uVar7);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
              if (uVar4 == 3) goto LAB_04210fc4;
              if ((uVar4 & 0xfffffffd) == 0) break;
              uVar6 = 8;
              uVar8 = 8;
              uVar5 = uVar4;
            }
          } while( true );
        }
        uVar4 = 0;
        do {
          if ((uVar4 & 0xfffffffd) == 0) {
            uVar6 = 3;
            uVar8 = 3;
          }
          else {
            uVar6 = 0;
            uVar8 = 0;
          }
          FUN_04210148(aRStack_10,*(undefined8 *)(this + 0x10));
          lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
          lVar3 = FUN_0421019c(*(undefined8 *)(lVar3 + 0x70),uVar6);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)aRStack_18,(RtWeakPtr *)(lVar3 + 8));
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
          uVar5 = uVar4 + 1;
          uVar6 = FireProjectile(this,uVar8,uVar4,aRStack_10,uVar7);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
          uVar4 = uVar5;
        } while (uVar5 != 3);
LAB_04210fc4:
        cVar1 = LawnApp::IsInModule(gLawnApp,1);
        if (cVar1 != '\0') {
          MessageRouter::Post((_func_void *)gMessageRouter);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
        ;
        std::string::~string(asStack_20);
      }
      goto LAB_0421100c;
    }
  }
  uVar6 = 0;
LAB_0421100c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


/* PlantOakshooter::OnAnimCommand(std::string const&, std::string const&) */

bool PlantOakshooter::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_2,"use_action2");
  if (bVar1) {
    FireSpecial((PlantOakshooter *)param_1);
    return true;
  }
  bVar1 = std::operator==(param_2,"use_attack_normal");
  if (((!bVar1) && (bVar1 = std::operator==(param_2,"use_attack_multiple"), !bVar1)) &&
     (bVar1 = std::operator==(param_2,"use_attack_power"), !bVar1)) {
    bVar1 = std::operator==(param_2,"use_attack_track");
    return bVar1;
  }
  return true;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOakshooter::FireProjectileSpecial(int, int, Sexy::RtWeakPtr<ProjectilePropertySheet>, float)
    */

void __thiscall
PlantOakshooter::FireProjectileSpecial
          (float param_1_00,PlantOakshooter *this,int param_1,int param_2,RtWeakPtrBase *param_5)

{
  float *pfVar1;
  long lVar2;
  Projectile *this_00;
  ValueRange *pVVar3;
  SexyTransform2D *this_01;
  undefined8 uVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var5;
  float fVar6;
  float fVar7;
  float extraout_s0;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  SexyTransform2D local_30 [40];
  long local_8;
  
  p_Var5 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(p_Var5);
  fVar11 = *pfVar1;
  FUN_04210148(aRStack_38,p_Var5);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
  lVar2 = FUN_0421019c(*(undefined8 *)(lVar2 + 0x70),(long)param_1);
  fVar6 = *(float *)(lVar2 + 0x68);
  fVar8 = *(float *)(*(long *)(this + 0x10) + 0xc4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  p_Var5 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             **)(this + 0x10);
  lVar2 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(p_Var5);
  uVar9 = *(undefined4 *)(lVar2 + 4);
  FUN_04210148(aRStack_38,p_Var5);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
  lVar2 = FUN_0421019c(*(undefined8 *)(lVar2 + 0x70),(long)param_1);
  fVar10 = *(float *)(lVar2 + 0x6c);
  fVar7 = *(float *)(*(long *)(this + 0x10) + 0xc4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,param_5);
  this_00 = (Projectile *)
            Board::AddProjectile
                      ((Board *)(fVar11 + fVar6 * fVar8),uVar9,-(fVar10 * fVar7),uVar4,aRStack_38,
                       *(undefined8 *)(this + 0x10),0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  fVar6 = 30.0;
  if (param_2 != 0) {
    if (param_2 == 1) {
      fVar6 = 15.0;
    }
    else if (param_2 == 2) {
      fVar6 = -15.0;
    }
    else {
      fVar6 = 0.0;
      if (param_2 == 3) {
        fVar6 = -30.0;
      }
    }
  }
  fVar7 = fVar6 + param_1_00;
  if (param_1_00 < 0.0) {
    fVar7 = param_1_00 - fVar6;
  }
  lVar2 = Projectile::GetProps(this_00);
  pVVar3 = (ValueRange *)FUN_042101d4(*(undefined8 *)(lVar2 + 0x78));
  ValueRange::GetRandomValue(pVVar3);
  pVVar3 = (ValueRange *)FUN_042101d4(*(undefined8 *)(lVar2 + 0x78));
  ValueRange::GetRandomValue(pVVar3);
  Sexy::SexyTransform2D::SexyTransform2D(local_30);
  switch(param_2) {
  case 0:
  case 1:
  case 2:
  case 3:
    this_01 = (SexyTransform2D *)Sexy::SexyMath::DegToRad(fVar7);
    Sexy::SexyTransform2D::CreateRotation(this_01,extraout_s0);
    FUN_04210130(extraout_s0,this_00 + 0xc4);
    Projectile::ApplyRotationToVelocity((SexyTransform2D *)this_00);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_00);
  }
  return;
}


/* PlantOakshooter::Idle() */

void __thiscall PlantOakshooter::Idle(PlantOakshooter *this)

{
  long *plVar1;
  
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  (**(code **)(*plVar1 + 0x118))();
  return;
}


/* PlantOakshooter::Initialize() */

void __thiscall PlantOakshooter::Initialize(PlantOakshooter *this)

{
  int iVar1;
  PlantAnimRig_Pinecone *this_00;
  undefined8 uVar2;
  
  PlantFramework::Initialize((PlantFramework *)this);
  uVar2 = *(undefined8 *)(this + 0x10);
  iVar1 = FUN_0421016c(uVar2);
  if (1 < iVar1) {
    this_00 = (PlantAnimRig_Pinecone *)FUN_04211888(uVar2);
    PlantAnimRig_Pinecone::SetElec(this_00,true);
    return;
  }
  return;
}


/* PlantOakshooter::ChangeArrowType(int) */

void __thiscall PlantOakshooter::ChangeArrowType(PlantOakshooter *this,int param_1)

{
  PlantAnimRig_Oakshooter *pPVar1;
  
  pPVar1 = (PlantAnimRig_Oakshooter *)FUN_04211888(*(undefined8 *)(this + 0x10));
  PlantAnimRig_Oakshooter::SetArrowType(pPVar1,param_1);
  return;
}


/* PlantOakshooter::RegisterOakTrainModule() */

void __thiscall PlantOakshooter::RegisterOakTrainModule(PlantOakshooter *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onOakShootTouch);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<Sexy::Point_const&,Sexy::CBMemberTranslatorX<PlantOakshooter,void(PlantOakshooter::*)(Sexy::Point_const&)>>
            ((MessageRouter *)puVar1,Message::OakShootTouch,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onOakArrowHitted);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<PlantOakshooter,void(PlantOakshooter::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::OakArrowHitted,&local_70);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOakshooter::FindClosetZombie(PlantWeapon) */

void PlantOakshooter::FindClosetZombie
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,
               long *param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  ulong uVar4;
  RealObject *this;
  float *pfVar5;
  long lVar6;
  Insets *pIVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  code *pcVar11;
  float fVar12;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  int local_30 [4];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(param_1)
  ;
  if (*(code **)(*param_2 + 400) == PlantFramework::GetCollisionFlags) {
    uVar3 = PlantFramework::GetCollisionFlags();
  }
  else {
    uVar3 = (**(code **)(*param_2 + 400))(param_2,param_3);
  }
  uVar9 = 0;
  iVar8 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntities
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2);
  uVar10 = local_20;
  uVar4 = FUN_042101ac(local_20,local_18);
  if (uVar4 != 0) {
    do {
      FUN_042101b8(uVar10,uVar9);
      nop();
      if (this != (RealObject *)0x0) {
        ToolPacketData::GetProps();
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)local_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
        if (((cVar2 != '\0') && (cVar2 = (**(code **)(*(long *)this + 0x328))(this), cVar2 == '\0'))
           && (cVar2 = RealObject::IsOnOpposingTeam(this,(RealObject *)param_2[2]), cVar2 != '\0'))
        {
          pcVar11 = *(code **)(*param_2 + 0x3e0);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_30,(RtWeakPtrBase *)aRStack_38);
          cVar2 = (*pcVar11)(param_2,(RtMixedPtrBase *)local_30,param_3);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30)
          ;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          if (cVar2 != '\0') {
            pfVar5 = (float *)std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                             *)this);
            fVar12 = *pfVar5;
            lVar6 = Board::GetBoardProperties(*(Board **)(gLawnApp + 0x9f0));
            if (fVar12 <= *(float *)(lVar6 + 0x10)) {
              pcVar11 = *(code **)(*(long *)this + 0x3d0);
              Plant::GetType();
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)local_30,(RtWeakPtrBase *)aRStack_38);
              cVar2 = (*pcVar11)(this,(RtMixedPtrBase *)local_30,0);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
              if ((cVar2 != '\0') &&
                 (cVar2 = (**(code **)(*(long *)this + 0xb8))(this,uVar3), cVar2 != '\0')) {
                pIVar7 = (Insets *)(**(code **)(*(long *)this + 0x178))(this);
                Sexy::Insets::Insets((Insets *)local_30,pIVar7);
                iVar1 = -local_30[0];
                cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)param_1)
                ;
                if ((cVar2 != '\0') || (iVar8 < iVar1)) {
                  ToolPacketData::GetProps();
                  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                            ((RtWeakPtr<SpartanBambooMatrixSystem> *)param_1,
                             (RtWeakPtrBase *)aRStack_38);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
                  iVar8 = iVar1;
                }
              }
            }
          }
        }
        uVar10 = local_20;
        uVar4 = FUN_042101ac(local_20,local_18);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar4);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOakshooter::ManualFire() */

void __thiscall PlantOakshooter::ManualFire(PlantOakshooter *this)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  PlantAnimRig_Oakshooter *this_00;
  long lVar5;
  float *pfVar6;
  SexyTransform2D *this_01;
  SexyTransform2D *pSVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  PlantOakshooter *pPVar14;
  float __x;
  Board *pBVar15;
  float fVar12;
  float fVar13;
  int iStack_60;
  int iStack_5c;
  string asStack_58 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [8];
  RtMixedPtrBase aRStack_48 [8];
  float local_40;
  float local_3c;
  float local_38;
  SexyTransform2D local_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PlantAnimRig_Oakshooter *)FUN_04211888(*(undefined8 *)(this + 0x10));
  iVar4 = PlantAnimRig_Oakshooter::GetArrowType(this_00);
  switch(iVar4) {
  case 0:
    *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 4;
    break;
  case 1:
    *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 6;
    break;
  case 2:
    *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 5;
    break;
  case 3:
    *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 7;
    break;
  default:
    *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0;
  }
  (**(code **)(*(long *)this + 0x300))(asStack_58,this);
  cVar3 = FUN_0547419c(asStack_58);
  if (cVar3 == '\0') {
    RealObject::PlayPositionalSound(*(RealObject **)(this + 0x10),asStack_58,0.0);
  }
  Plant::GetFireOrigin(*(Plant **)(this + 0x10),&iStack_60,&iStack_5c);
  Plant::GetProps();
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  lVar5 = FUN_0421019c(*(undefined8 *)(lVar5 + 0x70),(long)*(int *)(*(long *)(this + 0x10) + 0x150))
  ;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)(lVar5 + 8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_50);
  if (cVar3 != '\0') {
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(this + 0x10));
    fVar12 = *pfVar6;
    Plant::GetProps();
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    lVar9 = *(long *)(this + 0x10);
    lVar5 = FUN_0421019c(*(undefined8 *)(lVar5 + 0x70),(long)*(int *)(lVar9 + 0x150));
    pBVar15._0_4_ = (Board *)(fVar12 + *(float *)(lVar5 + 0x68) * *(float *)(lVar9 + 0xc4));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    lVar5 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            **)(this + 0x10));
    fVar13 = *(float *)(lVar5 + 4);
    Plant::GetProps();
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    lVar9 = *(long *)(this + 0x10);
    lVar5 = FUN_0421019c(*(undefined8 *)(lVar5 + 0x70),(long)*(int *)(lVar9 + 0x150));
    fVar12 = -(*(float *)(lVar5 + 0x6c) * *(float *)(lVar9 + 0xc4));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    uVar10 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_50);
    this_01 = (SexyTransform2D *)
              Board::AddProjectile
                        (pBVar15._0_4_,fVar13,uVar10,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40,
                         *(undefined8 *)(this + 0x10),0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    if (this_01 != (SexyTransform2D *)0x0) {
      __x = (float)*(int *)(this + 0x60) - (float)pBVar15._0_4_;
      fVar11 = atan2f((float)*(int *)(this + 100) - fVar13,__x);
      Sexy::SexyTransform2D::SexyTransform2D(local_30);
      if (iVar4 == 3) {
        FindClosetZombie(aRStack_48,this,0);
        cVar3 = Sexy::RtMixedPtrBase::IsValid(aRStack_48);
        if (cVar3 == '\0') {
          pSVar7 = (SexyTransform2D *)FUN_04210130(-fVar11,this_01 + 0xc4);
          Sexy::SexyTransform2D::CreateRotation(pSVar7,-fVar11);
          Projectile::ApplyRotationToVelocity(this_01);
        }
        else {
          plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
          local_40 = (float)(**(code **)(*plVar8 + 0x3b0))(0x3f000000);
          local_3c = __x;
          local_38 = fVar12;
          fVar12 = atan2f(__x - fVar13,local_40 - (float)pBVar15._0_4_);
          pSVar7 = (SexyTransform2D *)FUN_04210130(-fVar12,this_01 + 0xc4);
          Sexy::SexyTransform2D::CreateRotation(pSVar7,-fVar12);
          Projectile::ApplyRotationToVelocity(this_01);
          Projectile::LaunchAt((Projectile *)this_01,(SexyVector3 *)&local_40,0.0,0.5);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48)
        ;
      }
      else {
        fVar11 = -fVar11;
        pSVar7 = (SexyTransform2D *)FUN_04210130(fVar11,this_01 + 0xc4);
        Sexy::SexyTransform2D::CreateRotation(pSVar7,fVar11);
        Projectile::ApplyRotationToVelocity(this_01);
        if (iVar4 == 2) {
          pPVar14._0_4_ = (PlantOakshooter *)Sexy::SexyMath::RadToDeg(fVar11);
          iVar4 = 0;
          do {
            uVar2 = *(undefined4 *)(*(long *)(this + 0x10) + 0x150);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_50);
            iVar1 = iVar4 + 1;
            FireProjectileSpecial
                      (pPVar14._0_4_,this,uVar2,iVar4,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
            iVar4 = iVar1;
          } while (iVar1 != 4);
        }
      }
    }
  }
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  std::string::~string(asStack_58);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOakshooter::onOakShootTouch(Sexy::Point const&) */

void __thiscall PlantOakshooter::onOakShootTouch(PlantOakshooter *this,Point *param_1)

{
  char cVar1;
  PlantAnimRig_Oakshooter *pPVar2;
  float fVar3;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  *(undefined8 *)(this + 0x60) = *(undefined8 *)param_1;
  local_8 = ___stack_chk_guard;
  cVar1 = GridItemCardGameZombieAction::IsDone((GridItemCardGameZombieAction *)this);
  if (cVar1 != '\0') {
    pPVar2 = (PlantAnimRig_Oakshooter *)FUN_04211888(*(undefined8 *)(this + 0x10));
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
    PlantAnimRig_Oakshooter::PlayArrowAttack(pPVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    ManualFire(this);
    this[0x68] = (PlantOakshooter)0x0;
    fVar3 = (float)PVZ_T();
    *(float *)(this + 0x6c) = fVar3 + *(float *)(this + 0x70);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantOakshooter::~PlantOakshooter() */

void __thiscall PlantOakshooter::~PlantOakshooter(PlantOakshooter *this)

{
  *(undefined ***)this = &PTR_GetClass_0680b8e0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  OakshooterPlantfood::~OakshooterPlantfood((OakshooterPlantfood *)(this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantOakshooter::~PlantOakshooter() */

void __thiscall PlantOakshooter::~PlantOakshooter(PlantOakshooter *this)

{
  ~PlantOakshooter(this);
  AK::FreeHook(this);
  return;
}

