// Class: PlantMagicShroom


/* PlantMagicShroom::isInState(MSState) const */

bool __thiscall PlantMagicShroom::isInState(PlantMagicShroom *this,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_040d01d4(*(undefined4 *)(this + 0x30));
  return iVar1 == param_2;
}


/* PlantMagicShroom::getPlantMagicshroomStateSerialization() */

void __thiscall PlantMagicShroom::getPlantMagicshroomStateSerialization(PlantMagicShroom *this)

{
  FUN_040d01d4(*(undefined4 *)(this + 0x30));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagicShroom::InternalFire(int) */

void __thiscall PlantMagicShroom::InternalFire(PlantMagicShroom *this,int param_1)

{
  char cVar1;
  long lVar2;
  float *pfVar3;
  Projectile *this_00;
  SexyVector3 *this_01;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  string asStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined4 local_18;
  float local_14;
  float local_10;
  long local_8;
  
  pcVar4 = *(code **)(*(long *)this + 0x300);
  local_8 = ___stack_chk_guard;
  *(int *)(*(long *)(this + 0x10) + 0x150) = param_1;
  (*pcVar4)(asStack_28);
  cVar1 = FUN_0547419c(asStack_28);
  if (cVar1 == '\0') {
    RealObject::PlayPositionalSound(*(RealObject **)(this + 0x10),asStack_28,0.0);
  }
  FUN_040d0144((RtWeakPtr<Sexy::ResourceInfo> *)&local_18,*(undefined8 *)(this + 0x10));
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  lVar2 = FUN_040d01bc(*(undefined8 *)(lVar2 + 0x70),(long)param_1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)(lVar2 + 8));
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
  if (cVar1 != '\0') {
    this_02 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                **)(this + 0x10);
    if (this_02[0x14c] ==
        (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
         )0x0) {
      fVar11 = *(float *)(lVar2 + 0x68);
    }
    else {
      fVar11 = -*(float *)(lVar2 + 0x68);
    }
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this_02);
    fVar9 = *(float *)(this_02 + 0xc4);
    fVar7 = *pfVar3;
    fVar10 = pfVar3[2] - fVar9 * *(float *)(lVar2 + 0x6c);
    fVar8 = pfVar3[1];
    uVar6 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_20);
    uVar5 = *(undefined8 *)(this + 0x10);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    this_00 = (Projectile *)
              Board::AddProjectile
                        ((Board *)(fVar7 + fVar9 * fVar11),uVar6,
                         (RtWeakPtr<Sexy::ResourceInfo> *)&local_18,uVar5,
                         *(undefined4 *)(lVar2 + 0x68));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    lVar2 = *(long *)(this + 0x10);
    if (*(char *)(lVar2 + 0x14c) == '\0') goto LAB_040d176c;
    this_01 = (SexyVector3 *)Projectile::GetVelocity(this_00);
    local_18 = Sexy::SexyVector3::operator-(this_01);
    local_14 = fVar8;
    local_10 = fVar10;
    Projectile::SetVelocity(this_00,(SexyVector3 *)&local_18);
  }
  lVar2 = *(long *)(this + 0x10);
LAB_040d176c:
  *(undefined4 *)(lVar2 + 0x150) = 0xffffffff;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagicShroom::GetAdvancedFireCount() */

void __thiscall PlantMagicShroom::GetAdvancedFireCount(PlantMagicShroom *this)

{
  int *piVar1;
  int local_14 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_14[0] = FUN_040d0168(*(undefined8 *)(this + 0x10));
  local_14[1] = 1;
  piVar1 = eastl::max_alt<int>(local_14,local_14 + 1);
  local_14[2] = 3;
  piVar1 = eastl::min_alt<int>(piVar1,local_14 + 2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*piVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagicShroom::FindTargetLeft() */

void __thiscall PlantMagicShroom::FindTargetLeft(PlantMagicShroom *this)

{
  bool bVar1;
  ResourceInfo *pRVar2;
  float *pfVar3;
  int local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::FindTargetInRow
            ((RtWeakPtr *)local_18,*(long *)(this + 0x10),
             *(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  if (pRVar2 == (ResourceInfo *)0x0) {
    bVar1 = false;
  }
  else {
    (**(code **)(*(long *)pRVar2 + 0xb0))((RtWeakPtr *)local_18,pRVar2);
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(this + 0x10));
    bVar1 = (float)local_18[0] < *pfVar3;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* PlantMagicShroom::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantMagicShroom::onAnimStoppedCallback(PlantMagicShroom *this,string *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  long lVar3;
  
  bVar1 = std::operator==(param_1,"attack");
  if ((bVar1) && (lVar3 = *(long *)(this + 0x10), *(char *)(lVar3 + 0x14c) != '\0')) {
    uVar2 = FindTargetLeft(this);
    *(undefined1 *)(lVar3 + 0x14c) = uVar2;
    return;
  }
  return;
}


/* PlantMagicShroom::UpdateActions() */

void __thiscall PlantMagicShroom::UpdateActions(PlantMagicShroom *this)

{
  undefined1 uVar1;
  int iVar2;
  Effect_AngerFlame *this_00;
  long lVar3;
  
  StateMachine<MSState>::UpdateState((StateMachine<MSState> *)(this + 0x30));
  this_00 = (Effect_AngerFlame *)
            UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  iVar2 = Effect_AngerFlame::GetFlameCol(this_00);
  if ((iVar2 == 1) && (lVar3 = *(long *)(this + 0x10), *(char *)(lVar3 + 0x14c) != '\0')) {
    uVar1 = FindTargetLeft(this);
    *(undefined1 *)(lVar3 + 0x14c) = uVar1;
    return;
  }
  return;
}


/* PlantMagicShroom::PlantMagicShroom() */

void __thiscall PlantMagicShroom::PlantMagicShroom(PlantMagicShroom *this)

{
  undefined4 uVar1;
  
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067db390;
  StateMachine<MSState>::StateMachine((StateMachine<MSState> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd8));
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd0) = uVar1;
  return;
}


/* PlantMagicShroom::StaticNew() */

PlantMagicShroom * PlantMagicShroom::StaticNew(void)

{
  PlantMagicShroom *this;
  
  this = ::operator_new(0xf0);
  PlantMagicShroom(this);
  return this;
}


/* PlantMagicShroom::registerForEvents() */

void __thiscall PlantMagicShroom::registerForEvents(PlantMagicShroom *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onMagicCardReturn);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Plant*,int,Sexy::CBMemberTranslatorX<PlantMagicShroom,void(PlantMagicShroom::*)(Plant*,int)>>
            ((MessageRouter *)puVar1,Message::MagicCardReturn,&local_40);
  return;
}


/* PlantMagicShroom::TrigerAdvancedAttack() */

bool __thiscall PlantMagicShroom::TrigerAdvancedAttack(PlantMagicShroom *this)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  float *pfVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  
  lVar2 = FUN_040d270c(*(undefined8 *)(this + 0x10));
  iVar1 = FUN_040d0168(*(undefined8 *)(this + 0x10));
  if (-1 < iVar1) {
    uVar5 = *(undefined8 *)(lVar2 + 0x2b8);
    uVar3 = FUN_040d0198(uVar5,*(undefined8 *)(lVar2 + 0x2c0));
    if ((ulong)(long)iVar1 <= uVar3) {
      pfVar4 = (float *)FUN_040d01cc(uVar5,(long)(iVar1 + -1));
      fVar7 = *pfVar4;
      goto LAB_040d27c8;
    }
  }
  fVar7 = 0.0;
LAB_040d27c8:
  fVar6 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
  return fVar6 < fVar7;
}


/* PlantMagicShroom::onTakeOffAnimDone(std::string const&) */

void PlantMagicShroom::onTakeOffAnimDone(string *param_1)

{
  PlantAnimRig_Horsebean *this;
  
  this = (PlantAnimRig_Horsebean *)FUN_040d287c(*(undefined8 *)(param_1 + 0x10));
  PlantAnimRig_Horsebean::PlayAttackLoop(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagicShroom::onMagicCardReturn(Plant*, int) */

void __thiscall
PlantMagicShroom::onMagicCardReturn(PlantMagicShroom *this,Plant *param_1,int param_2)

{
  char cVar1;
  PlantAnimRig_Horsebean *pPVar2;
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
    pPVar2 = (PlantAnimRig_Horsebean *)FUN_040d287c(*(undefined8 *)(this + 0x10));
    std::string::string(asStack_58,"attack_off");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onAttackOffAnimDone);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<PlantMagicShroom,void(PlantMagicShroom::*)(std::string_const&)>(aDStack_38,asStack_50)
    ;
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagicShroom::FindLeftMostZombie(int) */

void PlantMagicShroom::FindLeftMostZombie(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  RealObject *this;
  Insets *pIVar4;
  int in_w1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  int iVar5;
  undefined8 local_58;
  undefined8 local_50;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  undefined4 local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  int local_30 [4];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  iVar5 = 0;
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)&local_40);
  local_40 = 200;
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  local_38 = BoardConstants::NUMBER_OF_COLUMNS();
  local_38 = iVar3 * local_38;
  iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
  local_3c = iVar3 * in_w1 + 0xa0;
  local_34 = BoardConstants::GRIDSQUARE_HEIGHT();
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesTouchingRectangle(avStack_20,2,(Insets *)&local_40,in_w1,in_w1);
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
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    nop();
    if ((((this != (RealObject *)0x0) &&
         (cVar2 = (**(code **)(*(long *)this + 0x328))(), cVar2 == '\0')) &&
        (cVar2 = (**(code **)(*(long *)this + 0x330))(this), cVar2 == '\0')) &&
       (cVar2 = RealObject::IsOnOpposingTeam(this,*(RealObject **)((ulong)(uint)param_1 + 0x10)),
       cVar2 != '\0')) {
      pIVar4 = (Insets *)(**(code **)(*(long *)this + 0x178))(this);
      Sexy::Insets::Insets((Insets *)local_30,pIVar4);
      iVar3 = -local_30[0];
      cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)in_x8);
      if ((cVar2 != '\0') || (iVar5 < iVar3)) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)in_x8,(RtWeakPtrBase *)aRStack_48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
        iVar5 = iVar3;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagicShroom::CalcHatColumn(int) */

void PlantMagicShroom::CalcHatColumn(int param_1)

{
  ResourceInfo *this;
  int *piVar1;
  int local_18 [2];
  undefined4 local_10 [2];
  long local_8;
  
  local_18[0] = 0;
  local_8 = ___stack_chk_guard;
  FindLeftMostZombie(param_1);
  this = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  if (this != (ResourceInfo *)0x0) {
    local_18[0] = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  }
  local_18[1] = 0;
  piVar1 = eastl::max_alt<int>(local_18 + 1,local_18);
  local_10[0] = BoardConstants::NUMBER_OF_COLUMNS();
  piVar1 = eastl::min_alt<int>(piVar1,(int *)local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*piVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagicShroom::~PlantMagicShroom() */

void __thiscall PlantMagicShroom::~PlantMagicShroom(PlantMagicShroom *this)

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
             *)(this + 0xd8);
  *(undefined ***)this = &PTR_GetClass_067db390;
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
  std::vector<Sexy::RtWeakPtr<MagicCard>,std::allocator<Sexy::RtWeakPtr<MagicCard>>>::~vector
            ((vector<Sexy::RtWeakPtr<MagicCard>,std::allocator<Sexy::RtWeakPtr<MagicCard>>> *)
             this_01);
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0x30));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMagicShroom::~PlantMagicShroom() */

void __thiscall PlantMagicShroom::~PlantMagicShroom(PlantMagicShroom *this)

{
  ~PlantMagicShroom(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagicShroom::onEnterState_ATTACK(MSState) */

void PlantMagicShroom::onEnterState_ATTACK(ReceivedDataCallback *param_1)

{
  PlantAnimRig_Horsebean *pPVar1;
  float fVar2;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_T();
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(float *)(param_1 + 0xd0) = fVar2 + 30.0;
  std::vector<Sexy::RtWeakPtr<MagicCard>,std::allocator<Sexy::RtWeakPtr<MagicCard>>>::clear
            ((vector<Sexy::RtWeakPtr<MagicCard>,std::allocator<Sexy::RtWeakPtr<MagicCard>>> *)
             (param_1 + 0xd8));
  pPVar1 = (PlantAnimRig_Horsebean *)FUN_040d287c(*(undefined8 *)(param_1 + 0x10));
  std::string::string(asStack_58,"attack_on");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,onTakeOffAnimDone);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantMagicShroom,void(PlantMagicShroom::*)(std::string_const&)>(aDStack_38,aCStack_50);
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
/* PlantMagicShroom::updateState_ATTACK() */

void __thiscall PlantMagicShroom::updateState_ATTACK(PlantMagicShroom *this)

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
  if (*(float *)(this + 0xd0) < fVar4) {
    uVar5 = PVZ_EOT();
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0xd8);
    *(undefined4 *)(this + 0xd0) = uVar5;
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
    std::vector<Sexy::RtWeakPtr<MagicCard>,std::allocator<Sexy::RtWeakPtr<MagicCard>>>::clear
              ((vector<Sexy::RtWeakPtr<MagicCard>,std::allocator<Sexy::RtWeakPtr<MagicCard>>> *)
               this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagicShroom::GetZombieType() */

void PlantMagicShroom::GetZombieType(void)

{
  char cVar1;
  long in_x0;
  long *plVar2;
  string *psVar3;
  string asStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  if ((*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0) ||
     (plVar2 = (long *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0)), plVar2 == (long *)0x0)) {
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_48,"tutorial_gargantuar");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
    ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::AddItem
              ((ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>> *)aPStack_38,aRStack_40,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    std::string::~string(asStack_48);
    nop();
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_48,"tutorial_armor2");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
    ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::AddItem
              ((ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>> *)aPStack_38,aRStack_40,3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    std::string::~string(asStack_48);
    nop();
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_48,"tutorial_armor1");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
    ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::AddItem
              ((ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>> *)aPStack_38,aRStack_40,2);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    std::string::~string(asStack_48);
    nop();
    cVar1 = Plant::GetAvatarEnable(*(Plant **)(in_x0 + 0x10));
    if (cVar1 == '\0') {
      psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
      std::string::string(asStack_48,"tutorial");
      ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
      ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::AddItem
                ((ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>> *)aPStack_38,aRStack_40,1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      std::string::~string(asStack_48);
      nop();
    }
  }
  else {
    (**(code **)(*plVar2 + 0xa8))(aRStack_40);
    ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::AddItem
              ((ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>> *)aPStack_38,aRStack_40,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    StageModule::GetArmor2ZombieType();
    ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::AddItem
              ((ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>> *)aPStack_38,aRStack_40,3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    StageModule::GetArmor1ZombieType();
    ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::AddItem
              ((ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>> *)aPStack_38,aRStack_40,2);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    cVar1 = Plant::GetAvatarEnable(*(Plant **)(in_x0 + 0x10));
    if (cVar1 == '\0') {
      StageModule::GetBasicZombieType();
      ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::AddItem
                ((ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>> *)aPStack_38,aRStack_40,1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    }
  }
  ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::PickItem();
  ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::~ProbabilitySet
            ((ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>> *)aPStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagicShroom::DropHat(int, int) */

void __thiscall PlantMagicShroom::DropHat(PlantMagicShroom *this,int param_1,int param_2)

{
  int iVar1;
  MagicHat *this_00;
  ResourceInfo *pRVar2;
  float fVar3;
  Point aPStack_30 [8];
  int local_28;
  int local_24;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = -0x14;
  Sexy::Point::Point(aPStack_30,0,-0x14);
  fVar3 = 0.0;
  BoardTransforms::GridToBoardSpacePos((BoardTransforms *)(ulong)(uint)param_2,param_1,iVar1);
  Sexy::TPoint<int>::operator+=((TPoint<int> *)&local_28,(TPoint *)aPStack_30);
  if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
    fVar3 = (float)Board::calculateRoofOffsetZ((float)local_28);
  }
  iVar1 = Board::MakeRenderOrder(0x64960,param_1,0);
  this_00 = Board::AddEffect<MagicHat>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_MAGICSHROOM_PROJECTILE");
  GetPAMByName(asStack_20);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this_00,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  Effect_PopAnim::SetCentered((Effect_PopAnim *)this_00,true);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)local_28,(float)local_24,fVar3);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,iVar1)
  ;
  std::string::string((string *)aRStack_18,"plantfood");
  Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this_00,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  GetZombieType();
  Sexy::Point::Point((Point *)aRStack_18,param_2,param_1);
  iVar1 = FUN_040d0168(*(undefined8 *)(this + 0x10));
  MagicHat::SetSpawnZombie(this_00,(RtWeakPtr *)asStack_20,(Point *)aRStack_18,iVar1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
  Effect_PopAnim::SetPopAnimDelegates((Effect_PopAnim *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagicShroom::StaticClassInit() */

void PlantMagicShroom::StaticClassInit(void)

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
  Delegate1<MSState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<MSState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"PlantMagicShroom");
      (*pcVar4)(plVar1,asStack_150,FUN_040d6ec0,0xf0,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<MSState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x528);
  Sexy::Delegate1<MSState>::Delegate1<PlantMagicShroom,void(PlantMagicShroom::*)(MSState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x530);
  Sexy::Delegate0::Delegate0<PlantMagicShroom,void(PlantMagicShroom::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x538);
  Sexy::Delegate1<MSState>::Delegate1<PlantMagicShroom,void(PlantMagicShroom::*)(MSState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"MSState_IDLE");
  StateDefinition<MSState>::StateDefinition
            (aSStack_a8,0,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_040d5110(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x540);
  Sexy::Delegate1<MSState>::Delegate1<PlantMagicShroom,void(PlantMagicShroom::*)(MSState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x548);
  Sexy::Delegate0::Delegate0<PlantMagicShroom,void(PlantMagicShroom::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x550);
  Sexy::Delegate1<MSState>::Delegate1<PlantMagicShroom,void(PlantMagicShroom::*)(MSState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"MSState_ATTACK");
  StateDefinition<MSState>::StateDefinition
            (aSStack_a8,1,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_040d5110(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantMagicShroom::StaticGetClass() */

long * PlantMagicShroom::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantMagicShroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantMagicShroom::GetClass() const */

long * PlantMagicShroom::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantMagicShroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagicShroom::setState(MSState) */

void __thiscall PlantMagicShroom::setState(PlantMagicShroom *this,undefined4 param_2)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<MSState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<MSState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<MSState>::GetStateDefinition
                     ((StateMachineTable<MSState> *)pSVar2,param_2);
  StateDefinition<MSState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<MSState>::SetContext(aSStack_a8,this);
  StateMachine<MSState>::SetState
            ((StateMachine<MSState> *)(this + 0x30),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMagicShroom::Initialize() */

void __thiscall PlantMagicShroom::Initialize(PlantMagicShroom *this)

{
  PlantFramework::Initialize((PlantFramework *)this);
  setState(this,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagicShroom::FindTargetAndFire(PlantWeapon) */

void __thiscall PlantMagicShroom::FindTargetAndFire(PlantMagicShroom *this,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ResourceInfo *this_00;
  float *pfVar5;
  long *plVar6;
  long lVar7;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  code *pcVar8;
  float fVar9;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  int local_60 [4];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = isInState(this,1);
  if (cVar1 == '\0') {
    if (param_2 != 0) {
      cVar1 = PlantFramework::FindTargetAndFire(this,param_2);
      goto LAB_040d7838;
    }
    Plant::FindTargetInRow
              ((RtWeakPtr *)local_60,*(long *)(this + 0x10),
               *(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
    this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_60);
    if (this_00 != (ResourceInfo *)0x0) {
      cVar1 = FUN_040d0170(*(undefined8 *)(this + 0x10));
      if (cVar1 != '\0') {
        iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this_00);
        iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
        if (iVar2 < iVar3) {
          fVar9 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
          lVar7 = FUN_040d270c(*(undefined8 *)(this + 0x10));
          if (fVar9 < *(float *)(lVar7 + 0x2d0)) {
            setState(this,1);
            goto LAB_040d7838;
          }
        }
      }
      (**(code **)(*(long *)this_00 + 0xb0))((RtWeakPtr *)local_60,this_00);
      this_01 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  **)(this + 0x10);
      pfVar5 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(this_01);
      if ((float)local_60[0] < *pfVar5) {
        this_01[0x14c] =
             (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              )0x1;
      }
      *(undefined4 *)(this + 0x28) = 0;
      cVar1 = TrigerAdvancedAttack(this);
      uVar4 = 1;
      if (cVar1 != '\0') {
        uVar4 = GetAdvancedFireCount(this);
      }
      *(undefined4 *)(this + 0x2c) = uVar4;
      plVar6 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      cVar1 = '\x01';
      pcVar8 = *(code **)(*plVar6 + 0x130);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string((string *)local_60,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
                 (RtWeakPtr *)local_60);
      (*pcVar8)(plVar6,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)local_60);
      nop();
      Sexy::RtId::~RtId(aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      goto LAB_040d7838;
    }
  }
  cVar1 = '\0';
LAB_040d7838:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagicShroom::TakeOff() */

void PlantMagicShroom::TakeOff(void)

{
  int iVar1;
  int iVar2;
  long in_x0;
  ResourceInfo *this;
  undefined8 *puVar3;
  Insets *pIVar4;
  Zombie *pZVar5;
  MagicCard *this_00;
  long *plVar6;
  undefined4 uVar7;
  undefined4 in_s1;
  undefined4 in_s2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28 [2];
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::FindTargetInRow
            ((RtWeakPtr *)&local_18,*(long *)(in_x0 + 0x10),
             *(undefined4 *)(*(long *)(in_x0 + 0x10) + 0x110),0);
  this = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  if (this != (ResourceInfo *)0x0) {
    iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
    iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
    if (iVar1 < iVar2) {
      puVar3 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this);
      local_38 = *puVar3;
      local_30 = *(undefined4 *)(puVar3 + 1);
      pIVar4 = (Insets *)(**(code **)(*(long *)this + 0x178))(this);
      Sexy::Insets::Insets((Insets *)local_28,pIVar4);
      pZVar5 = Sexy::RtObject::Cast<Zombie>((RtObject *)this);
      if (pZVar5 != (Zombie *)0x0) {
        uVar7 = (**(code **)(*(long *)pZVar5 + 0x3a8))(0x3f000000);
        local_18 = CONCAT44(in_s1,uVar7);
        local_10 = in_s2;
        Sexy::SexyVector3::operator=((SexyVector3 *)&local_38,(SexyVector3 *)&local_18);
        (**(code **)(*(long *)pZVar5 + 0x3a0))((RtWeakPtr *)&local_18,pZVar5);
        local_28[0] = local_18;
      }
      iVar1 = *(int *)(in_x0 + 0xd4);
      if ((iVar1 == 0) || (iVar1 == 2)) {
        puVar3 = (undefined8 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 **)(in_x0 + 0x10));
        local_18._4_4_ = (float)((ulong)*puVar3 >> 0x20);
        local_10 = *(undefined4 *)(puVar3 + 1);
        local_18 = CONCAT44(local_18._4_4_ - 80.0,(int)*puVar3);
        this_00 = GameObject::Create<MagicCard>();
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_48);
        MagicCard::MagicCardInitialize
                  (this_00,0,(RtWeakPtr<Sexy::SoundResource> *)&local_40,
                   *(undefined4 *)(in_x0 + 0xd4));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
        (**(code **)(*(long *)this_00 + 0x78))(this_00,(RtWeakPtr *)&local_18);
        MagicCard::SetTargetPos(this_00,(SexyVector3 *)&local_38);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_48);
        std::vector<Sexy::RtWeakPtr<MagicCard>,std::allocator<Sexy::RtWeakPtr<MagicCard>>>::
        push_back((vector<Sexy::RtWeakPtr<MagicCard>,std::allocator<Sexy::RtWeakPtr<MagicCard>>> *)
                  (in_x0 + 0xd8),(RtWeakPtr *)&local_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)&local_40,(float)((int)local_28[0] + -10),local_18._4_4_);
        MagicCard::MoveToTarget(local_40,local_3c,this_00);
        iVar1 = *(int *)(in_x0 + 0xd4);
      }
      *(int *)(in_x0 + 0xd4) = iVar1 + 1;
      goto LAB_040d79f0;
    }
  }
  setState();
  plVar6 = (long *)FUN_040d287c(*(undefined8 *)(in_x0 + 0x10));
  (**(code **)(*plVar6 + 0x118))();
LAB_040d79f0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagicShroom::OnAnimCommand(std::string const&, std::string const&) */

void PlantMagicShroom::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  int *piVar6;
  uint uVar7;
  float fVar8;
  float extraout_s0;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"fire");
  if (bVar1) {
    bVar2 = isInState((PlantMagicShroom *)param_1,1);
    uVar5 = (ulong)bVar2;
    if (bVar2 != 0) {
      TakeOff();
      if (local_8 == ___stack_chk_guard) {
        return;
      }
      goto LAB_040d7d4c;
    }
  }
  bVar1 = std::operator==(param_2,"fire");
  if (bVar1) {
    uVar5 = (ulong)*(uint *)(param_1 + 0x2c);
    if (*(int *)(param_1 + 0x28) < (int)*(uint *)(param_1 + 0x2c)) {
      InternalFire((PlantMagicShroom *)param_1,*(int *)(param_1 + 0x28));
      uVar5 = (ulong)(*(int *)(param_1 + 0x28) + 1U);
      *(uint *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1U;
    }
  }
  else {
    bVar3 = std::operator==(param_2,"drop_hat");
    uVar7 = (uint)bVar1;
    if (bVar3) {
      while( true ) {
        iVar4 = BoardConstants::NUMBER_OF_ROWS();
        if (iVar4 <= (int)uVar7) break;
        iVar4 = CalcHatColumn((int)param_1);
        DropHat((PlantMagicShroom *)param_1,uVar7,iVar4);
        uVar7 = uVar7 + 1;
      }
      fVar8 = (float)PlantFramework::Rand((PlantFramework *)param_1,1.0);
      uVar5 = Plant::GetGeneSkillBoost(*(Plant **)(param_1 + 0x10));
      if (fVar8 < extraout_s0) {
        iVar4 = BoardConstants::NUMBER_OF_ROWS();
        local_10 = PlantFramework::Rand((PlantFramework *)param_1,iVar4);
        local_c = BoardConstants::NUMBER_OF_ROWS();
        local_c = local_c + -1;
        piVar6 = eastl::min_alt<int>(&local_10,&local_c);
        iVar4 = *piVar6;
        local_10 = CalcHatColumn((int)param_1);
        local_10 = local_10 + 1;
        local_c = BoardConstants::NUMBER_OF_COLUMNS();
        local_c = local_c + -1;
        piVar6 = eastl::min_alt<int>(&local_10,&local_c);
        uVar5 = DropHat((PlantMagicShroom *)param_1,iVar4,*piVar6);
      }
    }
    else {
      uVar5 = 0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    PlantFramework::OnAnimCommand(param_1,param_2);
    return;
  }
LAB_040d7d4c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* PlantMagicShroom::onAttackOffAnimDone(std::string const&) */

void PlantMagicShroom::onAttackOffAnimDone(string *param_1)

{
  long *plVar1;
  
  std::vector<Sexy::RtWeakPtr<MagicCard>,std::allocator<Sexy::RtWeakPtr<MagicCard>>>::clear
            ((vector<Sexy::RtWeakPtr<MagicCard>,std::allocator<Sexy::RtWeakPtr<MagicCard>>> *)
             (param_1 + 0xd8));
  setState((PlantMagicShroom *)param_1,0);
  plVar1 = (long *)FUN_040d287c(*(undefined8 *)(param_1 + 0x10));
  (**(code **)(*plVar1 + 0x118))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagicShroom::setPlantMagicshroomStateSerialization(int) */

void __thiscall
PlantMagicShroom::setPlantMagicshroomStateSerialization(PlantMagicShroom *this,int param_1)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<MSState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<MSState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<MSState>::GetStateDefinition
                     ((StateMachineTable<MSState> *)pSVar2,param_1);
  StateDefinition<MSState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<MSState>::SetContext(aSStack_a8,this);
  StateMachine<DPEState>::SetStateNoTransition
            ((StateMachine<DPEState> *)(this + 0x30),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

