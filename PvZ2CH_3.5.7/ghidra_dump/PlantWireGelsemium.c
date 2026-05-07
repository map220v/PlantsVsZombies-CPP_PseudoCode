// Class: PlantWireGelsemium


/* PlantWireGelsemium::onTideTransitionCompleted(TideModule const*) */

void PlantWireGelsemium::onTideTransitionCompleted(TideModule *param_1)

{
  return;
}


/* PlantWireGelsemium::NotifySetHidden(bool, bool) */

void __thiscall
PlantWireGelsemium::NotifySetHidden(PlantWireGelsemium *this,bool param_1,bool param_2)

{
  char cVar1;
  
  if (((param_2 < param_1) && (*(BaseCursor **)(this + 0x60) != (BaseCursor *)0x0)) &&
     (cVar1 = BaseCursor::IsCachedCursor(*(BaseCursor **)(this + 0x60)), cVar1 == '\0')) {
    BaseCursor::Destroy(*(BaseCursor **)(this + 0x60));
    return;
  }
  return;
}


/* PlantWireGelsemium::ApplyPlantfood() */

void __thiscall PlantWireGelsemium::ApplyPlantfood(PlantWireGelsemium *this)

{
  char cVar1;
  
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  if (*(BaseCursor **)(this + 0x60) == (BaseCursor *)0x0) {
    return;
  }
  cVar1 = BaseCursor::IsCachedCursor(*(BaseCursor **)(this + 0x60));
  if (cVar1 != '\0') {
    Board::ClearCachedCursor(*(Board **)(gLawnApp + 0x9f0));
    return;
  }
  BaseCursor::Destroy(*(BaseCursor **)(this + 0x60));
  return;
}


/* PlantWireGelsemium::unregisterForEvents() */

void __thiscall PlantWireGelsemium::unregisterForEvents(PlantWireGelsemium *this)

{
  char cVar1;
  
  cVar1 = PlantFramework::IsArenaBattle();
  if (cVar1 == '\0') {
    LawnApp::UnregisterBoardTouchGameplayObject(gLawnApp,this);
    MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  }
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWireGelsemium::StaticClassInit() */

void PlantWireGelsemium::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantWireGelsemium");
    (*pcVar2)(plVar1,asStack_10,FUN_038aa220,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWireGelsemium::StaticGetClass() */

long * PlantWireGelsemium::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantWireGelsemium",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWireGelsemium::GetClass() const */

long * PlantWireGelsemium::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantWireGelsemium",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWireGelsemium::isCreateFence() const */

bool __thiscall PlantWireGelsemium::isCreateFence(PlantWireGelsemium *this)

{
  bool bVar1;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x68));
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWireGelsemium::CancelPlantfood() */

void __thiscall PlantWireGelsemium::CancelPlantfood(PlantWireGelsemium *this)

{
  long lVar1;
  RtObject *this_00;
  PlantAnimRig_WireGelsemium *pPVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  if ((*(int *)(*(UIEasyButtonWidget **)(this + 0x10) + 200) == 0xc) &&
     (lVar1 = UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10)), lVar1 != 0)
     ) {
    this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    pPVar2 = Sexy::RtObject::Cast<PlantAnimRig_WireGelsemium>(this_00);
    std::string::string(asStack_40,"attack02");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue((PopAnimRig *)pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWireGelsemium::GetDamageRate() */

void __thiscall PlantWireGelsemium::GetDamageRate(PlantWireGelsemium *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  RtWeakPtrBase *pRVar6;
  long lVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = 0;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x28));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x28));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pRVar6 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar6);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
    if (cVar2 != '\0') {
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      iVar3 = FUN_038a8c90(*(undefined4 *)(lVar7 + 0xa4));
      iVar4 = iVar4 + iVar3;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  uVar5 = 1;
  if (((iVar4 != 0) && (uVar5 = 2, iVar4 != 1)) && (uVar5 = 3, iVar4 != 2)) {
    if (iVar4 == 3) {
      iVar4 = FUN_038a8c6c(*(undefined8 *)(this + 0x10));
      uVar5 = 4;
      if (iVar4 < 2) {
        uVar5 = 3;
      }
    }
    else {
      iVar4 = FUN_038a8c6c(*(undefined8 *)(this + 0x10));
      if ((iVar4 != 1) && (uVar5 = 4, iVar4 != 2)) {
        uVar5 = 5;
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


/* PlantWireGelsemium::PlantWireGelsemium() */

void __thiscall PlantWireGelsemium::PlantWireGelsemium(PlantWireGelsemium *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_066b2e10;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  Sexy::Point::Point((Point *)(this + 0x48));
  this[0x58] = (PlantWireGelsemium)0x1;
  *(undefined4 *)(this + 0x50) = 0x3f800000;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x68));
  *(undefined8 *)(this + 0x60) = 0;
  return;
}


/* PlantWireGelsemium::StaticNew() */

PlantWireGelsemium * PlantWireGelsemium::StaticNew(void)

{
  PlantWireGelsemium *this;
  
  this = ::operator_new(0x80);
  PlantWireGelsemium(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWireGelsemium::fireProjectile(BoardEntity*, Sexy::RtWeakPtr<ProjectilePropertySheet>, int)
    */

void __thiscall
PlantWireGelsemium::fireProjectile
          (PlantWireGelsemium *this,
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *param_1,RtWeakPtrBase *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  float *pfVar3;
  undefined8 *puVar4;
  long lVar5;
  Projectile *this_00;
  Projectile *pPVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  Board *pBVar14;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(param_1);
  fVar12 = *pfVar3;
  fVar11 = pfVar3[1];
  FUN_038ad780(*(undefined8 *)(this + 0x10));
  puVar4 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           **)(this + 0x10));
  fVar9 = *(float *)((long)puVar4 + 4);
                    /* WARNING: Load size is inaccurate */
  pBVar14._0_4_ = *puVar4;
  fVar11 = fVar11 - fVar9;
  fVar12 = fVar12 - (float)pBVar14._0_4_;
  uVar7 = *(undefined8 *)(gLawnApp + 0x9f0);
  fVar8 = atanf(-fVar11 / fVar12);
  fVar10 = SQRT(fVar11 * fVar11 + fVar12 * fVar12);
  if (fVar12 == 0.0) {
    if (fVar11 <= 0.0) {
      fVar8 = 90.0;
    }
    else {
      fVar8 = -90.0;
    }
    fVar13 = 0.0;
    fVar11 = (fVar10 * 400.0) / fVar11;
    fVar8 = (float)Sexy::SexyMath::DegToRad(fVar8);
  }
  else if (fVar11 == 0.0) {
    if (fVar12 <= 0.0) {
      fVar11 = 0.0;
      fVar13 = (fVar10 * 400.0) / fVar12;
      fVar8 = (float)Sexy::SexyMath::DegToRad(180.0);
    }
    else {
      fVar11 = 0.0;
      fVar13 = (fVar10 * 400.0) / fVar12;
      fVar8 = (float)Sexy::SexyMath::DegToRad(0.0);
    }
  }
  else {
    if (fVar12 <= 0.0) {
      fVar8 = fVar8 + 3.1415927;
    }
    fVar13 = (fVar10 * 400.0) / fVar12;
    fVar11 = (fVar11 / fVar12) * fVar13;
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,param_3);
  lVar5 = Board::AddProjectile
                    (pBVar14._0_4_,fVar9 - 22.0,0,uVar7,aRStack_18,*(undefined8 *)(this + 0x10),0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (lVar5 == 0) {
    pPVar6 = (Projectile *)0x0;
  }
  else {
    lVar5 = FUN_038ad780(*(undefined8 *)(this + 0x10));
    fVar12 = *(float *)(lVar5 + 0x2c0);
    iVar1 = GetDamageRate(this);
    fVar9 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
    fVar10 = (float)Plant::GetDamageConstValue(*(Plant **)(this + 0x10));
    nop();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_30);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_28);
    uVar2 = GetDamageRate(this);
    WireGelsemiumProjectile::initProjectile
              ((WireGelsemiumProjectile *)(fVar10 + (float)iVar1 * fVar9 * fVar12),this_00,
               aRStack_20,aRStack_18,param_4,uVar2);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,fVar13,fVar11,0.0);
    Projectile::SetVelocity(this_00,(SexyVector3 *)aRStack_18);
    FUN_038a8c20(fVar8,this_00 + 0xc4);
    pPVar6 = this_00;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pPVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWireGelsemium::registerForEvents() */

void __thiscall PlantWireGelsemium::registerForEvents(PlantWireGelsemium *this)

{
  undefined *puVar1;
  char cVar2;
  Board *pBVar3;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_c0 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_b8 [8];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantDied);
  local_e0 = local_b0;
  uStack_d8 = uStack_a8;
  local_d0 = local_a0;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<PlantWireGelsemium,void(PlantWireGelsemium::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,&local_e0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTideTransitionCompleted);
  local_f0 = local_88;
  local_100 = local_98;
  uStack_f8 = uStack_90;
  MessageRouter::
  Subscribe<TideModule_const*,Sexy::CBMemberTranslatorX<PlantWireGelsemium,void(PlantWireGelsemium::*)(TideModule_const*)>>
            ((MessageRouter *)puVar1,Message::TideTransitionComplete,&local_100);
  cVar2 = PlantFramework::IsArenaBattle();
  if (cVar2 == '\0') {
    pBVar3 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onTouchEvent);
    Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
    Delegate1wRet<PlantWireGelsemium,bool(PlantWireGelsemium::*)(Sexy::Touch_const&)>
              (aDStack_68,(CBMemberTranslatorX *)&local_80);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_b8,(RtWeakPtrBase *)aRStack_c0);
    Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
    Board::RegisterTouchGameplayObject(pBVar3,aDStack_68,6,aRStack_b8,aDStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_c0);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onCursorDestroyed);
    local_120 = local_80;
    uStack_118 = uStack_78;
    local_110 = local_70;
    MessageRouter::
    Subscribe<BaseCursor*,Sexy::CBMemberTranslatorX<PlantWireGelsemium,void(PlantWireGelsemium::*)(BaseCursor*)>>
              ((MessageRouter *)puVar1,Message::CursorDestroyed,&local_120);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWireGelsemium::SpecialAttack() */

void __thiscall PlantWireGelsemium::SpecialAttack(PlantWireGelsemium *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  Zombie *pZVar6;
  undefined8 *puVar7;
  GridItem *pGVar8;
  float *pfVar9;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar10;
  RtObject *this_01;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_a8;
  undefined8 local_a0;
  string asStack_98 [8];
  RtWeakPtr aRStack_90 [16];
  RtWeakPtr aRStack_80 [24];
  undefined8 local_68;
  float local_60;
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo((DamageInfo *)&local_68);
  FUN_038a8c48(aRStack_80,*(undefined8 *)(this + 0x10));
  Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_80);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  FUN_038a8c48(aRStack_80,*(undefined8 *)(this + 0x10));
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  lVar5 = FUN_038a8ccc(*(undefined8 *)(lVar5 + 0x70),2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  iVar3 = *(int *)(lVar5 + 0x2c);
  if (cVar1 == '\0') {
    fVar11 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
    local_60 = (float)Plant::GetDamageConstValue(*(Plant **)(this + 0x10));
    local_60 = local_60 + (float)iVar3 * fVar11;
  }
  else {
    fVar11 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
    local_60 = (float)Plant::GetDamageConstValue(*(Plant **)(this + 0x10));
    local_60 = local_60 + fVar11 * (float)iVar3 * 1.5;
  }
  operator|=(auStack_58,0x80);
  local_68 = *(undefined8 *)(this + 0x10);
  iVar3 = GetDamageRate(this);
  local_60 = (float)iVar3 * local_60;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_80);
  uVar4 = operator|(2,4);
  EntityFinder::GetEntitiesOnBoard(aRStack_80,uVar4);
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)aRStack_80);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)aRStack_80);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_a8,(__normal_iterator *)&local_a0), bVar2) {
    puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
    this_01 = (RtObject *)*puVar7;
    if ((((this_01 != (RtObject *)0x0) &&
         (cVar1 = GameObject::IsDestroyed((GameObject *)this_01), cVar1 == '\0')) &&
        ((bVar2 = Sexy::RtObject::IsA<Zombie>(this_01), !bVar2 ||
         ((((pZVar6 = Sexy::RtObject::Cast<Zombie>(this_01), pZVar6 != (Zombie *)0x0 &&
            (cVar1 = (**(code **)(*(long *)pZVar6 + 0x328))(), cVar1 == '\0')) &&
           (cVar1 = (**(code **)(*(long *)pZVar6 + 0x330))(pZVar6), cVar1 == '\0')) &&
          (cVar1 = RealObject::IsOnTeam(pZVar6,1), cVar1 == '\0')))))) &&
       ((bVar2 = Sexy::RtObject::IsA<GridItem>(this_01), !bVar2 ||
        ((pGVar8 = Sexy::RtObject::Cast<GridItem>(this_01), pGVar8 != (GridItem *)0x0 &&
         (cVar1 = RealObject::IsOnTeam(pGVar8,2), cVar1 != '\0')))))) {
      pfVar9 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this_01);
      fVar12 = *pfVar9;
      fVar13 = pfVar9[2];
      fVar11 = pfVar9[1];
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string(asStack_98,"POPANIM_EFFECTS_WIREGELSEMIUM_PROJECTILE");
      GetPAMByName(asStack_98);
      pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_90);
      Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar10,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
      std::string::~string(asStack_98);
      nop();
      EATextSquish::Vec3::Vec3
                ((Vec3 *)aRStack_90,(float)(int)(fVar12 - 80.0),(float)(int)(fVar11 - 114.0),
                 (float)(int)fVar13);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_90,-1);
      FUN_038a8d6c(this_00 + 0x1c);
      std::string::string((string *)aRStack_90,"idle4");
      Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_90,0);
      std::string::~string((string *)aRStack_90);
      nop();
      (**(code **)(*(long *)this_01 + 0x110))(this_01,(DamageInfo *)&local_68);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a8);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aRStack_80);
  DamageInfo::~DamageInfo((DamageInfo *)&local_68);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWireGelsemium::onStandaloneEffectFinishedCallback(StandaloneEffect*) */

void PlantWireGelsemium::onStandaloneEffectFinishedCallback(StandaloneEffect *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  Zombie *pZVar6;
  undefined8 *puVar7;
  GridItem *pGVar8;
  float *pfVar9;
  Effect_PopAnim *this;
  ResourceInfo *pRVar10;
  RtObject *this_00;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  string asStack_98 [8];
  RtWeakPtr aRStack_90 [16];
  RtWeakPtr aRStack_80 [24];
  undefined8 uStack_68;
  float fStack_60;
  undefined1 auStack_58 [80];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo((DamageInfo *)&uStack_68);
  FUN_038a8c48(aRStack_80,*(undefined8 *)(param_1 + 0x10));
  Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_80);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  FUN_038a8c48(aRStack_80,*(undefined8 *)(param_1 + 0x10));
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  lVar5 = FUN_038a8ccc(*(undefined8 *)(lVar5 + 0x70),2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
  iVar3 = *(int *)(lVar5 + 0x2c);
  if (cVar1 == '\0') {
    fVar11 = (float)Plant::GetTotalDamageRate(*(Plant **)(param_1 + 0x10));
    fStack_60 = (float)Plant::GetDamageConstValue(*(Plant **)(param_1 + 0x10));
    fStack_60 = fStack_60 + (float)iVar3 * fVar11;
  }
  else {
    fVar11 = (float)Plant::GetTotalDamageRate(*(Plant **)(param_1 + 0x10));
    fStack_60 = (float)Plant::GetDamageConstValue(*(Plant **)(param_1 + 0x10));
    fStack_60 = fStack_60 + fVar11 * (float)iVar3 * 1.5;
  }
  operator|=(auStack_58,0x80);
  uStack_68 = *(undefined8 *)(param_1 + 0x10);
  iVar3 = GetDamageRate((PlantWireGelsemium *)param_1);
  fStack_60 = (float)iVar3 * fStack_60;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_80);
  uVar4 = operator|(2,4);
  EntityFinder::GetEntitiesOnBoard(aRStack_80,uVar4);
  uStack_a8 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)aRStack_80);
  uStack_a0 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)aRStack_80);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&uStack_a8,(__normal_iterator *)&uStack_a0), bVar2)
  {
    puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_a8);
    this_00 = (RtObject *)*puVar7;
    if ((((this_00 != (RtObject *)0x0) &&
         (cVar1 = GameObject::IsDestroyed((GameObject *)this_00), cVar1 == '\0')) &&
        ((bVar2 = Sexy::RtObject::IsA<Zombie>(this_00), !bVar2 ||
         ((((pZVar6 = Sexy::RtObject::Cast<Zombie>(this_00), pZVar6 != (Zombie *)0x0 &&
            (cVar1 = (**(code **)(*(long *)pZVar6 + 0x328))(), cVar1 == '\0')) &&
           (cVar1 = (**(code **)(*(long *)pZVar6 + 0x330))(pZVar6), cVar1 == '\0')) &&
          (cVar1 = RealObject::IsOnTeam(pZVar6,1), cVar1 == '\0')))))) &&
       ((bVar2 = Sexy::RtObject::IsA<GridItem>(this_00), !bVar2 ||
        ((pGVar8 = Sexy::RtObject::Cast<GridItem>(this_00), pGVar8 != (GridItem *)0x0 &&
         (cVar1 = RealObject::IsOnTeam(pGVar8,2), cVar1 != '\0')))))) {
      pfVar9 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this_00);
      fVar12 = *pfVar9;
      fVar13 = pfVar9[2];
      fVar11 = pfVar9[1];
      this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string(asStack_98,"POPANIM_EFFECTS_WIREGELSEMIUM_PROJECTILE");
      GetPAMByName(asStack_98);
      pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_90);
      Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar10,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
      std::string::~string(asStack_98);
      nop();
      EATextSquish::Vec3::Vec3
                ((Vec3 *)aRStack_90,(float)(int)(fVar12 - 80.0),(float)(int)(fVar11 - 114.0),
                 (float)(int)fVar13);
      StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_90,-1);
      FUN_038a8d6c(this + 0x1c);
      std::string::string((string *)aRStack_90,"idle4");
      Effect_PopAnim::PlaySingleAnimation(this,aRStack_90,0);
      std::string::~string((string *)aRStack_90);
      nop();
      (**(code **)(*(long *)this_00 + 0x110))(this_00,(DamageInfo *)&uStack_68);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&uStack_a8);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aRStack_80);
  DamageInfo::~DamageInfo((DamageInfo *)&uStack_68);
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWireGelsemium::DoSpecial(int) */

void PlantWireGelsemium::DoSpecial(int param_1)

{
  char cVar1;
  Effect_PopAnim *this;
  ResourceInfo *pRVar2;
  long lVar3;
  char *pcVar4;
  int local_78;
  int local_74;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtWeakPtr aRStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardTransforms::GridToBoardSpacePos((BoardTransforms *)0x2,0,(int)___stack_chk_guard);
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_68,"POPANIM_EFFECTS_WIREGELSEMIUM_PROJECTILE");
  GetPAMByName(asStack_68);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_60);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  std::string::~string(asStack_68);
  nop();
  lVar3 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          **)((ulong)(uint)param_1 + 0x10));
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_60,(float)local_78,(float)local_74,*(float *)(lVar3 + 8))
  ;
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_60,-1);
  FUN_038a8d6c(this + 0x1c);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string((string *)aRStack_60,"onStandaloneEffectFinishedCallback");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,asStack_68,
             aRStack_60);
  StandaloneEffect::SetCompletionCallback((StandaloneEffect *)this,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aRStack_60);
  nop();
  Sexy::RtId::~RtId((RtId *)asStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)((ulong)(uint)param_1 + 0x10));
  if (cVar1 == '\0') {
    pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar4,"Plant_wiregelsemium_effect_plantfood");
    std::string::string((string *)aRStack_60,"plantfood");
  }
  else {
    pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar4,"Plant_wiregelsemium_effect_plantfood2");
    std::string::string((string *)aRStack_60,"plantfood02");
  }
  Effect_PopAnim::PlaySingleAnimation(this,aRStack_60,0);
  std::string::~string((string *)aRStack_60);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWireGelsemium::~PlantWireGelsemium() */

void __thiscall PlantWireGelsemium::~PlantWireGelsemium(PlantWireGelsemium *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  GridItemLightningRod *pGVar2;
  long *plVar3;
  RtWeakPtr *this_01;
  
  this_01 = (RtWeakPtr *)(this + 0x68);
  *(undefined ***)this = &PTR_GetClass_066b2e10;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
  if (bVar1) {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    (**(code **)(*plVar3 + 0x48))();
  }
  this_00 = (RtWeakPtr *)(this + 0x40);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    pGVar2 = (GridItemLightningRod *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    GridItemLightningRod::setState(pGVar2,4);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::
  vector<Sexy::RtWeakPtr<WireGelsemiumFence>,std::allocator<Sexy::RtWeakPtr<WireGelsemiumFence>>>::
  ~vector((vector<Sexy::RtWeakPtr<WireGelsemiumFence>,std::allocator<Sexy::RtWeakPtr<WireGelsemiumFence>>>
           *)(this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantWireGelsemium::~PlantWireGelsemium() */

void __thiscall PlantWireGelsemium::~PlantWireGelsemium(PlantWireGelsemium *this)

{
  ~PlantWireGelsemium(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWireGelsemium::setState(int) */

void __thiscall PlantWireGelsemium::setState(PlantWireGelsemium *this,int param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  GridItemLightningRod *pGVar4;
  UIEasyButtonWidget *this_00;
  RtObject *this_01;
  char *pcVar5;
  long lVar6;
  PlantAnimRig_WireGelsemium *unaff_x25;
  code *pcVar7;
  undefined4 uVar8;
  float fVar9;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::IsWatering(*(Plant **)(this + 0x10));
  if ((cVar1 == '\0') &&
     ((lVar6 = *(long *)(this + 0x10), *(int *)(lVar6 + 200) != param_1 || (param_1 == 0xb)))) {
    *(int *)(lVar6 + 200) = param_1;
    if (param_1 == 10) {
      pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar5,"Play_Plant_Banana_Attack_Activate");
      cVar1 = isCreateFence(this);
      if (cVar1 != '\0') {
        uVar8 = PVZ_EOT();
        *(undefined4 *)(this + 0x54) = uVar8;
        plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
        (**(code **)(*plVar3 + 0x48))();
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  (a_Stack_58);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)(this + 0x68),(RtWeakPtr *)a_Stack_58);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58)
        ;
      }
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x40));
      if (bVar2) {
        pGVar4 = (GridItemLightningRod *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
        GridItemLightningRod::setState(pGVar4,4);
      }
    }
    else if (param_1 == 0xb) {
      uVar8 = PVZ_T();
      this_00 = *(UIEasyButtonWidget **)(this + 0x10);
      *(undefined4 *)(lVar6 + 0x128) = uVar8;
      lVar6 = UIEasyButtonWidget::GetImageNormal(this_00);
      if (lVar6 != 0) {
        this_01 = (RtObject *)
                  UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        unaff_x25 = Sexy::RtObject::Cast<PlantAnimRig_WireGelsemium>(this_01);
        std::string::string((string *)a_Stack_58,"attack");
        fVar9 = (float)PopAnimRig::CalcAnimLengthSeconds
                                 ((PopAnimRig *)unaff_x25,(string *)a_Stack_58);
        *(float *)(*(long *)(this + 0x10) + 0x128) =
             *(float *)(*(long *)(this + 0x10) + 0x128) + fVar9 * 1.2;
        std::string::~string((string *)a_Stack_58);
        nop();
      }
      pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar5,"Plant_wiregelsemium_attack");
      pcVar7 = *(code **)(*(long *)unaff_x25 + 0x130);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string((string *)a_Stack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 (string *)a_Stack_58);
      (*pcVar7)(unaff_x25,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)a_Stack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    }
    else if (param_1 == 1) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_58);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(this + 0x68),(RtWeakPtr *)a_Stack_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58);
      this[0x58] = (PlantWireGelsemium)0x1;
      plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      (**(code **)(*plVar3 + 0x118))();
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWireGelsemium::Initialize() */

void __thiscall PlantWireGelsemium::Initialize(PlantWireGelsemium *this)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  uVar4 = PVZ_EOT();
  uVar3 = *(undefined8 *)(this + 0x10);
  *(undefined4 *)(this + 0x54) = uVar4;
  iVar1 = FUN_038a8c6c(uVar3);
  if (iVar1 == 2) {
    lVar2 = FUN_038ad780(uVar3);
    uVar3 = *(undefined8 *)(this + 0x10);
    *(undefined4 *)(this + 0x70) = *(undefined4 *)(lVar2 + 0x2c4);
  }
  else if (iVar1 < 3) {
    *(undefined4 *)(this + 0x70) = 0;
  }
  else {
    lVar2 = FUN_038ad780(uVar3);
    uVar3 = *(undefined8 *)(this + 0x10);
    *(undefined4 *)(this + 0x70) = *(undefined4 *)(lVar2 + 0x2c8);
  }
  lVar2 = FUN_038ad780(uVar3);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(lVar2 + 0x2b8);
  std::
  vector<Sexy::RtWeakPtr<WireGelsemiumFence>,std::allocator<Sexy::RtWeakPtr<WireGelsemiumFence>>>::
  clear((vector<Sexy::RtWeakPtr<WireGelsemiumFence>,std::allocator<Sexy::RtWeakPtr<WireGelsemiumFence>>>
         *)(this + 0x28));
  Sexy::Point::Point((Point *)&local_10,-1,-1);
  *(undefined8 *)(this + 0x48) = local_10;
  setState(this,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWireGelsemium::ChooseTargetAndFire(Sexy::Point const&) */

void __thiscall PlantWireGelsemium::ChooseTargetAndFire(PlantWireGelsemium *this,Point *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  RtObject *pRVar4;
  PirateStage *this_00;
  long lVar5;
  Plant *pPVar6;
  undefined8 *puVar7;
  GridItem *this_01;
  PlantWireGelsemium *this_02;
  undefined8 uVar8;
  Board *pBVar9;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  TPoint<int> aTStack_38 [8];
  Vec3 aVStack_30 [16];
  Vec3 aVStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardTransforms::BoardSpaceToGrid
            ((BoardTransforms *)(ulong)*(uint *)param_1,*(int *)(param_1 + 4),
             (int)___stack_chk_guard);
  pBVar9 = *(Board **)(gLawnApp + 0x9f0);
  cVar1 = FUN_038a8c98(pBVar9[0x887]);
  if (((cVar1 != '\0') && (cVar1 = FUN_038a8c9c(pBVar9[0x888]), cVar1 != '\0')) &&
     (cVar1 = FUN_038ab3bc(*(undefined4 *)(*(long *)(this + 0x10) + 0x28)), cVar1 == '\0')) {
    pRVar4 = (RtObject *)Board::GetStage(pBVar9);
    if ((pRVar4 != (RtObject *)0x0) && (bVar2 = Sexy::RtObject::IsA<PirateStage>(pRVar4), bVar2)) {
      this_00 = Sexy::RtObject::Cast<PirateStage>(pRVar4);
      cVar1 = PirateStage::IsPlankOnRow(this_00,local_4c);
      if ((cVar1 == '\0') && (4 < local_50)) goto LAB_038b042c;
    }
    pBVar9 = *(Board **)(gLawnApp + 0x9f0);
    EATextSquish::Vec3::Vec3(aVStack_30,(float)*(int *)param_1,(float)*(int *)(param_1 + 4),0.0);
    cVar1 = Board::IsShallowWater(pBVar9,(SexyVector3 *)aVStack_30);
    if ((cVar1 == '\0') || (lVar5 = FUN_038ae63c(local_50,local_4c), lVar5 != 0)) {
      pBVar9 = *(Board **)(gLawnApp + 0x9f0);
      EATextSquish::Vec3::Vec3(aVStack_20,(float)*(int *)param_1,(float)*(int *)(param_1 + 4),0.0);
      cVar1 = Board::IsSky(pBVar9,(SexyVector3 *)aVStack_20);
      if ((cVar1 == '\0') &&
         (cVar1 = PlantCobcannon::canFire((PlantCobcannon *)this), cVar1 != '\0')) {
        uVar8 = *(undefined8 *)param_1;
        this[0x58] = (PlantWireGelsemium)0x0;
        *(undefined8 *)(this + 0x48) = uVar8;
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aVStack_20);
        uVar3 = operator|(1,4);
        EntityFinder::GetEntitiesAtGridSquare(aVStack_20,uVar3,local_50,local_4c);
        local_48 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)aVStack_20);
        local_40 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)aVStack_20);
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40),
              bVar2) {
          puVar7 = (undefined8 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
          pRVar4 = (RtObject *)*puVar7;
          if (pRVar4 != (RtObject *)0x0) {
            bVar2 = Sexy::RtObject::IsA<Plant>(pRVar4);
            if (bVar2) {
              pPVar6 = Sexy::RtObject::Cast<Plant>(pRVar4);
              if (((pPVar6 != (Plant *)0x0) && (*(RtObject **)(pPVar6 + 0xa8) != (RtObject *)0x0))
                 && (bVar2 = Sexy::RtObject::IsA<PlantWireGelsemium>(*(RtObject **)(pPVar6 + 0xa8)),
                    bVar2)) {
                this_02 = Sexy::RtObject::Cast<PlantWireGelsemium>(*(RtObject **)(pPVar6 + 0xa8));
                cVar1 = isCreateFence(this_02);
                if ((cVar1 != '\0') || (*(int *)(pPVar6 + 200) - 0xbU < 2)) goto LAB_038b0654;
              }
              Plant::GetCenterPt();
              Plant::GetCenterPt();
              cVar1 = Sexy::TPoint<int>::operator==(aTStack_38,(TPoint *)aVStack_30);
              if (cVar1 != '\0') goto LAB_038b0654;
            }
            else {
              bVar2 = Sexy::RtObject::IsA<GridItem>(pRVar4);
              if (((bVar2) &&
                  (this_01 = Sexy::RtObject::Cast<GridItem>(pRVar4), this_01 != (GridItem *)0x0)) &&
                 (bVar2 = Sexy::RtObject::IsA<GridItemLightningRod>((RtObject *)this_01), bVar2)) {
LAB_038b0654:
                this[0x58] = (PlantWireGelsemium)0x1;
                std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                          ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aVStack_20);
                goto LAB_038b042c;
              }
            }
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
        }
        setState(this,0xb);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aVStack_20);
      }
    }
  }
LAB_038b042c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWireGelsemium::AutoFire() */

void __thiscall PlantWireGelsemium::AutoFire(PlantWireGelsemium *this)

{
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardTransforms::GridToBoardSpacePos((BoardTransforms *)&DAT_00000004,0,(int)___stack_chk_guard);
  ChooseTargetAndFire(this,aPStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWireGelsemium::onPlantDied(Plant*) */

void __thiscall PlantWireGelsemium::onPlantDied(PlantWireGelsemium *this,Plant *param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  WireGelsemiumFence *pWVar2;
  long lVar3;
  RtObject *this_01;
  Plant *pPVar4;
  long *plVar5;
  undefined8 local_10;
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x68);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    pWVar2 = (WireGelsemiumFence *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    lVar3 = WireGelsemiumFence::GetEndEntity(pWVar2);
    if (lVar3 != 0) {
      pWVar2 = (WireGelsemiumFence *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      this_01 = (RtObject *)WireGelsemiumFence::GetEndEntity(pWVar2);
      pPVar4 = Sexy::RtObject::Cast<Plant>(this_01);
      if (param_1 == pPVar4) {
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        (**(code **)(*plVar5 + 0x48))();
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_10);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)&local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        setState(this,1);
        this[0x58] = (PlantWireGelsemium)0x1;
        Sexy::Point::Point((Point *)&local_10,-1,-1);
        *(undefined8 *)(this + 0x48) = local_10;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWireGelsemium::select() */

PlantWireGelsemium __thiscall PlantWireGelsemium::select(PlantWireGelsemium *this)

{
  int iVar1;
  char cVar2;
  RtObject *this_00;
  PlantAnimRig_WireGelsemium *this_01;
  char *pcVar3;
  PlantWireGelsemium PVar4;
  
  PVar4 = (PlantWireGelsemium)0x0;
  cVar2 = (**(code **)(*(long *)this + 0x180))();
  if (cVar2 == '\0') {
    iVar1 = *(int *)(*(UIEasyButtonWidget **)(this + 0x10) + 200);
    PVar4 = (PlantWireGelsemium)0x0;
    if ((iVar1 == 0xc || iVar1 == 1) && (PVar4 = this[0x58], PVar4 != (PlantWireGelsemium)0x0)) {
      this_00 = (RtObject *)
                UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      this_01 = Sexy::RtObject::Cast<PlantAnimRig_WireGelsemium>(this_00);
      if (this_01 != (PlantAnimRig_WireGelsemium *)0x0) {
        pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar3,"Plant_wiregelsemium_attack03");
        PlantAnimRig_Cobcannon::PlaySelected((PlantAnimRig_Cobcannon *)this_01);
      }
      setState(this,10);
    }
  }
  return PVar4;
}


/* PlantWireGelsemium::onTouchEvent(Sexy::Touch const&) */

char __thiscall PlantWireGelsemium::onTouchEvent(PlantWireGelsemium *this,Touch *param_1)

{
  char cVar1;
  TRect<int> *this_00;
  WireGelsemiumTargetCursor *this_01;
  Plant *this_02;
  Board *this_03;
  float fVar2;
  float fVar3;
  
  cVar1 = Plant::IsSuspended(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    this_02 = *(Plant **)(this + 0x10);
    cVar1 = FUN_038a8c2c(this_02[0x278]);
    if (cVar1 == '\0') {
      cVar1 = Plant::IsWatering(this_02);
      if (cVar1 == '\0') {
        cVar1 = Plant::HasCondition(*(undefined8 *)(this + 0x10),0x11);
        if (cVar1 != '\0') {
          return '\0';
        }
        this_03 = *(Board **)(gLawnApp + 0x9f0);
        cVar1 = Board::IsPlaying(this_03);
        if (cVar1 == '\0') {
          return '\0';
        }
        cVar1 = FUN_038a8c98(this_03[0x887]);
        if (cVar1 == '\0') {
          return '\0';
        }
        fVar2 = (float)FUN_038a91dc((float)*(int *)(param_1 + 0x10));
        fVar3 = (float)FUN_038a91dc((float)*(int *)(param_1 + 0x14));
        this_00 = (TRect<int> *)
                  (**(code **)(**(long **)(this + 0x10) + 0x178))(*(long **)(this + 0x10));
        cVar1 = Sexy::TRect<int>::Contains(this_00,(int)fVar2,(int)fVar3);
        if (cVar1 == '\0') {
          return '\0';
        }
        if (*(int *)(param_1 + 0x30) != 0) {
          return '\0';
        }
        if ((*(BaseCursor **)(this + 0x60) != (BaseCursor *)0x0) &&
           (cVar1 = BaseCursor::IsCachedCursor(*(BaseCursor **)(this + 0x60)), cVar1 == '\0')) {
          return '\0';
        }
        cVar1 = select(this);
        if (cVar1 == '\0') {
          return '\0';
        }
        this_01 = ::operator_new(0x50);
        WireGelsemiumTargetCursor::WireGelsemiumTargetCursor(this_01,param_1,this);
        cVar1 = Board::TryToAddCursor(*(Board **)(gLawnApp + 0x9f0),(BaseCursor *)this_01,true);
        if (cVar1 == '\0') {
          return '\0';
        }
        *(WireGelsemiumTargetCursor **)(this + 0x60) = this_01;
        return cVar1;
      }
    }
  }
  return '\0';
}


/* PlantWireGelsemium::deselect() */

void __thiscall PlantWireGelsemium::deselect(PlantWireGelsemium *this)

{
  char *pcVar1;
  
  setState(this,1);
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_Plant_Banana_Attack_Disarm");
  return;
}


/* PlantWireGelsemium::onCursorDestroyed(BaseCursor*) */

void __thiscall PlantWireGelsemium::onCursorDestroyed(PlantWireGelsemium *this,BaseCursor *param_1)

{
  char cVar1;
  
  if (*(BaseCursor **)(this + 0x60) != param_1) {
    return;
  }
  if ((*(int *)(*(long *)(this + 0x10) + 200) == 10) &&
     (cVar1 = (**(code **)(*(long *)this + 0x180))(), cVar1 == '\0')) {
    deselect(this);
    *(undefined8 *)(this + 0x60) = 0;
  }
  else {
    *(undefined8 *)(this + 0x60) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWireGelsemium::prepareLinkTarget(Sexy::Point const&) */

void PlantWireGelsemium::prepareLinkTarget(Point *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 extraout_x0;
  PlantWireGelsemium *this;
  undefined8 *puVar5;
  Plant *pPVar6;
  undefined8 extraout_x0_00;
  int *piVar7;
  undefined8 extraout_x0_01;
  uint *in_x1;
  int in_w2;
  Board *pBVar8;
  RtWeakPtr<Sexy::SoundResource> aRStack_70 [8];
  int local_68;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  FUN_038a8c48(aRStack_20,*(undefined8 *)(param_1 + 0x10));
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  lVar4 = FUN_038a8ccc(*(undefined8 *)(lVar4 + 0x70),0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_70,(RtWeakPtrBase *)(lVar4 + 8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  BoardTransforms::BoardSpaceToGrid((BoardTransforms *)(ulong)*in_x1,in_x1[1],in_w2);
  EntityFinder::GetEntitiesAtGridSquare(avStack_38,1,local_68,local_64);
  cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  if (cVar1 == '\0') {
    local_60 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_38);
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_38);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58), bVar2)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60)
      ;
      if (((RtObject *)*puVar5 != (RtObject *)0x0) &&
         (pPVar6 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar5), pPVar6 != (Plant *)0x0)) {
        iVar3 = FUN_038a8c6c(*(undefined8 *)(param_1 + 0x10));
        if (iVar3 == 5) {
          Plant::GetType();
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
          std::vector<PlantTag,std::allocator<PlantTag>>::vector
                    ((vector<PlantTag,std::allocator<PlantTag>> *)aRStack_20,
                     (vector *)(lVar4 + 0xf0));
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
          local_50 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)aRStack_20);
          local_48 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)aRStack_20);
          goto LAB_038b1744;
        }
        if (*(RtObject **)(pPVar6 + 0xa8) != (RtObject *)0x0) {
          bVar2 = Sexy::RtObject::IsA<PlantWireGelsemium>(*(RtObject **)(pPVar6 + 0xa8));
          if (bVar2) {
            this = Sexy::RtObject::Cast<PlantWireGelsemium>(*(RtObject **)(pPVar6 + 0xa8));
            cVar1 = isCreateFence(this);
            if (cVar1 == '\0') {
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,(RtWeakPtrBase *)aRStack_70);
              fireProjectile((PlantWireGelsemium *)param_1,pPVar6,aRStack_20,0);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
              break;
            }
          }
          else if (*(RtObject **)(pPVar6 + 0xa8) != (RtObject *)0x0) {
            bVar2 = Sexy::RtObject::IsA<PlantWireGelsemium>(*(RtObject **)(pPVar6 + 0xa8));
            if (!bVar2) {
              pBVar8 = *(Board **)(gLawnApp + 0x9f0);
              std::string::string((string *)aRStack_20,"lightningrod");
              Board::AddGridItem(pBVar8,(string *)aRStack_20,local_68,local_64,1);
              nop();
              std::string::~string((string *)aRStack_20);
              nop();
              ToolPacketData::GetProps();
              Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                        ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x40),
                         (RtWeakPtrBase *)aRStack_20);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,(RtWeakPtrBase *)aRStack_70);
              fireProjectile((PlantWireGelsemium *)param_1,extraout_x0_00,aRStack_20,0);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
              break;
            }
          }
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
    }
  }
  else {
    pBVar8 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)aRStack_20,"lightningrod");
    Board::AddGridItem(pBVar8,(string *)aRStack_20,local_68,local_64,1);
    nop();
    std::string::~string((string *)aRStack_20);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x40),(RtWeakPtrBase *)aRStack_20)
    ;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,(RtWeakPtrBase *)aRStack_70);
    fireProjectile((PlantWireGelsemium *)param_1,extraout_x0,aRStack_20,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  goto LAB_038b154c;
LAB_038b1744:
  bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_48);
  if (!bVar2) goto code_r0x038b1758;
  piVar7 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
  if (*piVar7 == 0x1b) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,(RtWeakPtrBase *)aRStack_70);
    fireProjectile((PlantWireGelsemium *)param_1,pPVar6,aRStack_40,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    goto LAB_038b17f4;
  }
  eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
            ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_50);
  goto LAB_038b1744;
code_r0x038b1758:
  pBVar8 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string((string *)aRStack_40,"lightningrod");
  Board::AddGridItem(pBVar8,(string *)aRStack_40,local_68,local_64,1);
  nop();
  std::string::~string((string *)aRStack_40);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x40),(RtWeakPtrBase *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,(RtWeakPtrBase *)aRStack_70);
  fireProjectile((PlantWireGelsemium *)param_1,extraout_x0_01,aRStack_40,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
LAB_038b17f4:
  std::vector<PlantTag,std::allocator<PlantTag>>::~vector
            ((vector<PlantTag,std::allocator<PlantTag>> *)aRStack_20);
LAB_038b154c:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWireGelsemium::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantWireGelsemium::onAnimStoppedCallback(PlantWireGelsemium *this,string *param_1)

{
  bool bVar1;
  long lVar2;
  RtObject *this_00;
  PlantAnimRig_WireGelsemium *pPVar3;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"attack");
  if (bVar1) {
    prepareLinkTarget((Point *)this);
    lVar2 = UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    if (lVar2 != 0) {
      this_00 = (RtObject *)
                UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      pPVar3 = Sexy::RtObject::Cast<PlantAnimRig_WireGelsemium>(this_00);
      std::string::string(asStack_40,"attack02");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue((PopAnimRig *)pPVar3,asStack_40,0,aDStack_38);
      std::string::~string(asStack_40);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWireGelsemium::boostPlant(Plant*) */

void __thiscall PlantWireGelsemium::boostPlant(PlantWireGelsemium *this,Plant *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  undefined4 uVar5;
  float fVar6;
  undefined8 local_30;
  undefined8 local_28;
  vector<PlantTag,std::allocator<PlantTag>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (Plant *)0x0) &&
     ((*(RtObject **)(param_1 + 0xa8) == (RtObject *)0x0 ||
      (bVar1 = Sexy::RtObject::IsA<PlantWireGelsemium>(*(RtObject **)(param_1 + 0xa8)), !bVar1)))) {
    uVar5 = FUN_038a8c38(*(undefined4 *)(param_1 + 0x564));
    *(undefined4 *)(this + 0x50) = uVar5;
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x68));
    if (bVar1) {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
      iVar2 = FUN_038a8c90(*(undefined4 *)(lVar3 + 0xa4));
      fVar6 = (float)iVar2 + *(float *)(this + 0x50);
      *(float *)(this + 0x50) = fVar6;
    }
    else {
      fVar6 = *(float *)(this + 0x50);
    }
    if (fVar6 <= 0.0) {
      *(undefined4 *)(this + 0x50) = 0x3f800000;
    }
    Plant::GetType();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
    std::vector<PlantTag,std::allocator<PlantTag>>::vector(avStack_20,(vector *)(lVar3 + 0xf0));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1)
    {
      piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      if (*piVar4 == 0x1b) {
        FUN_038a8c30(*(undefined4 *)(this + 0x50),param_1 + 0x564);
        std::vector<PlantTag,std::allocator<PlantTag>>::~vector(avStack_20);
        goto LAB_038b1990;
      }
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_30);
    }
    std::vector<PlantTag,std::allocator<PlantTag>>::~vector(avStack_20);
  }
LAB_038b1990:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWireGelsemium::updateFenceEndVector() */

void __thiscall PlantWireGelsemium::updateFenceEndVector(PlantWireGelsemium *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  RtMixedPtrBase *this_01;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    while( true ) {
      if (!bVar1) {
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      this_01 = (RtMixedPtrBase *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      cVar2 = Sexy::RtMixedPtrBase::IsValid(this_01);
      if (cVar2 != '\0') break;
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      local_18 = std::
                 vector<Sexy::RtWeakPtr<WireGelsemiumFence>,std::allocator<Sexy::RtWeakPtr<WireGelsemiumFence>>>
                 ::erase((vector<Sexy::RtWeakPtr<WireGelsemiumFence>,std::allocator<Sexy::RtWeakPtr<WireGelsemiumFence>>>
                          *)this_00,local_10);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    }
    FUN_038accf0((__normal_iterator *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWireGelsemium::UpdateActions() */

void __thiscall PlantWireGelsemium::UpdateActions(PlantWireGelsemium *this)

{
  RtWeakPtr *this_00;
  RtWeakPtr *this_01;
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ResourceInfo *this_02;
  float *pfVar6;
  char *pcVar7;
  long lVar8;
  WireGelsemiumFence *this_03;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_04;
  SexyVector3 *pSVar9;
  long *plVar10;
  GridItemLightningRod *pGVar11;
  Board *this_05;
  float fVar12;
  float fVar13;
  undefined8 local_10;
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x40);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (!bVar1) goto LAB_038b1d14;
  this_01 = (RtWeakPtr *)(this + 0x68);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
  if (!bVar1) goto LAB_038b1d14;
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  iVar3 = FUN_038a8c3c(*(undefined4 *)(lVar8 + 0x130));
  if (iVar3 == *(int *)(*(long *)(this + 0x10) + 0x114)) {
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar3 = FUN_038a8c40(*(undefined4 *)(lVar8 + 0x134));
    if (iVar3 != *(int *)(*(long *)(this + 0x10) + 0x110)) goto LAB_038b1edc;
  }
  else {
LAB_038b1edc:
    this_05 = *(Board **)(gLawnApp + 0x9f0);
    this_04 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pSVar9 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_04);
    cVar2 = Board::IsShallowWater(this_05,pSVar9);
    if (cVar2 == '\0') goto LAB_038b1d14;
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    uVar4 = FUN_038a8c3c(*(undefined4 *)(lVar8 + 0x130));
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    uVar5 = FUN_038a8c40(*(undefined4 *)(lVar8 + 0x134));
    lVar8 = FUN_038ae63c(uVar4,uVar5);
    if (lVar8 != 0) goto LAB_038b1d14;
  }
  pGVar11 = (GridItemLightningRod *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  GridItemLightningRod::setState(pGVar11,4);
  plVar10 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  (**(code **)(*plVar10 + 0x48))();
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this_01,(RtWeakPtr *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  setState(this,1);
LAB_038b1d14:
  updateFenceEndVector(this);
  cVar2 = isCreateFence(this);
  if ((cVar2 != '\0') &&
     (fVar13 = *(float *)(this + 0x54), fVar12 = (float)PVZ_T(), fVar13 <= fVar12)) {
    pcVar7 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar7,"Plant_wiregelsemium_attack");
    lVar8 = FUN_038ad780(*(undefined8 *)(this + 0x10));
    iVar3 = FUN_038a8c6c(*(undefined8 *)(this + 0x10));
    pfVar6 = (float *)FUN_038a8cc4(*(undefined8 *)(lVar8 + 0x208),(long)(iVar3 + -1));
    fVar13 = *(float *)(lVar8 + 0x2c0);
    fVar12 = *pfVar6;
    iVar3 = GetDamageRate(this);
    fVar12 = fVar12 * fVar13 * (float)iVar3;
    this_03 = (WireGelsemiumFence *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
    WireGelsemiumFence::DamageEntity(this_03,fVar12);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar1) {
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      iVar3 = FUN_038a8c84(*(undefined4 *)(lVar8 + 0x1a8));
      if (iVar3 == 2) {
        pGVar11 = (GridItemLightningRod *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
        ;
        GridItemLightningRod::damageEntity(pGVar11,fVar12);
      }
    }
    fVar12 = (float)PVZ_T();
    *(float *)(this + 0x54) = fVar12 + *(float *)(this + 0x5c) * (1.0 - *(float *)(this + 0x70));
  }
  if (*(int *)(*(long *)(this + 0x10) + 200) == 1) {
    cVar2 = PlantFramework::IsArenaBattle();
    if (cVar2 != '\0') {
      Plant::FindTargetInRow
                ((RtWeakPtr *)&local_10,*(long *)(this + 0x10),
                 *(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
      this_02 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      if (this_02 != (ResourceInfo *)0x0) {
        pfVar6 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this_02);
        Sexy::Point::Point((Point *)&local_10,(int)*pfVar6,(int)pfVar6[1]);
        *(undefined8 *)(this + 0x48) = local_10;
      }
    }
  }
  else if ((*(int *)(*(long *)(this + 0x10) + 200) == 0xb) &&
          (fVar12 = (float)PVZ_T(), *(float *)(*(long *)(this + 0x10) + 0x128) < fVar12)) {
    setState(this,0xc);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWireGelsemium::createFence(BoardEntity*) */

void PlantWireGelsemium::createFence(BoardEntity *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  Plant *extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::RtClass::StaticGetClassNamed("WireGelsemiumFence");
  GameObject::Create(uVar2,0x28);
  nop();
  if (extraout_x0 != (Plant *)0x0) {
    WireGelsemiumFence::initFence(extraout_x0,*(BoardEntity **)(param_1 + 0x10));
    uVar1 = GetDamageRate((PlantWireGelsemium *)param_1);
    FUN_038a8c88(extraout_x0 + 0xa4,uVar1);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x68),(RtWeakPtrBase *)aRStack_10)
    ;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    uVar1 = PVZ_T();
    *(undefined4 *)(param_1 + 0x54) = uVar1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

