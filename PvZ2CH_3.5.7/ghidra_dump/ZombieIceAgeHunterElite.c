// Class: ZombieIceAgeHunterElite


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeHunterElite::StaticClassInit() */

void ZombieIceAgeHunterElite::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieIceAgeHunterElite");
    (*pcVar2)(plVar1,asStack_10,FUN_04765ee8,0x860,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieIceAgeHunterElite::StaticGetClass() */

long * ZombieIceAgeHunterElite::StaticGetClass(void)

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
  uVar2 = ZombieIceAgeHunter::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieIceAgeHunterElite",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieIceAgeHunterElite::GetClass() const */

long * ZombieIceAgeHunterElite::GetClass(void)

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
  uVar2 = ZombieIceAgeHunter::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieIceAgeHunterElite",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieIceAgeHunterElite::updateState_Eat() */

void __thiscall ZombieIceAgeHunterElite::updateState_Eat(ZombieIceAgeHunterElite *this)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = Zombie::GetAnimRig((Zombie *)this);
  cVar1 = PopAnimRig::IsAnimFinished(uVar2,*(undefined4 *)(this + 0x854));
  if (cVar1 == '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)this,1,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeHunterElite::onEnterState_Eat(ZombieState) */

void ZombieIceAgeHunterElite::onEnterState_Eat(Zombie *param_1)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  code *pcVar4;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar3 = (long *)Zombie::GetAnimRig(param_1);
  pcVar4 = *(code **)(*plVar3 + 0x168);
  std::string::string(asStack_40,"eat");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  uVar2 = (*pcVar4)(plVar3,asStack_40,0,aDStack_38);
  *(undefined4 *)(param_1 + 0x854) = uVar2;
  std::string::~string(asStack_40);
  nop();
  uVar2 = PVZ_EOT();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(param_1 + 200) = uVar2;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieIceAgeHunterElite::ZombieIceAgeHunterElite() */

void __thiscall ZombieIceAgeHunterElite::ZombieIceAgeHunterElite(ZombieIceAgeHunterElite *this)

{
  ZombieIceAgeHunter::ZombieIceAgeHunter((ZombieIceAgeHunter *)this);
  *(undefined ***)this = &PTR_GetClass_068d07f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieIceAgeHunterElite_068d1278;
  return;
}


/* ZombieIceAgeHunterElite::StaticNew() */

ZombieIceAgeHunterElite * ZombieIceAgeHunterElite::StaticNew(void)

{
  ZombieIceAgeHunterElite *this;
  
  this = ::operator_new(0x860);
  ZombieIceAgeHunterElite(this);
  return this;
}


/* ZombieIceAgeHunterElite::onZombieInitialize() */

void __thiscall ZombieIceAgeHunterElite::onZombieInitialize(ZombieIceAgeHunterElite *this)

{
  ZombieIceAgeHunter::onZombieInitialize((ZombieIceAgeHunter *)this);
  *(undefined4 *)(this + 0x858) = 1;
  return;
}


/* ZombieIceAgeHunterElite::IsSpecialSkillTime() */

bool __thiscall ZombieIceAgeHunterElite::IsSpecialSkillTime(ZombieIceAgeHunterElite *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ZombieIceAgeHunterEliteProps *pZVar4;
  
  iVar1 = *(int *)(this + 0x858);
  pZVar4 = Zombie::GetProps<ZombieIceAgeHunterEliteProps>((Zombie *)this);
  iVar2 = *(int *)(pZVar4 + 0x234);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = iVar1 / iVar2;
  }
  return iVar1 == iVar3 * iVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeHunterElite::FindNearestTargetInRange(int) */

void ZombieIceAgeHunterElite::FindNearestTargetInRange(int param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  RealObject *this;
  Plant *pPVar5;
  Plant *this_00;
  long lVar6;
  undefined8 *puVar7;
  GridItem *pGVar8;
  undefined8 extraout_x0;
  int in_w1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  int iVar9;
  int local_60;
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  this = (RealObject *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  iVar9 = -1;
  BoardEntity::CalcGridPosition();
  Sexy::Insets::Insets(aIStack_30,0,in_w1,local_60,1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar4 = operator|(1,4);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,uVar4,aIStack_30);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)&local_50);
    if (!bVar2) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    BoardEntity::CalcGridPosition();
    cVar3 = RealObject::IsOnOpposingTeam(this,(RealObject *)*puVar7);
    if (cVar3 == '\0') {
      pGVar8 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar7);
      if (pGVar8 != (GridItem *)0x0) {
        nop();
        cVar3 = (**(code **)(*(long *)this + 0xa68))(this,extraout_x0);
joined_r0x04766c64:
        if (cVar3 != '\0') {
LAB_04766bdc:
          iVar1 = local_48;
          if (iVar9 < local_48) {
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                      ((RtWeakPtr<SpartanBambooMatrixSystem> *)in_x8,(RtWeakPtrBase *)aRStack_38);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
            iVar9 = iVar1;
          }
        }
      }
    }
    else {
      pPVar5 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar7);
      if (pPVar5 == (Plant *)0x0) {
        nop();
        GridItem::GetProps();
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
        if (*(int *)(lVar6 + 0x60) == 0) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
        }
        else {
          GridItem::GetProps();
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
          iVar1 = *(int *)(lVar6 + 0x60);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
          if (iVar1 != 1) goto LAB_04766bdc;
        }
      }
      else {
        nop();
        Plant::GetProps();
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
        if (*(int *)(lVar6 + 0xb4) == 0) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
        }
        else {
          Plant::GetProps();
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
          iVar1 = *(int *)(lVar6 + 0xb4);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
          if ((iVar1 != 1) && (cVar3 = Plant::IsIceblocked(this_00), cVar3 == '\0')) {
            cVar3 = Plant::CanBeRangeTargeted(this_00);
            goto joined_r0x04766c64;
          }
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeHunterElite::isNearestTargetInRange() */

void __thiscall ZombieIceAgeHunterElite::isNearestTargetInRange(ZombieIceAgeHunterElite *this)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  Plant *pPVar5;
  Plant *this_00;
  long lVar6;
  undefined8 *puVar7;
  GridItem *pGVar8;
  undefined8 extraout_x0;
  int iVar9;
  int local_60;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar9 = -1;
  BoardEntity::CalcGridPosition();
  Sexy::Insets::Insets(aIStack_30,0,local_5c + -1,local_60,3);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar4 = operator|(1,4);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,uVar4,aIStack_30);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)&local_50);
    if (!bVar2) {
      if ((iVar9 != -1) && (local_60 - *(int *)(this + 0x84c) <= iVar9)) {
        bVar2 = iVar9 <= local_60 - *(int *)(this + 0x848);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(bVar2);
    }
    puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    BoardEntity::CalcGridPosition();
    cVar3 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)*puVar7);
    if (cVar3 == '\0') {
      pGVar8 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar7);
      if (pGVar8 != (GridItem *)0x0) {
        nop();
        cVar3 = (**(code **)(*(long *)this + 0xa68))(this,extraout_x0);
joined_r0x04766ee0:
        if (cVar3 != '\0') {
LAB_04766e7c:
          if (iVar9 < local_48) {
            iVar9 = local_48;
          }
        }
      }
    }
    else {
      pPVar5 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar7);
      if (pPVar5 == (Plant *)0x0) {
        nop();
        GridItem::GetProps();
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
        if (*(int *)(lVar6 + 0x60) == 0) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
        }
        else {
          GridItem::GetProps();
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
          iVar1 = *(int *)(lVar6 + 0x60);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
          if (iVar1 != 1) goto LAB_04766e7c;
        }
      }
      else {
        nop();
        Plant::GetProps();
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
        if (*(int *)(lVar6 + 0xb4) == 0) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
        }
        else {
          Plant::GetProps();
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
          iVar1 = *(int *)(lVar6 + 0xb4);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
          if ((iVar1 != 1) && (cVar3 = Plant::IsIceblocked(this_00), cVar3 == '\0')) {
            cVar3 = Plant::CanBeRangeTargeted(this_00);
            goto joined_r0x04766ee0;
          }
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeHunterElite::updateState_Walk() */

void __thiscall ZombieIceAgeHunterElite::updateState_Walk(ZombieIceAgeHunterElite *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  RtObject *this_00;
  ZombieProjectileActionDefinition *pZVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieWithActions::getBaseActionDefinition<ZombieProjectileActionDefinition>();
  fVar7 = (float)PVZ_EOT();
  if (*(float *)(this + 0x840) == fVar7) {
    fVar7 = (float)PVZ_T();
    this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    pZVar5 = Sexy::RtObject::Cast<ZombieProjectileActionDefinition>(this_00);
    fVar8 = (float)ValueRange::GetRandomValue((ValueRange *)(pZVar5 + 0x54));
    pcVar6 = *(code **)(*(long *)this + 0xa70);
    *(float *)(this + 0x840) = fVar8 + fVar7;
    cVar1 = (*pcVar6)(this);
  }
  else {
    cVar1 = (**(code **)(*(long *)this + 0xa70))(this);
  }
  if ((cVar1 != '\0') &&
     (bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_18), bVar2)) {
    BoardEntity::CalcGridPosition();
    iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
    if ((local_10[0] < iVar3) && (fVar7 = (float)PVZ_T(), *(float *)(this + 0x840) < fVar7)) {
      pcVar6 = *(code **)(*(long *)this + 0xa60);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_10,(RtWeakPtrBase *)aRStack_18);
      (*pcVar6)(this,(RtWeakPtr<Sexy::SoundResource> *)local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    }
  }
  lVar4 = (**(code **)(*(long *)this + 0x228))(this);
  if (lVar4 != 0) {
    Zombie::setZombieState((Zombie *)this,2,0);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeHunterElite::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void __thiscall
ZombieIceAgeHunterElite::onPopAnimCommand
          (ZombieIceAgeHunterElite *this,string *param_1,float param_2,string *param_3,
          string *param_4)

{
  bool bVar1;
  char cVar2;
  RtObject *this_00;
  PlantGroup *this_01;
  long *plVar3;
  Plant *pPVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  ZombieIceAgeHunterElite *local_68 [12];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieWithActions::onPopAnimCommand((ZombieWithActions *)this,param_1,param_2,param_3,param_4);
  bVar1 = std::operator==(param_3,"smash_left");
  if (((bVar1) || (bVar1 = std::operator==(param_3,"smash_righ"), bVar1)) &&
     (this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))(this), this_00 != (RtObject *)0x0))
  {
    this_01 = Sexy::RtObject::Cast<PlantGroup>(this_00);
    if (this_01 == (PlantGroup *)0x0) {
      pPVar4 = Sexy::RtObject::Cast<Plant>(this_00);
      if (pPVar4 == (Plant *)0x0) {
        DamageInfo::DamageInfo((DamageInfo *)local_68);
        local_68[0] = this;
        (**(code **)(*(long *)this_00 + 0x120))(this_00,(DamageInfo *)local_68);
        DamageInfo::~DamageInfo((DamageInfo *)local_68);
      }
      else {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_68,(RtWeakPtrBase *)aRStack_70);
        Plant::TakeSmashAttack(pPVar4,(RtWeakPtr<Sexy::SoundResource> *)local_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
      }
    }
    else {
      PlantGroup::TakeSmashAttack(this_01,(BoardEntity *)this);
    }
  }
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x820));
  if (cVar2 != '\0') {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x820));
    (**(code **)(*plVar3 + 0x78))(param_2,plVar3,param_1,param_3,param_4);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieIceAgeHunterElite::~ZombieIceAgeHunterElite() */

void __thiscall ZombieIceAgeHunterElite::~ZombieIceAgeHunterElite(ZombieIceAgeHunterElite *this)

{
  *(undefined ***)this = &PTR_GetClass_068d07f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieIceAgeHunterElite_068d1278;
  ZombieIceAgeHunter::~ZombieIceAgeHunter((ZombieIceAgeHunter *)this);
  return;
}


/* non-virtual thunk to ZombieIceAgeHunterElite::~ZombieIceAgeHunterElite() */

void __thiscall ZombieIceAgeHunterElite::~ZombieIceAgeHunterElite(ZombieIceAgeHunterElite *this)

{
  ~ZombieIceAgeHunterElite(this + -0x10);
  return;
}


/* ZombieIceAgeHunterElite::~ZombieIceAgeHunterElite() */

void __thiscall ZombieIceAgeHunterElite::~ZombieIceAgeHunterElite(ZombieIceAgeHunterElite *this)

{
  ~ZombieIceAgeHunterElite(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieIceAgeHunterElite::~ZombieIceAgeHunterElite() */

void __thiscall ZombieIceAgeHunterElite::~ZombieIceAgeHunterElite(ZombieIceAgeHunterElite *this)

{
  ~ZombieIceAgeHunterElite(this + -0x10);
  return;
}

