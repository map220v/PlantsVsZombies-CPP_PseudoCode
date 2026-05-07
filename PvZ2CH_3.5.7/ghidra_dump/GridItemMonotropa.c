// Class: GridItemMonotropa


/* GridItemMonotropa::onDestroy() */

void GridItemMonotropa::onDestroy(void)

{
  long in_x0;
  
  AttachedEffectManager::Clear((AttachedEffectManager *)(in_x0 + 0x140));
  return;
}


/* GridItemMonotropa::CalcRenderOrder() const */

void __thiscall GridItemMonotropa::CalcRenderOrder(GridItemMonotropa *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = SharkMinion::getRow((SharkMinion *)this);
  uVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x64960,uVar1,uVar2);
  return;
}


/* non-virtual thunk to GridItemMonotropa::CalcRenderOrder() const */

void __thiscall GridItemMonotropa::CalcRenderOrder(GridItemMonotropa *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* GridItemMonotropa::~GridItemMonotropa() */

void __thiscall GridItemMonotropa::~GridItemMonotropa(GridItemMonotropa *this)

{
  *(undefined ***)this = &PTR_GetClass_06999c60;
  *(undefined ***)(this + 0x10) = &PTR__GridItemMonotropa_06999f18;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemMonotropa::~GridItemMonotropa() */

void __thiscall GridItemMonotropa::~GridItemMonotropa(GridItemMonotropa *this)

{
  ~GridItemMonotropa(this + -0x10);
  return;
}


/* GridItemMonotropa::~GridItemMonotropa() */

void __thiscall GridItemMonotropa::~GridItemMonotropa(GridItemMonotropa *this)

{
  ~GridItemMonotropa(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemMonotropa::~GridItemMonotropa() */

void __thiscall GridItemMonotropa::~GridItemMonotropa(GridItemMonotropa *this)

{
  ~GridItemMonotropa(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMonotropa::StaticClassInit() */

void GridItemMonotropa::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemMonotropa");
    (*pcVar2)(plVar1,asStack_10,FUN_04cbcb50,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemMonotropa::StaticGetClass() */

long * GridItemMonotropa::StaticGetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemMonotropa",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemMonotropa::GetClass() const */

long * GridItemMonotropa::GetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemMonotropa",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemMonotropa::SetThresholdRatio(float) */

void __thiscall GridItemMonotropa::SetThresholdRatio(GridItemMonotropa *this,float param_1)

{
  *(float *)(this + 0x1c8) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMonotropa::GridItemMonotropa() */

void __thiscall GridItemMonotropa::GridItemMonotropa(GridItemMonotropa *this)

{
  bool bVar1;
  undefined4 uVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_06999c60;
  *(undefined ***)(this + 0x10) = &PTR__GridItemMonotropa_06999f18;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1b0));
  this[0x1a5] = (GridItemMonotropa)0x0;
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x1b8) = uVar2;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1bc) = uVar2;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1b0),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  *(undefined4 *)(this + 0x1cc) = 0;
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined4 *)(this + 0x1c8) = 0x3f800000;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemMonotropa::StaticNew() */

GridItemMonotropa * GridItemMonotropa::StaticNew(void)

{
  GridItemMonotropa *this;
  
  this = ::operator_new(0x1d0);
  GridItemMonotropa(this);
  return this;
}


/* GridItemMonotropa::OnStopAnimation(std::string const&) */

void GridItemMonotropa::OnStopAnimation(string *param_1)

{
  ResourceInfo *pRVar1;
  long *plVar2;
  
  *(undefined4 *)(param_1 + 0x1a8) = 2;
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(param_1 + 0x1b0));
  if (pRVar1 != (ResourceInfo *)0x0) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x1b0));
    (**(code **)(*plVar2 + 0x80))(plVar2,1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMonotropa::GetFreezeAnimationName(Sexy::RtWeakPtr<Zombie>) */

void GridItemMonotropa::GetFreezeAnimationName(string *param_1,long param_2,RtWeakPtr *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ResourceInfo *pRVar4;
  long lVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_3);
  if (pRVar4 == (ResourceInfo *)0x0) {
    iVar3 = *(int *)(param_2 + 0x1cc);
  }
  else {
    iVar3 = *(int *)(param_2 + 0x1cc);
    if (iVar3 == 0) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
      Zombie::GetClassType();
      bVar1 = std::operator==(asStack_10,"ZombieImp");
      std::string::~string(asStack_10);
      if (bVar1) {
        Sexy::OutputDebugStrF((wchar_t *)"snowman tiny");
        std::string::string(param_1,"snowman_tiny");
        nop();
      }
      else {
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
        iVar3 = FUN_04cba1e4(*(undefined4 *)(lVar5 + 0xb0));
        if (iVar3 == 0) {
          Sexy::OutputDebugStrF((wchar_t *)"snowman normal");
          std::string::string(param_1,"snowman_normal");
          nop();
        }
        else {
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3)
          ;
          FUN_04cba1e4(*(undefined4 *)(lVar5 + 0xb0));
          cVar2 = Zombie::IsHelmTypeMetallic();
          if (cVar2 == '\0') {
            Sexy::OutputDebugStrF((wchar_t *)"snowman plastic");
            std::string::string(param_1,"snowman_plastic");
            nop();
          }
          else {
            Sexy::OutputDebugStrF((wchar_t *)"snowman iron");
            std::string::string(param_1,"snowman_iron");
            nop();
          }
        }
      }
      goto LAB_04cbbab4;
    }
  }
  if (iVar3 != 1) {
    Sexy::OutputDebugStrF((wchar_t *)"default snowman normal");
  }
  std::string::string(param_1,"snowman_normal");
  nop();
LAB_04cbbab4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMonotropa::UpdateSnowmanFade() */

void GridItemMonotropa::UpdateSnowmanFade(void)

{
  ActionSubSystem *pAVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pAVar1 = Board::GetGameSubSystem<ActionSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  GridItemAnimation::GetAnimRig();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)aRStack_60);
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::RtReflectionDelegate(aRStack_50);
  ActionSubSystem::AddActionEntityFade((ActionSubSystem *)0x3f800000,pAVar1,aRStack_58,1,aRStack_50)
  ;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMonotropa::PlayFreezeAnimation() */

void __thiscall GridItemMonotropa::PlayFreezeAnimation(GridItemMonotropa *this)

{
  ResourceInfo *pRVar1;
  PopAnimRig *pPVar2;
  string asStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x1b0));
  if (pRVar1 != (ResourceInfo *)0x0) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)(this + 0x1b0));
    GetFreezeAnimationName(asStack_60,this,aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    GridItemAnimation::GetAnimRig();
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnStopAnimation);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<GridItemMonotropa,void(GridItemMonotropa::*)(std::string_const&)>
              (aDStack_38,aRStack_50);
    PopAnimRig::PlayAndStop(pPVar2,asStack_60,0,aDStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    std::string::~string(asStack_60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemMonotropa::onGridItemInitialize() */

void __thiscall GridItemMonotropa::onGridItemInitialize(GridItemMonotropa *this)

{
  GridItemMonotropaProps *this_00;
  undefined4 uVar1;
  
  this_00 = GridItem::GetProps<GridItemMonotropaProps>();
  if (this_00 != (GridItemMonotropaProps *)0x0) {
    uVar1 = GridItemMonotropaProps::GetTimeThreshold(this_00);
    *(undefined4 *)(this + 0x1bc) = uVar1;
  }
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  RealObject::JoinTeam((RealObject *)this,2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMonotropa::onUpdate() */

void __thiscall GridItemMonotropa::onUpdate(GridItemMonotropa *this)

{
  RtWeakPtr *pRVar1;
  char cVar2;
  undefined4 uVar3;
  ResourceInfo *pRVar4;
  long *plVar5;
  Zombie *pZVar6;
  undefined8 uVar7;
  Effect_PopAnim *pEVar8;
  StandaloneEffect *this_00;
  long lVar9;
  float fVar10;
  int local_98;
  int local_94;
  RtWeakPtr<Sexy::SoundResource> aRStack_90 [8];
  string asStack_88 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_80 [8];
  Point aPStack_78 [16];
  DamageInfo aDStack_68 [8];
  float local_60;
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  switch(*(undefined4 *)(this + 0x1a8)) {
  case 0:
    pRVar1 = (RtWeakPtr *)(this + 0x1b0);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar1);
    if (pRVar4 != (ResourceInfo *)0x0) {
      pZVar6 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      uVar3 = Zombie::getZombieStateSerialization(pZVar6);
      *(undefined4 *)(this + 0x1c4) = uVar3;
      uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      pZVar6 = (Zombie *)PVZ_EOT();
      Zombie::ApplyCondition(pZVar6,0,uVar7,0x18,1);
      uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      Zombie::ApplyCondition((Zombie *)((ulong)pZVar6 & 0xffffffff),0,uVar7,0x66,1);
      pZVar6 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      Zombie::SetIgnoresAllDamage(pZVar6,true);
      pZVar6 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      Zombie::SetIsTargetable(pZVar6,false);
      pZVar6 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      Zombie::SetIgnoresCollisions(pZVar6,true);
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      FUN_04cba1e0(*(undefined4 *)(lVar9 + 0x284));
      FUN_04cba184(this + 300);
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      FUN_04cba1dc(*(undefined4 *)(lVar9 + 0x280));
      FUN_04cba18c(this + 0x128);
      PlayFreezeAnimation(this);
      *(undefined4 *)(this + 0x1a8) = 1;
    }
    break;
  case 2:
    cVar2 = TimeUtil::CheckTimeEclapse
                      (*(float *)(this + 0x1c8) * *(float *)(this + 0x1bc),*(float *)(this + 0x1b8))
    ;
    if (cVar2 != '\0') {
      *(undefined4 *)(this + 0x1a8) = 4;
    }
    break;
  case 3:
    UpdateSnowmanFade();
    break;
  case 4:
    pRVar1 = (RtWeakPtr *)(this + 0x1b0);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar1);
    if (pRVar4 != (ResourceInfo *)0x0) {
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      cVar2 = (**(code **)(*plVar5 + 0x328))();
      if (cVar2 == '\0') {
        DamageInfo::DamageInfo(aDStack_68);
        lVar9 = *(long *)this;
        if (*(code **)(lVar9 + 0x1e0) == GridItem::GetMaxHitpoints) {
          fVar10 = (float)GridItem::GetMaxHitpoints((GridItem *)this);
        }
        else {
          fVar10 = (float)(**(code **)(lVar9 + 0x1e0))(this);
          lVar9 = *(long *)this;
        }
        if (*(code **)(lVar9 + 0x1d8) == GridItem::GetHitpoints) {
          local_60 = (float)GridItem::GetHitpoints((GridItem *)this);
        }
        else {
          local_60 = (float)(**(code **)(lVar9 + 0x1d8))();
        }
        local_60 = fVar10 - local_60;
        local_58 = 0x1000000000000;
        Sexy::OutputDebugStrF((wchar_t *)"snowman_turnzombie damage = %d",(double)local_60);
        pZVar6 = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
        Zombie::SetIgnoresAllDamage(pZVar6,false);
        pZVar6 = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
        Zombie::SetIsTargetable(pZVar6,true);
        pZVar6 = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
        Zombie::SetIgnoresCollisions(pZVar6,false);
        pZVar6 = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
        Zombie::EndCondition(pZVar6,0x18);
        pZVar6 = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
        Zombie::EndCondition(pZVar6,0x66);
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
        (**(code **)(*plVar5 + 0x80))(plVar5,0);
        if (this[0x1a5] != (GridItemMonotropa)0x0) {
          uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
          Zombie::ApplyCondition((Zombie *)0x40000000,0,uVar7,0,1);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
          BoardEntity::CalcGridPosition();
          BoardTransforms::GridToBoardSpace(aPStack_78);
          fVar10 = 0.0;
          if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
            fVar10 = (float)Board::calculateRoofOffsetZ((float)local_98);
          }
          EATextSquish::Vec3::Vec3
                    ((Vec3 *)aPStack_78,(float)local_98,(float)(local_94 + -0x1e),fVar10);
          Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_90,(RtWeakPtrBase *)aRStack_80);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
          pEVar8 = (Effect_PopAnim *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
          std::string::string(asStack_88,"POPANIM_EFFECTS_MONOTROPA_LV5_BULLET_HIT");
          GetPAMByName(asStack_88);
          pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_80);
          Effect_PopAnim::CreatePopAnimRig(pEVar8,(PopAnim *)pRVar4,(RtClass *)0x0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
          std::string::~string(asStack_88);
          nop();
          this_00 = (StandaloneEffect *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
          StandaloneEffect::SetBoardSpaceOrigin(this_00,(SexyVector3 *)aPStack_78,-1);
          pEVar8 = (Effect_PopAnim *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
          Effect_PopAnim::SetCentered(pEVar8,true);
          lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
          FUN_04cba2c0(lVar9 + 0x1c);
          pEVar8 = (Effect_PopAnim *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
          std::string::string((string *)aRStack_80,"animation");
          Effect_PopAnim::PlaySingleAnimation(pEVar8,aRStack_80,0);
          std::string::~string((string *)aRStack_80);
          nop();
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
        }
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
        (**(code **)(*plVar5 + 0x110))(plVar5,aDStack_68);
        DamageInfo::~DamageInfo(aDStack_68);
      }
    }
    (**(code **)(*(long *)this + 0x48))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMonotropa::TakeDamage(DamageInfo const&) */

void __thiscall GridItemMonotropa::TakeDamage(GridItemMonotropa *this,DamageInfo *param_1)

{
  GridItemMonotropaProps *pGVar1;
  long lVar2;
  float fVar3;
  DamageInfo aDStack_68 [8];
  float local_60;
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo(aDStack_68,param_1);
  pGVar1 = GridItem::GetProps<GridItemMonotropaProps>();
  if ((pGVar1 != (GridItemMonotropaProps *)0x0) && (lVar2 = operator&(local_58,0x400), lVar2 != 0))
  {
    fVar3 = (float)GridItemMonotropaProps::GetDamageRatio(pGVar1,1);
    local_60 = fVar3 * local_60;
  }
  GridItem::TakeDamage((GridItem *)this,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemMonotropa::KillGridItem() */

void __thiscall GridItemMonotropa::KillGridItem(GridItemMonotropa *this)

{
  RtWeakPtr *this_00;
  char cVar1;
  ResourceInfo *pRVar2;
  long *plVar3;
  
  this_00 = (RtWeakPtr *)(this + 0x1b0);
  GridItem::KillGridItem((GridItem *)this);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
  if ((pRVar2 != (ResourceInfo *)0x0) &&
     (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00), cVar1 != '\0')) {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    cVar1 = (**(code **)(*plVar3 + 0x328))();
    if (cVar1 == '\0') {
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      (**(code **)(*plVar3 + 0x48))();
      return;
    }
  }
  return;
}

