// Class: PlantEgretflower


/* PlantEgretflower::CanApplyPlantfood() */

bool __thiscall PlantEgretflower::CanApplyPlantfood(PlantEgretflower *this)

{
  return *(int *)(*(long *)(this + 0x10) + 200) != 0xb;
}


/* PlantEgretflower::IsInvincible() const */

bool __thiscall PlantEgretflower::IsInvincible(PlantEgretflower *this)

{
  return *(int *)(*(long *)(this + 0x10) + 200) == 0xb;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEgretflower::StaticClassInit() */

void PlantEgretflower::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantEgretflower");
    (*pcVar2)(plVar1,asStack_10,FUN_042655fc,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantEgretflower::StaticGetClass() */

long * PlantEgretflower::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantEgretflower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantEgretflower::GetClass() const */

long * PlantEgretflower::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantEgretflower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantEgretflower::GetPlantNormalWeapon() */

undefined4 __thiscall PlantEgretflower::GetPlantNormalWeapon(PlantEgretflower *this)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_04261b3c(*(undefined8 *)(this + 0x10));
  uVar2 = 2;
  if (iVar1 != 5) {
    uVar2 = 0;
  }
  return uVar2;
}


/* PlantEgretflower::canAutoTrigger() const */

byte __thiscall PlantEgretflower::canAutoTrigger(PlantEgretflower *this)

{
  char cVar1;
  byte bVar2;
  
  if (((*(int *)(*(Plant **)(this + 0x10) + 200) != 0xb) &&
      (cVar1 = Plant::IsIceblocked(*(Plant **)(this + 0x10)), cVar1 == '\0')) &&
     (cVar1 = FUN_042635f0(*(undefined4 *)(*(long *)(this + 0x10) + 0x28)), cVar1 == '\0')) {
    bVar2 = (**(code **)(*(long *)this + 0x180))(this);
    return bVar2 ^ 1;
  }
  return 0;
}


/* PlantEgretflower::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantEgretflower::onAnimStoppedCallback(PlantEgretflower *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"death");
  if (bVar1) {
    (**(code **)(**(long **)(this + 0x10) + 0x48))(*(long **)(this + 0x10));
  }
  return;
}


/* PlantEgretflower::onDestroy() */

void __thiscall PlantEgretflower::onDestroy(PlantEgretflower *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  EgretflowerCountSubSystem *this_01;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0x40);
  this_01 = Board::GetGameSubSystem<EgretflowerCountSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  EgretflowerCountSubSystem::EgretflowerRemove(this_01);
  PlantFramework::onDestroy((PlantFramework *)this);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  return;
}


/* PlantEgretflower::SetIsUnion(bool) */

void __thiscall PlantEgretflower::SetIsUnion(PlantEgretflower *this,bool param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  EgretflowerCountSubSystem *pEVar4;
  
  this[0x28] = (PlantEgretflower)param_1;
  if (param_1) {
    iVar1 = *(int *)(this + 0x2c);
    pEVar4 = Board::GetGameSubSystem<EgretflowerCountSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    iVar2 = Sexy::BaseResStreamsDriver::IsDecompressionFullyComplete((BaseResStreamsDriver *)pEVar4)
    ;
    if (iVar1 < iVar2) {
      pEVar4 = Board::GetGameSubSystem<EgretflowerCountSubSystem>(*(Board **)(gLawnApp + 0x9f0));
      uVar3 = Sexy::BaseResStreamsDriver::IsDecompressionFullyComplete
                        ((BaseResStreamsDriver *)pEVar4);
      *(undefined4 *)(this + 0x2c) = uVar3;
      Plant::PlayAttackUpEffect(*(Plant **)(this + 0x10));
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEgretflower::UpdateUnionState() */

void __thiscall PlantEgretflower::UpdateUnionState(PlantEgretflower *this)

{
  int iVar1;
  EgretflowerCountSubSystem *this_00;
  float *pfVar2;
  Plant *this_01;
  float fVar3;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04261b3c(*(undefined8 *)(this + 0x10));
  if (iVar1 < 2) {
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
  else {
    this_00 = Board::GetGameSubSystem<EgretflowerCountSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    iVar1 = Sexy::BaseResStreamsDriver::IsDecompressionFullyComplete
                      ((BaseResStreamsDriver *)this_00);
    if (iVar1 < 2) {
      SetIsUnion(this,false);
      fVar3 = (float)PVZ_EOT();
      if (local_8 == ___stack_chk_guard) {
        Plant::SetAttackUpValue(*(Plant **)(this + 0x10),false,fVar3,0.0);
        return;
      }
    }
    else {
      SetIsUnion(this,true);
      this_01 = *(Plant **)(this + 0x10);
      fVar3 = (float)PVZ_EOT();
      local_10 = (float)iVar1 * 0.1;
      local_c = 0.3;
      pfVar2 = eastl::min_alt<float>(&local_10,&local_c);
      if (local_8 == ___stack_chk_guard) {
        Plant::SetAttackUpValue(this_01,true,fVar3,*pfVar2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEgretflower::GetLoadingTime() */

void __thiscall PlantEgretflower::GetLoadingTime(PlantEgretflower *this)

{
  int iVar1;
  RtObject *pRVar2;
  EgretflowerProps *pEVar3;
  undefined8 uVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar4 = *(undefined8 *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04261b3c(uVar4);
  if (iVar1 < 3) {
    FUN_04261b18(aRStack_10,uVar4);
    pRVar2 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    pEVar3 = Sexy::RtObject::Cast<EgretflowerProps>(pRVar2);
    fVar5 = *(float *)(pEVar3 + 0x2c4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  else {
    FUN_04261b18(aRStack_18,uVar4);
    pRVar2 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    pEVar3 = Sexy::RtObject::Cast<EgretflowerProps>(pRVar2);
    fVar5 = *(float *)(pEVar3 + 0x2c4);
    FUN_04261b18(aRStack_10,*(undefined8 *)(this + 0x10));
    pRVar2 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    pEVar3 = Sexy::RtObject::Cast<EgretflowerProps>(pRVar2);
    fVar5 = fVar5 - *(float *)(pEVar3 + 0x2c8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar5);
}


/* PlantEgretflower::Initialize() */

void __thiscall PlantEgretflower::Initialize(PlantEgretflower *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)PVZ_T();
  fVar2 = (float)GetLoadingTime(this);
  *(float *)(this + 0x38) = fVar2 + fVar1;
  PlantFramework::Initialize((PlantFramework *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEgretflower::UpdateActions() */

void __thiscall PlantEgretflower::UpdateActions(PlantEgretflower *this)

{
  int iVar1;
  int iVar2;
  RtObject *this_00;
  EgretflowerProps *pEVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UpdateUnionState(this);
  fVar4 = (float)PVZ_T();
  if (*(float *)(this + 0x38) < fVar4) {
    iVar1 = *(int *)(this + 0x34);
    FUN_04261b18(aRStack_10,*(undefined8 *)(this + 0x10));
    this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    pEVar3 = Sexy::RtObject::Cast<EgretflowerProps>(this_00);
    iVar2 = *(int *)(pEVar3 + 0x2b8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (iVar1 < iVar2) {
      *(int *)(this + 0x34) = *(int *)(this + 0x34) + 1;
      fVar4 = (float)PVZ_T();
      fVar6 = (float)GetLoadingTime(this);
      *(float *)(this + 0x38) = fVar6 + fVar4;
    }
    else {
      uVar5 = PVZ_EOT();
      *(undefined4 *)(this + 0x38) = uVar5;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEgretflower::FindTargetAndFire(PlantWeapon) */

void PlantEgretflower::FindTargetAndFire(PlantEgretflower *param_1)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this;
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  Effect_PopAnim *pEVar4;
  ResourceInfo *pRVar5;
  StandaloneEffect *this_00;
  UIEasyButtonWidget *this_01;
  RtObject *this_02;
  PlantAnimRig_Egretflower *this_03;
  long lVar6;
  float fVar7;
  float fVar8;
  int local_30;
  int local_2c;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  Point aPStack_18 [16];
  long local_8;
  
  lVar6 = *(long *)(param_1 + 0x10);
  local_8 = ___stack_chk_guard;
  if (*(int *)(lVar6 + 200) != 0xb) {
    if (*(int *)(param_1 + 0x34) < 1) {
      uVar2 = GetPlantNormalWeapon(param_1);
      cVar1 = Plant::CanFindTarget(lVar6,uVar2);
      if (cVar1 != '\0') {
        *(undefined4 *)(param_1 + 0x30) = 0;
        goto LAB_042640f4;
      }
    }
    else {
      cVar1 = Plant::CanFindTarget(lVar6,1);
      if (cVar1 != '\0') {
        *(undefined4 *)(param_1 + 0x30) = 1;
        fVar7 = (float)PVZ_T();
        fVar8 = (float)GetLoadingTime(param_1);
        *(float *)(param_1 + 0x38) = fVar8 + fVar7;
LAB_042640f4:
        if (param_1[0x28] == (PlantEgretflower)0x0) {
LAB_04264254:
          this_01 = *(UIEasyButtonWidget **)(param_1 + 0x10);
        }
        else {
          this_01 = (UIEasyButtonWidget *)0x0;
          if (*(long *)(param_1 + 0x10) != 0) {
            this = (RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x40);
            BoardEntity::CalcGridPosition();
            BoardTransforms::GridToBoardSpace(aPStack_18);
            EATextSquish::Vec3::Vec3
                      ((Vec3 *)aPStack_18,(float)local_30,(float)(local_2c + -0x1e),0.0);
            Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this,(RtWeakPtrBase *)aRStack_20);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
            pEVar4 = (Effect_PopAnim *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
            ;
            std::string::string(asStack_28,"POPANIM_EFFECTS_EGRETFLOWER_LIGHT_EFFECT");
            GetPAMByName(asStack_28);
            pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
            Effect_PopAnim::CreatePopAnimRig(pEVar4,(PopAnim *)pRVar5,(RtClass *)0x0);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
            std::string::~string(asStack_28);
            nop();
            this_00 = (StandaloneEffect *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this);
            StandaloneEffect::SetBoardSpaceOrigin(this_00,(SexyVector3 *)aPStack_18,-1);
            pEVar4 = (Effect_PopAnim *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
            ;
            Effect_PopAnim::SetCentered(pEVar4,true);
            lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
            FUN_04261afc(lVar6 + 0x1c,0x65131);
            pEVar4 = (Effect_PopAnim *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
            ;
            std::string::string((string *)aRStack_20,"idle1");
            Effect_PopAnim::PlaySingleAnimation(pEVar4,aRStack_20,0);
            std::string::~string((string *)aRStack_20);
            nop();
            goto LAB_04264254;
          }
        }
        this_02 = (RtObject *)UIEasyButtonWidget::GetImageNormal(this_01);
        this_03 = Sexy::RtObject::Cast<PlantAnimRig_Egretflower>(this_02);
        PlantAnimRig_HollyKnight::SetNumDamageStates
                  ((PlantAnimRig_HollyKnight *)this_03,*(int *)(param_1 + 0x30));
        (**(code **)(*(long *)param_1 + 0x1a0))(param_1);
        uVar3 = 1;
        goto LAB_042640a4;
      }
    }
  }
  uVar3 = 0;
LAB_042640a4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEgretflower::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantEgretflower::Fire(PlantFramework *param_1)

{
  int iVar1;
  RtObject *this;
  EgretflowerNormalProjectile *pEVar2;
  float *pfVar3;
  RealObject *this_00;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x30) == 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x150) = 0;
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    this = (RtObject *)
           Plant::Fire(*(Plant **)(param_1 + 0x10),a_Stack_10,
                       *(undefined4 *)(*(Plant **)(param_1 + 0x10) + 0x110),0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    if (this != (RtObject *)0x0) {
      pEVar2 = Sexy::RtObject::Cast<EgretflowerNormalProjectile>(this);
      iVar1 = FUN_04261b3c(*(undefined8 *)(param_1 + 0x10));
      if ((iVar1 == 5) && (pEVar2 != (EgretflowerNormalProjectile *)0x0)) {
        pEVar2[0x1a5] = (EgretflowerNormalProjectile)0x1;
      }
      pfVar3 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this);
      fVar5 = pfVar3[1];
      fVar7 = *pfVar3;
      fVar6 = pfVar3[2];
      fVar4 = (float)PlantFramework::Rand(param_1,1.0);
      Projectile::SetPosition((Projectile *)this,fVar7,fVar5,fVar6 + (fVar4 * 0.4 + -0.2) * 40.0);
    }
    this_00 = *(RealObject **)(param_1 + 0x10);
    std::string::string((string *)a_Stack_10,"Play_Plant_Egretflower_Attack");
    RealObject::PlayPositionalSound(this_00,(string *)a_Stack_10,0.0);
    std::string::~string((string *)a_Stack_10);
    nop();
  }
  else if (*(int *)(param_1 + 0x30) == 1) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
    *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x150) = 1;
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    Plant::Fire(*(Plant **)(param_1 + 0x10),a_Stack_10,
                *(undefined4 *)(*(Plant **)(param_1 + 0x10) + 0x110),1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


/* PlantEgretflower::PlantEgretflower() */

void __thiscall PlantEgretflower::PlantEgretflower(PlantEgretflower *this)

{
  EgretflowerCountSubSystem *this_00;
  undefined4 uVar1;
  
  PlantFramework::PlantFramework((PlantFramework *)this);
  this[0x28] = (PlantEgretflower)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined ***)this = &PTR_GetClass_0681cf20;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x38) = uVar1;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  this_00 = Board::GetGameSubSystem<EgretflowerCountSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  EgretflowerCountSubSystem::EgretflowerAdd(this_00);
  return;
}


/* PlantEgretflower::StaticNew() */

PlantEgretflower * PlantEgretflower::StaticNew(void)

{
  PlantEgretflower *this;
  
  this = ::operator_new(0x60);
  PlantEgretflower(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEgretflower::OnAnimCommand(std::string const&, std::string const&) */

void __thiscall
PlantEgretflower::OnAnimCommand(PlantEgretflower *this,string *param_1,string *param_2)

{
  bool bVar1;
  string *psVar2;
  SpearProjectile *pSVar3;
  EgretflowerBomb *this_00;
  string *psVar4;
  Board *this_01;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"use_action");
  psVar2 = (string *)(ulong)bVar1;
  if ((bVar1) && (*(int *)(*(long *)(this + 0x10) + 200) == 0xb)) {
    this_01 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_18,"egretflower_bomb");
    Board::AddGridItem(this_01,asStack_18,*(int *)(*(long *)(this + 0x10) + 0x114) + 1,
                       *(int *)(*(long *)(this + 0x10) + 0x110),1);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_20);
    if (bVar1) {
      pSVar3 = (SpearProjectile *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20)
      ;
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)asStack_18);
      SpearProjectile::SetPlant(pSVar3,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
      this_00 = (EgretflowerBomb *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      EgretflowerBomb::StartEffect(this_00);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    psVar4 = ___stack_chk_guard;
    param_2 = local_8;
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
  else {
    psVar2 = ___stack_chk_guard;
    psVar4 = local_8;
    if (local_8 == ___stack_chk_guard) {
      PlantFramework::OnAnimCommand((string *)this,param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(psVar2,psVar4,param_2);
}


/* PlantEgretflower::~PlantEgretflower() */

void __thiscall PlantEgretflower::~PlantEgretflower(PlantEgretflower *this)

{
  *(undefined ***)this = &PTR_GetClass_0681cf20;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x48));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantEgretflower::~PlantEgretflower() */

void __thiscall PlantEgretflower::~PlantEgretflower(PlantEgretflower *this)

{
  ~PlantEgretflower(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEgretflower::ApplyPlantfood() */

void __thiscall PlantEgretflower::ApplyPlantfood(PlantEgretflower *this)

{
  vector<Sexy::Point,std::allocator<Sexy::Point>> *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar7;
  EgretflowerPlane *this_02;
  Point *pPVar8;
  ulong uVar9;
  BoardEntity *this_03;
  BoardEntity *this_04;
  undefined8 uVar10;
  BoardEntity *pBVar11;
  code *pcVar12;
  BoardEntity *pBVar13;
  ulong uVar14;
  float fVar15;
  undefined1 auVar16 [16];
  int local_60;
  int local_5c;
  string asStack_58 [8];
  undefined8 local_50 [2];
  Insets aIStack_40 [16];
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x48);
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::clear(this_00);
  Sexy::Insets::Insets(aIStack_40,0,0,9,5);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,aIStack_40
            );
  lVar5 = FUN_04261b88(local_20,local_18);
  if (lVar5 == 0) {
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::clear(this_00);
  }
  else if (lVar5 == 1) {
    Sexy::Point::Point((Point *)&local_30);
    puVar6 = (undefined8 *)FUN_04261b94(local_20,0);
    uVar4 = BoardEntity::CalcColumnPosition((BoardEntity *)*puVar6);
    local_30 = CONCAT44(local_30._4_4_,uVar4);
    puVar6 = (undefined8 *)FUN_04261b94(local_20,0);
    uVar4 = SharkMinion::getRow((SharkMinion *)*puVar6);
    local_30 = CONCAT44(uVar4,(undefined4)local_30);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back(this_00,(Point *)&local_30);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back(this_00,(Point *)&local_30);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back(this_00,(Point *)&local_30);
  }
  else if (lVar5 == 2) {
    Sexy::Point::Point((Point *)&local_30);
    puVar6 = (undefined8 *)FUN_04261b94(local_20,0);
    uVar4 = BoardEntity::CalcColumnPosition((BoardEntity *)*puVar6);
    local_30 = CONCAT44(local_30._4_4_,uVar4);
    puVar6 = (undefined8 *)FUN_04261b94(local_20,0);
    uVar4 = SharkMinion::getRow((SharkMinion *)*puVar6);
    local_30._4_4_ = uVar4;
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back(this_00,(Point *)&local_30);
    puVar6 = (undefined8 *)FUN_04261b94(local_20,1);
    uVar4 = BoardEntity::CalcColumnPosition((BoardEntity *)*puVar6);
    local_30 = CONCAT44(local_30._4_4_,uVar4);
    puVar6 = (undefined8 *)FUN_04261b94(local_20,1);
    uVar4 = SharkMinion::getRow((SharkMinion *)*puVar6);
    local_30 = CONCAT44(uVar4,(undefined4)local_30);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back(this_00,(Point *)&local_30);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back(this_00,(Point *)&local_30);
  }
  else {
    this_04 = (BoardEntity *)0x0;
    local_50[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)&local_20);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)local_50,(__normal_iterator *)&local_30);
    if (bVar1) {
      do {
        puVar6 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_50);
        if (this_04 == (BoardEntity *)0x0) {
          pBVar11 = (BoardEntity *)*puVar6;
          this_04 = pBVar11;
        }
        else {
          pBVar11 = (BoardEntity *)*puVar6;
        }
        iVar2 = BoardEntity::CalcColumnPosition(pBVar11);
        iVar3 = BoardEntity::CalcColumnPosition(this_04);
        if (iVar2 < iVar3) {
          this_04 = (BoardEntity *)*puVar6;
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_50);
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)local_50,(__normal_iterator *)&local_30);
      } while (bVar1);
    }
    pBVar11 = (BoardEntity *)0x0;
    local_50[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)&local_20);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)local_50,(__normal_iterator *)&local_30), bVar1)
    {
      puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_50);
      pBVar13 = (BoardEntity *)*puVar6;
      if (pBVar13 != this_04) {
        if (pBVar11 == (BoardEntity *)0x0) {
          pBVar11 = pBVar13;
        }
        iVar2 = BoardEntity::CalcColumnPosition(pBVar13);
        iVar3 = BoardEntity::CalcColumnPosition(pBVar11);
        if (iVar2 < iVar3) {
          pBVar11 = (BoardEntity *)*puVar6;
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_50);
    }
    pBVar13 = (BoardEntity *)0x0;
    local_50[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)&local_20);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)local_50,(__normal_iterator *)&local_30), bVar1)
    {
      puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_50);
      this_03 = (BoardEntity *)*puVar6;
      if ((this_03 != this_04) && (this_03 != pBVar11)) {
        if (pBVar13 == (BoardEntity *)0x0) {
          pBVar13 = this_03;
        }
        iVar2 = BoardEntity::CalcColumnPosition(this_03);
        iVar3 = BoardEntity::CalcColumnPosition(pBVar13);
        if (iVar2 < iVar3) {
          pBVar13 = (BoardEntity *)*puVar6;
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_50);
    }
    iVar2 = BoardEntity::CalcColumnPosition(this_04);
    iVar3 = SharkMinion::getRow((SharkMinion *)this_04);
    Sexy::Point::Point((Point *)&local_30,iVar2,iVar3);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back(this_00,(Point *)&local_30);
    iVar2 = BoardEntity::CalcColumnPosition(pBVar11);
    iVar3 = SharkMinion::getRow((SharkMinion *)pBVar11);
    Sexy::Point::Point((Point *)&local_30,iVar2,iVar3);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back(this_00,(Point *)&local_30);
    iVar2 = BoardEntity::CalcColumnPosition(pBVar13);
    iVar3 = SharkMinion::getRow((SharkMinion *)pBVar13);
    Sexy::Point::Point((Point *)&local_30,iVar2,iVar3);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back(this_00,(Point *)&local_30);
  }
  uVar14 = 0;
  while( true ) {
    uVar10 = *(undefined8 *)(this + 0x48);
    uVar9 = FUN_04261b9c(uVar10,*(undefined8 *)(this + 0x50));
    if (uVar9 <= uVar14) break;
    auVar16 = FUN_04261ba8(uVar10,uVar14);
    BoardTransforms::GridToBoardSpaceRect(auVar16._0_8_,auVar16._8_8_);
    Sexy::TRect<int>::GetCenter();
    Sexy::Point::Point((Point *)&local_60,(TPoint *)local_50);
    this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_58,"POPANIM_EFFECTS_EGRETFLOWER_LOCKONTARGET");
    GetPAMByName(asStack_58);
    pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_50);
    Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar7,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
    std::string::~string(asStack_58);
    nop();
    EATextSquish::Vec3::Vec3((Vec3 *)local_50,(float)(local_60 + -100),(float)(local_5c + -100),0.0)
    ;
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_01,(SexyVector3 *)local_50,-1);
    FUN_04261afc(this_01 + 0x1c,300000);
    std::string::string((string *)local_50,"idle1");
    Effect_PopAnim::PlaySingleAnimation(this_01,(RtWeakPtr *)local_50,0);
    std::string::~string((string *)local_50);
    nop();
    this_02 = GameObject::Create<EgretflowerPlane>();
    pPVar8 = (Point *)FUN_04261ba8(*(undefined8 *)(this + 0x48),uVar14);
    EgretflowerPlane::initialize(this_02,pPVar8);
    bVar1 = (bool)Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    fVar15 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
    EgretflowerPlane::setData(this_02,bVar1,fVar15);
    pcVar12 = *(code **)(*(long *)this_02 + 0x78);
    lVar5 = FUN_04261ba8(*(undefined8 *)(this + 0x48),uVar14);
    iVar2 = BoardTransforms::GridToBoardSpaceY(*(int *)(lVar5 + 4));
    EATextSquish::Vec3::Vec3((Vec3 *)local_50,0.0,(float)iVar2,0.0);
    (*pcVar12)(this_02,(RtWeakPtr *)local_50);
    uVar14 = uVar14 + 1;
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEgretflower::TakeDamage(DamageInfo const&) */

void PlantEgretflower::TakeDamage(DamageInfo *param_1)

{
  char cVar1;
  long lVar2;
  PopAnimRig *pPVar3;
  PlantAnimRig *pPVar4;
  long in_x1;
  UIEasyButtonWidget *this;
  float fVar5;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  undefined4 local_58;
  undefined4 local_54;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar5 = (float)FUN_04261b10(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0xd8));
  if (((0.0 < fVar5 - *(float *)(in_x1 + 8)) ||
      (cVar1 = canAutoTrigger((PlantEgretflower *)param_1), cVar1 == '\0')) ||
     (lVar2 = operator&(*(undefined8 *)(in_x1 + 0x10),2), lVar2 != 0)) {
    PlantMagicbeans::TakeDamage(param_1);
  }
  else {
    this = *(UIEasyButtonWidget **)(param_1 + 0x10);
    *(undefined4 *)(this + 200) = 0xb;
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this);
    std::string::string((string *)&local_58,"death");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_60,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
               asStack_60);
    PopAnimRig::PlayAndStop(pPVar3,(string *)&local_58,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_60);
    nop();
    Sexy::RtId::~RtId(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string((string *)&local_58);
    nop();
    pPVar4 = (PlantAnimRig *)
             UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
    PlantAnimRig::SetState(pPVar4,0xe);
    Sexy::Point::Point((Point *)asStack_60,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_58,1.0,0.0);
    DamageInfo::DamageInfo((DamageInfo *)0x0,local_58,local_54);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

