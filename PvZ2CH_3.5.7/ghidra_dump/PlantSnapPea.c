// Class: PlantSnapPea


/* PlantSnapPea::CanBeTargeted() */

bool __thiscall PlantSnapPea::CanBeTargeted(PlantSnapPea *this)

{
  return *(int *)(this + 0x90) != 2;
}


/* PlantSnapPea::IsInvincible() const */

bool __thiscall PlantSnapPea::IsInvincible(PlantSnapPea *this)

{
  return *(int *)(this + 0x90) == 2;
}


/* PlantSnapPea::onPlantfoodEnded() */

void __thiscall PlantSnapPea::onPlantfoodEnded(PlantSnapPea *this)

{
  (**(code **)(*(long *)this + 0x228))();
  return;
}


/* PlantSnapPea::CanApplyPlantfood() */

byte __thiscall PlantSnapPea::CanApplyPlantfood(PlantSnapPea *this)

{
  byte bVar1;
  code *pcVar2;
  
  bVar1 = 0;
  if (*(int *)(this + 0x90) != 2) {
    pcVar2 = *(code **)(*(long *)*(Plant **)(this + 0x10) + 0x1f8);
    if (pcVar2 == Plant::IsInPlantFoodState) {
      bVar1 = Plant::IsInPlantFoodState(*(Plant **)(this + 0x10));
    }
    else {
      bVar1 = (*pcVar2)();
    }
    bVar1 = bVar1 ^ 1;
  }
  return bVar1;
}


/* PlantSnapPea::FindTargetAndFire(PlantWeapon) */

undefined8 PlantSnapPea::FindTargetAndFire(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x90) != 1) {
    return 0;
  }
  uVar1 = PlantFramework::FindTargetAndFire();
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSnapPea::StaticClassInit() */

void PlantSnapPea::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantSnapPea");
    (*pcVar2)(plVar1,asStack_10,FUN_04293918,0x98,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSnapPea::StaticGetClass() */

long * PlantSnapPea::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantSnapPea",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSnapPea::GetClass() const */

long * PlantSnapPea::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantSnapPea",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSnapPea::registerForEvents() */

void __thiscall PlantSnapPea::registerForEvents(PlantSnapPea *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameWon);
  Sexy::Delegate0::Delegate0<PlantSnapPea,void(PlantSnapPea::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::GameWon,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSnapPea::CanTargetGrid(int, int) */

char __thiscall PlantSnapPea::CanTargetGrid(PlantSnapPea *this,int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  RtObject *this_00;
  PirateStage *this_01;
  
  cVar1 = PlantFramework::CanTargetGrid((PlantFramework *)this,param_1,param_2);
  if (cVar1 != '\0') {
    lVar4 = Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
    if (lVar4 == 0) {
      return cVar1;
    }
    this_00 = (RtObject *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
    this_01 = Sexy::RtObject::Cast<PirateStage>(this_00);
    if (this_01 == (PirateStage *)0x0) {
      return cVar1;
    }
    iVar3 = BeghouledSeedBankProperties::GetBankType();
    if (param_1 < iVar3) {
      return cVar1;
    }
    cVar2 = PirateStage::IsPlankOnRow(this_01,param_2);
    if (cVar2 == '\0') {
      return cVar1;
    }
  }
  return '\0';
}


/* PlantSnapPea::PlantSnapPea() */

void __thiscall PlantSnapPea::PlantSnapPea(PlantSnapPea *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_06826950;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  return;
}


/* PlantSnapPea::StaticNew() */

PlantSnapPea * PlantSnapPea::StaticNew(void)

{
  PlantSnapPea *this;
  
  this = ::operator_new(0x98);
  PlantSnapPea(this);
  return this;
}


/* PlantSnapPea::CancelPlantfood() */

void __thiscall PlantSnapPea::CancelPlantfood(PlantSnapPea *this)

{
  SoccerGameModule *this_00;
  SexyVector3 *pSVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  this_00 = (SoccerGameModule *)FUN_04291144(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this_00 != (SoccerGameModule *)0x0) {
    this_01 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                **)(this + 0x10);
    pSVar1 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_01);
    SoccerGameModule::DoShot(this_00,pSVar1,(BoardEntity *)this_01);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSnapPea::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantSnapPea::onAnimStoppedCallback(PlantSnapPea *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  RtObject *pRVar5;
  PlantAnimRig_SnapPea *pPVar6;
  RtWeakPtrBase *pRVar7;
  EffectObject_BurrowAttack *this_00;
  long *plVar8;
  long lVar9;
  float *pfVar10;
  code *pcVar11;
  Plant *this_01;
  float fVar12;
  RtWeakPtr<Sexy::SoundResource> aRStack_f8 [8];
  undefined8 local_f0;
  undefined8 local_e8;
  RtReflectionDelegate<Sexy::Delegate0> aRStack_e0 [72];
  RtReflectionDelegate<Sexy::Delegate0> aRStack_98 [72];
  RtReflectionDelegate<Sexy::Delegate0> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"burrow_start");
  if (bVar1) {
    pRVar5 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    pPVar6 = Sexy::RtObject::Cast<PlantAnimRig_SnapPea>(pRVar5);
    PlantAnimRig_SnapPea::PlayBurrowIdle(pPVar6);
    local_f0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x40));
    local_e8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x40));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_f0,(__normal_iterator *)&local_e8), bVar1)
    {
      pRVar7 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_f8,pRVar7);
      this_00 = (EffectObject_BurrowAttack *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_f8);
      EffectObject_BurrowAttack::AttackTargetZombie(this_00);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_f8);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_f0);
    }
  }
  else {
    bVar1 = std::operator==(param_1,"burrow_return_chewing");
    if (bVar1) {
      this_01 = *(Plant **)(this + 0x10);
      if (*(code **)(*(long *)this_01 + 0x1f8) == Plant::IsInPlantFoodState) {
        cVar2 = Plant::IsInPlantFoodState(this_01);
      }
      else {
        cVar2 = (**(code **)(*(long *)this_01 + 0x1f8))();
        this_01 = *(Plant **)(this + 0x10);
      }
      if (cVar2 == '\0') {
        *(undefined4 *)(this + 0x90) = 3;
        iVar4 = FUN_0428f140(this_01);
        fVar12 = (float)PVZ_T();
        lVar9 = FUN_04291410(*(undefined8 *)(this + 0x10));
        pfVar10 = (float *)FUN_0428f1ac(*(undefined8 *)(lVar9 + 0x2b8),(long)(iVar4 + -1));
        *(float *)(this + 0x88) = *pfVar10 + fVar12;
        pRVar5 = (RtObject *)
                 UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        pPVar6 = Sexy::RtObject::Cast<PlantAnimRig_SnapPea>(pRVar5);
        PlantAnimRig_SnapPea::PlayChewingIdle(pPVar6);
      }
      else {
        uVar3 = 1;
        *(undefined4 *)(this + 0x90) = 1;
        cVar2 = Plant::GetAvatarEnable(this_01);
        if (cVar2 != '\0') {
          uVar3 = FUN_0428f184(*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30));
        }
        plVar8 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        pcVar11 = *(code **)(*plVar8 + 0x140);
        RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_e0);
        RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_98);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)aRStack_f8);
        std::string::string((string *)&local_e8,"onPlantfoodEndedCallback");
        RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
                  (aRStack_50,(RtId *)&local_f0,(string *)&local_e8);
        (*pcVar11)(plVar8,uVar3,aRStack_e0,aRStack_98,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_50);
        std::string::~string((string *)&local_e8);
        nop();
        Sexy::RtId::~RtId((RtId *)&local_f0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_f8)
        ;
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_98);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_e0);
      }
    }
    else {
      bVar1 = std::operator==(param_1,"burrow_return_idle");
      if (bVar1) {
        *(undefined4 *)(this + 0x90) = 0;
        pcVar11 = *(code **)(*(long *)*(Plant **)(this + 0x10) + 0x1f8);
        if (pcVar11 == Plant::IsInPlantFoodState) {
          cVar2 = Plant::IsInPlantFoodState(*(Plant **)(this + 0x10));
        }
        else {
          cVar2 = (*pcVar11)();
        }
        if (cVar2 == '\0') {
          fVar12 = (float)PVZ_T();
          lVar9 = FUN_04291410(*(undefined8 *)(this + 0x10));
          *(float *)(this + 0x88) = fVar12 + *(float *)(lVar9 + 0x2d4);
          plVar8 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
          ;
          (**(code **)(*plVar8 + 0x118))();
        }
        else {
          (**(code **)(*(long *)this + 0x228))(this);
        }
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSnapPea::isZombieBlacklisted(Sexy::RtWeakPtr<Zombie>, std::vector<std::string,
   std::allocator<std::string > >&) */

void __thiscall
PlantSnapPea::isZombieBlacklisted
          (undefined8 param_1,undefined8 param_2,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(param_3);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(param_3);
  local_18 = FUN_042922bc(uVar2,uVar3,param_2);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(param_3);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSnapPea::IsZombieBlacklistedForEating(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
PlantSnapPea::IsZombieBlacklistedForEating
          (PlantSnapPea *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  undefined1 uVar2;
  Zombie *pZVar3;
  long *plVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar3 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  cVar1 = Zombie::HasFogImmune(pZVar3);
  if (cVar1 == '\0') {
    pZVar3 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::IsBerserk(pZVar3);
    if (cVar1 == '\0') {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      cVar1 = (**(code **)(*plVar4 + 0x4d8))();
      if (cVar1 == '\0') {
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
        cVar1 = (**(code **)(*plVar4 + 0x508))();
        if (cVar1 == '\0') {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
          uVar2 = isZombieBlacklisted(this,aRStack_10,this + 0x58);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          goto LAB_042923c0;
        }
      }
    }
  }
  uVar2 = 1;
LAB_042923c0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSnapPea::canEatZombie(Sexy::RtWeakPtr<Zombie> const&) */

void __thiscall PlantSnapPea::canEatZombie(PlantSnapPea *this,RtWeakPtr *param_1)

{
  char cVar1;
  undefined1 uVar2;
  GameObject *this_00;
  undefined8 uVar3;
  long *plVar4;
  Zombie *pZVar5;
  long lVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  SexyVector3 *pSVar7;
  Board *this_02;
  undefined4 local_18;
  undefined4 local_14;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  BoardEntity::CalcGridPosition();
  this_00 = (GameObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  cVar1 = GameObject::IsDestroyed(this_00);
  if (cVar1 == '\0') {
    uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    cVar1 = RealObject::IsOnTeam(uVar3,2);
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
      cVar1 = Creature::IsOnBoard();
      if (cVar1 != '\0') {
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
        cVar1 = (**(code **)(*plVar4 + 0x328))();
        if (cVar1 == '\0') {
          pZVar5 = (Zombie *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
          cVar1 = Zombie::IsControlled(pZVar5);
          if (cVar1 == '\0') {
            lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
            cVar1 = FUN_0429009c(*(undefined4 *)(lVar6 + 0xcc));
            if (cVar1 == '\0') {
              uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
              cVar1 = Zombie::HasCondition(uVar3,0x2e);
              if (cVar1 == '\0') {
                uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                cVar1 = Zombie::HasCondition(uVar3,0x5a);
                if (cVar1 == '\0') {
                  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                            (aRStack_10,(RtWeakPtrBase *)param_1);
                  cVar1 = isZombieBlacklisted(this,aRStack_10,this + 0x70);
                  uVar2 = 0;
                  if (cVar1 == '\0') {
                    pZVar5 = (Zombie *)
                             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                    cVar1 = Zombie::IsOnBoardOrClose(pZVar5,1);
                    if (cVar1 != '\0') {
                      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                 ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                      cVar1 = (**(code **)(*plVar4 + 0x338))();
                      if (cVar1 == '\0') {
                        pZVar5 = (Zombie *)
                                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                           ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                        cVar1 = Zombie::IsFlying(pZVar5);
                        if (cVar1 == '\0') {
                          pZVar5 = (Zombie *)
                                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                             ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                          cVar1 = Zombie::IsInWater(pZVar5);
                          if (cVar1 == '\0') {
                            pZVar5 = (Zombie *)
                                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                            cVar1 = Zombie::CanTakeFatalDamage(pZVar5);
                            if (cVar1 != '\0') {
                              pZVar5 = (Zombie *)
                                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                 ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                              cVar1 = Zombie::IsTargetable(pZVar5);
                              if (cVar1 != '\0') {
                                this_02 = *(Board **)(gLawnApp + 0x9f0);
                                this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                       ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                                pSVar7 = (SexyVector3 *)
                                         std::
                                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         ::_M_leftmost(this_01);
                                cVar1 = Board::IsSky(this_02,pSVar7);
                                if (cVar1 == '\0') {
                                  uVar2 = (**(code **)(*(long *)this + 1000))
                                                    (this,local_18,local_14);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
                  goto LAB_042926a8;
                }
              }
            }
          }
        }
      }
    }
  }
  uVar2 = 0;
LAB_042926a8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSnapPea::onLevelEnd() */

void __thiscall PlantSnapPea::onLevelEnd(PlantSnapPea *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  long *plVar4;
  RtWeakPtrBase aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
    if (cVar2 != '\0') {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      (**(code **)(*plVar4 + 0x48))();
    }
    Sexy::RtWeakPtrBase::ClearId(aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<Sexy::RtWeakPtr<ZombieParticle>,std::allocator<Sexy::RtWeakPtr<ZombieParticle>>>::
  clear((vector<Sexy::RtWeakPtr<ZombieParticle>,std::allocator<Sexy::RtWeakPtr<ZombieParticle>>> *)
        this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSnapPea::onGameWon() */

void __thiscall PlantSnapPea::onGameWon(PlantSnapPea *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  long *plVar4;
  RtWeakPtrBase aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
    if (cVar2 != '\0') {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      (**(code **)(*plVar4 + 0x48))();
    }
    Sexy::RtWeakPtrBase::ClearId(aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<Sexy::RtWeakPtr<ZombieParticle>,std::allocator<Sexy::RtWeakPtr<ZombieParticle>>>::
  clear((vector<Sexy::RtWeakPtr<ZombieParticle>,std::allocator<Sexy::RtWeakPtr<ZombieParticle>>> *)
        this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSnapPea::fireZombieHead() */

void __thiscall PlantSnapPea::fireZombieHead(PlantSnapPea *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  RtObject *this_01;
  ZombieParticleProjectile *this_02;
  RtWeakPtr *pRVar2;
  ResourceInfo *pRVar3;
  long *plVar4;
  ZombieParticle *pZVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  this_01 = (RtObject *)
            PlantFramework::Fire
                      ((PlantFramework *)this,a_Stack_10,
                       *(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
  this_02 = Sexy::RtObject::Cast<ZombieParticleProjectile>(this_01);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x28);
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar7 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    std::
    random_shuffle<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<GridItemVase>*,std::vector<Sexy::RtWeakPtr<GridItemVase>,std::allocator<Sexy::RtWeakPtr<GridItemVase>>>>>
              (uVar6,uVar7);
    pRVar2 = (RtWeakPtr *)
             std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::back(this_00);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_10,pRVar2);
    std::vector<Sexy::RtWeakPtr<ZombieParticle>,std::allocator<Sexy::RtWeakPtr<ZombieParticle>>>::
    clear((vector<Sexy::RtWeakPtr<ZombieParticle>,std::allocator<Sexy::RtWeakPtr<ZombieParticle>>> *
          )this_00);
  }
  else {
    pRVar2 = (RtWeakPtr *)
             std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(this + 0x28));
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_10,pRVar2);
    FUN_04290114(this + 0x30);
  }
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)a_Stack_10);
  if (pRVar3 != (ResourceInfo *)0x0) {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    (**(code **)(*plVar4 + 0x80))(plVar4,0);
    if (this_02 != (ZombieParticleProjectile *)0x0) {
      pZVar5 = (ZombieParticle *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10)
      ;
      ZombieParticleProjectile::SetControlledParticle(this_02,pZVar5);
    }
  }
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_02);
}


/* PlantSnapPea::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

undefined8 PlantSnapPea::Fire(PlantSnapPea *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x90) == 1) {
    fVar4 = (float)PVZ_T();
    lVar2 = FUN_04291410(*(undefined8 *)(param_1 + 0x10));
    *(float *)(param_1 + 0x88) = fVar4 + *(float *)(lVar2 + 0x2d0);
    uVar3 = fireZombieHead(param_1);
    cVar1 = std::
            vector<Sexy::RtWeakPtr<ZombieParticle>,std::allocator<Sexy::RtWeakPtr<ZombieParticle>>>
            ::empty((vector<Sexy::RtWeakPtr<ZombieParticle>,std::allocator<Sexy::RtWeakPtr<ZombieParticle>>>
                     *)(param_1 + 0x28));
    if (cVar1 != '\0') {
      *(undefined4 *)(param_1 + 0x90) = 0;
    }
  }
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSnapPea::~PlantSnapPea() */

void __thiscall PlantSnapPea::~PlantSnapPea(PlantSnapPea *this)

{
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  long *plVar4;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  RtWeakPtrBase aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x28);
  *(undefined ***)this = &PTR_GetClass_06826950;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
    if (cVar2 != '\0') {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      (**(code **)(*plVar4 + 0x48))();
    }
    Sexy::RtWeakPtrBase::ClearId(aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<Sexy::RtWeakPtr<ZombieParticle>,std::allocator<Sexy::RtWeakPtr<ZombieParticle>>>::
  clear((vector<Sexy::RtWeakPtr<ZombieParticle>,std::allocator<Sexy::RtWeakPtr<ZombieParticle>>> *)
        this_00);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x70));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x58));
  std::
  vector<Sexy::RtWeakPtr<EffectObject_BurrowAttack>,std::allocator<Sexy::RtWeakPtr<EffectObject_BurrowAttack>>>
  ::~vector((vector<Sexy::RtWeakPtr<EffectObject_BurrowAttack>,std::allocator<Sexy::RtWeakPtr<EffectObject_BurrowAttack>>>
             *)(this + 0x40));
  std::vector<Sexy::RtWeakPtr<ZombieParticle>,std::allocator<Sexy::RtWeakPtr<ZombieParticle>>>::
  ~vector((vector<Sexy::RtWeakPtr<ZombieParticle>,std::allocator<Sexy::RtWeakPtr<ZombieParticle>>> *
          )this_00);
  PlantFramework::~PlantFramework((PlantFramework *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSnapPea::~PlantSnapPea() */

void __thiscall PlantSnapPea::~PlantSnapPea(PlantSnapPea *this)

{
  ~PlantSnapPea(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSnapPea::Initialize() */

void __thiscall PlantSnapPea::Initialize(PlantSnapPea *this)

{
  long lVar1;
  undefined4 uVar2;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::
  vector<Sexy::RtWeakPtr<EffectObject_BurrowAttack>,std::allocator<Sexy::RtWeakPtr<EffectObject_BurrowAttack>>>
  ::operator=((vector<Sexy::RtWeakPtr<EffectObject_BurrowAttack>,std::allocator<Sexy::RtWeakPtr<EffectObject_BurrowAttack>>>
               *)(this + 0x40),(vector *)avStack_20);
  std::
  vector<Sexy::RtWeakPtr<EffectObject_BurrowAttack>,std::allocator<Sexy::RtWeakPtr<EffectObject_BurrowAttack>>>
  ::~vector((vector<Sexy::RtWeakPtr<EffectObject_BurrowAttack>,std::allocator<Sexy::RtWeakPtr<EffectObject_BurrowAttack>>>
             *)avStack_20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<Sexy::RtWeakPtr<ZombieParticle>,std::allocator<Sexy::RtWeakPtr<ZombieParticle>>>::
  operator=((vector<Sexy::RtWeakPtr<ZombieParticle>,std::allocator<Sexy::RtWeakPtr<ZombieParticle>>>
             *)(this + 0x28),(vector *)avStack_20);
  std::vector<Sexy::RtWeakPtr<ZombieParticle>,std::allocator<Sexy::RtWeakPtr<ZombieParticle>>>::
  ~vector((vector<Sexy::RtWeakPtr<ZombieParticle>,std::allocator<Sexy::RtWeakPtr<ZombieParticle>>> *
          )avStack_20);
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x88) = uVar2;
  lVar1 = FUN_04291410(*(undefined8 *)(this + 0x10));
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x58),
             (vector *)(lVar1 + 0x2e0));
  lVar1 = FUN_04291410(*(undefined8 *)(this + 0x10));
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x70),
             (vector *)(lVar1 + 0x2f8));
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x8c) = uVar2;
  PlantFramework::Initialize((PlantFramework *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSnapPea::findZombieToEat() */

void PlantSnapPea::findZombieToEat(void)

{
  bool bVar1;
  char cVar2;
  PlantSnapPea *in_x0;
  vector *pvVar3;
  undefined8 *puVar4;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  GameObject *this;
  int iVar5;
  undefined8 local_58;
  undefined8 local_50;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  Insets aIStack_40 [16];
  int local_30 [4];
  vector<Zombie*,std::allocator<Zombie*>> avStack_20 [24];
  long local_8;
  
  iVar5 = 0;
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  Sexy::Insets::Insets
            (aIStack_40,*(int *)(*(long *)(in_x0 + 0x10) + 0x114),
             *(int *)(*(long *)(in_x0 + 0x10) + 0x110),*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8),
             1);
  pvVar3 = (vector *)Board::GetZombies(*(Board **)(gLawnApp + 0x9f0));
  std::vector<Zombie*,std::allocator<Zombie*>>::vector(avStack_20,pvVar3);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    this = (GameObject *)*puVar4;
    if ((this != (GameObject *)0x0) && (cVar2 = GameObject::IsDestroyed(this), cVar2 == '\0')) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_48,(RtWeakPtrBase *)local_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
      (**(code **)(*(long *)this + 400))((RtWeakPtr<Sexy::ResourceInfo> *)local_30,this);
      cVar2 = canEatZombie(in_x0,(RtWeakPtr *)aRStack_48);
      if (((cVar2 != '\0') &&
          ((cVar2 = BoardEntity::IsInRow
                              ((BoardEntity *)this,*(int *)(*(long *)(in_x0 + 0x10) + 0x110)),
           cVar2 != '\0' &&
           (cVar2 = Sexy::TRect<int>::Intersects((TRect<int> *)local_30,(TRect *)aIStack_40),
           cVar2 != '\0')))) &&
         ((cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)in_x8),
          cVar2 != '\0' || (local_30[0] < iVar5)))) {
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)in_x8,(RtWeakPtr *)aRStack_48);
        iVar5 = local_30[0];
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
  }
  std::vector<Zombie*,std::allocator<Zombie*>>::~vector(avStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSnapPea::OnBurrowAttackEnded(Sexy::RtWeakPtr<EffectObject_BurrowAttack>) */

void __thiscall PlantSnapPea::OnBurrowAttackEnded(PlantSnapPea *this,undefined8 param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  RtObject *pRVar4;
  PlantAnimRig_SnapPea *pPVar5;
  RtMixedPtr aRStack_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x40);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_60 = std::
             remove<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<EffectObject_BurrowAttack>*,std::vector<Sexy::RtWeakPtr<EffectObject_BurrowAttack>,std::allocator<Sexy::RtWeakPtr<EffectObject_BurrowAttack>>>>,Sexy::RtWeakPtr<EffectObject_BurrowAttack>>
                       (uVar2,uVar3,param_2);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_58,(__normal_iterator *)&local_60);
  std::
  vector<Sexy::RtWeakPtr<EffectObject_BurrowAttack>,std::allocator<Sexy::RtWeakPtr<EffectObject_BurrowAttack>>>
  ::erase((vector<Sexy::RtWeakPtr<EffectObject_BurrowAttack>,std::allocator<Sexy::RtWeakPtr<EffectObject_BurrowAttack>>>
           *)this_00,local_58);
  cVar1 = std::
          vector<Sexy::RtWeakPtr<EffectObject_BurrowAttack>,std::allocator<Sexy::RtWeakPtr<EffectObject_BurrowAttack>>>
          ::empty((vector<Sexy::RtWeakPtr<EffectObject_BurrowAttack>,std::allocator<Sexy::RtWeakPtr<EffectObject_BurrowAttack>>>
                   *)this_00);
  if (cVar1 != '\0') {
    cVar1 = std::
            vector<Sexy::RtWeakPtr<ZombieParticle>,std::allocator<Sexy::RtWeakPtr<ZombieParticle>>>
            ::empty((vector<Sexy::RtWeakPtr<ZombieParticle>,std::allocator<Sexy::RtWeakPtr<ZombieParticle>>>
                     *)(this + 0x28));
    if (cVar1 == '\0') {
      pRVar4 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
      ;
      pPVar5 = Sexy::RtObject::Cast<PlantAnimRig_SnapPea>(pRVar4);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string((string *)&local_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,(RtId *)&local_60,
                 (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_58);
      PlantAnimRig_SnapPea::PlayBurrowReturnChewing(pPVar5,aRStack_50);
    }
    else {
      pRVar4 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
      ;
      pPVar5 = Sexy::RtObject::Cast<PlantAnimRig_SnapPea>(pRVar4);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string((string *)&local_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,(RtId *)&local_60,
                 (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_58);
      PlantAnimRig_SnapPea::PlayBurrowReturnIdle(pPVar5,aRStack_50);
    }
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string((string *)&local_58);
    nop();
    Sexy::RtId::~RtId((RtId *)&local_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSnapPea::OnZombieEaten(Sexy::RtWeakPtr<ZombieParticle>) */

void __thiscall PlantSnapPea::OnZombieEaten(PlantSnapPea *this,RtWeakPtr *param_2)

{
  std::vector<Sexy::RtWeakPtr<ZombieParticle>,std::allocator<Sexy::RtWeakPtr<ZombieParticle>>>::
  push_back((vector<Sexy::RtWeakPtr<ZombieParticle>,std::allocator<Sexy::RtWeakPtr<ZombieParticle>>>
             *)(this + 0x28),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSnapPea::targetZombie(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
PlantSnapPea::targetZombie(PlantSnapPea *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  RtObject *pRVar1;
  EffectObject_BurrowAttack *pEVar2;
  PlantAnimRig_SnapPea *pPVar3;
  Board *this_00;
  int local_70;
  int local_6c;
  RtMixedPtr aRStack_68 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (0.0 < *(float *)(*(long *)(this + 0x10) + 0xd8)) {
    *(undefined4 *)(this + 0x90) = 2;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    BoardEntity::CalcGridPosition();
    this_00 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_58,"snappea_burrowattack");
    pRVar1 = (RtObject *)Board::AddEffectObject(this_00,asStack_58,local_70,local_6c);
    pEVar2 = Sexy::RtObject::Cast<EffectObject_BurrowAttack>(pRVar1);
    std::string::~string(asStack_58);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_58,(RtWeakPtrBase *)aRStack_60);
    EffectObject_BurrowAttack::SetOwner(pEVar2,asStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_58,(RtWeakPtrBase *)param_2);
    EffectObject_BurrowAttack::SetTargetZombie(pEVar2,asStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_58,(RtWeakPtrBase *)aRStack_60);
    std::
    vector<Sexy::RtWeakPtr<EffectObject_BurrowAttack>,std::allocator<Sexy::RtWeakPtr<EffectObject_BurrowAttack>>>
    ::push_back((vector<Sexy::RtWeakPtr<EffectObject_BurrowAttack>,std::allocator<Sexy::RtWeakPtr<EffectObject_BurrowAttack>>>
                 *)(this + 0x40),(RtWeakPtr *)asStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
    pRVar1 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    pPVar3 = Sexy::RtObject::Cast<PlantAnimRig_SnapPea>(pRVar1);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PlantAnimRig_SnapPea::PlayBurrowStart(pPVar3,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId((RtId *)aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSnapPea::Level5Attack() */

void __thiscall PlantSnapPea::Level5Attack(PlantSnapPea *this)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  int local_278c;
  undefined8 local_2788;
  undefined8 local_2780;
  Zombie *local_2778;
  undefined8 local_2770;
  undefined4 local_2768;
  undefined4 uStack_2764;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_2760 [24];
  undefined8 local_2748;
  undefined8 local_2740;
  Insets aIStack_2730 [24];
  random_device arStack_2718 [5000];
  undefined1 auStack_1390 [5000];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_278c = 2;
  iVar4 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_2760);
  Sexy::Insets::Insets(aIStack_2730,0,iVar4,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8),1);
  EntityFinder::GetEntitiesInGridSquares(avStack_2760,2,aIStack_2730);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_2748);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aIStack_2730);
  local_2788 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_2760);
  local_2780 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_2760);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_2788,(__normal_iterator *)&local_2780),
        bVar2) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_2788);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_2770,(RtWeakPtrBase *)&local_2768);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_2768);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_2770);
    if ((bVar2) && (cVar3 = canEatZombie(this,(RtWeakPtr *)&local_2770), cVar3 != '\0')) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_2768,(RtWeakPtrBase *)&local_2770);
      cVar3 = IsZombieBlacklistedForEating(this,(RtWeakPtr<Sexy::ResourceInfo> *)&local_2768);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_2768);
      if (cVar3 == '\0') {
        std::vector<Zombie*,std::allocator<Zombie*>>::push_back
                  ((vector<Zombie*,std::allocator<Zombie*>> *)&local_2748,&local_2778);
      }
      else {
        std::vector<Zombie*,std::allocator<Zombie*>>::push_back
                  ((vector<Zombie*,std::allocator<Zombie*>> *)aIStack_2730,&local_2778);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_2770);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_2788);
  }
  std::string::string((string *)&local_2768,"default");
  std::random_device::random_device(arStack_2718,(string *)&local_2768);
  std::string::~string((string *)&local_2768);
  nop();
  uVar5 = std::random_device::operator()(arStack_2718);
  thunk_FUN_0345d478(auStack_1390,uVar5);
  uVar8 = local_2748;
  uVar6 = FUN_0428f170(local_2748,local_2740);
  if (uVar6 < 3) {
    if (uVar6 == 2) goto LAB_04295034;
    uVar8 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)aIStack_2730);
    uVar9 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)aIStack_2730);
    std::
    shuffle<__gnu_cxx::__normal_iterator<Zombie**,std::vector<Zombie*,std::allocator<Zombie*>>>,std::mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>&>
              (uVar8,uVar9,auStack_1390);
    local_2770 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_2748);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_2768,(__normal_iterator *)&local_2770);
    uVar8 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)aIStack_2730);
    uVar9 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)aIStack_2730);
    std::vector<Zombie*,std::allocator<Zombie*>>::
    insert<__gnu_cxx::__normal_iterator<Zombie**,std::vector<Zombie*,std::allocator<Zombie*>>>,void>
              ((vector<Zombie*,std::allocator<Zombie*>> *)&local_2748,
               CONCAT44(uStack_2764,local_2768),uVar8,uVar9);
  }
  else {
    uVar8 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_2748);
    uVar9 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_2748);
    std::
    shuffle<__gnu_cxx::__normal_iterator<Zombie**,std::vector<Zombie*,std::allocator<Zombie*>>>,std::mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>&>
              (uVar8,uVar9,auStack_1390);
    std::vector<Zombie*,std::allocator<Zombie*>>::operator=
              ((vector<Zombie*,std::allocator<Zombie*>> *)&local_2748,(vector *)&local_2748);
  }
  uVar8 = local_2748;
  uVar6 = FUN_0428f170(local_2748,local_2740);
LAB_04295034:
  local_2768 = (undefined4)uVar6;
  piVar7 = eastl::min_alt<int>((int *)&local_2768,&local_278c);
  iVar4 = *piVar7;
  local_278c = iVar4;
  if (0 < iVar4) {
    lVar10 = 0;
    do {
      lVar1 = lVar10 + 1;
      FUN_0428f17c(uVar8,lVar10);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_2768,(RtWeakPtrBase *)&local_2770);
      targetZombie(this,(RtWeakPtr<Sexy::SoundResource> *)&local_2768);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_2768);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_2770);
      uVar8 = local_2748;
      lVar10 = lVar1;
    } while ((int)lVar1 < iVar4);
  }
  std::random_device::~random_device(arStack_2718);
  std::vector<Zombie*,std::allocator<Zombie*>>::~vector
            ((vector<Zombie*,std::allocator<Zombie*>> *)aIStack_2730);
  std::vector<Zombie*,std::allocator<Zombie*>>::~vector
            ((vector<Zombie*,std::allocator<Zombie*>> *)&local_2748);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_2760);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSnapPea::UpdateActions() */

void __thiscall PlantSnapPea::UpdateActions(PlantSnapPea *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  pcVar5 = *(code **)(*(long *)*(Plant **)(this + 0x10) + 0x1f8);
  local_8 = ___stack_chk_guard;
  if (pcVar5 == Plant::IsInPlantFoodState) {
    cVar2 = Plant::IsInPlantFoodState(*(Plant **)(this + 0x10));
    if (cVar2 == '\0') goto LAB_04295220;
LAB_04295264:
    fVar7 = *(float *)(this + 0x8c);
    fVar6 = (float)PVZ_T();
    if (fVar6 <= fVar7) goto LAB_04295220;
    (**(code **)(*(long *)this + 0x228))(this);
    iVar1 = *(int *)(this + 0x90);
  }
  else {
    cVar2 = (*pcVar5)();
    if (cVar2 != '\0') goto LAB_04295264;
LAB_04295220:
    iVar1 = *(int *)(this + 0x90);
  }
  if (iVar1 == 0) {
    fVar7 = *(float *)(this + 0x88);
    fVar6 = (float)PVZ_T();
    if (fVar7 < fVar6) {
      cVar2 = Board::IsGameplayEnded(*(Board **)(gLawnApp + 0x9f0));
      if (cVar2 == '\0') {
        fVar6 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
        lVar4 = FUN_04291410(*(undefined8 *)(this + 0x10));
        cVar2 = FUN_0428f148(*(undefined8 *)(this + 0x10));
        if ((*(float *)(lVar4 + 0x2dc) <= fVar6) || (cVar2 == '\0')) {
          findZombieToEat();
          bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
          if (bVar3) {
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
            targetZombie(this,aRStack_10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        }
        else {
          Level5Attack(this);
        }
      }
      goto LAB_04295230;
    }
    iVar1 = *(int *)(this + 0x90);
  }
  if ((iVar1 == 3) && (fVar7 = *(float *)(this + 0x88), fVar6 = (float)PVZ_T(), fVar7 < fVar6)) {
    *(undefined4 *)(this + 0x90) = 1;
  }
LAB_04295230:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSnapPea::ApplyPlantfood() */

void __thiscall PlantSnapPea::ApplyPlantfood(PlantSnapPea *this)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  float fVar12;
  int local_278c;
  undefined8 local_2788;
  undefined8 local_2780;
  Zombie *local_2778;
  undefined8 local_2770;
  undefined4 local_2768;
  undefined4 uStack_2764;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_2760 [24];
  undefined8 local_2748;
  undefined8 local_2740;
  Insets aIStack_2730 [24];
  random_device arStack_2718 [5000];
  undefined1 auStack_1390 [5000];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar5 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  Plant::StartPlantfoodState(*(Plant **)(this + 0x10));
  uVar11 = PVZ_T();
  *(undefined4 *)(this + 0x88) = uVar11;
  lVar6 = FUN_04291410(*(undefined8 *)(this + 0x10));
  iVar2 = *(int *)(lVar6 + 0x2d8);
  local_278c = iVar2;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_2760);
  Sexy::Insets::Insets(aIStack_2730,0,iVar5,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8),1);
  EntityFinder::GetEntitiesInGridSquares(avStack_2760,2,aIStack_2730);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_2748);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aIStack_2730);
  local_2788 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_2760);
  local_2780 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_2760);
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_2788,(__normal_iterator *)&local_2780),
        bVar3) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_2788);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_2770,(RtWeakPtrBase *)&local_2768);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_2768);
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_2770);
    if ((bVar3) && (cVar4 = canEatZombie(this,(RtWeakPtr *)&local_2770), cVar4 != '\0')) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_2768,(RtWeakPtrBase *)&local_2770);
      cVar4 = IsZombieBlacklistedForEating(this,(RtWeakPtr<Sexy::ResourceInfo> *)&local_2768);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_2768);
      if (cVar4 == '\0') {
        std::vector<Zombie*,std::allocator<Zombie*>>::push_back
                  ((vector<Zombie*,std::allocator<Zombie*>> *)&local_2748,&local_2778);
      }
      else {
        std::vector<Zombie*,std::allocator<Zombie*>>::push_back
                  ((vector<Zombie*,std::allocator<Zombie*>> *)aIStack_2730,&local_2778);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_2770);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_2788);
  }
  std::string::string((string *)&local_2768,"default");
  std::random_device::random_device(arStack_2718,(string *)&local_2768);
  std::string::~string((string *)&local_2768);
  nop();
  uVar11 = std::random_device::operator()(arStack_2718);
  thunk_FUN_0345d478(auStack_1390,uVar11);
  uVar9 = local_2748;
  uVar7 = FUN_0428f170(local_2748,local_2740);
  if ((ulong)(long)iVar2 < uVar7) {
    uVar9 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_2748);
    uVar10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_2748);
    std::
    shuffle<__gnu_cxx::__normal_iterator<Zombie**,std::vector<Zombie*,std::allocator<Zombie*>>>,std::mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>&>
              (uVar9,uVar10,auStack_1390);
    std::vector<Zombie*,std::allocator<Zombie*>>::operator=
              ((vector<Zombie*,std::allocator<Zombie*>> *)&local_2748,(vector *)&local_2748);
  }
  else {
    if ((ulong)(long)iVar2 <= uVar7) goto LAB_042955e0;
    uVar9 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)aIStack_2730);
    uVar10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)aIStack_2730);
    std::
    shuffle<__gnu_cxx::__normal_iterator<Zombie**,std::vector<Zombie*,std::allocator<Zombie*>>>,std::mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>&>
              (uVar9,uVar10,auStack_1390);
    local_2770 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_2748);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_2768,(__normal_iterator *)&local_2770);
    uVar9 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)aIStack_2730);
    uVar10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)aIStack_2730);
    std::vector<Zombie*,std::allocator<Zombie*>>::
    insert<__gnu_cxx::__normal_iterator<Zombie**,std::vector<Zombie*,std::allocator<Zombie*>>>,void>
              ((vector<Zombie*,std::allocator<Zombie*>> *)&local_2748,
               CONCAT44(uStack_2764,local_2768),uVar9,uVar10);
  }
  uVar9 = local_2748;
  uVar7 = FUN_0428f170(local_2748,local_2740);
LAB_042955e0:
  local_2768 = (undefined4)uVar7;
  piVar8 = eastl::min_alt<int>((int *)&local_2768,&local_278c);
  iVar2 = *piVar8;
  local_278c = iVar2;
  if (iVar2 < 1) {
    fVar12 = (float)PVZ_T();
    lVar6 = FUN_04291410(*(undefined8 *)(this + 0x10));
    fVar12 = fVar12 + *(float *)(lVar6 + 0x38);
  }
  else {
    lVar6 = 0;
    do {
      lVar1 = lVar6 + 1;
      FUN_0428f17c(uVar9,lVar6);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_2768,(RtWeakPtrBase *)&local_2770);
      targetZombie(this,(RtWeakPtr<Sexy::SoundResource> *)&local_2768);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_2768);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_2770);
      uVar9 = local_2748;
      lVar6 = lVar1;
    } while ((int)lVar1 < iVar2);
    fVar12 = (float)PVZ_EOT();
  }
  *(float *)(this + 0x8c) = fVar12;
  std::random_device::~random_device(arStack_2718);
  std::vector<Zombie*,std::allocator<Zombie*>>::~vector
            ((vector<Zombie*,std::allocator<Zombie*>> *)aIStack_2730);
  std::vector<Zombie*,std::allocator<Zombie*>>::~vector
            ((vector<Zombie*,std::allocator<Zombie*>> *)&local_2748);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_2760);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

