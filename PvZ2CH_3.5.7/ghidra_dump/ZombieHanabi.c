// Class: ZombieHanabi


/* ZombieHanabi::onEnterState_Die(ZombieState) */

void ZombieHanabi::onEnterState_Die(Zombie *param_1)

{
  Zombie::onEnterState_Die();
  Zombie::TakeFatalDamage(param_1,(BoardEntity *)0x0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHanabi::burnZombie(Zombie*) */

void __thiscall ZombieHanabi::burnZombie(ZombieHanabi *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar3;
  Point *extraout_x1;
  BoardTransforms aBStack_40 [8];
  int local_38;
  int local_34;
  string asStack_30 [8];
  RtWeakPtr aRStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Zombie *)0x0) {
    cVar1 = Zombie::isInState((Zombie *)this,4);
    if (cVar1 == '\0') {
      BoardEntity::CalcGridPosition();
      BoardTransforms::GridToBoardSpaceRect(aBStack_40,extraout_x1);
      Sexy::TRect<int>::GetCenter();
      Sexy::Point::Point((Point *)&local_38,(TPoint *)aRStack_28);
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string(asStack_30,"POPANIM_EFFECTS_ZOMBIE_EXPLORER_FIRE");
      GetPAMByName(asStack_30);
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_28);
      Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      std::string::~string(asStack_30);
      nop();
      std::string::string((string *)aRStack_28,"animation");
      Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_28,0);
      std::string::~string((string *)aRStack_28);
      nop();
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_28,(float)local_38,(float)local_34,0.0);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_28,-1);
      Effect_PopAnim::SetCentered(this_00,true);
      std::string::string((string *)aRStack_28,"Play_Zomb_Egypt_Explorer_Mvmt_Burn");
      RealObject::PlayPositionalSound((RealObject *)param_1,(string *)aRStack_28,0.0);
      std::string::~string((string *)aRStack_28);
      nop();
      Zombie::TakeFatalDamage(param_1,(BoardEntity *)0x0);
      iVar2 = Zombie::getZombieStateSerialization((Zombie *)this);
      if (iVar2 == 2) {
        Zombie::setZombieState((Zombie *)this,1,0);
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
/* ZombieHanabi::burnPlantGroup(PlantGroup*) */

void __thiscall ZombieHanabi::burnPlantGroup(ZombieHanabi *this,PlantGroup *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar4;
  vector *pvVar5;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  Plant *pPVar6;
  Point *extraout_x1;
  BoardTransforms aBStack_50 [8];
  int local_48;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  string asStack_30 [16];
  RtWeakPtr aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (PlantGroup *)0x0) && (cVar1 = Zombie::isInState((Zombie *)this,4), cVar1 == '\0')
     ) {
    cVar1 = PlantGroup::HasInvinciblePlant();
    if ((cVar1 == '\0') || (iVar3 = (**(code **)(*(long *)param_1 + 0x180))(param_1), iVar3 < 2)) {
      cVar1 = PlantGroup::HasInvinciblePlant();
      if ((cVar1 != '\0') || (iVar3 = (**(code **)(*(long *)param_1 + 0x180))(param_1), iVar3 < 2))
      {
        std::string::string(asStack_30,"smallChestnut");
        PlantGroup::GetPlantOfClass(aRStack_20,param_1,asStack_30);
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20)
        ;
        std::string::~string(asStack_30);
        nop();
        if (!bVar2) goto LAB_04691d38;
      }
      BoardEntity::CalcGridPosition();
      BoardTransforms::GridToBoardSpaceRect(aBStack_50,extraout_x1);
      Sexy::TRect<int>::GetCenter();
      Sexy::Point::Point((Point *)&local_48,(TPoint *)aRStack_20);
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string((string *)&local_38,"POPANIM_EFFECTS_ZOMBIE_EXPLORER_FIRE");
      GetPAMByName((string *)&local_38);
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
      Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar4,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      std::string::~string((string *)&local_38);
      nop();
      std::string::string((string *)aRStack_20,"animation");
      Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_20,0);
      std::string::~string((string *)aRStack_20);
      nop();
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_20,(float)local_48,(float)local_44,0.0);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_20,-1);
      Effect_PopAnim::SetCentered(this_00,true);
      std::string::string((string *)aRStack_20,"Play_Zomb_Egypt_Explorer_Mvmt_Burn");
      RealObject::PlayPositionalSound((RealObject *)param_1,(string *)aRStack_20,0.0);
      std::string::~string((string *)aRStack_20);
      nop();
      pvVar5 = (vector *)PlantGroup::Plants();
      std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::vector
                ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)aRStack_20
                 ,pvVar5);
      local_40 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)aRStack_20);
      local_38 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)aRStack_20);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38),
            bVar2) {
        this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
        pPVar6 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
        cVar1 = Plant::IsIgnoreControlAndDmg(pPVar6);
        if (cVar1 == '\0') {
          pPVar6 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
          Plant::KillPlant(pPVar6,0,1,1);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
      }
      iVar3 = Zombie::getZombieStateSerialization((Zombie *)this);
      if (iVar3 == 2) {
        Zombie::setZombieState((Zombie *)this,1,0);
      }
      std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
                ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)aRStack_20
                );
    }
    else {
      iVar3 = Zombie::getZombieStateSerialization((Zombie *)this);
      if (iVar3 != 2) {
        Zombie::setZombieState((Zombie *)this,2,0);
      }
    }
  }
LAB_04691d38:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieHanabi::~ZombieHanabi() */

void __thiscall ZombieHanabi::~ZombieHanabi(ZombieHanabi *this)

{
  *(undefined ***)this = &PTR_GetClass_06a03e50;
  *(undefined ***)(this + 0x10) = &PTR__ZombieHanabi_06a04898;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieHanabi::~ZombieHanabi() */

void __thiscall ZombieHanabi::~ZombieHanabi(ZombieHanabi *this)

{
  ~ZombieHanabi(this + -0x10);
  return;
}


/* ZombieHanabi::~ZombieHanabi() */

void __thiscall ZombieHanabi::~ZombieHanabi(ZombieHanabi *this)

{
  ~ZombieHanabi(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieHanabi::~ZombieHanabi() */

void __thiscall ZombieHanabi::~ZombieHanabi(ZombieHanabi *this)

{
  ~ZombieHanabi(this + -0x10);
  return;
}


/* ZombieHanabi::CheckExplode(float) */

void ZombieHanabi::CheckExplode(float param_1)

{
  FUN_04ef0950();
  return;
}


/* ZombieHanabi::ZombieHanabi() */

void __thiscall ZombieHanabi::ZombieHanabi(ZombieHanabi *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_06a03e50;
  *(undefined ***)(this + 0x10) = &PTR__ZombieHanabi_06a04898;
  Sexy::Point::Point((Point *)(this + 0x80c));
  return;
}


/* ZombieHanabi::StaticNew() */

ZombieHanabi * ZombieHanabi::StaticNew(void)

{
  ZombieHanabi *this;
  
  this = ::operator_new(0x818);
  ZombieHanabi(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHanabi::Explode() */

void __thiscall ZombieHanabi::Explode(ZombieHanabi *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  Effect_PopAnim *this_00;
  int local_30;
  int local_2c;
  RtWeakPtr aRStack_28 [8];
  string asStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  iVar4 = SharkMinion::getRow((SharkMinion *)this);
  uVar5 = Board::MakeRenderOrder(0x64960,iVar4,iVar3);
  Sexy::Point::Point((Point *)&local_18,iVar3,iVar4);
  BoardTransforms::GridToBoardSpace((Point *)&local_18);
  FUN_05475d88(asStack_20,&DAT_06ba3e80);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_18,(float)local_30,(float)(local_2c + -10),0.0);
  PopAnimEffectFactory::CreateEffect(aRStack_28,local_18,local_14,local_10,asStack_20,uVar5,0,1);
  std::string::~string(asStack_20);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_28);
  if ((bVar1) &&
     (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_28), cVar2 != '\0')) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    nop();
    Effect_PopAnim::SetCentered(this_00,true);
    Effect_PopAnim::PlaySingleAnimation(this_00,&DAT_06ba3da8,0);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHanabi::onEnterState_Fire(ZombieState) */

void ZombieHanabi::onEnterState_Fire(Zombie *param_1)

{
  long *plVar1;
  code *pcVar2;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)Zombie::GetAnimRig(param_1);
  pcVar2 = *(code **)(*plVar1 + 0x168);
  std::string::string(asStack_58,"power");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_1,onAnimStop);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<ZombieHanabi,void(ZombieHanabi::*)(std::string_const&)>(aDStack_38,aCStack_50);
  (*pcVar2)(plVar1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHanabi::onEnterState_Explode(ZombieState) */

void ZombieHanabi::onEnterState_Explode(Zombie *param_1)

{
  long *plVar1;
  code *pcVar2;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)Zombie::GetAnimRig(param_1);
  pcVar2 = *(code **)(*plVar1 + 0x168);
  std::string::string(asStack_58,"explode");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_1,onAnimStop);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<ZombieHanabi,void(ZombieHanabi::*)(std::string_const&)>(aDStack_38,aCStack_50);
  (*pcVar2)(plVar1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieHanabi::onZombieInitialize() */

void __thiscall ZombieHanabi::onZombieInitialize(ZombieHanabi *this)

{
  ZombieHanabiProps *pZVar1;
  float fVar2;
  float fVar3;
  
  this[0x800] = (ZombieHanabi)0x1;
  pZVar1 = Zombie::GetProps<ZombieHanabiProps>((Zombie *)this);
  fVar3 = *(float *)(pZVar1 + 0x210);
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x804) = fVar2 + fVar3;
  pZVar1 = Zombie::GetProps<ZombieHanabiProps>((Zombie *)this);
  fVar3 = *(float *)(pZVar1 + 0x214);
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x808) = fVar2 + fVar3;
  return;
}


/* ZombieHanabi::onAnimStop(std::string const&) */

void __thiscall ZombieHanabi::onAnimStop(ZombieHanabi *this,string *param_1)

{
  bool bVar1;
  int iVar2;
  ZombieHanabiProps *pZVar3;
  
  iVar2 = Zombie::getZombieStateSerialization((Zombie *)this);
  if ((iVar2 != 5) && (iVar2 = Zombie::getZombieStateSerialization((Zombie *)this), iVar2 != 7)) {
    bVar1 = std::operator==(param_1,"power");
    if (bVar1) {
      pZVar3 = Zombie::GetProps<ZombieHanabiProps>((Zombie *)this);
      *(float *)(this + 0x804) = *(float *)(this + 0x804) + *(float *)(pZVar3 + 0x210);
      Zombie::setZombieState((Zombie *)this,1,0);
      return;
    }
    bVar1 = std::operator==(param_1,"explode");
    if (bVar1) {
      Zombie::setZombieState((Zombie *)this,5,0);
      (**(code **)(*(long *)this + 0x80))(this,1);
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHanabi::HanabiEndCompleted(StandaloneEffect*) */

void ZombieHanabi::HanabiEndCompleted(StandaloneEffect *param_1)

{
  int iVar1;
  int iVar2;
  GridIcelotusDropwater *pGVar3;
  GridIcelotusDropwater *pGVar4;
  long lVar5;
  ToxicWaterGridItemPoisonMist *this;
  undefined8 uVar6;
  Board *this_00;
  Vec3 aVStack_18 [16];
  long local_8;
  
  iVar1 = *(int *)(param_1 + 0x810);
  iVar2 = *(int *)(param_1 + 0x80c);
  local_8 = ___stack_chk_guard;
  pGVar3 = EntityFinder::GetGridItemAt<GridIcelotusDropwater>(iVar2,iVar1);
  pGVar4 = EntityFinder::GetGridItemAt<GridIcelotusDropwater>(iVar2,iVar1);
  uVar6 = *(undefined8 *)(gLawnApp + 0x9f0);
  EATextSquish::Vec3::Vec3(aVStack_18,(float)iVar2,(float)iVar1,0.0);
  lVar5 = Board::FindRegionWithFlags(uVar6,aVStack_18,2);
  if (((lVar5 == 0) && (pGVar3 == (GridIcelotusDropwater *)0x0)) &&
     (pGVar4 == (GridIcelotusDropwater *)0x0)) {
    this = (ToxicWaterGridItemPoisonMist *)FUN_04ef2000(iVar2,iVar1);
    if (this == (ToxicWaterGridItemPoisonMist *)0x0) {
      this_00 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string((string *)aVStack_18,"hanabi");
      Board::AddGridItem(this_00,(string *)aVStack_18,iVar2,iVar1,1);
      std::string::~string((string *)aVStack_18);
      nop();
    }
    else {
      ToxicWaterGridItemPoisonMist::TurnToLoop(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHanabi::DamagePlant() */

void __thiscall ZombieHanabi::DamagePlant(ZombieHanabi *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ZombieHanabiProps *pZVar5;
  long lVar6;
  undefined8 *puVar7;
  Plant *pPVar8;
  ulong uVar9;
  Zombie *pZVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 local_80;
  undefined8 local_78;
  Insets aIStack_68 [8];
  float local_60;
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = RealObject::IsOnTeam(this,2);
  if (cVar1 != '\0') {
    uVar11 = 0;
    iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
    iVar3 = SharkMinion::getRow((SharkMinion *)this);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
    uVar4 = operator|(1,2);
    Sexy::Insets::Insets(aIStack_68,iVar2,iVar3,1,1);
    EntityFinder::GetEntitiesInGridSquares
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar4,
               aIStack_68);
    DamageInfo::DamageInfo((DamageInfo *)aIStack_68);
    pZVar5 = Zombie::GetProps<ZombieHanabiProps>((Zombie *)this);
    uVar12 = local_80;
    local_58 = 0x400;
    local_60 = (float)*(int *)(pZVar5 + 0x220);
    lVar6 = FUN_04ef0918(local_80,local_78);
    if (lVar6 != 0) {
      do {
        puVar7 = (undefined8 *)FUN_04ef0924(uVar12,uVar11);
        pPVar8 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar7);
        if (pPVar8 == (Plant *)0x0) {
          puVar7 = (undefined8 *)FUN_04ef0924(local_80,uVar11);
          pZVar10 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7);
          cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)pZVar10);
          if ((this != (ZombieHanabi *)pZVar10) && (cVar1 != '\0')) {
            (**(code **)(*(long *)pZVar10 + 0x110))(pZVar10,aIStack_68);
          }
        }
        else {
          (**(code **)(*(long *)pPVar8 + 0x110))(pPVar8,aIStack_68);
        }
        uVar12 = local_80;
        uVar11 = uVar11 + 1;
        uVar9 = FUN_04ef0918(local_80,local_78);
      } while (uVar11 < uVar9);
    }
    DamageInfo::~DamageInfo((DamageInfo *)aIStack_68);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHanabi::CalcHanabiFireField() */

void ZombieHanabi::CalcHanabiFireField(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  BoardEntity *in_x0;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  int iVar5;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  iVar3 = BoardEntity::CalcColumnPosition(in_x0);
  iVar4 = SharkMinion::getRow((SharkMinion *)in_x0);
  cVar2 = RealObject::IsOnTeam();
  if (cVar2 == '\0') {
    iVar5 = iVar3 + -1;
    iVar1 = iVar4 + -1;
    do {
      while (iVar1 <= iVar4 + 1) {
        Sexy::Point::Point(aPStack_10,iVar5,iVar1);
        cVar2 = CheckGridValid(aPStack_10);
        if ((cVar2 == '\0') || ((iVar1 == iVar4 && (iVar5 == iVar3)))) {
          iVar1 = iVar1 + 1;
        }
        else {
          Sexy::Point::Point(aPStack_10,iVar5,iVar1);
          std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)in_x8,aPStack_10);
          iVar1 = iVar1 + 1;
        }
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar4 + -1;
    } while (iVar5 <= iVar3);
  }
  else {
    iVar1 = iVar4 + -1;
    iVar5 = iVar3;
    do {
      while (iVar1 <= iVar4 + 1) {
        Sexy::Point::Point(aPStack_10,iVar5,iVar1);
        cVar2 = CheckGridValid(aPStack_10);
        if ((cVar2 == '\0') || ((iVar1 == iVar4 && (iVar5 == iVar3)))) {
          iVar1 = iVar1 + 1;
        }
        else {
          Sexy::Point::Point(aPStack_10,iVar5,iVar1);
          std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)in_x8,aPStack_10);
          iVar1 = iVar1 + 1;
        }
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar4 + -1;
    } while (iVar5 <= iVar3 + 1);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHanabi::RandomFirePosition() */

void ZombieHanabi::RandomFirePosition(void)

{
  int iVar1;
  int iVar2;
  BoardEntity *in_x0;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  TPoint *pTVar6;
  Point *in_x8;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CalcHanabiFireField();
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_20);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)&local_20);
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>
            (uVar3,uVar4);
  lVar5 = FUN_04ef093c(local_20,local_18);
  if (lVar5 == 0) {
    iVar1 = BoardEntity::CalcColumnPosition(in_x0);
    iVar2 = SharkMinion::getRow((SharkMinion *)in_x0);
    Sexy::Point::Point(in_x8,iVar1,iVar2);
  }
  else {
    pTVar6 = (TPoint *)FUN_04ef0978(local_20);
    Sexy::Point::Point(in_x8,pTVar6);
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHanabi::FireHanabi() */

void __thiscall ZombieHanabi::FireHanabi(ZombieHanabi *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  Effect_PopAnim *this_00;
  int local_88;
  int iStack_84;
  int local_80;
  int local_7c;
  RtWeakPtr aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RandomFirePosition();
  *(ulong *)(this + 0x80c) = CONCAT44(iStack_84,local_88);
  uVar3 = Board::MakeRenderOrder(0x64960,iStack_84,local_88);
  Sexy::Point::Point((Point *)&local_60,local_88,iStack_84);
  BoardTransforms::GridToBoardSpace((Point *)&local_60);
  std::string::string(asStack_68,"POPANIM_EFFECTS_ZOMBIE_HEIAN_HANABI_EFFECT");
  EATextSquish::Vec3::Vec3((Vec3 *)&local_60,(float)local_80,(float)(local_7c + -10),0.0);
  PopAnimEffectFactory::CreateEffect(aRStack_78,local_60,local_5c,local_58,asStack_68,uVar3,0,1);
  std::string::~string(asStack_68);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_78);
  if ((bVar1) &&
     (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_78), cVar2 != '\0')) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
    nop();
    Effect_PopAnim::SetCentered(this_00,true);
    std::string::string((string *)&local_60,"idle");
    Effect_PopAnim::PlaySingleAnimation(this_00,(Point *)&local_60,0);
    std::string::~string((string *)&local_60);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string((string *)&local_60,"HanabiEndCompleted");
    RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,asStack_68,
               (Point *)&local_60);
    StandaloneEffect::SetCompletionCallback((StandaloneEffect *)this_00,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)&local_60);
    nop();
    Sexy::RtId::~RtId((RtId *)asStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieHanabi::onPopAnimCommand(std::string const&, float, std::string const&, std::string const&)
    */

void ZombieHanabi::onPopAnimCommand(string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"fire_action");
  if (bVar1) {
    FireHanabi((ZombieHanabi *)param_1);
    return;
  }
  bVar1 = std::operator==(param_4,"explode_action");
  if (!bVar1) {
    return;
  }
  DamagePlant((ZombieHanabi *)param_1);
  return;
}


/* ZombieHanabi::CalcAroundField(Sexy::Point) */

vector<Sexy::Point,std::allocator<Sexy::Point>> *
ZombieHanabi::CalcAroundField(vector<Sexy::Point,std::allocator<Sexy::Point>> *param_1)

{
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::vector(param_1,(vector *)&DAT_06ba3de0);
  return param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHanabi::StaticClassInit() */

void ZombieHanabi::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<ZombieState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<ZombieState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"ZombieHanabi");
      (*pcVar4)(plVar1,asStack_150,FUN_04ef3404,0x818,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<ZombieState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa08);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieHanabi,void(ZombieHanabi::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieHanabi,void(ZombieHanabi::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieHanabi,void(ZombieHanabi::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Hanabi_Fire");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04ef3100(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieHanabi,void(ZombieHanabi::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieHanabi,void(ZombieHanabi::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieHanabi,void(ZombieHanabi::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Hanabi_Explode");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04ef3100(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieHanabi::StaticGetClass() */

long * ZombieHanabi::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieHanabi",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieHanabi::GetClass() const */

long * ZombieHanabi::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieHanabi",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHanabi::CalcZombieAttackRect() */

void ZombieHanabi::CalcZombieAttackRect(void)

{
  char cVar1;
  int iVar2;
  Zombie *in_x0;
  ZombieHydraHeadAnimRig *pZVar3;
  ZombieHanabiProps *pZVar4;
  float *pfVar5;
  long lVar6;
  Plant *this;
  ulong uVar7;
  EntityConditionTracker<Zombie,ZombieConditions> *pEVar8;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar9;
  Insets *in_x8;
  ulong uVar10;
  undefined8 uVar11;
  code *pcVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_48 [2];
  float local_40 [2];
  float local_38;
  int local_34;
  int local_30 [4];
  float local_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::CalcZombieAttackRect();
  if (in_x0[0x800] != (Zombie)0x0) {
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)local_48);
    pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(in_x0);
    std::string::string((string *)&local_20,"zombie_hand_inner_01");
    cVar1 = PopAnimRig::CalcLayerTranslation
                      ((PopAnimRig *)pZVar3,(string *)&local_20,(SexyVector2 *)local_48);
    std::string::~string((string *)&local_20);
    nop();
    if (cVar1 != '\0') {
      ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                ((ResistenceValueInfo *)local_40);
      pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(in_x0);
      std::string::string((string *)&local_20,"_torch_fire");
      cVar1 = PopAnimRig::CalcLayerTranslation
                        ((PopAnimRig *)pZVar3,(string *)&local_20,(SexyVector2 *)local_40);
      std::string::~string((string *)&local_20);
      nop();
      if (cVar1 != '\0') {
        fVar15 = 1.0;
        fVar13 = (float)Zombie::GetFacingMultiplier(in_x0);
        local_38 = local_40[0] - local_48[0];
        pZVar4 = Zombie::GetProps<ZombieHanabiProps>(in_x0);
        local_20 = -*(float *)(pZVar4 + 0x218);
        pfVar5 = eastl::max_alt<float>(&local_38,&local_20);
        fVar14 = *pfVar5;
        cVar1 = Zombie::HasCondition();
        if (cVar1 != '\0') {
          this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
          this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
          if (this_01 != (PlayerInfo *)0x0) {
            std::string::string((string *)&local_20,"shrinkingviolet");
            iVar2 = PlayerInfo::GetEquipAvatarID(this_01,(string *)&local_20);
            std::string::~string((string *)&local_20);
            nop();
            if (iVar2 != -1) {
              pRVar9 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps(in_x0);
              lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar9);
              fVar15 = *(float *)(lVar6 + 0x1c8);
              goto LAB_04ef3afc;
            }
          }
          pRVar9 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps(in_x0);
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar9);
          fVar15 = *(float *)(lVar6 + 0x1c4);
        }
LAB_04ef3afc:
        cVar1 = Zombie::HasCondition();
        if (cVar1 != '\0') {
          pEVar8 = (EntityConditionTracker<Zombie,ZombieConditions> *)
                   Zombie::GetConditionTracker(in_x0);
          lVar6 = EntityConditionTracker<Zombie,ZombieConditions>::GetCondition(pEVar8,0x60);
          fVar15 = fVar15 * *(float *)(lVar6 + 0xc);
        }
        uVar10 = 0;
        local_30[0] = (int)((float)local_30[0] + fVar15 * fVar13 * fVar14);
        iVar2 = SharkMinion::getRow((SharkMinion *)in_x0);
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
        (**(code **)(*(long *)in_x0 + 0xd0))(&local_38);
        EntityFinder::GetEntitiesTouchingRectangle
                  ((string *)&local_20,1,(Insets *)local_30,iVar2,iVar2 + local_34 + -1);
        uVar11 = CONCAT44(uStack_1c,local_20);
        lVar6 = FUN_04ef0918(uVar11,local_18);
        if (lVar6 != 0) {
          do {
            FUN_04ef0924(uVar11,uVar10);
            nop();
            cVar1 = Plant::CanBeTargeted(this);
            if (cVar1 != '\0') {
              pcVar12 = *(code **)(*(long *)in_x0 + 0x940);
              (**(code **)(*(long *)this + 0x180))(this);
              cVar1 = (*pcVar12)();
              if ((cVar1 != '\0') && (cVar1 = FUN_04ef090c(this[400]), cVar1 != '\0')) {
                Zombie::CalcZombieAttackRect();
                goto LAB_04ef3bd8;
              }
            }
            uVar11 = CONCAT44(uStack_1c,local_20);
            uVar10 = uVar10 + 1;
            uVar7 = FUN_04ef0918(uVar11,local_18);
          } while (uVar10 < uVar7);
        }
        Sexy::Insets::Insets(in_x8,(Insets *)local_30);
LAB_04ef3bd8:
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
        goto LAB_04ef3bf0;
      }
    }
  }
  Sexy::Insets::Insets(in_x8,(Insets *)local_30);
LAB_04ef3bf0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieHanabi::updateState_Walk() */

void __thiscall ZombieHanabi::updateState_Walk(ZombieHanabi *this)

{
  char cVar1;
  undefined4 uVar2;
  RtObject *this_00;
  PlantGroup *pPVar3;
  ZombieHydraHeadAnimRig *this_01;
  ZombieHanabiProps *pZVar4;
  Zombie *pZVar5;
  GridItem *pGVar6;
  float fVar7;
  
  Zombie::updateState_Walk((Zombie *)this);
  if (this[0x800] == (ZombieHanabi)0x0) {
    return;
  }
  this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))(this);
  if (this_00 != (RtObject *)0x0) {
    pPVar3 = Sexy::RtObject::Cast<PlantGroup>(this_00);
    if (pPVar3 == (PlantGroup *)0x0) {
      pZVar5 = Sexy::RtObject::Cast<Zombie>(this_00);
      if (pZVar5 != (Zombie *)0x0) {
        pZVar5 = Sexy::RtObject::Cast<Zombie>(this_00);
        cVar1 = Zombie::CanTakeFatalDamage(pZVar5);
        if (cVar1 != '\0') {
          pZVar5 = Sexy::RtObject::Cast<Zombie>(this_00);
          burnZombie(this,pZVar5);
          goto LAB_04ef3d60;
        }
      }
      cVar1 = RealObject::IsOnTeam(this,2);
      if ((cVar1 != '\0') &&
         (pGVar6 = Sexy::RtObject::Cast<GridItem>(this_00), pGVar6 != (GridItem *)0x0)) {
        uVar2 = FUN_04ef0870(*(undefined4 *)(this + 0x24));
        cVar1 = RealObject::IsOnOpposingTeam(pGVar6,uVar2);
        if (cVar1 != '\0') {
          Zombie::setZombieState((Zombie *)this,2,0);
        }
      }
    }
    else {
      pPVar3 = Sexy::RtObject::Cast<PlantGroup>(this_00);
      burnPlantGroup(this,pPVar3);
    }
  }
LAB_04ef3d60:
  fVar7 = (float)PVZ_T();
  if ((*(float *)(this + 0x804) < fVar7) && (cVar1 = RealObject::IsOnTeam(this,2), cVar1 != '\0')) {
    Zombie::setZombieState((Zombie *)this,0x1f,0);
  }
  fVar7 = (float)PVZ_T();
  if (*(float *)(this + 0x808) < fVar7) {
    this[0x800] = (ZombieHanabi)0x0;
    this_01 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    ZombieAnimRig_Hanabi::SetHanabiLayer((ZombieAnimRig_Hanabi *)this_01,(bool)this[0x800]);
    pZVar4 = Zombie::GetProps<ZombieHanabiProps>((Zombie *)this);
    cVar1 = CheckExplode(*(float *)(pZVar4 + 0x21c));
    if (cVar1 != '\0') {
      Zombie::setZombieState((Zombie *)this,0x20,0);
      return;
    }
  }
  return;
}


/* ZombieHanabi::updateState_Eat() */

void __thiscall ZombieHanabi::updateState_Eat(ZombieHanabi *this)

{
  RtObject *this_00;
  PlantGroup *pPVar1;
  
  Zombie::updateState_Eat((Zombie *)this);
  if (((this[0x800] != (ZombieHanabi)0x0) &&
      (this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))(this), this_00 != (RtObject *)0x0)
      ) && (pPVar1 = Sexy::RtObject::Cast<PlantGroup>(this_00), pPVar1 != (PlantGroup *)0x0)) {
    pPVar1 = Sexy::RtObject::Cast<PlantGroup>(this_00);
    burnPlantGroup(this,pPVar1);
    return;
  }
  return;
}


/* ZombieHanabi::TakeDamage(DamageInfo const&) */

void __thiscall ZombieHanabi::TakeDamage(ZombieHanabi *this,DamageInfo *param_1)

{
  char cVar1;
  
  cVar1 = Zombie::isInState((Zombie *)this,0x20);
  if (cVar1 != '\0') {
    return;
  }
  Zombie::TakeDamage((Zombie *)this,param_1);
  return;
}

