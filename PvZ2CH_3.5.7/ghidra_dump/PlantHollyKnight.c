// Class: PlantHollyKnight


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHollyKnight::StaticClassInit() */

void PlantHollyKnight::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantHollyKnight");
    (*pcVar2)(plVar1,asStack_10,FUN_04288878,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHollyKnight::StaticGetClass() */

long * PlantHollyKnight::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantHollyKnight",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantHollyKnight::GetClass() const */

long * PlantHollyKnight::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantHollyKnight",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantHollyKnight::HasCharges() */

bool __thiscall PlantHollyKnight::HasCharges(PlantHollyKnight *this)

{
  return 0 < *(int *)(this + 0x2c);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHollyKnight::onKilled(bool) */

void PlantHollyKnight::onKilled(bool param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this;
  long lVar1;
  long *plVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  this = (RtWeakPtr<Sexy::ResourceInfo> *)((ulong)param_1 + 0x40);
  local_8 = ___stack_chk_guard;
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  if (lVar1 != 0) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    (**(code **)(*plVar2 + 0x48))();
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHollyKnight::UpdateCharges(int) */

void __thiscall PlantHollyKnight::UpdateCharges(PlantHollyKnight *this,int param_1)

{
  PlantAnimRig_HollyKnight *this_00;
  
  *(int *)(this + 0x2c) = param_1;
  UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  nop();
  PlantAnimRig_HollyKnight::ShowNumBerries(this_00,param_1);
  return;
}


/* PlantHollyKnight::OnFiredProjectile(Projectile&, PlantPropertySheet const*) */

void PlantHollyKnight::OnFiredProjectile(Projectile *param_1,PlantPropertySheet *param_2)

{
  long extraout_x0;
  RtObject *this;
  HollyKnightLeafProps *pHVar1;
  
  nop();
  this = (RtObject *)Projectile::GetProps(param_1);
  pHVar1 = Sexy::RtObject::Cast<HollyKnightLeafProps>(this);
  *(undefined4 *)(pHVar1 + 0x1e4) = *(undefined4 *)(extraout_x0 + 0x2d0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHollyKnight::PlayAttackEffect(std::string) */

void __thiscall PlantHollyKnight::PlayAttackEffect(PlantHollyKnight *this,undefined8 param_2)

{
  int iVar1;
  Effect_PopAnim *this_00;
  PopAnim *pPVar2;
  Point aPStack_38 [8];
  int local_30;
  int local_2c;
  TPoint<int> aTStack_28 [8];
  Point aPStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  BoardTransforms::GridToBoardSpace(aPStack_38);
  Sexy::Point::Point(aPStack_20,0,-0x1e);
  Sexy::TPoint<int>::operator+(aTStack_28,(TPoint *)aPStack_20);
  Sexy::Point::Point((Point *)&local_30,(TPoint *)aRStack_18);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string((string *)aPStack_20,"POPANIM_EFFECTS_HOLLY_ATTACK_FX");
  GetPAMByName((string *)aPStack_20);
  pPVar2 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,pPVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  std::string::~string((string *)aPStack_20);
  nop();
  Effect_PopAnim::SetCentered(this_00,true);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)local_30,(float)local_2c,0.0);
  iVar1 = (**(code **)(*(long *)this + 0x88))(this);
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,iVar1 + 2);
  Effect_PopAnim::PlaySingleAnimation(this_00,param_2,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHollyKnight::setState(unsigned int) */

void __thiscall PlantHollyKnight::setState(PlantHollyKnight *this,uint param_1)

{
  char cVar1;
  long lVar2;
  RtObject *pRVar3;
  PlantAnimRig_HollyKnight *pPVar4;
  long *plVar5;
  UIEasyButtonWidget *this_00;
  long lVar6;
  code *pcVar7;
  float fVar8;
  undefined4 uVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if ((*(uint *)(this_00 + 200) != param_1) || (param_1 == 0xb)) {
    *(uint *)(this_00 + 200) = param_1;
    switch(param_1) {
    case 1:
      plVar5 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
      (**(code **)(*plVar5 + 0x118))();
      break;
    case 10:
      pRVar3 = (RtObject *)UIEasyButtonWidget::GetImageNormal(this_00);
      pPVar4 = Sexy::RtObject::Cast<PlantAnimRig_HollyKnight>(pRVar3);
      PlantAnimRig_HollyKnight::PlaySelected(pPVar4);
      UpdateCharges(this,*(int *)(this + 0x2c));
      MessageRouter::Broadcast((_func_void *)gMessageRouter);
      break;
    case 0xb:
      pRVar3 = (RtObject *)UIEasyButtonWidget::GetImageNormal(this_00);
      pPVar4 = Sexy::RtObject::Cast<PlantAnimRig_HollyKnight>(pRVar3);
      lVar6 = *(long *)(this + 0x10);
      uVar9 = PVZ_T();
      lVar2 = *(long *)this;
      *(undefined4 *)(lVar6 + 0x128) = uVar9;
      cVar1 = (**(code **)(lVar2 + 0x180))(this);
      if (cVar1 == '\0') {
        std::string::string((string *)aRStack_58,"attack");
        fVar8 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)pPVar4,(string *)aRStack_58);
        *(float *)(*(long *)(this + 0x10) + 0x128) =
             *(float *)(*(long *)(this + 0x10) + 0x128) + fVar8;
        std::string::~string((string *)aRStack_58);
        nop();
        pcVar7 = *(code **)(*(long *)pPVar4 + 0x130);
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
        (*pcVar7)(pPVar4,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_50);
      }
      else {
        std::string::string((string *)aRStack_58,"plantfood");
        fVar8 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)pPVar4,(string *)aRStack_58);
        *(float *)(*(long *)(this + 0x10) + 0x128) =
             *(float *)(*(long *)(this + 0x10) + 0x128) + fVar8;
        std::string::~string((string *)aRStack_58);
        nop();
      }
      UpdateCharges(this,*(int *)(this + 0x2c));
      MessageRouter::Broadcast((_func_void *)gMessageRouter);
      break;
    case 0xc:
      fVar8 = (float)PVZ_T();
      FUN_042865b4(aRStack_58,*(undefined8 *)(this + 0x10));
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
      lVar2 = FUN_04286614(*(undefined8 *)(lVar2 + 0x70));
      *(float *)(this_00 + 0x128) = fVar8 + *(float *)(lVar2 + 0x28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
      pRVar3 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
      ;
      pPVar4 = Sexy::RtObject::Cast<PlantAnimRig_HollyKnight>(pRVar3);
      (**(code **)(*(long *)pPVar4 + 0x118))();
      UpdateCharges(this,*(int *)(this + 0x2c));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHollyKnight::Initialize() */

void __thiscall PlantHollyKnight::Initialize(PlantHollyKnight *this)

{
  int iVar1;
  long extraout_x0;
  PlantAnimRig_HollyKnight *this_00;
  UIEasyButtonWidget *this_01;
  undefined4 uVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x30) = 0xffffffff;
  *(undefined4 *)(this + 0x28) = uVar2;
  FUN_042865b4(aRStack_10,*(undefined8 *)(this + 0x10));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  this_01 = *(UIEasyButtonWidget **)(this + 0x10);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(extraout_x0 + 0x2d8);
  iVar1 = FUN_042865d8(this_01);
  uVar2 = 3;
  if (iVar1 < 3) {
    uVar2 = 2;
  }
  *(undefined4 *)(extraout_x0 + 0x2d0) = uVar2;
  UIEasyButtonWidget::GetImageNormal(this_01);
  nop();
  iVar1 = FUN_042865ec(*(undefined8 *)(extraout_x0 + 0x2e8),*(undefined8 *)(extraout_x0 + 0x2f0));
  PlantAnimRig_HollyKnight::SetNumDamageStates(this_00,iVar1);
  setState(this,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHollyKnight::OnSelected() */

char __thiscall PlantHollyKnight::OnSelected(PlantHollyKnight *this)

{
  char cVar1;
  
  cVar1 = HasCharges(this);
  if (cVar1 != '\0') {
    setState(this,10);
  }
  return cVar1;
}


/* PlantHollyKnight::OnDeselected() */

void __thiscall PlantHollyKnight::OnDeselected(PlantHollyKnight *this)

{
  setState(this,1);
  return;
}


/* PlantHollyKnight::OnFiring() */

void __thiscall PlantHollyKnight::OnFiring(PlantHollyKnight *this)

{
  UpdateCharges(this,*(int *)(this + 0x2c) + -1);
  setState(this,0xb);
  return;
}


/* PlantHollyKnight::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantHollyKnight::onAnimStoppedCallback(PlantHollyKnight *this,string *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_05474374(param_1,"plantfood",0);
  if (lVar1 != -1) {
    setState(this,0xb);
    return;
  }
  lVar1 = FUN_05474374(param_1,"plantfood_loop",0);
  if ((lVar1 == -1) && (lVar1 = FUN_05474374(param_1,"plantfood_end",0), lVar1 != -1)) {
    plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    (**(code **)(*plVar2 + 0x118))();
    *(undefined4 *)(*(long *)(this + 0x10) + 200) = 1;
  }
  return;
}


/* PlantHollyKnight::PlantHollyKnight() */

void __thiscall PlantHollyKnight::PlantHollyKnight(PlantHollyKnight *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_06825220;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  return;
}


/* PlantHollyKnight::StaticNew() */

PlantHollyKnight * PlantHollyKnight::StaticNew(void)

{
  PlantHollyKnight *this;
  
  this = ::operator_new(0x60);
  PlantHollyKnight(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHollyKnight::registerForEvents() */

void __thiscall PlantHollyKnight::registerForEvents(PlantHollyKnight *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  ComponentPlantLauncher *pCVar2;
  string *psVar3;
  undefined8 uVar4;
  undefined8 local_148;
  CBMemberTranslatorX aCStack_140 [24];
  CBMemberTranslatorX aCStack_128 [24];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_110 [24];
  Delegate0wRet<bool> aDStack_f8 [48];
  Delegate0 aDStack_c8 [48];
  Delegate0 aDStack_98 [48];
  DummyInit aDStack_68 [48];
  Delegate2<Projectile&,PlantLauncherProps_const*> aDStack_38 [48];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x40);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 == '\0') {
    GameObject::Create<ComponentPlantLauncher>();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_110);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_110);
  }
  pCVar2 = (ComponentPlantLauncher *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  uVar4 = *(undefined8 *)(this + 0x10);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnSelected);
  Sexy::Delegate0wRet<bool>::Delegate0wRet<PlantHollyKnight,bool(PlantHollyKnight::*)()>
            (aDStack_f8,aCStack_140);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnDeselected);
  Sexy::Delegate0::Delegate0<PlantHollyKnight,void(PlantHollyKnight::*)()>(aDStack_c8,aCStack_128);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnFiring);
  Sexy::Delegate0::Delegate0<PlantHollyKnight,void(PlantHollyKnight::*)()>
            (aDStack_98,(string *)aRStack_110);
  Sexy::Delegate2wRet<bool,Sexy::SexyVector3&,PlantLauncherProps_const*>::Delegate2wRet(aDStack_68);
  local_148 = std::
              __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                        ((TaskResource **)OnFiredProjectile);
  Sexy::Delegate2<Projectile&,PlantLauncherProps_const*>::
  Delegate2<void(*)(Projectile&,PlantPropertySheet_const*)>
            (aDStack_38,(CBFunctionTranslatorX *)&local_148);
  ComponentPlantLauncher::RegisterOwner
            (pCVar2,uVar4,aDStack_f8,aDStack_c8,aDStack_98,aDStack_68,aDStack_38);
  psVar3 = (string *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string((string *)aRStack_110,"POPANIM_EFFECTS_HOLLY_RETICLE");
  ComponentPlantLauncher::SetCursorTexture(psVar3);
  std::string::~string((string *)aRStack_110);
  nop();
  pCVar2 = (ComponentPlantLauncher *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  ComponentPlantLauncher::RegisterForEvents(pCVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHollyKnight::CanUpgrade() */

undefined8 __thiscall PlantHollyKnight::CanUpgrade(PlantHollyKnight *this)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_042885b4(*(undefined8 *)(this + 0x10));
  if ((*(int *)(this + 0x2c) < *(int *)(lVar2 + 0x2d8)) &&
     (cVar1 = (**(code **)(*(long *)this + 0x180))(this), cVar1 == '\0')) {
    uVar3 = LawnApp::HasPlayerUnlockedFeature(gLawnApp,0x17);
    return uVar3;
  }
  return 0;
}


/* PlantHollyKnight::OnHealthChanged() */

void __thiscall PlantHollyKnight::OnHealthChanged(PlantHollyKnight *this)

{
  int iVar1;
  long lVar2;
  PopAnimRig *pPVar3;
  float fVar4;
  
  lVar2 = FUN_042885b4(*(undefined8 *)(this + 0x10));
  fVar4 = *(float *)(*(Plant **)(this + 0x10) + 0xd8);
  iVar1 = Plant::GetMaxHitpoints(*(Plant **)(this + 0x10));
  pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  iVar1 = DamageLifetime::OnHealthChanged
                    ((DamageLifetime *)(lVar2 + 0x2e0),fVar4,(float)iVar1,pPVar3,
                     *(int *)(this + 0x30));
  if (*(int *)(this + 0x30) != iVar1) {
    *(int *)(this + 0x30) = iVar1;
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    DamageLifetime::SetAnimRigToPhase((DamageLifetime *)(lVar2 + 0x2e0),iVar1,pPVar3);
    return;
  }
  return;
}


/* PlantHollyKnight::onHealed() */

void __thiscall PlantHollyKnight::onHealed(PlantHollyKnight *this)

{
  long lVar1;
  
  lVar1 = FUN_042885b4(*(undefined8 *)(this + 0x10));
  UpdateCharges(this,*(int *)(lVar1 + 0x2d8));
  OnHealthChanged(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHollyKnight::UpdateActions() */

void __thiscall PlantHollyKnight::UpdateActions(PlantHollyKnight *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long extraout_x0;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  Zombie *pZVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  float fVar11;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = Plant::IsSuspended(*(Plant **)(this + 0x10));
  if (cVar2 == '\0') {
    if (*(int *)(*(long *)(this + 0x10) + 200) == 0xb) {
      fVar11 = (float)PVZ_T();
      if (*(float *)(*(long *)(this + 0x10) + 0x128) < fVar11) {
        setState(this,0xc);
      }
    }
    else if ((*(int *)(*(long *)(this + 0x10) + 200) == 0xc) &&
            (fVar11 = (float)PVZ_T(), *(float *)(*(long *)(this + 0x10) + 0x128) < fVar11)) {
      setState(this,0xd);
    }
    fVar11 = (float)PVZ_T();
    if (*(float *)(this + 0x28) < fVar11) {
      FUN_042865b4(aRStack_68,*(undefined8 *)(this + 0x10));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      if (*(code **)(*(long *)this + 0x198) == PlantFramework::GetDamageFlags) {
        uVar4 = PlantFramework::GetDamageFlags();
      }
      else {
        uVar4 = (**(code **)(*(long *)this + 0x198))(this,0);
      }
      uVar10 = 0;
      lVar5 = FUN_04286618(*(undefined8 *)(extraout_x0 + 0x70));
      iVar3 = *(int *)(lVar5 + 0x2c);
      bVar1 = false;
      fVar11 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
      uVar9 = *(undefined8 *)(this + 0x10);
      Sexy::Point::Point((Point *)&local_90,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_80,1.0,0.0);
      DamageInfo::DamageInfo
                ((DamageInfo *)(fVar11 * (float)iVar3),local_80,uStack_7c,aRStack_68,uVar4,uVar9,
                 (Point *)&local_90,0);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
      Sexy::Insets::Insets
                ((Insets *)&local_a0,*(int *)(*(long *)(this + 0x10) + 0x114) + -1,
                 *(int *)(*(long *)(this + 0x10) + 0x110),3,1);
      EntityFinder::GetEntitiesInGridSquares((FastCurve *)&local_80,2,(Insets *)&local_a0);
      uVar4 = CONCAT44(uStack_7c,local_80);
      lVar5 = FUN_04286600(uVar4,local_78);
      if (lVar5 != 0) {
        do {
          puVar6 = (undefined8 *)FUN_0428660c(uVar4,uVar10);
          pZVar7 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
          if ((((pZVar7 != (Zombie *)0x0) &&
               (cVar2 = (**(code **)(*(long *)pZVar7 + 0x328))(), cVar2 == '\0')) &&
              (cVar2 = (**(code **)(*(long *)pZVar7 + 0x330))(pZVar7), cVar2 == '\0')) &&
             (cVar2 = RealObject::IsOnTeam(pZVar7,1), cVar2 == '\0')) {
            bVar1 = true;
            (**(code **)(*(long *)pZVar7 + 0x110))(pZVar7,aRStack_68);
          }
          uVar10 = uVar10 + 1;
          uVar4 = CONCAT44(uStack_7c,local_80);
          uVar8 = FUN_04286600(uVar4,local_78);
        } while (uVar10 < uVar8);
      }
      if (bVar1) {
        std::string::string((string *)&local_90,"animation");
        PlayAttackEffect(this,(Point *)&local_90);
        std::string::~string((string *)&local_90);
        nop();
      }
      iVar3 = FUN_042865d8(*(undefined8 *)(this + 0x10));
      if (1 < iVar3) {
        uVar10 = 0;
        bVar1 = false;
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
        Sexy::Insets::Insets
                  ((Insets *)&local_90,*(int *)(*(long *)(this + 0x10) + 0x114),
                   *(int *)(*(long *)(this + 0x10) + 0x110) + -1,1,3);
        local_a0 = local_90;
        uStack_98 = uStack_88;
        EntityFinder::GetEntitiesInGridSquares((FastCurve *)&local_80,2,(Insets *)&local_a0);
        uVar4 = CONCAT44(uStack_7c,local_80);
        lVar5 = FUN_04286600(uVar4,local_78);
        if (lVar5 != 0) {
          do {
            puVar6 = (undefined8 *)FUN_0428660c(uVar4,uVar10);
            pZVar7 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
            if (((pZVar7 != (Zombie *)0x0) &&
                (cVar2 = (**(code **)(*(long *)pZVar7 + 0x328))(), cVar2 == '\0')) &&
               ((cVar2 = (**(code **)(*(long *)pZVar7 + 0x330))(pZVar7), cVar2 == '\0' &&
                (cVar2 = RealObject::IsOnTeam(pZVar7,1), cVar2 == '\0')))) {
              bVar1 = true;
              (**(code **)(*(long *)pZVar7 + 0x110))(pZVar7,aRStack_68);
            }
            uVar10 = uVar10 + 1;
            uVar4 = CONCAT44(uStack_7c,local_80);
            uVar8 = FUN_04286600(uVar4,local_78);
          } while (uVar10 < uVar8);
        }
        if (bVar1) {
          std::string::string((string *)&local_90,"animation1");
          PlayAttackEffect(this,(Point *)&local_90);
          std::string::~string((string *)&local_90);
          nop();
        }
      }
      fVar11 = (float)PVZ_T();
      lVar5 = FUN_04286618(*(undefined8 *)(extraout_x0 + 0x70));
      *(float *)(this + 0x28) = fVar11 + *(float *)(lVar5 + 0x28);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
      DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHollyKnight::~PlantHollyKnight() */

void __thiscall PlantHollyKnight::~PlantHollyKnight(PlantHollyKnight *this)

{
  *(undefined ***)this = &PTR_GetClass_06825220;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x48));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantHollyKnight::~PlantHollyKnight() */

void __thiscall PlantHollyKnight::~PlantHollyKnight(PlantHollyKnight *this)

{
  ~PlantHollyKnight(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHollyKnight::TakeDamage(DamageInfo const&) */

void PlantHollyKnight::TakeDamage(DamageInfo *param_1)

{
  DamageInfo *in_x1;
  DamageInfo *in_x8;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantMagicbeans::TakeDamage(param_1);
  DamageInfo::~DamageInfo(aDStack_68);
  OnHealthChanged((PlantHollyKnight *)param_1);
  DamageInfo::DamageInfo(in_x8,in_x1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHollyKnight::ApplyPlantfood() */

void PlantHollyKnight::ApplyPlantfood(void)

{
  int iVar1;
  uint uVar2;
  BoardEntity *pBVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  PlantHollyKnight *in_x0;
  long lVar9;
  undefined8 uVar10;
  BoardEntity *extraout_x0;
  BoardEntity *this;
  long *extraout_x0_00;
  undefined8 uVar11;
  long *extraout_x0_01;
  BoardTransforms *pBVar12;
  long lVar13;
  long lVar14;
  BoardEntity *this_00;
  long lVar15;
  float extraout_s0;
  float extraout_s0_00;
  float in_s1;
  float fVar16;
  int local_b4;
  undefined1 local_b0 [8];
  TPoint<int> aTStack_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  float local_88 [4];
  undefined8 local_78;
  float local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38 [3];
  BoardEntity *local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar9 = FUN_042885b4(*(undefined8 *)(in_x0 + 0x10));
  iVar1 = *(int *)(lVar9 + 0x2cc);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68);
  Board::GetGridBoundingRect();
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68,2,
             (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_20,0xffffffff,0xffffffff);
  uVar11 = local_68;
  iVar6 = FUN_04286600(local_68,local_60);
  uVar2 = iVar6 - 1;
  if (-1 < (int)uVar2) {
    uVar10 = operator|(1,8);
    lVar13 = (long)(int)uVar2 + -1;
    uVar10 = operator|(uVar10,4);
    uVar10 = operator|(uVar10,0x80);
    operator|(uVar10,0x800);
    lVar9 = lVar13;
    lVar15 = (long)(int)uVar2;
    while( true ) {
      lVar14 = lVar9;
      FUN_0428660c(uVar11,lVar15);
      nop();
      cVar4 = Zombie::MatchesAny();
      uVar11 = local_68;
      if (cVar4 != '\0') {
        local_50 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_68);
        local_38[0] = __gnu_cxx::
                      __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                   *)&local_50,lVar15);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_20,(__normal_iterator *)local_38);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_68,local_20);
        uVar11 = local_68;
      }
      local_68 = uVar11;
      if (lVar14 == lVar13 - (ulong)uVar2) break;
      lVar9 = lVar14 + -1;
      lVar15 = lVar14;
    }
  }
  iVar6 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
  if (0 < iVar1) {
    do {
      uVar11 = local_68;
      iVar7 = FUN_04286600(local_68,local_60);
      uVar2 = iVar7 - 1;
      if (-1 < (int)uVar2) {
        lVar9 = (long)(int)uVar2 + -1;
        lVar15 = lVar9 - (ulong)uVar2;
        FUN_0428660c(uVar11);
        nop();
        pBVar3 = extraout_x0;
LAB_04289748:
        this_00 = pBVar3;
        lVar13 = lVar9;
        if (lVar9 != lVar15) {
          while( true ) {
            lVar9 = lVar13 + -1;
            FUN_0428660c(local_68,lVar13);
            nop();
            pBVar3 = this;
            if (this_00 == (BoardEntity *)0x0) break;
            iVar7 = BoardEntity::CalcColumnPosition(this);
            iVar8 = BoardEntity::CalcColumnPosition(this_00);
            pBVar3 = this;
            if (iVar7 < iVar8) break;
            lVar13 = lVar9;
            if (lVar9 == lVar15) goto LAB_04289758;
          }
          goto LAB_04289748;
        }
LAB_04289758:
        if (this_00 != (BoardEntity *)0x0) {
          local_20 = this_00;
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50,&local_20);
        }
        uVar11 = local_68;
        iVar7 = FUN_04286600(local_68,local_60);
        lVar9 = (long)(iVar7 + -1);
        if (-1 < iVar7 + -1) {
          while( true ) {
            FUN_0428660c(uVar11,lVar9);
            BoardEntity::CalcGridPosition();
            BoardEntity::CalcGridPosition();
            cVar4 = Sexy::TPoint<int>::operator==((TPoint<int> *)local_38,(TPoint *)&local_20);
            if (cVar4 != '\0') {
              local_78 = std::
                         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                  *)&local_68);
              local_38[0] = __gnu_cxx::
                            __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                            ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                         *)&local_78,lVar9);
              __gnu_cxx::
              __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              ::__normal_iterator<Sexy::RenderStateManager::Context**>
                        ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                          *)&local_20,(__normal_iterator *)local_38);
              std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                        ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_68,local_20);
            }
            if (lVar9 == 0) break;
            lVar9 = lVar9 + -1;
            uVar11 = local_68;
          }
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != iVar1);
  }
  lVar9 = FUN_042885b4(*(undefined8 *)(in_x0 + 0x10));
  local_b4 = 0;
  fVar16 = *(float *)(lVar9 + 0x2c8);
  local_70 = fVar16;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_38);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20,(vector *)&local_50);
  if (local_b4 < iVar1) {
    do {
      cVar4 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                        ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
      if (cVar4 != '\0') {
        if (local_b4 < iVar1) {
          goto LAB_04289990;
        }
        break;
      }
      iVar6 = FUN_04286600(local_20,local_18);
      iVar6 = PlantFramework::Rand((PlantFramework *)in_x0,iVar6);
      FUN_0428660c(local_20,(long)iVar6);
      nop();
      pBVar12 = (BoardTransforms *)
                (**(code **)(*extraout_x0_00 + 0x3a8))((float)(local_b4 + 1) * fVar16);
      local_88[0] = extraout_s0;
      BoardTransforms::BoardSpaceToGrid(pBVar12,extraout_s0,in_s1);
      uVar11 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)local_38);
      uVar10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)local_38);
      local_a0 = std::
                 find<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>,Sexy::Point>
                           (uVar11,uVar10,aTStack_a8);
      local_98 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)local_38);
      bVar5 = __gnu_cxx::operator==((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98);
      if (bVar5) {
        Sexy::Point::Point((Point *)&local_90,-1,-1);
        cVar4 = Sexy::TPoint<int>::operator!=(aTStack_a8,(TPoint *)&local_90);
        if (cVar4 != '\0') {
          FUN_0428773c(&local_78,&local_b4,aTStack_a8);
          std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)local_38,(Point *)aTStack_a8
                    );
          uVar11 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_50);
          uVar10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_50);
          local_98 = std::
                     remove<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,Zombie*>
                               (uVar11,uVar10,local_b0);
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_90,(__normal_iterator *)&local_98);
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50,local_90);
        }
      }
      local_a0 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_20);
      local_98 = __gnu_cxx::
                 __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                 ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                              *)&local_a0,(long)iVar6);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_90,(__normal_iterator *)&local_98);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20,local_90);
    } while (local_b4 < iVar1);
  }
  else {
LAB_04289820:
    if (local_b4 < iVar1) {
      do {
        Sexy::Point::Point((Point *)local_88,-1,-1);
        FUN_0428773c(&local_78,&local_b4,(Point *)local_88);
      } while (local_b4 < iVar1);
    }
  }
LAB_04289860:
  Plant::Heal(*(Plant **)(in_x0 + 0x10));
  lVar9 = FUN_042885b4(*(undefined8 *)(in_x0 + 0x10));
  UpdateCharges(in_x0,*(int *)(lVar9 + 0x2d8));
  PlantFramework::ApplyPlantfood((PlantFramework *)in_x0);
  setState(in_x0,0xb);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)local_38);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_68);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
  while( true ) {
    iVar6 = FUN_04286600(local_50,local_48);
    iVar6 = PlantFramework::Rand((PlantFramework *)in_x0,iVar6);
    FUN_0428660c(local_20,(long)iVar6);
    nop();
    pBVar12 = (BoardTransforms *)
              (**(code **)(*extraout_x0_01 + 0x3a8))((float)(local_b4 + 1) * fVar16);
    local_88[0] = extraout_s0_00;
    BoardTransforms::BoardSpaceToGrid(pBVar12,extraout_s0_00,in_s1);
    FUN_0428773c(&local_78,&local_b4,aTStack_a8);
    local_a0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_50);
    local_98 = __gnu_cxx::
               __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
               ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                            *)&local_a0,(long)iVar6);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_90,(__normal_iterator *)&local_98);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50,local_90);
    if (iVar1 <= local_b4) break;
LAB_04289990:
    cVar4 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50);
    if (cVar4 != '\0') goto LAB_04289820;
  }
  goto LAB_04289860;
}

