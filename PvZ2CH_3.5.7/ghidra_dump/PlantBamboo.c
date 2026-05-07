// Class: PlantBamboo


/* PlantBamboo::GetCollisionFlags(PlantWeapon) */

void PlantBamboo::GetCollisionFlags(void)

{
  operator|(1,8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBamboo::StaticClassInit() */

void PlantBamboo::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantBamboo");
    (*pcVar2)(plVar1,asStack_10,FUN_03fede68,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBamboo::StaticGetClass() */

long * PlantBamboo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantBamboo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBamboo::GetClass() const */

long * PlantBamboo::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantBamboo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBamboo::PlantBamboo() */

void __thiscall PlantBamboo::PlantBamboo(PlantBamboo *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  this[0x28] = (PlantBamboo)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  this[0x34] = (PlantBamboo)0x0;
  *(undefined ***)this = &PTR_GetClass_067b07f0;
  this[0x35] = (PlantBamboo)0x0;
  *(undefined4 *)(this + 0x30) = 0;
  return;
}


/* PlantBamboo::StaticNew() */

PlantBamboo * PlantBamboo::StaticNew(void)

{
  PlantBamboo *this;
  
  this = ::operator_new(0x38);
  PlantBamboo(this);
  return this;
}


/* PlantBamboo::~PlantBamboo() */

void __thiscall PlantBamboo::~PlantBamboo(PlantBamboo *this)

{
  *(undefined ***)this = &PTR_GetClass_067b07f0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantBamboo::~PlantBamboo() */

void __thiscall PlantBamboo::~PlantBamboo(PlantBamboo *this)

{
  ~PlantBamboo(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBamboo::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantBamboo::Fire(PlantBamboo *this,RtWeakPtrBase *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  uVar1 = PlantFramework::Fire((PlantFramework *)this,aRStack_10,param_3,param_4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBamboo::CanTargetZombie(Sexy::RtWeakPtr<Zombie>, PlantWeapon) */

void PlantBamboo::CanTargetZombie(TextureInfo *param_1,RtMixedPtrBase *param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  Zombie *pZVar5;
  RtMixedPtrBase *this;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar6;
  long lVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 != '\0') {
    pZVar5 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    this = (RtMixedPtrBase *)Zombie::GetType(pZVar5);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
    if (cVar1 != '\0') {
      pZVar5 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(pZVar5);
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
      bVar2 = std::operator==((string *)(lVar7 + 8),"cannon");
      if (!bVar2) {
        pZVar5 = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(pZVar5);
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
        bVar2 = std::operator==((string *)(lVar7 + 8),"pirate_imp");
        if (bVar2) {
          pZVar5 = (Zombie *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
          iVar4 = Zombie::getZombieStateSerialization(pZVar5);
          if (0x1e < iVar4) {
            pZVar5 = (Zombie *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
            iVar4 = Zombie::getZombieStateSerialization(pZVar5);
            if (iVar4 < 0x24) goto LAB_03fedcec;
          }
        }
        pZVar5 = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(pZVar5);
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
        bVar2 = std::operator==((string *)(lVar7 + 8),"swashbuckler");
        if (bVar2) {
          pZVar5 = (Zombie *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
          cVar1 = Zombie::IsFlying(pZVar5);
          if (cVar1 != '\0') goto LAB_03fedcec;
        }
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
        uVar3 = EA::Text::GlyphCache_Memory::EndUpdate(param_1);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        goto LAB_03fedcf0;
      }
    }
  }
LAB_03fedcec:
  uVar3 = 0;
LAB_03fedcf0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBamboo::FindTarget(PlantWeapon) */

void __thiscall PlantBamboo::FindTarget(PlantBamboo *this,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  ResourceInfo *pRVar3;
  bool bVar4;
  UnchartedModePlantNumData aUStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 == '\0') {
    (**(code **)(*(long *)this + 0xf8))(aRStack_10,this,param_2);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (((pRVar3 == (ResourceInfo *)0x0) ||
        (iVar2 = FUN_03fed878(*(undefined4 *)(pRVar3 + 0x130)), iVar2 < 0)) ||
       (4 < iVar2 - *(int *)(*(long *)(this + 0x10) + 0x114))) {
      UnchartedModePlantNumData::UnchartedModePlantNumData(aUStack_18,1,0);
      (**(code **)(*(long *)this + 0xe0))
                (aRStack_10,this,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),param_2,0,
                 aUStack_18);
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      bVar4 = false;
      if (((pRVar3 != (ResourceInfo *)0x0) &&
          (iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)pRVar3),
          iVar2 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8))) && (-1 < iVar2)) {
        bVar4 = iVar2 - *(int *)(*(long *)(this + 0x10) + 0x114) < 5;
      }
      goto LAB_03fee454;
    }
  }
  bVar4 = true;
LAB_03fee454:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar4);
}


/* PlantBamboo::FindTargetAndFire(PlantWeapon) */

undefined8 PlantBamboo::FindTargetAndFire(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x28) != '\0') {
    return 0;
  }
  uVar1 = FindTarget();
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBamboo::SetPopAnimDelegates(PlantAnimRig*) */

void __thiscall PlantBamboo::SetPopAnimDelegates(PlantBamboo *this,PlantAnimRig *param_1)

{
  PlantAnimRig *pPVar1;
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1<float> aDStack_68 [48];
  Delegate1<float> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::SetPopAnimDelegates((PlantFramework *)this,param_1);
  pPVar1 = (PlantAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
  ;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,fireProjectileCallback);
  Sexy::Delegate1<float>::Delegate1<PlantBamboo,void(PlantBamboo::*)(float)>(aDStack_68,aCStack_98);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,fireProjectileCallback);
  Sexy::Delegate1<float>::Delegate1<PlantBamboo,void(PlantBamboo::*)(float)>(aDStack_38,aCStack_80);
  PlantAnimRig::SetPlantDelegates(pPVar1,aDStack_68,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBamboo::updateProjectile() */

void __thiscall PlantBamboo::updateProjectile(PlantBamboo *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  Board *this_00;
  Projectile *this_01;
  PopAnimRig *pPVar7;
  RealObject *this_02;
  undefined8 uVar8;
  float fVar9;
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [16];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (0 < *(int *)(this + 0x2c)) {
    FUN_03fed880(aRStack_48,*(undefined8 *)(this + 0x10));
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    lVar6 = FUN_03fed8ec(*(undefined8 *)(lVar6 + 0x70),0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)(lVar6 + 8));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    fVar9 = (float)PVZ_T();
    if (*(float *)(this + 0x30) < fVar9) {
      fVar9 = (float)PVZ_T();
      *(float *)(this + 0x30) = fVar9 + _FUN_03feea30;
      lVar6 = FUN_03fee704(*(undefined8 *)(this + 0x10));
      iVar4 = *(int *)(lVar6 + 0x2c8);
      iVar2 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
      iVar3 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
      iVar5 = *(int *)(this + 0x2c);
      if (this[0x35] == (PlantBamboo)0x0) {
        iVar1 = iVar5 + -1;
        *(int *)(this + 0x2c) = iVar1;
        fVar9 = ((float)iVar4 - (float)iVar5) + (float)iVar2;
        if ((iVar1 == 0) ||
           (this_00 = *(Board **)(gLawnApp + 0x9f0), (float)(*(int *)(this_00 + 0xf8) + -1) == fVar9
           )) {
          this[0x35] = (PlantBamboo)0x1;
        }
        else {
          this[0x35] = (PlantBamboo)0x0;
          iVar4 = Board::GetGridSquareType(this_00,(int)(fVar9 + 1.0),(int)(float)iVar3);
          if ((iVar4 == 3) || (iVar4 == 0)) {
            this[0x35] = (PlantBamboo)0x1;
          }
        }
        iVar4 = BoardTransforms::GridToBoardSpaceX((int)fVar9);
        iVar5 = BoardTransforms::GridToBoardSpaceY((int)(float)iVar3);
        uVar8 = *(undefined8 *)(gLawnApp + 0x9f0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_48,(RtWeakPtrBase *)aRStack_50);
        Board::AddProjectile
                  ((Board *)(float)iVar4,(float)iVar5,0x41b80000,uVar8,aRStack_48,
                   *(undefined8 *)(this + 0x10),0);
        nop();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
        EATextSquish::Vec3::Vec3((Vec3 *)aRStack_48,0.0,0.0,0.0);
        Projectile::SetVelocity(this_01,(SexyVector3 *)aRStack_48);
        FUN_03fed8ac(this_01 + 0x1c0,this[0x34]);
        FUN_03fed8b4(this_01 + 0x1c1,this[0x35]);
        pPVar7 = (PopAnimRig *)Projectile::GetAnimRig(this_01);
        std::string::string((string *)aRStack_48,"anim");
        Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
        PopAnimRig::PlayAndStop(pPVar7,aRStack_48,0,aDStack_38);
        std::string::~string((string *)aRStack_48);
        nop();
        this_02 = *(RealObject **)(this + 0x10);
        std::string::string((string *)aRStack_48,"Play_Plant_Bamboo_Attack_Go");
        RealObject::PlayPositionalSound(this_02,(string *)aRStack_48,0.0);
        std::string::~string((string *)aRStack_48);
        nop();
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBamboo::CancelPlantfood() */

void __thiscall PlantBamboo::CancelPlantfood(PlantBamboo *this)

{
  long lVar1;
  PlantAnimRig *pPVar2;
  PopAnimRig *pPVar3;
  long lVar4;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  pPVar2 = (PlantAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
  ;
  PlantAnimRig::SetState(pPVar2,1);
  pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  std::string::string(asStack_40,"buffer");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop(pPVar3,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  lVar4 = FUN_03fee704(*(undefined8 *)(this + 0x10));
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(lVar4 + 0x2c8);
  *(undefined4 *)(this + 0x30) = 0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBamboo::setState(unsigned int) */

void __thiscall PlantBamboo::setState(PlantBamboo *this,uint param_1)

{
  int iVar1;
  PopAnimRig *pPVar2;
  long lVar3;
  float fVar4;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(uint *)(*(long *)(this + 0x10) + 200) != param_1) &&
     (*(uint *)(*(long *)(this + 0x10) + 200) = param_1, param_1 == 0xb)) {
    this[0x34] = (PlantBamboo)0x0;
    this[0x28] = (PlantBamboo)0x1;
    pPVar2 = (PopAnimRig *)FUN_03feeb84();
    std::string::string(asStack_40,"prepare1");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    PopAnimRig::PlayAndStop(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    lVar3 = FUN_03feeb84(*(undefined8 *)(this + 0x10));
    FUN_03fed8c4(lVar3 + 0x218);
    this[0x35] = (PlantBamboo)0x0;
    iVar1 = FUN_03fed8a4(*(undefined8 *)(this + 0x10));
    if (iVar1 == 2) {
      fVar4 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
      lVar3 = FUN_03feeb98(*(undefined8 *)(this + 0x10));
      this[0x34] = (PlantBamboo)(fVar4 < *(float *)(lVar3 + 0x2b8));
    }
    else if (2 < iVar1) {
      fVar4 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
      lVar3 = FUN_03feeb98(*(undefined8 *)(this + 0x10));
      this[0x34] = (PlantBamboo)(fVar4 < *(float *)(lVar3 + 700));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBamboo::Initialize() */

void __thiscall PlantBamboo::Initialize(PlantBamboo *this)

{
  long lVar1;
  
  PlantFramework::Initialize((PlantFramework *)this);
  this[0x28] = (PlantBamboo)0x0;
  this[0x35] = (PlantBamboo)0x0;
  *(undefined4 *)(this + 0x30) = 0;
  lVar1 = FUN_03fee704(*(undefined8 *)(this + 0x10));
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(lVar1 + 0x2c8);
  this[0x34] = (PlantBamboo)0x0;
  setState(this,10);
  return;
}


/* PlantBamboo::UpdateActions() */

void __thiscall PlantBamboo::UpdateActions(PlantBamboo *this)

{
  char cVar1;
  
  if (*(int *)(*(long *)(this + 0x10) + 200) == 10) {
    cVar1 = (**(code **)(*(long *)this + 0x180))();
    if ((cVar1 == '\0') && (cVar1 = FindTarget(this), cVar1 != '\0')) {
      setState(this,0xb);
      return;
    }
  }
  else if (*(int *)(*(long *)(this + 0x10) + 200) == 0xc) {
    updateProjectile(this);
    return;
  }
  return;
}


/* PlantBamboo::fireProjectileCallback(float) */

void PlantBamboo::fireProjectileCallback(float param_1)

{
  char cVar1;
  PlantBamboo *in_x0;
  
  cVar1 = (**(code **)(*(long *)in_x0 + 0x180))();
  if (cVar1 == '\0') {
    setState(in_x0,0xc);
    return;
  }
  (**(code **)(*(long *)in_x0 + 0xa8))();
  return;
}


/* PlantBamboo::ApplyPlantfood() */

void __thiscall PlantBamboo::ApplyPlantfood(PlantBamboo *this)

{
  setState(this,0xd);
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBamboo::onAttackFinished(std::string const&) */

void PlantBamboo::onAttackFinished(string *param_1)

{
  char cVar1;
  long lVar2;
  PlantAnimRig *pPVar3;
  PopAnimRig *pPVar4;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0x28] != (string)0x0) {
    param_1[0x28] = (string)0x0;
    cVar1 = (**(code **)(*(long *)param_1 + 0x180))();
    if (cVar1 == '\0') {
      pPVar3 = (PlantAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
      PlantAnimRig::SetState(pPVar3,1);
      pPVar4 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
      std::string::string(asStack_40,"buffer");
      Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
      PopAnimRig::PlayAndStop(pPVar4,asStack_40,0,aDStack_38);
      std::string::~string(asStack_40);
      nop();
      setState((PlantBamboo *)param_1,10);
    }
    lVar2 = FUN_03fee704(*(undefined8 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(lVar2 + 0x2c8);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBamboo::onPlantfoodAttackFinished(std::string const&) */

void PlantBamboo::onPlantfoodAttackFinished(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x180))();
  if (cVar1 == '\0') {
    return;
  }
  (**(code **)(*(long *)param_1 + 0x228))(param_1);
  setState((PlantBamboo *)param_1,10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBamboo::DoSpecial(int) */

void PlantBamboo::DoSpecial(int param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  string *psVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  Zombie *pZVar9;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var10;
  float *pfVar11;
  ulong uVar12;
  RtObject *this;
  BoardEntity *this_00;
  undefined8 *puVar13;
  SexyVector3 *pSVar14;
  Projectile *this_01;
  PopAnimRig *pPVar15;
  int extraout_w1;
  int extraout_w1_00;
  ulong uVar16;
  RealObject *this_02;
  code *pcVar17;
  int iVar18;
  Board *pBVar22;
  float fVar19;
  int iVar20;
  float fVar21;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_98 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_90 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ResourceInfo *local_58 [4];
  DummyInit aDStack_38 [48];
  long local_8;
  
  psVar4 = (string *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  lVar5 = FUN_03fee704(*(undefined8 *)(psVar4 + 0x10));
  iVar20 = *(int *)(lVar5 + 0x2c0);
  cVar2 = Plant::GetAvatarEnable(*(Plant **)(psVar4 + 0x10));
  if (cVar2 == '\0') {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_70);
  }
  else {
    lVar5 = FUN_03fee704(*(undefined8 *)(psVar4 + 0x10));
    iVar20 = *(int *)(lVar5 + 0x2c4);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_70);
  }
  if (0 < iVar20) {
    iVar18 = 0;
    do {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_90);
      uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
      PVZDB::GetObjectIteratorForTable((Iterator *)local_58,uVar6,0x29);
      while (bVar3 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)local_58), bVar3)
      {
        Sexy::RtDbTable::Iterator::operator*((Iterator *)local_58);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_88,(RtWeakPtrBase *)&local_78);
        Sexy::RtId::~RtId((RtId *)&local_78);
        uVar6 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)&local_70);
        uVar7 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_70);
        local_80 = std::
                   find<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,Sexy::RtWeakPtr<Zombie>>
                             (uVar6,uVar7,aRStack_88);
        local_78 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_70);
        bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_80,(__normal_iterator *)&local_78)
        ;
        if (!bVar3) {
          plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_88);
          cVar2 = (**(code **)(*plVar8 + 0x328))();
          if (cVar2 == '\0') {
            plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_88);
            cVar2 = (**(code **)(*plVar8 + 0x330))();
            if (cVar2 == '\0') {
              pZVar9 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_88);
              cVar2 = Zombie::IsJumping(pZVar9);
              if (cVar2 == '\0') {
                pZVar9 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_88);
                cVar2 = Zombie::IsInvisible(pZVar9);
                if (cVar2 == '\0') {
                  plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_88);
                  pcVar17 = *(code **)(*plVar8 + 0x3d0);
                  Plant::GetType();
                  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                            ((RtWeakPtr<Sexy::SoundResource> *)&local_78,(RtWeakPtrBase *)&local_80)
                  ;
                  cVar2 = (*pcVar17)(plVar8,(RtId *)&local_78,0);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
                  if (cVar2 != '\0') {
                    p_Var10 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_88);
                    pfVar11 = (float *)std::
                                       _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       ::_M_leftmost(p_Var10);
                    fVar21 = *pfVar11;
                    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_90);
                    if (cVar2 != '\0') {
                      p_Var10 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                             ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_90);
                      pfVar11 = (float *)std::
                                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         ::_M_leftmost(p_Var10);
                      if (*pfVar11 <= fVar21) goto LAB_03fef454;
                    }
                    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_90,(RtWeakPtr *)aRStack_88);
                  }
                }
              }
            }
          }
        }
LAB_03fef454:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
        Sexy::RtDbTable::Iterator::operator++((Iterator *)local_58,extraout_w1);
      }
      Sexy::RtDbTable::Iterator::~Iterator((Iterator *)local_58);
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_90);
      if (cVar2 != '\0') {
        local_58[0] = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)a_Stack_90);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_70,
                   (BoardEntity **)local_58);
      }
      iVar18 = iVar18 + 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_90);
    } while (iVar18 != iVar20);
  }
  uVar12 = FUN_03fed8e0(local_70,local_68);
  if ((uVar12 < (ulong)(long)iVar20) && (iVar20 = iVar20 - (int)uVar12, 0 < iVar20)) {
    iVar18 = 0;
    do {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_98);
      uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
      PVZDB::GetObjectIteratorForTable((Iterator *)local_58,uVar6,0x2f);
      while (bVar3 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)local_58), bVar3)
      {
        Sexy::RtDbTable::Iterator::operator*((Iterator *)local_58);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)a_Stack_90,(RtWeakPtrBase *)&local_78);
        Sexy::RtId::~RtId((RtId *)&local_78);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_90);
        nop();
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_88,(RtWeakPtrBase *)&local_78);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
        uVar6 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)&local_70);
        uVar7 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_70);
        local_80 = std::
                   find<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,Sexy::RtWeakPtr<GridItem>>
                             (uVar6,uVar7,aRStack_88);
        local_78 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_70);
        bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_80,(__normal_iterator *)&local_78)
        ;
        if (!bVar3) {
          plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_88);
          cVar2 = (**(code **)(*plVar8 + 0x200))();
          if (cVar2 != '\0') {
            this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_88);
            bVar3 = Sexy::RtObject::IsA<GridItemFlame>(this);
            if (!bVar3) {
              this_00 = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_88);
              cVar2 = BoardEntity::IsOnScreen(this_00);
              if (cVar2 != '\0') {
                cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_98);
                if (cVar2 != '\0') {
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_98);
                  GridItem::GetGridLocation();
                  iVar1 = (int)local_80;
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_88);
                  GridItem::GetGridLocation();
                  if ((int)local_78 <= iVar1) goto LAB_03fef654;
                }
                Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                          ((RtWeakPtr<PowerPropertySheet> *)a_Stack_98,(RtWeakPtr *)aRStack_88);
              }
            }
          }
        }
LAB_03fef654:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_90)
        ;
        Sexy::RtDbTable::Iterator::operator++((Iterator *)local_58,extraout_w1_00);
      }
      Sexy::RtDbTable::Iterator::~Iterator((Iterator *)local_58);
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_98);
      if (cVar2 != '\0') {
        local_58[0] = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)a_Stack_98);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_70,
                   (BoardEntity **)local_58);
      }
      iVar18 = iVar18 + 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_98);
    } while (iVar18 != iVar20);
  }
  FUN_03fed880((Iterator *)local_58,*(undefined8 *)(psVar4 + 0x10));
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_58);
  lVar5 = FUN_03fed8ec(*(undefined8 *)(lVar5 + 0x70),1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_78,(RtWeakPtrBase *)(lVar5 + 8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_58);
  uVar6 = local_70;
  uVar12 = FUN_03fed8e0(local_70,local_68);
  if (uVar12 == 0) {
    std::string::string((string *)local_58,"");
    onPlantfoodAttackFinished(psVar4);
    std::string::~string((string *)local_58);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_70);
  }
  else {
    for (uVar16 = 0; uVar16 < uVar12; uVar16 = uVar16 + 1) {
      plVar8 = (long *)FUN_03fed8fc(uVar6,uVar16);
      lVar5 = *plVar8;
      pBVar22._0_4_ =
           (Board *)FUN_03fed904(*(undefined4 *)(lVar5 + 0x18),*(undefined4 *)(lVar5 + 0x1c),
                                 *(undefined4 *)(lVar5 + 0x20));
      plVar8 = (long *)FUN_03fed8fc(local_70,uVar16);
      lVar5 = *plVar8;
      fVar19 = *(float *)(lVar5 + 0x1c);
      FUN_03fed904(*(undefined4 *)(lVar5 + 0x18),fVar19,*(undefined4 *)(lVar5 + 0x20));
      puVar13 = (undefined8 *)FUN_03fed8fc(local_70,uVar16);
      pSVar14 = (SexyVector3 *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)*puVar13);
      cVar2 = Board::IsShallowWater(*(Board **)(gLawnApp + 0x9f0),pSVar14);
      fVar21 = 0.0;
      if (cVar2 != '\0') {
        fVar21 = -40.0;
      }
      uVar6 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_58,(RtWeakPtrBase *)&local_78);
      Board::AddProjectile
                (pBVar22._0_4_,fVar21 + fVar19,0x41a00000,uVar6,(Iterator *)local_58,
                 *(undefined8 *)(psVar4 + 0x10),0);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_58);
      EATextSquish::Vec3::Vec3((Vec3 *)local_58,0.0,0.0,0.0);
      Projectile::SetVelocity(this_01,(SexyVector3 *)local_58);
      FUN_03fed8bc(this_01 + 0x1c0,(int)uVar16 == 0);
      pPVar15 = (PopAnimRig *)Projectile::GetAnimRig(this_01);
      std::string::string((string *)local_58,"anim");
      Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
      PopAnimRig::PlayAndStop(pPVar15,(Iterator *)local_58,0,aDStack_38);
      std::string::~string((string *)local_58);
      nop();
      this_02 = *(RealObject **)(psVar4 + 0x10);
      std::string::string((string *)local_58,"Play_Plant_Bamboo_Attack_Go");
      RealObject::PlayPositionalSound(this_02,(string *)local_58,0.0);
      std::string::~string((string *)local_58);
      nop();
      uVar6 = local_70;
      uVar12 = FUN_03fed8e0(local_70,local_68);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_70);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

