// Class: PlantHorsebean


/* PlantHorsebean::isInState(PHBState) const */

bool __thiscall PlantHorsebean::isInState(PlantHorsebean *this,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0422300c(*(undefined4 *)(this + 0x38));
  return iVar1 == param_2;
}


/* PlantHorsebean::getPlantHorsebeanStateSerialization() */

void __thiscall PlantHorsebean::getPlantHorsebeanStateSerialization(PlantHorsebean *this)

{
  FUN_0422300c(*(undefined4 *)(this + 0x38));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHorsebean::GetPlantAttackRect(PlantWeapon) */

void PlantHorsebean::GetPlantAttackRect(Insets *param_1,long param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  uint local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(param_1);
  if ((param_3 & 0xfffffffd) == 0) {
    local_c = *(int *)(*(long *)(param_2 + 0x10) + 0x110) + -1;
    local_10 = param_3 & 0xfffffffd;
    piVar3 = eastl::max_alt<int>((int *)&local_10,&local_c);
    iVar2 = *piVar3;
    *(uint *)param_1 = param_3 & 0xfffffffd;
    iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
    *(undefined4 *)(param_1 + 8) = 800;
    *(int *)(param_1 + 4) = iVar1 * iVar2 + 0xa0;
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    lVar4 = *(long *)(param_2 + 0x10);
    *(int *)(param_1 + 0xc) = iVar2 * 3;
    if (*(int *)(lVar4 + 0x110) == 0) {
      iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
      *(int *)(param_1 + 0xc) = iVar2 << 1;
    }
  }
  else {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 8) = 800;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 600;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* PlantHorsebean::PlantHorsebean() */

void __thiscall PlantHorsebean::PlantHorsebean(PlantHorsebean *this)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_0680efc0;
  StateMachine<PHBState>::StateMachine((StateMachine<PHBState> *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe0));
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x34) = 0;
  this[0xd8] = (PlantHorsebean)0x0;
  *(undefined4 *)(this + 0x28) = uVar2;
  *(undefined4 *)(this + 0x2c) = uVar2;
  *(undefined4 *)(this + 0x30) = uVar2;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onHorseBeanPlaneTurnBack);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Plant*,int,Sexy::CBMemberTranslatorX<PlantHorsebean,void(PlantHorsebean::*)(Plant*,int)>>
            ((MessageRouter *)puVar1,Message::HorseBeanPlaneTurnBack,&local_40);
  return;
}


/* PlantHorsebean::StaticNew() */

PlantHorsebean * PlantHorsebean::StaticNew(void)

{
  PlantHorsebean *this;
  
  this = ::operator_new(0xf8);
  PlantHorsebean(this);
  return this;
}


/* PlantHorsebean::onEnterState_IDLE(PHBState) */

void PlantHorsebean::onEnterState_IDLE(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_042243f8(*(undefined8 *)(param_1 + 0x10));
  (**(code **)(*plVar1 + 0x118))();
  return;
}


/* PlantHorsebean::onTakeOffAnimDone(std::string const&) */

void PlantHorsebean::onTakeOffAnimDone(string *param_1)

{
  PlantAnimRig_Horsebean *this;
  
  this = (PlantAnimRig_Horsebean *)FUN_042243f8(*(undefined8 *)(param_1 + 0x10));
  PlantAnimRig_Horsebean::PlayAttackLoop(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHorsebean::onHorseBeanPlaneTurnBack(Plant*, int) */

void __thiscall
PlantHorsebean::onHorseBeanPlaneTurnBack(PlantHorsebean *this,Plant *param_1,int param_2)

{
  char cVar1;
  PlantAnimRig_Horsebean *pPVar2;
  char *__s;
  RealObject *this_00;
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = isInState(this,1);
  if (((cVar1 != '\0') && (param_2 == 0)) &&
     (this_00 = *(RealObject **)(this + 0x10), this_00 == (RealObject *)param_1)) {
    std::string::string(asStack_50,"Play_Swing");
    RealObject::PlayPositionalSound(this_00,asStack_50,0.0);
    std::string::~string(asStack_50);
    nop();
    if (this[0xd8] == (PlantHorsebean)0x0) {
      pPVar2 = (PlantAnimRig_Horsebean *)FUN_042243f8(*(undefined8 *)(this + 0x10));
      __s = "attack_off";
    }
    else {
      pPVar2 = (PlantAnimRig_Horsebean *)FUN_042243f8(*(undefined8 *)(this + 0x10));
      __s = "plantfood_off";
    }
    std::string::string(asStack_58,__s);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onAttackOffAnimDone);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<PlantHorsebean,void(PlantHorsebean::*)(std::string_const&)>(aDStack_38,asStack_50);
    PlantAnimRig_Horsebean::PlayAttackOff(pPVar2,asStack_58,aDStack_38);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHorsebean::onEnterState_COOLDOWN(PHBState) */

void PlantHorsebean::onEnterState_COOLDOWN(long param_1)

{
  char cVar1;
  long lVar2;
  PlantAnimRig_Horsebean *pPVar3;
  Plant *this;
  float fVar4;
  float fVar5;
  
  fVar5 = 1.0;
  cVar1 = Plant::HasCondition(*(undefined8 *)(param_1 + 0x10),0xd);
  if (cVar1 != '\0') {
    fVar5 = 2.0;
  }
  this = *(Plant **)(param_1 + 0x10);
  fVar4 = (float)FUN_04222fe0(*(undefined4 *)(this + 0x420));
  fVar4 = fVar4 * fVar5;
  if (*(char *)(param_1 + 0xd8) != '\0') {
    cVar1 = Plant::GetAvatarEnable(this);
    if (cVar1 != '\0') {
      fVar5 = (float)PVZ_T();
      lVar2 = FUN_04224318(*(undefined8 *)(param_1 + 0x10));
      *(float *)(param_1 + 0x28) = fVar5 + *(float *)(lVar2 + 0x2cc) * fVar4;
      pPVar3 = (PlantAnimRig_Horsebean *)FUN_042243f8(*(undefined8 *)(param_1 + 0x10));
      PlantAnimRig_Horsebean::PlayCoolDownLoop(pPVar3);
      return;
    }
    fVar5 = (float)PVZ_T();
    lVar2 = FUN_04224318(*(undefined8 *)(param_1 + 0x10));
    *(float *)(param_1 + 0x28) = fVar5 + *(float *)(lVar2 + 0x2c8) * fVar4;
    pPVar3 = (PlantAnimRig_Horsebean *)FUN_042243f8(*(undefined8 *)(param_1 + 0x10));
    PlantAnimRig_Horsebean::PlayCoolDownLoop(pPVar3);
    return;
  }
  fVar5 = (float)PVZ_T();
  lVar2 = FUN_04224318(*(undefined8 *)(param_1 + 0x10));
  *(float *)(param_1 + 0x28) = fVar5 + *(float *)(lVar2 + 0x2c4) * fVar4;
  pPVar3 = (PlantAnimRig_Horsebean *)FUN_042243f8(*(undefined8 *)(param_1 + 0x10));
  PlantAnimRig_Horsebean::PlayCoolDownLoop(pPVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHorsebean::~PlantHorsebean() */

void __thiscall PlantHorsebean::~PlantHorsebean(PlantHorsebean *this)

{
  bool bVar1;
  char cVar2;
  RtWeakPtr *this_00;
  long *plVar3;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0xe0);
  *(undefined ***)this = &PTR_GetClass_0680efc0;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_01);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_01);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this_00 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if ((bVar1) && (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00), cVar2 != '\0')
       ) {
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      (**(code **)(*plVar3 + 0x48))();
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<Sexy::RtWeakPtr<HorsebeanPlane>,std::allocator<Sexy::RtWeakPtr<HorsebeanPlane>>>::
  ~vector((vector<Sexy::RtWeakPtr<HorsebeanPlane>,std::allocator<Sexy::RtWeakPtr<HorsebeanPlane>>> *
          )this_01);
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0x38));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHorsebean::~PlantHorsebean() */

void __thiscall PlantHorsebean::~PlantHorsebean(PlantHorsebean *this)

{
  ~PlantHorsebean(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHorsebean::onEnterState_ATTACK(PHBState) */

void PlantHorsebean::onEnterState_ATTACK(ReceivedDataCallback *param_1)

{
  PlantAnimRig_Horsebean *pPVar1;
  char *__s;
  float fVar2;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_T();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(float *)(param_1 + 0x30) = fVar2 + 30.0;
  std::vector<Sexy::RtWeakPtr<HorsebeanPlane>,std::allocator<Sexy::RtWeakPtr<HorsebeanPlane>>>::
  clear((vector<Sexy::RtWeakPtr<HorsebeanPlane>,std::allocator<Sexy::RtWeakPtr<HorsebeanPlane>>> *)
        (param_1 + 0xe0));
  if (param_1[0xd8] == (ReceivedDataCallback)0x0) {
    pPVar1 = (PlantAnimRig_Horsebean *)FUN_042243f8(*(undefined8 *)(param_1 + 0x10));
    __s = "attack_on";
  }
  else {
    pPVar1 = (PlantAnimRig_Horsebean *)FUN_042243f8(*(undefined8 *)(param_1 + 0x10));
    __s = "plantfood_on";
  }
  std::string::string(asStack_58,__s);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,onTakeOffAnimDone);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantHorsebean,void(PlantHorsebean::*)(std::string_const&)>(aDStack_38,aCStack_50);
  PlantAnimRig_Horsebean::PlayAttackOff(pPVar1,asStack_58,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHorsebean::FindTarget(PlantWeapon, std::vector<Sexy::RtWeakPtr<BoardEntity>,
   std::allocator<Sexy::RtWeakPtr<BoardEntity> > >&) */

void __thiscall
PlantHorsebean::FindTarget
          (PlantHorsebean *this,int param_2,
          vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *param_3
          )

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  RealObject *this_00;
  long *extraout_x0;
  float *pfVar5;
  long lVar6;
  code *pcVar7;
  float fVar8;
  int iVar9;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  Plant aPStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(code **)(*(long *)this + 400) == PlantFramework::GetCollisionFlags) {
    uVar3 = PlantFramework::GetCollisionFlags();
    Plant::GetPlantAttackRect(aPStack_30,*(undefined8 *)(this + 0x10),param_2);
  }
  else {
    uVar3 = (**(code **)(*(long *)this + 400))();
    Plant::GetPlantAttackRect(aPStack_30,*(undefined8 *)(this + 0x10),param_2);
  }
  if (param_2 == 0) {
    iVar9 = *(int *)(*(long *)(this + 0x10) + 0x110) + -1;
    iVar4 = *(int *)(*(long *)(this + 0x10) + 0x110) + 1;
  }
  else {
    iVar9 = 0;
    iVar4 = 4;
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesTouchingRectangle(avStack_20,2,aPStack_30,iVar9,iVar4);
  local_60 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_60,(__normal_iterator *)&local_58);
    if (!bVar1) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      EntityFinder::GetEntitiesTouchingRectangle(avStack_20,4,aPStack_30,iVar9,iVar4);
      local_50 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
      local_48 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48),
            bVar1) {
        std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
        nop();
        if (((extraout_x0 != (long *)0x0) &&
            (cVar2 = (**(code **)(*extraout_x0 + 0x200))(), cVar2 != '\0')) &&
           (cVar2 = (**(code **)(*extraout_x0 + 0x210))(extraout_x0,*(undefined8 *)(this + 0x10)),
           cVar2 != '\0')) {
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
          std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
          push_back(param_3,(RtWeakPtr *)aRStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
      }
      lVar6 = FUN_04223010(*(undefined8 *)param_3,*(undefined8 *)(param_3 + 8));
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(lVar6 != 0);
      }
      return;
    }
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
    nop();
    if (((this_00 != (RealObject *)0x0) &&
        (cVar2 = RealObject::IsOnOpposingTeam(this_00,*(RealObject **)(this + 0x10)), cVar2 != '\0')
        ) && ((cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar2 == '\0' &&
              (cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 == '\0')))) {
      pcVar7 = *(code **)(*(long *)this + 0x3e0);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_48,(RtWeakPtrBase *)&local_50);
      cVar2 = (*pcVar7)(this,(RtWeakPtr<Sexy::SoundResource> *)&local_48,param_2);
      if (cVar2 == '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
      }
      else {
        pcVar7 = *(code **)(*(long *)this_00 + 0x3d0);
        Plant::GetType();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
        cVar2 = (*pcVar7)(this_00,aRStack_38,0);
        if (cVar2 != '\0') {
          pfVar5 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           *)this_00);
          fVar8 = *pfVar5;
          lVar6 = Board::GetBoardProperties(*(Board **)(gLawnApp + 0x9f0));
          if (fVar8 < *(float *)(lVar6 + 0x10)) {
            cVar2 = (**(code **)(*(long *)this_00 + 0xb8))(this_00,uVar3);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
            if (cVar2 != '\0') {
              ToolPacketData::GetProps();
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        (aRStack_38,(RtWeakPtrBase *)aRStack_40);
              std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
              ::push_back(param_3,(RtWeakPtr *)aRStack_38);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
            }
            goto LAB_04224e4c;
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
      }
    }
LAB_04224e4c:
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHorsebean::TakeOff() */

void __thiscall PlantHorsebean::TakeOff(PlantHorsebean *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  RtWeakPtr *this_00;
  ResourceInfo *this_01;
  Insets *pIVar5;
  Zombie *pZVar6;
  undefined8 *puVar7;
  HorsebeanPlane *pHVar8;
  int iVar9;
  long lVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  cVar1 = FindTarget(this,this[0xd8],
                     (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  if (cVar1 == '\0') {
    onHorseBeanPlaneTurnBack(this,*(Plant **)(this + 0x10),0);
  }
  else {
    uVar4 = FUN_04223010(local_20,local_18);
    iVar3 = 0;
    if (uVar4 != 0) {
      iVar3 = (int)((ulong)(long)*(int *)(this + 0x34) / uVar4);
    }
    this_00 = (RtWeakPtr *)FUN_0422301c(local_20,(long)(*(int *)(this + 0x34) - iVar3 * (int)uVar4))
    ;
    this_01 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    if (this_01 != (ResourceInfo *)0x0) {
      pIVar5 = (Insets *)(**(code **)(*(long *)this_01 + 0x178))();
      Sexy::Insets::Insets((Insets *)&local_40,pIVar5);
      pZVar6 = Sexy::RtObject::Cast<Zombie>((RtObject *)this_01);
      if (pZVar6 != (Zombie *)0x0) {
        (**(code **)(*(long *)pZVar6 + 0x3a0))(&local_30);
        local_40 = local_30;
      }
      switch(*(int *)(this + 0x34)) {
      case 0:
      case 3:
        puVar7 = (undefined8 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 **)(this + 0x10));
        local_30._4_4_ = (float)((ulong)*puVar7 >> 0x20);
        local_28 = *(undefined4 *)(puVar7 + 1);
        local_30._0_4_ = (float)*puVar7;
        local_30 = CONCAT44(local_30._4_4_ - 100.0,(float)local_30);
        pHVar8 = GameObject::Create<HorsebeanPlane>();
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_48,(RtWeakPtrBase *)aRStack_50);
        lVar10 = *(long *)(this + 0x10);
        uVar2 = FUN_04222fec(lVar10);
        iVar3 = FUN_04222fdc(*(undefined4 *)(lVar10 + 0x294));
        HorsebeanPlane::HorsebeanPlaneInitialize
                  (pHVar8,0,(RtWeakPtr<Sexy::SoundResource> *)&local_48,*(undefined4 *)(this + 0x34)
                   ,uVar2,iVar3 == 0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
        (**(code **)(*(long *)pHVar8 + 0x78))(pHVar8,&local_30);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_48,(RtWeakPtrBase *)aRStack_50);
        HorsebeanPlane::SetRayTarget(pHVar8,(RtWeakPtr<Sexy::SoundResource> *)&local_48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_48,(RtWeakPtrBase *)aRStack_50);
        std::vector<Sexy::RtWeakPtr<HorsebeanPlane>,std::allocator<Sexy::RtWeakPtr<HorsebeanPlane>>>
        ::push_back((vector<Sexy::RtWeakPtr<HorsebeanPlane>,std::allocator<Sexy::RtWeakPtr<HorsebeanPlane>>>
                     *)(this + 0xe0),(RtWeakPtr *)&local_48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
        iVar3 = (int)local_40 + -0x61;
        iVar9 = local_40._4_4_ + -0x39;
        break;
      case 1:
      case 4:
        puVar7 = (undefined8 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 **)(this + 0x10));
        local_30._0_4_ = (float)*puVar7;
        local_28 = *(undefined4 *)(puVar7 + 1);
        local_30._4_4_ = (float)((ulong)*puVar7 >> 0x20);
        local_30 = CONCAT44(local_30._4_4_ - 104.0,(float)local_30 - 22.0);
        pHVar8 = GameObject::Create<HorsebeanPlane>();
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_48,(RtWeakPtrBase *)aRStack_50);
        lVar10 = *(long *)(this + 0x10);
        uVar2 = FUN_04222fec(lVar10);
        iVar3 = FUN_04222fdc(*(undefined4 *)(lVar10 + 0x294));
        HorsebeanPlane::HorsebeanPlaneInitialize
                  (pHVar8,1,(RtWeakPtr<Sexy::SoundResource> *)&local_48,*(undefined4 *)(this + 0x34)
                   ,uVar2,iVar3 == 0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
        (**(code **)(*(long *)pHVar8 + 0x78))(pHVar8,&local_30);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_48,(RtWeakPtrBase *)aRStack_50);
        HorsebeanPlane::SetRayTarget(pHVar8,(RtWeakPtr<Sexy::SoundResource> *)&local_48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_48,(RtWeakPtrBase *)aRStack_50);
        std::vector<Sexy::RtWeakPtr<HorsebeanPlane>,std::allocator<Sexy::RtWeakPtr<HorsebeanPlane>>>
        ::push_back((vector<Sexy::RtWeakPtr<HorsebeanPlane>,std::allocator<Sexy::RtWeakPtr<HorsebeanPlane>>>
                     *)(this + 0xe0),(RtWeakPtr *)&local_48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
        iVar3 = (int)local_40 + -0xd;
        iVar9 = local_40._4_4_ + -0x48;
        break;
      case 2:
      case 5:
        puVar7 = (undefined8 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 **)(this + 0x10));
        local_30._0_4_ = (float)*puVar7;
        local_28 = *(undefined4 *)(puVar7 + 1);
        local_30._4_4_ = (float)((ulong)*puVar7 >> 0x20);
        local_30 = CONCAT44(local_30._4_4_ - 122.0,(float)local_30 - 37.0);
        pHVar8 = GameObject::Create<HorsebeanPlane>();
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_48,(RtWeakPtrBase *)aRStack_50);
        lVar10 = *(long *)(this + 0x10);
        uVar2 = FUN_04222fec(lVar10);
        iVar3 = FUN_04222fdc(*(undefined4 *)(lVar10 + 0x294));
        HorsebeanPlane::HorsebeanPlaneInitialize
                  (pHVar8,2,(RtWeakPtr<Sexy::SoundResource> *)&local_48,*(undefined4 *)(this + 0x34)
                   ,uVar2,iVar3 == 0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
        (**(code **)(*(long *)pHVar8 + 0x78))(pHVar8,&local_30);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_48,(RtWeakPtrBase *)aRStack_50);
        HorsebeanPlane::SetRayTarget(pHVar8,(RtWeakPtr<Sexy::SoundResource> *)&local_48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_48,(RtWeakPtrBase *)aRStack_50);
        std::vector<Sexy::RtWeakPtr<HorsebeanPlane>,std::allocator<Sexy::RtWeakPtr<HorsebeanPlane>>>
        ::push_back((vector<Sexy::RtWeakPtr<HorsebeanPlane>,std::allocator<Sexy::RtWeakPtr<HorsebeanPlane>>>
                     *)(this + 0xe0),(RtWeakPtr *)&local_48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
        iVar3 = (int)local_40 + -6;
        iVar9 = local_40._4_4_ + -0x5f;
        break;
      default:
        *(int *)(this + 0x34) = *(int *)(this + 0x34) + 1;
        goto LAB_04225490;
      }
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_48,(float)iVar3,(float)iVar9);
      HorsebeanPlane::MoveToTarget(local_48,local_44,pHVar8);
      *(int *)(this + 0x34) = *(int *)(this + 0x34) + 1;
    }
  }
LAB_04225490:
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             &local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantHorsebean::OnAnimCommand(std::string const&, std::string const&) */

undefined8 PlantHorsebean::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  
  bVar1 = std::operator==(param_2,"fly_off1");
  if ((((((!bVar1) && (bVar1 = std::operator==(param_2,"fly_off2"), !bVar1)) &&
        (bVar1 = std::operator==(param_2,"fly_off3"), !bVar1)) &&
       ((bVar1 = std::operator==(param_2,"plantfood_fly_off1"), !bVar1 &&
        (bVar1 = std::operator==(param_2,"plantfood_fly_off2"), !bVar1)))) &&
      ((bVar1 = std::operator==(param_2,"plantfood_fly_off3"), !bVar1 &&
       ((bVar1 = std::operator==(param_2,"plantfood_fly_off4"), !bVar1 &&
        (bVar1 = std::operator==(param_2,"plantfood_fly_off5"), !bVar1)))))) &&
     (bVar1 = std::operator==(param_2,"plantfood_fly_off6"), !bVar1)) {
    uVar2 = PlantFramework::OnAnimCommand(param_1,param_2);
    return uVar2;
  }
  TakeOff((PlantHorsebean *)param_1);
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHorsebean::StaticClassInit() */

void PlantHorsebean::StaticClassInit(void)

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
  Delegate1<PHBState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<PHBState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"PlantHorsebean");
      (*pcVar4)(plVar1,asStack_150,FUN_0422617c,0xf8,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<PHBState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x528);
  Sexy::Delegate1<PHBState>::Delegate1<PlantHorsebean,void(PlantHorsebean::*)(PHBState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x530);
  Sexy::Delegate0::Delegate0<PlantHorsebean,void(PlantHorsebean::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x538);
  Sexy::Delegate1<PHBState>::Delegate1<PlantHorsebean,void(PlantHorsebean::*)(PHBState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"PHBState_IDLE");
  StateDefinition<PHBState>::StateDefinition
            (aSStack_a8,0,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04225bd4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x540);
  Sexy::Delegate1<PHBState>::Delegate1<PlantHorsebean,void(PlantHorsebean::*)(PHBState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x548);
  Sexy::Delegate0::Delegate0<PlantHorsebean,void(PlantHorsebean::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x550);
  Sexy::Delegate1<PHBState>::Delegate1<PlantHorsebean,void(PlantHorsebean::*)(PHBState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"PHBState_ATTACK");
  StateDefinition<PHBState>::StateDefinition
            (aSStack_a8,1,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04225bd4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x558);
  Sexy::Delegate1<PHBState>::Delegate1<PlantHorsebean,void(PlantHorsebean::*)(PHBState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x560);
  Sexy::Delegate0::Delegate0<PlantHorsebean,void(PlantHorsebean::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x568);
  Sexy::Delegate1<PHBState>::Delegate1<PlantHorsebean,void(PlantHorsebean::*)(PHBState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"PHBState_COOLDOWN");
  StateDefinition<PHBState>::StateDefinition
            (aSStack_a8,2,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04225bd4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x570);
  Sexy::Delegate1<PHBState>::Delegate1<PlantHorsebean,void(PlantHorsebean::*)(PHBState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x578);
  Sexy::Delegate0::Delegate0<PlantHorsebean,void(PlantHorsebean::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x580);
  Sexy::Delegate1<PHBState>::Delegate1<PlantHorsebean,void(PlantHorsebean::*)(PHBState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"PHBState_PLANTFOOD");
  StateDefinition<PHBState>::StateDefinition
            (aSStack_a8,3,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04225bd4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantHorsebean::StaticGetClass() */

long * PlantHorsebean::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantHorsebean",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantHorsebean::GetClass() const */

long * PlantHorsebean::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantHorsebean",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHorsebean::setState(PHBState) */

void __thiscall PlantHorsebean::setState(PlantHorsebean *this,undefined4 param_2)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<PHBState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<PHBState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<PHBState>::GetStateDefinition
                     ((StateMachineTable<PHBState> *)pSVar2,param_2);
  StateDefinition<PHBState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<PHBState>::SetContext(aSStack_a8,this);
  StateMachine<PHBState>::SetState
            ((StateMachine<PHBState> *)(this + 0x38),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHorsebean::Initialize() */

void __thiscall PlantHorsebean::Initialize(PlantHorsebean *this)

{
  undefined4 uVar1;
  
  PlantFramework::Initialize((PlantFramework *)this);
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x28) = uVar1;
  setState(this,0);
  return;
}


/* PlantHorsebean::ApplyPlantfood() */

void __thiscall PlantHorsebean::ApplyPlantfood(PlantHorsebean *this)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  EffectAnimRig_PlantFoodShine *this_00;
  Plant *this_01;
  float fVar4;
  
  this_01 = *(Plant **)(this + 0x10);
  cVar1 = FUN_04222fd8(this_01[0x278]);
  if (cVar1 != '\0') {
    Plant::SetIsSleepping(this_01,false,-1.0);
    this_01 = *(Plant **)(this + 0x10);
  }
  Plant::FullHealth(this_01);
  this[0xd8] = (PlantHorsebean)0x1;
  fVar4 = (float)PVZ_T();
  lVar2 = FUN_04224318(*(undefined8 *)(this + 0x10));
  uVar3 = *(undefined8 *)(*(long *)(this + 0x10) + 0x220);
  *(float *)(this + 0x2c) = fVar4 + *(float *)(lVar2 + 0x2c0);
  this_00 = (EffectAnimRig_PlantFoodShine *)FUN_04222fe4(uVar3);
  if (this_00 != (EffectAnimRig_PlantFoodShine *)0x0) {
    EffectAnimRig_PlantFoodShine::PlayPlantFoodShineStart(this_00);
  }
  setState(this,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHorsebean::UpdateActions() */

void __thiscall PlantHorsebean::UpdateActions(PlantHorsebean *this)

{
  char cVar1;
  EffectAnimRig_PlantFoodShine *this_00;
  float fVar2;
  undefined4 uVar3;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StateMachine<PHBState>::UpdateState((StateMachine<PHBState> *)(this + 0x38));
  fVar2 = (float)PVZ_T();
  if (*(float *)(this + 0x2c) < fVar2) {
    this[0xd8] = (PlantHorsebean)0x0;
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0x2c) = uVar3;
    this_00 = (EffectAnimRig_PlantFoodShine *)
              FUN_04222fe4(*(undefined8 *)(*(long *)(this + 0x10) + 0x220));
    if (this_00 != (EffectAnimRig_PlantFoodShine *)0x0) {
      EffectAnimRig_PlantFoodShine::PlayPlantFoodShineEnd(this_00);
    }
  }
  cVar1 = isInState(this,0);
  if (cVar1 != '\0') {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    cVar1 = FindTarget(this,this[0xd8],avStack_20);
    if (cVar1 != '\0') {
      setState(this,1);
    }
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHorsebean::updateState_ATTACK() */

void __thiscall PlantHorsebean::updateState_ATTACK(PlantHorsebean *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  RtWeakPtr *this_01;
  long *plVar3;
  float fVar4;
  undefined4 uVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar4 = (float)PVZ_T();
  if (*(float *)(this + 0x30) < fVar4) {
    uVar5 = PVZ_EOT();
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0xe0);
    *(undefined4 *)(this + 0x30) = uVar5;
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      this_01 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
      if ((bVar1) &&
         (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_01), cVar2 != '\0')) {
        plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
        (**(code **)(*plVar3 + 0x48))();
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
    std::vector<Sexy::RtWeakPtr<HorsebeanPlane>,std::allocator<Sexy::RtWeakPtr<HorsebeanPlane>>>::
    clear((vector<Sexy::RtWeakPtr<HorsebeanPlane>,std::allocator<Sexy::RtWeakPtr<HorsebeanPlane>>> *
          )this_00);
    setState(this,2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHorsebean::onAttackOffAnimDone(std::string const&) */

void PlantHorsebean::onAttackOffAnimDone(string *param_1)

{
  std::vector<Sexy::RtWeakPtr<HorsebeanPlane>,std::allocator<Sexy::RtWeakPtr<HorsebeanPlane>>>::
  clear((vector<Sexy::RtWeakPtr<HorsebeanPlane>,std::allocator<Sexy::RtWeakPtr<HorsebeanPlane>>> *)
        (param_1 + 0xe0));
  setState((PlantHorsebean *)param_1,2);
  return;
}


/* PlantHorsebean::updateState_COOLDOWN() */

void __thiscall PlantHorsebean::updateState_COOLDOWN(PlantHorsebean *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (fVar1 <= *(float *)(this + 0x28)) {
    return;
  }
  setState(this,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHorsebean::setPlantHorsebeanStateSerialization(int) */

void __thiscall
PlantHorsebean::setPlantHorsebeanStateSerialization(PlantHorsebean *this,int param_1)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<PHBState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<PHBState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<PHBState>::GetStateDefinition
                     ((StateMachineTable<PHBState> *)pSVar2,param_1);
  StateDefinition<PHBState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<PHBState>::SetContext(aSStack_a8,this);
  StateMachine<DPEState>::SetStateNoTransition
            ((StateMachine<DPEState> *)(this + 0x38),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

