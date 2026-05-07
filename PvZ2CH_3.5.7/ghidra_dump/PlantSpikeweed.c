// Class: PlantSpikeweed


/* PlantSpikeweed::GetDamageFlags(PlantWeapon) */

undefined8 PlantSpikeweed::GetDamageFlags(void)

{
  return 0x4000000000;
}


/* PlantSpikeweed::CalcRenderOrder() */

void __thiscall PlantSpikeweed::CalcRenderOrder(PlantSpikeweed *this)

{
  if (this[0x40] == (PlantSpikeweed)0x0) {
    PlantFramework::CalcRenderOrder((PlantFramework *)this);
    return;
  }
  Board::MakeRenderOrder(0x635d7,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpikeweed::playAttackSound() */

void __thiscall PlantSpikeweed::playAttackSound(PlantSpikeweed *this)

{
  RealObject *this_00;
  string asStack_10 [8];
  long local_8;
  
  this_00 = *(RealObject **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Play_PVZ_SpikeWeed_LP");
  RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpikeweed::stopAttackSound() */

void __thiscall PlantSpikeweed::stopAttackSound(PlantSpikeweed *this)

{
  RealObject *this_00;
  string asStack_10 [8];
  long local_8;
  
  this_00 = *(RealObject **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Stop_SpikeWeed_LP");
  RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSpikeweed::onDestroy() */

void __thiscall PlantSpikeweed::onDestroy(PlantSpikeweed *this)

{
  PlantFramework::onDestroy((PlantFramework *)this);
  (**(code **)(*(long *)this + 0x538))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpikeweed::GetShadowOffset() */

void PlantSpikeweed::GetShadowOffset(void)

{
  FastCurve local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange(local_10,0.0,20.0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10._0_4_,local_10._4_4_);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpikeweed::GetCollisionFlags(PlantWeapon) */

void PlantSpikeweed::GetCollisionFlags(long *param_1)

{
  char cVar1;
  undefined4 local_c;
  long local_8;
  
  local_c = 1;
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*param_1 + 0x180))();
  if (cVar1 != '\0') {
    operator|=(&local_c,4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_c);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpikeweed::StaticClassInit() */

void PlantSpikeweed::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantSpikeweed");
    (*pcVar2)(plVar1,asStack_10,FUN_04066ed8,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSpikeweed::StaticGetClass() */

long * PlantSpikeweed::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantSpikeweed",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSpikeweed::GetClass() const */

long * PlantSpikeweed::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantSpikeweed",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpikeweed::isValidSpikeLocation(int, int) */

void __thiscall PlantSpikeweed::isValidSpikeLocation(PlantSpikeweed *this,int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  Board *this_00;
  Point aPStack_10 [8];
  long local_8;
  
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  local_8 = ___stack_chk_guard;
  iVar2 = Board::GetGridSquareType(this_00,param_1,param_2);
  if ((iVar2 == 3) || (iVar2 == 0)) {
    bVar1 = 0;
  }
  else {
    Sexy::Point::Point(aPStack_10,param_1,param_2);
    bVar1 = Board::IsSky(this_00,aPStack_10);
    bVar1 = bVar1 ^ 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpikeweed::Draw(Sexy::Graphics*) */

void PlantSpikeweed::Draw(Graphics *param_1)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  RtWeakPtr *this;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  PopAnimRig *this_01;
  Graphics *in_x1;
  ulong in_x2;
  ulong uVar4;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0x40] != (Graphics)0x0) {
    uVar4 = 0;
    do {
      while( true ) {
        this = (RtWeakPtr *)FUN_040651b8(*(undefined8 *)(param_1 + 0x28),uVar4);
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
        iVar3 = (int)in_x2;
        if (!bVar2) break;
        Sexy::Point::Point((Point *)&local_18);
        BoardTransforms::GridToBoardSpacePos
                  ((BoardTransforms *)(uVar4 & 0xffffffff),
                   *(int *)(*(long *)(param_1 + 0x10) + 0x110),iVar3);
        iVar3 = FUN_04065230(local_10 + -0x61);
        local_18 = iVar3;
        local_14 = FUN_04065230(local_c + -0x76);
        Sexy::Graphics::Translate(in_x1,iVar3,local_14);
        uVar1 = uVar4 + 1;
        this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  FUN_040651b8(*(undefined8 *)(param_1 + 0x28),uVar4);
        this_01 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        PopAnimRig::Draw(this_01,in_x1);
        in_x2 = (ulong)(uint)-local_14;
        Sexy::Graphics::Translate(in_x1,-local_18,-local_14);
        uVar4 = uVar1;
        if (uVar1 == 9) goto LAB_040655a8;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != 9);
  }
LAB_040655a8:
  PlantFramework::Draw(param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSpikeweed::canAttackZombie(Sexy::RtWeakPtr<Zombie>&) */

undefined8 __thiscall PlantSpikeweed::canAttackZombie(PlantSpikeweed *this,RtWeakPtr *param_1)

{
  bool bVar1;
  char cVar2;
  ResourceInfo *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long lVar3;
  
  this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_1);
  this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType((Zombie *)this_00);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
  bVar1 = std::operator==((string *)(lVar3 + 8),"piano");
  if (!bVar1) {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
    bVar1 = std::operator==((string *)(lVar3 + 8),"pirate_barrel");
    if ((!bVar1) &&
       (cVar2 = Sexy::RtWeakPtrBase::operator==
                          ((RtWeakPtrBase *)&DAT_06aea128,(RtWeakPtrBase *)this_01), cVar2 == '\0'))
    {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
      bVar1 = std::operator==((string *)(lVar3 + 8),"catapult");
      if (!bVar1) {
        return 1;
      }
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpikeweed::createPlantfoodSawEffect() */

void PlantSpikeweed::createPlantfoodSawEffect(void)

{
  ResourceInfo *pRVar1;
  EffectAnimRig_SpikeweedSpikes *this;
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"POPANIM_EFFECTS_SPIKEWEED_PLANTFOOD_SPIKES");
  GetPAMByName(asStack_18);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  this = PopAnimRig::CreateRig<EffectAnimRig_SpikeweedSpikes>((PopAnim *)pRVar1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  std::string::~string(asStack_18);
  nop();
  EffectAnimRig_SpikeweedSpikes::PlayEffectLooped(this);
  PopAnimRig::RandomizeCurrentAnimFrame((PopAnimRig *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* PlantSpikeweed::PlantSpikeweed() */

void __thiscall PlantSpikeweed::PlantSpikeweed(PlantSpikeweed *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067c4da0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  this[0x40] = (PlantSpikeweed)0x0;
  *(undefined4 *)(this + 0x44) = 0;
  this[0x48] = (PlantSpikeweed)0x0;
  return;
}


/* PlantSpikeweed::StaticNew() */

PlantSpikeweed * PlantSpikeweed::StaticNew(void)

{
  PlantSpikeweed *this;
  
  this = ::operator_new(0x50);
  PlantSpikeweed(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpikeweed::setState(unsigned int) */

void __thiscall PlantSpikeweed::setState(PlantSpikeweed *this,uint param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  Plant *pPVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  pPVar5 = *(Plant **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if (*(uint *)(pPVar5 + 200) != param_1) {
    switch(param_1) {
    case 1:
      plVar4 = (long *)UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)pPVar5);
      (**(code **)(*plVar4 + 0x118))();
      pPVar5 = *(Plant **)(this + 0x10);
      break;
    case 10:
      Plant::PlayAttackAnimation(pPVar5);
      lVar6 = *(long *)(this + 0x10);
      fVar7 = (float)PVZ_T();
      lVar3 = FUN_0406587c(*(undefined8 *)(this + 0x10));
      lVar3 = FUN_040651cc(*(undefined8 *)(lVar3 + 0x70));
      pPVar5 = *(Plant **)(this + 0x10);
      *(float *)(lVar6 + 0x128) = fVar7 + *(float *)(lVar3 + 0x28);
      break;
    case 0xb:
      if (*(code **)(*(long *)this + 0x198) == GetDamageFlags) {
        uVar2 = GetDamageFlags();
      }
      else {
        uVar2 = (**(code **)(*(long *)this + 0x198))(this,0);
      }
      fVar7 = 1.0;
      uVar2 = operator|(uVar2,0x10000);
      if (this[0x48] != (PlantSpikeweed)0x0) {
        fVar7 = 1.5;
      }
      Plant::GetProps();
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      lVar3 = FUN_040651cc(*(undefined8 *)(lVar3 + 0x70));
      pPVar5 = *(Plant **)(this + 0x10);
      fVar8 = (float)FUN_04065188(*(undefined4 *)(pPVar5 + 0xf4),*(undefined4 *)(pPVar5 + 0x100),
                                  *(undefined4 *)(pPVar5 + 0x104),*(undefined4 *)(pPVar5 + 0x3b8));
      fVar9 = (float)FUN_04065198(*(undefined4 *)(pPVar5 + 0x3bc));
      iVar1 = *(int *)(lVar3 + 0x2c);
      fVar10 = (float)Plant::GetExtraDPSmodifier(pPVar5);
      fVar11 = (float)FUN_0406519c(*(undefined4 *)(*(long *)(this + 0x10) + 0x424));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      Plant::DoRowAreaDamage
                ((Plant *)(fVar7 * fVar8 * (float)iVar1 * fVar9 * fVar10 * fVar11),
                 *(undefined8 *)(this + 0x10),uVar2);
      pPVar5 = *(Plant **)(this + 0x10);
      break;
    case 0xc:
      fVar7 = (float)PVZ_T();
      lVar3 = FUN_0406587c(*(undefined8 *)(this + 0x10));
      *(float *)(pPVar5 + 0x128) = fVar7 + *(float *)(lVar3 + 0x2c0);
      pPVar5 = *(Plant **)(this + 0x10);
      break;
    case 0xd:
      if (*(code **)(*(long *)this + 0x198) == GetDamageFlags) {
        uVar2 = GetDamageFlags();
      }
      else {
        uVar2 = (**(code **)(*(long *)this + 0x198))(this,0);
        pPVar5 = *(Plant **)(this + 0x10);
      }
      lVar3 = FUN_0406587c(pPVar5);
      Plant::DoRowAreaDamage
                ((Plant *)(float)*(int *)(lVar3 + 0x2c4),*(undefined8 *)(this + 0x10),uVar2);
      pPVar5 = *(Plant **)(this + 0x10);
    }
    *(uint *)(pPVar5 + 200) = param_1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSpikeweed::TransformSelf() */

void __thiscall PlantSpikeweed::TransformSelf(PlantSpikeweed *this)

{
  PlantAnimRig_Pinecone *this_00;
  
  this_00 = (PlantAnimRig_Pinecone *)FUN_04065bbc(*(undefined8 *)(this + 0x10));
  PlantAnimRig_Pinecone::SetElec(this_00,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpikeweed::NotifyZombieKilled() */

void __thiscall PlantSpikeweed::NotifyZombieKilled(PlantSpikeweed *this)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x44) = *(int *)(this + 0x44) + 1;
  local_8 = ___stack_chk_guard;
  if (this[0x48] == (PlantSpikeweed)0x0) {
    Plant::GetType();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    bVar1 = std::operator==((string *)(lVar3 + 8),"spikeweed");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (bVar1) {
      iVar2 = FUN_040651a8(*(undefined8 *)(this + 0x10));
      if (iVar2 == 2) {
        if (*(int *)(this + 0x44) < 0xf) goto LAB_04065c24;
      }
      else if ((iVar2 < 3) || (*(int *)(this + 0x44) < 5)) goto LAB_04065c24;
      this[0x48] = (PlantSpikeweed)0x1;
      TransformSelf(this);
    }
  }
LAB_04065c24:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpikeweed::OnKillZombie(Zombie*) */

void PlantSpikeweed::OnKillZombie(Zombie *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long lStack_8;
  
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  lStack_8 = ___stack_chk_guard;
  if (param_1[0x48] == (Zombie)0x0) {
    Plant::GetType();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    bVar1 = std::operator==((string *)(lVar3 + 8),"spikeweed");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (bVar1) {
      iVar2 = FUN_040651a8(*(undefined8 *)(param_1 + 0x10));
      if (iVar2 == 2) {
        if (*(int *)(param_1 + 0x44) < 0xf) goto LAB_04065c24;
      }
      else if ((iVar2 < 3) || (*(int *)(param_1 + 0x44) < 5)) goto LAB_04065c24;
      param_1[0x48] = (Zombie)0x1;
      TransformSelf((PlantSpikeweed *)param_1);
    }
  }
LAB_04065c24:
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantSpikeweed::onZombieDamageTaken(Zombie*, DamageInfo const&) */

void __thiscall
PlantSpikeweed::onZombieDamageTaken(PlantSpikeweed *this,Zombie *param_1,DamageInfo *param_2)

{
  char cVar1;
  bool bVar2;
  long extraout_x0;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1);
  if (((cVar1 != '\0') && (*(RtObject **)param_2 != (RtObject *)0x0)) &&
     (bVar2 = Sexy::RtObject::IsA<Plant>(*(RtObject **)param_2), bVar2)) {
    nop();
    if (*(PlantSpikeweed **)(extraout_x0 + 0xa8) == this) {
      NotifyZombieKilled(*(PlantSpikeweed **)(extraout_x0 + 0xa8));
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpikeweed::findZombiesInRowAndApplyStun() */

void __thiscall PlantSpikeweed::findZombiesInRowAndApplyStun(PlantSpikeweed *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  RtObject *pRVar8;
  Zombie *pZVar9;
  BoardEntity *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var10;
  SexyVector3 *pSVar11;
  float *pfVar12;
  RealObject *this_01;
  RtWeakPtrBase *pRVar13;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  long lVar14;
  int extraout_w1;
  int extraout_w1_00;
  Board *this_03;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = (**(code **)(*(long *)this + 400))(this,0);
  iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
  uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar6,0x29);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    cVar2 = (**(code **)(*plVar7 + 0x328))();
    if (cVar2 == '\0') {
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
      if (bVar1) {
        pRVar8 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        bVar1 = Sexy::RtObject::IsA<Zomboss>(pRVar8);
        if (!bVar1) {
          pRVar8 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
          bVar1 = Sexy::RtObject::IsA<ZombieZombossMech>(pRVar8);
          if (!bVar1) {
            plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
            cVar2 = (**(code **)(*plVar7 + 0x4d8))();
            if (cVar2 == '\0') {
              plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
              cVar2 = (**(code **)(*plVar7 + 0x508))();
              if (cVar2 == '\0') {
                pZVar9 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
                cVar2 = Zombie::IsBerserk(pZVar9);
                if (cVar2 == '\0') {
                  pZVar9 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
                  cVar2 = Zombie::HasFogImmune(pZVar9);
                  if (cVar2 == '\0') goto LAB_04065db8;
                }
              }
            }
          }
        }
        goto LAB_04065dcc;
      }
LAB_04065db8:
      pZVar9 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      cVar2 = Zombie::IsControlled(pZVar9);
      if (cVar2 != '\0') goto LAB_04065dcc;
      this_00 = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      cVar2 = BoardEntity::IsInRow(this_00,*(int *)(*(long *)(this + 0x10) + 0x110));
      if (cVar2 == '\0') goto LAB_04065dcc;
      this_03 = *(Board **)(gLawnApp + 0x9f0);
      p_Var10 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pSVar11 = (SexyVector3 *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost(p_Var10);
      cVar2 = Board::IsSky(this_03,pSVar11);
      if (cVar2 != '\0') goto LAB_04065dcc;
      p_Var10 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pfVar12 = (float *)std::
                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::_M_leftmost(p_Var10);
      if ((*pfVar12 <= 200.0) || ((float)(iVar4 * 9 + 200) < *pfVar12)) goto LAB_04065dcc;
      plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      cVar2 = (**(code **)(*plVar7 + 0xb8))(plVar7,uVar3);
      if (cVar2 == '\0') goto LAB_04065dcc;
      this_01 = (RealObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      cVar2 = RealObject::IsOnOpposingTeam(this_01,*(RealObject **)(this + 0x10));
      if (cVar2 == '\0') goto LAB_04065dcc;
      pZVar9 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pRVar13 = (RtWeakPtrBase *)Zombie::GetType(pZVar9);
      cVar2 = Sexy::RtWeakPtrBase::operator==(pRVar13,(RtWeakPtrBase *)&DAT_06aea120);
      if (cVar2 != '\0') goto LAB_04065dcc;
      pZVar9 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pRVar13 = (RtWeakPtrBase *)Zombie::GetType(pZVar9);
      cVar2 = Sexy::RtWeakPtrBase::operator==(pRVar13,(RtWeakPtrBase *)&DAT_06aea128);
      if (cVar2 != '\0') goto LAB_04065dcc;
      pZVar9 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(pZVar9);
      lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
      bVar1 = std::operator==((string *)(lVar14 + 8),"kongfu_hammer");
      if (bVar1) {
        pZVar9 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        iVar5 = Zombie::getZombieStateSerialization(pZVar9);
        if (iVar5 == 0x1f) goto LAB_04065dcc;
      }
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
      if (bVar1) {
        pRVar8 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        bVar1 = Sexy::RtObject::IsA<Zomboss>(pRVar8);
        if (!bVar1) {
          plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
          cVar2 = (**(code **)(*plVar7 + 0x4d8))();
          if (cVar2 == '\0') {
            plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
            cVar2 = (**(code **)(*plVar7 + 0x508))();
            if (cVar2 == '\0') goto LAB_04066024;
          }
        }
        goto LAB_04065dcc;
      }
LAB_04066024:
      uVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      Plant::GetProps();
      lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
      ;
                    /* WARNING: Load size is inaccurate */
      Zombie::ApplyCondition(*(Zombie **)(lVar14 + 0x38),0,uVar6,0x18,1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      iVar5 = extraout_w1_00;
    }
    else {
LAB_04065dcc:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      iVar5 = extraout_w1;
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar5);
  } while( true );
}


/* PlantSpikeweed::~PlantSpikeweed() */

void __thiscall PlantSpikeweed::~PlantSpikeweed(PlantSpikeweed *this)

{
  *(undefined ***)this = &PTR_GetClass_067c4da0;
  std::vector<Sexy::RtWeakPtr<PopAnimRig>,std::allocator<Sexy::RtWeakPtr<PopAnimRig>>>::~vector
            ((vector<Sexy::RtWeakPtr<PopAnimRig>,std::allocator<Sexy::RtWeakPtr<PopAnimRig>>> *)
             (this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantSpikeweed::~PlantSpikeweed() */

void __thiscall PlantSpikeweed::~PlantSpikeweed(PlantSpikeweed *this)

{
  ~PlantSpikeweed(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpikeweed::ApplyStab(Zombie*) */

void __thiscall PlantSpikeweed::ApplyStab(PlantSpikeweed *this,Zombie *param_1)

{
  char cVar1;
  ZombieStabberSubSystem *pZVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  RtMixedPtr aRStack_d0 [8];
  RtId aRStack_c8 [8];
  string asStack_c0 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_b8 [72];
  undefined8 local_70;
  undefined4 local_68;
  char local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if ((((cVar1 != '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 == '\0')
       ) && (cVar1 = (**(code **)(*(long *)param_1 + 0x3f8))(param_1), cVar1 != '\0')) &&
     ((cVar1 = Zombie::HasFogImmune(param_1), cVar1 == '\0' &&
      (cVar1 = Zombie::IsBerserk(param_1), cVar1 == '\0')))) {
    Zombie::GetCurrentTitleStatus();
    if ((local_58 == '\0') &&
       (cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 == '\0')) {
      cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1);
      TitleStatus::~TitleStatus((TitleStatus *)&local_70);
      if (((cVar1 == '\0') && (cVar1 = Zombie::HasCondition(param_1,0xf), cVar1 == '\0')) &&
         (pZVar2 = Board::GetGameSubSystem<ZombieStabberSubSystem>(*(Board **)(gLawnApp + 0x9f0)),
         pZVar2 != (ZombieStabberSubSystem *)0x0)) {
        puVar3 = (undefined8 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)param_1);
        uVar4 = *(undefined8 *)(this + 0x10);
        local_70 = *puVar3;
        local_68 = *(undefined4 *)(puVar3 + 1);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_d0);
        std::string::string(asStack_c0,"onStabbedDone");
        RtReflectionDelegate<Sexy::Delegate1<Plant*>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<Plant*>> *)aRStack_b8,aRStack_c8,asStack_c0
                  );
        ZombieStabberSubSystem::LaunchZombie
                  ((ZombieStabberSubSystem *)0x43660000,0x3f333333,pZVar2,param_1,uVar4,
                   (TitleStatus *)&local_70,aRStack_b8);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_b8);
        std::string::~string(asStack_c0);
        nop();
        Sexy::RtId::~RtId(aRStack_c8);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d0)
        ;
      }
    }
    else {
      TitleStatus::~TitleStatus((TitleStatus *)&local_70);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpikeweed::UpdateActions() */

void __thiscall PlantSpikeweed::UpdateActions(PlantSpikeweed *this)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  RtWeakPtr *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar9;
  PopAnimRig *this_01;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  Zombie *pZVar13;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var14;
  SexyVector3 *pSVar15;
  BoardEntity *this_02;
  ulong *puVar16;
  long *plVar17;
  RealObject *pRVar18;
  RtWeakPtrBase *pRVar19;
  float *pfVar20;
  ResourceInfo *pRVar21;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  code *pcVar22;
  Plant *this_03;
  int iVar23;
  Board *this_04;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  double dVar30;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_b0 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a8 [8];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  float local_90;
  Iterator aIStack_88 [32];
  RtId aRStack_68 [96];
  long local_8;
  
  bVar2 = false;
  local_8 = ___stack_chk_guard;
  bVar4 = *(int *)(*(long *)(this + 0x10) + 200) - 10U < 2;
  iVar7 = *(int *)(*(long *)(this + 0x10) + 200);
  do {
    switch(iVar7) {
    case 1:
      PlantFramework::FindTargetZombie((RtMixedPtrBase *)aRStack_68,this,0);
      cVar5 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_68);
      if ((cVar5 != '\0') && (cVar5 = canAttackZombie(this,(RtWeakPtr *)aRStack_68), cVar5 != '\0'))
      {
        setState(this,10);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      iVar23 = *(int *)(*(long *)(this + 0x10) + 200);
      break;
    default:
      iVar23 = iVar7;
      goto LAB_0406655c;
    case 10:
      if (((DAT_06aea030 & 1) == 0) && (iVar23 = __cxa_guard_acquire(&DAT_06aea030), iVar23 != 0)) {
        lVar11 = FUN_0406587c(*(undefined8 *)(this + 0x10));
        lVar11 = FUN_040651cc(*(undefined8 *)(lVar11 + 0x70));
        DAT_06aea070 = *(float *)(lVar11 + 0x28) * 0.75;
        __cxa_guard_release(&DAT_06aea030);
      }
      fVar24 = (float)PVZ_T();
      lVar11 = *(long *)(this + 0x10);
      if (fVar24 < *(float *)(lVar11 + 0x128) - DAT_06aea070) goto LAB_04066898;
      setState(this,0xb);
      iVar23 = *(int *)(*(long *)(this + 0x10) + 200);
      break;
    case 0xb:
      fVar24 = (float)PVZ_T();
      lVar11 = *(long *)(this + 0x10);
      if (fVar24 < *(float *)(lVar11 + 0x128)) goto LAB_04066898;
      setState(this,1);
      iVar23 = *(int *)(*(long *)(this + 0x10) + 200);
      break;
    case 0xc:
      if (((DAT_06aea038 & 1) == 0) && (iVar23 = __cxa_guard_acquire(&DAT_06aea038), iVar23 != 0)) {
        lVar11 = FUN_0406587c(*(undefined8 *)(this + 0x10));
        DAT_06aea0c8 = *(float *)(lVar11 + 0x2c0) * 0.6;
        __cxa_guard_release(&DAT_06aea038);
      }
      fVar24 = (float)PVZ_T();
      lVar11 = *(long *)(this + 0x10);
      if (fVar24 < *(float *)(lVar11 + 0x128) - DAT_06aea0c8) goto LAB_04066898;
      bVar2 = true;
      setState(this,0xd);
      iVar23 = *(int *)(*(long *)(this + 0x10) + 200);
      break;
    case 0xd:
      fVar24 = (float)PVZ_T();
      lVar11 = *(long *)(this + 0x10);
      if (*(float *)(lVar11 + 0x128) <= fVar24) {
        setState(this,0xc);
        lVar11 = *(long *)(this + 0x10);
      }
LAB_04066898:
      iVar23 = *(int *)(lVar11 + 200);
    }
    bVar3 = iVar7 != iVar23;
    iVar7 = iVar23;
  } while (bVar3);
LAB_0406655c:
  bVar3 = iVar23 - 10U < 2;
  if (bVar4 < bVar3) {
    (**(code **)(*(long *)this + 0x530))(this);
  }
  else if (bVar3 < bVar4) {
    (**(code **)(*(long *)this + 0x538))(this);
  }
  if (this[0x40] != (PlantSpikeweed)0x0) {
    lVar11 = 0;
    do {
      while( true ) {
        this_00 = (RtWeakPtr *)FUN_040651b8(*(undefined8 *)(this + 0x28),lVar11);
        bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
        if (!bVar4) break;
        lVar1 = lVar11 + 1;
        pRVar9 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_040651b8(*(undefined8 *)(this + 0x28),lVar11);
        this_01 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar9);
        fVar24 = (float)PVZ_T();
        fVar25 = (float)PVZ_Dt();
        PopAnimRig::UpdateAnim(this_01,fVar24,fVar25);
        lVar11 = lVar1;
        if (lVar1 == 9) goto LAB_040665e4;
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 != 9);
LAB_040665e4:
    uVar6 = (**(code **)(*(long *)this + 400))(this,0);
    iVar7 = BoardConstants::GRIDSQUARE_WIDTH();
    if (*(code **)(*(long *)this + 0x198) == GetDamageFlags) {
      uVar10 = GetDamageFlags();
    }
    else {
      uVar10 = (**(code **)(*(long *)this + 0x198))(this,0);
    }
    uVar10 = operator|(uVar10,0x2000);
    if (!bVar2) {
      uVar10 = operator|(uVar10,0x100);
      uVar10 = operator|(uVar10,0x10000);
    }
    fVar24 = 1.0;
    if (this[0x48] != (PlantSpikeweed)0x0) {
      fVar24 = 1.5;
    }
    lVar11 = FUN_0406587c(*(undefined8 *)(this + 0x10));
    this_03 = *(Plant **)(this + 0x10);
    fVar25 = (float)FUN_04065188(*(undefined4 *)(this_03 + 0xf4),*(undefined4 *)(this_03 + 0x100),
                                 *(undefined4 *)(this_03 + 0x104),*(undefined4 *)(this_03 + 0x3b8));
    fVar26 = (float)FUN_04065198(*(undefined4 *)(this_03 + 0x3bc));
    iVar23 = *(int *)(lVar11 + 0x2b8);
    fVar27 = (float)Plant::GetExtraDPSmodifier(this_03);
    fVar28 = (float)FUN_0406519c(*(undefined4 *)(*(long *)(this + 0x10) + 0x424));
    fVar29 = (float)PVZ_Dt();
    iVar23 = (int)(fVar24 * fVar25 * (float)iVar23 * fVar26 * fVar27 * fVar28 * fVar29);
    uVar12 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aIStack_88,uVar12,0x29);
    while (bVar4 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_88), bVar4) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_88);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_b0,(RtWeakPtrBase *)aRStack_68);
      Sexy::RtId::~RtId(aRStack_68);
      pZVar13 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
      cVar5 = Zombie::IsControlled(pZVar13);
      if (cVar5 == '\0') {
        this_04 = *(Board **)(gLawnApp + 0x9f0);
        p_Var14 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
        pSVar15 = (SexyVector3 *)
                  std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost(p_Var14);
        cVar5 = Board::IsSky(this_04,pSVar15);
        if (cVar5 != '\0') goto LAB_04066708;
        this_02 = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
        cVar5 = BoardEntity::IsInRow(this_02,*(int *)(*(long *)(this + 0x10) + 0x110));
        if (cVar5 == '\0') {
          pZVar13 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
          Zombie::EndCondition(pZVar13,0x18);
          goto LAB_04066708;
        }
        p_Var14 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
        puVar16 = (ulong *)std::
                           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           ::_M_leftmost(p_Var14);
        local_98 = *puVar16;
        local_90 = *(float *)(puVar16 + 1);
        if (((float)local_98 <= 200.0) || ((float)(iVar7 * 9 + 200) < (float)local_98))
        goto LAB_04066708;
        plVar17 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
        cVar5 = (**(code **)(*plVar17 + 0xb8))(plVar17,uVar6);
        if (cVar5 == '\0') goto LAB_04066708;
        pRVar18 = (RealObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
        cVar5 = RealObject::IsOnOpposingTeam(pRVar18,*(RealObject **)(this + 0x10));
        if (cVar5 == '\0') goto LAB_04066708;
        pZVar13 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
        pRVar19 = (RtWeakPtrBase *)Zombie::GetType(pZVar13);
        cVar5 = Sexy::RtWeakPtrBase::operator==(pRVar19,(RtWeakPtrBase *)&DAT_06aea120);
        if (cVar5 != '\0') {
LAB_04066844:
          plVar17 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
          cVar5 = (**(code **)(*plVar17 + 0x328))();
          if (cVar5 == '\0') {
            pZVar13 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
            Zombie::TakeFatalDamage(pZVar13,*(BoardEntity **)(this + 0x10));
          }
          goto LAB_04066708;
        }
        pZVar13 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
        pRVar19 = (RtWeakPtrBase *)Zombie::GetType(pZVar13);
        cVar5 = Sexy::RtWeakPtrBase::operator==(pRVar19,(RtWeakPtrBase *)&DAT_06aea128);
        if (cVar5 != '\0') goto LAB_04066844;
        pZVar13 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
        pRVar9 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(pZVar13);
        lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar9);
        bVar4 = std::operator==((string *)(lVar11 + 8),"kongfu_hammer");
        if (bVar4) {
          pZVar13 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
          iVar8 = Zombie::getZombieStateSerialization(pZVar13);
          if (iVar8 == 0x1f) goto LAB_04066708;
        }
        pfVar20 = (float *)std::
                           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           **)(this + 0x10));
        fVar25 = *pfVar20;
        fVar24 = DAT_06aea040;
        if (((DAT_06aea088 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(&DAT_06aea088), fVar24 = DAT_06aea040, iVar8 != 0)) {
          lVar11 = FUN_0406587c(*(undefined8 *)(this + 0x10));
          fVar24 = *(float *)(lVar11 + 700);
          iVar8 = BoardConstants::GRIDSQUARE_WIDTH();
          fVar24 = (float)iVar8 * fVar24;
          DAT_06aea040 = fVar24;
          __cxa_guard_release(&DAT_06aea088);
        }
        fVar25 = fVar25 + 28.0;
        if (fVar25 < (float)local_98) {
          fVar26 = (float)PVZ_Dt();
          fVar24 = (float)local_98 - fVar26 * fVar24;
          local_98 = CONCAT44(local_98._4_4_,fVar24);
          if (fVar24 < fVar25) goto LAB_04066cb0;
        }
        else {
          fVar26 = (float)PVZ_Dt();
          fVar24 = (float)local_98 + fVar24 * fVar26;
          local_98 = CONCAT44(local_98._4_4_,fVar24);
          if (fVar25 < fVar24) {
LAB_04066cb0:
            local_98 = CONCAT44(local_98._4_4_,fVar25);
            pRVar21 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_b0);
            ApplyStab(this,(Zombie *)pRVar21);
          }
        }
        if ((float)local_98 == fVar25) {
          fVar24 = (float)PlantFramework::Rand((PlantFramework *)this,10.0);
          fVar24 = -fVar24;
        }
        else {
          dVar30 = sin((double)((float)local_98 + (float)local_98));
          fVar24 = (float)((dVar30 + -1.0) * 0.5) * 10.0;
        }
        fVar24 = fVar24 - local_90;
        fVar25 = (float)PVZ_Dt();
        local_90 = (float)ClampFloat(fVar25 * 10.0 * fVar24,-10.0,0.0);
        uVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
        cVar5 = Zombie::HasCondition(uVar12,0xf);
        if (cVar5 == '\0') {
          pZVar13 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
          cVar5 = Zombie::CanBeLaunchedByPlants(pZVar13);
          if (cVar5 != '\0') {
            pZVar13 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
            cVar5 = Zombie::IsBerserk(pZVar13);
            if (cVar5 == '\0') {
              pZVar13 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
              cVar5 = Zombie::HasFogImmune(pZVar13);
              if (cVar5 == '\0') {
                plVar17 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
                (**(code **)(*plVar17 + 0x78))(plVar17,&local_98);
              }
            }
          }
        }
        plVar17 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
        uVar12 = *(undefined8 *)(this + 0x10);
        pcVar22 = *(code **)(*plVar17 + 0x110);
        Sexy::Point::Point((Point *)aRStack_a8,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_a0,1.0,0.0);
        DamageInfo::DamageInfo
                  ((DamageInfo *)(float)iVar23,local_a0,local_9c,aRStack_68,uVar10,uVar12,
                   (Point *)aRStack_a8,0);
        (*pcVar22)(plVar17,aRStack_68);
        DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b0);
        iVar8 = extraout_w1_01;
      }
      else {
LAB_04066708:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b0);
        iVar8 = extraout_w1;
      }
      Sexy::RtDbTable::Iterator::operator++(aIStack_88,iVar8);
    }
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_88);
    uVar12 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aIStack_88,uVar12,0x2f);
    while (bVar4 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_88), bVar4) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_88);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_a8,(RtWeakPtrBase *)aRStack_68);
      Sexy::RtId::~RtId(aRStack_68);
      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a8);
      iVar7 = FUN_040651a0(*(undefined4 *)(lVar11 + 0x134));
      if (iVar7 == *(int *)(*(long *)(this + 0x10) + 0x110)) {
        pRVar18 = (RealObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a8);
        cVar5 = RealObject::IsOnOpposingTeam(pRVar18,*(RealObject **)(this + 0x10));
        if (cVar5 != '\0') {
          plVar17 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a8);
          cVar5 = (**(code **)(*plVar17 + 0x1f8))();
          if (cVar5 != '\0') {
            plVar17 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a8);
            uVar12 = *(undefined8 *)(this + 0x10);
            pcVar22 = *(code **)(*plVar17 + 0x110);
            Sexy::Point::Point((Point *)&local_a0,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
            DamageInfo::DamageInfo
                      ((DamageInfo *)(float)iVar23,local_98 & 0xffffffff,local_98._4_4_,aRStack_68,
                       uVar10,uVar12,(Point *)&local_a0,0);
            (*pcVar22)(plVar17,aRStack_68);
            DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
          }
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a8);
      Sexy::RtDbTable::Iterator::operator++(aIStack_88,extraout_w1_00);
    }
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpikeweed::Initialize() */

void __thiscall PlantSpikeweed::Initialize(PlantSpikeweed *this)

{
  char cVar1;
  string *psVar2;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 1;
  this[0x40] = (PlantSpikeweed)0x0;
  *(undefined4 *)(this + 0x44) = 0;
  this[0x48] = (PlantSpikeweed)0x0;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&DAT_06aea120);
  if (cVar1 == '\0') {
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_18,"pirate_barrel");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)&DAT_06aea120,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_18,"birthday_barrel");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)&DAT_06aea128,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpikeweed::SetPlantfoodFocus(bool) */

void __thiscall PlantSpikeweed::SetPlantfoodFocus(PlantSpikeweed *this,bool param_1)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  RtWeakPtr *this_00;
  ulong uVar4;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar5;
  long *plVar6;
  RtWeakPtr<SpartanBambooMatrixSystem> *this_01;
  PopAnimRig *this_02;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    uVar8 = 0;
    lVar3 = FUN_0406587c(*(undefined8 *)(this + 0x10));
    uVar12 = *(undefined4 *)(lVar3 + 0x2c8);
    uVar11 = *(undefined4 *)(lVar3 + 0x2cc);
    iVar7 = 0;
    std::vector<Sexy::RtWeakPtr<PopAnimRig>,std::allocator<Sexy::RtWeakPtr<PopAnimRig>>>::resize
              ((vector<Sexy::RtWeakPtr<PopAnimRig>,std::allocator<Sexy::RtWeakPtr<PopAnimRig>>> *)
               (this + 0x28),9);
    uVar4 = FUN_040651c0(*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30));
    if (uVar4 != 0) {
      do {
        if (((*(long *)(gLawnApp + 0x9f0) != 0) &&
            (iVar7 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8))) &&
           (*(int *)(*(long *)(this + 0x10) + 0x114) != iVar7)) {
          cVar2 = isValidSpikeLocation(this,(int)uVar8,*(int *)(*(long *)(this + 0x10) + 0x110));
          if (cVar2 != '\0') {
            this_01 = (RtWeakPtr<SpartanBambooMatrixSystem> *)
                      FUN_040651b8(*(undefined8 *)(this + 0x28),uVar8);
            (**(code **)(*(long *)this + 0x528))(this);
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                      (this_01,(RtWeakPtrBase *)aRStack_38);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
            Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
            Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
            FUN_04065104(uVar12,uVar11,auStack_28,auStack_1c);
            if (*(int *)(*(long *)(this + 0x10) + 0x114) < iVar7) {
              Sexy::SexyTransform2D::Scale(aSStack_30,-1.0,1.0);
              uVar10 = FUN_04065244();
              FUN_04065104(uVar10,0,auStack_28,auStack_1c);
            }
            pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)
                     FUN_040651b8(*(undefined8 *)(this + 0x28),uVar8);
            this_02 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
            PopAnimRig::SetRenderTransform(this_02,aSStack_30);
          }
          uVar4 = FUN_040651c0(*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30));
        }
        uVar8 = uVar8 + 1;
        iVar7 = (int)uVar8;
      } while (uVar8 < uVar4);
    }
    this[0x40] = (PlantSpikeweed)0x1;
    findZombiesInRowAndApplyStun(this);
  }
  else {
    uVar8 = 0;
    if (this[0x40] != (PlantSpikeweed)0x0) {
      uVar9 = *(undefined8 *)(this + 0x28);
      lVar3 = FUN_040651c0(uVar9,*(undefined8 *)(this + 0x30));
      if (lVar3 != 0) {
        do {
          this_00 = (RtWeakPtr *)FUN_040651b8(uVar9,uVar8);
          bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
          if (bVar1) {
            pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)
                     FUN_040651b8(*(undefined8 *)(this + 0x28),uVar8);
            plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
            (**(code **)(*plVar6 + 0x48))();
          }
          uVar8 = uVar8 + 1;
          uVar9 = *(undefined8 *)(this + 0x28);
          uVar4 = FUN_040651c0(uVar9,*(undefined8 *)(this + 0x30));
        } while (uVar8 < uVar4);
      }
      std::vector<Sexy::RtWeakPtr<PopAnimRig>,std::allocator<Sexy::RtWeakPtr<PopAnimRig>>>::clear
                ((vector<Sexy::RtWeakPtr<PopAnimRig>,std::allocator<Sexy::RtWeakPtr<PopAnimRig>>> *)
                 (this + 0x28));
      this[0x40] = (PlantSpikeweed)0x0;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpikeweed::ApplyPlantfood() */

void __thiscall PlantSpikeweed::ApplyPlantfood(PlantSpikeweed *this)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  int extraout_w1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtrBase aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x2c);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
    if (*(int *)(lVar4 + 0x110) == *(int *)(*(long *)(this + 0x10) + 0x110)) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
      Plant::GetType();
      Plant::GetType();
      cVar2 = Sexy::RtWeakPtrBase::operator==(aRStack_38,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      if (cVar2 != '\0') {
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
        SetPlantfoodFocus(*(PlantSpikeweed **)(lVar4 + 0xa8),false);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  SetPlantfoodFocus(this,true);
  setState(this,0xc);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSpikeweed::CancelPlantfood() */

void __thiscall PlantSpikeweed::CancelPlantfood(PlantSpikeweed *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  SetPlantfoodFocus(this,false);
  setState(this,1);
  return;
}

