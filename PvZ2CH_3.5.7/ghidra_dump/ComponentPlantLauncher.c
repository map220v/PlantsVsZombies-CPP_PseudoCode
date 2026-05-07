// Class: ComponentPlantLauncher


/* ComponentPlantLauncher::SetCursorTexture(std::string const&) */

void ComponentPlantLauncher::SetCursorTexture(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0x118);
  return;
}


/* ComponentPlantLauncher::unregisterForEvents() */

void __thiscall ComponentPlantLauncher::unregisterForEvents(ComponentPlantLauncher *this)

{
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Board::UnregisterTouchGameplayObject(*(Board **)(gLawnApp + 0x9f0),this);
  return;
}


/* ComponentPlantLauncher::GetFireProjectileCallback() */

Delegate2<Projectile&,PlantLauncherProps_const*> *
ComponentPlantLauncher::GetFireProjectileCallback(void)

{
  long in_x0;
  Delegate2<Projectile&,PlantLauncherProps_const*> *in_x8;
  
  Sexy::Delegate2<Projectile&,PlantLauncherProps_const*>::Delegate2
            (in_x8,(Delegate2 *)(in_x0 + 0xb8));
  return in_x8;
}


/* ComponentPlantLauncher::GetAboutToFireProjectileCallback() */

Delegate2wRet<bool,Sexy::SexyVector3&,PlantLauncherProps_const*> *
ComponentPlantLauncher::GetAboutToFireProjectileCallback(void)

{
  long in_x0;
  Delegate2wRet<bool,Sexy::SexyVector3&,PlantLauncherProps_const*> *in_x8;
  
  Sexy::Delegate2wRet<bool,Sexy::SexyVector3&,PlantLauncherProps_const*>::Delegate2wRet
            (in_x8,(Delegate2wRet *)(in_x0 + 0xe8));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentPlantLauncher::StaticClassInit() */

void ComponentPlantLauncher::StaticClassInit(void)

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
    std::string::string(asStack_10,"ComponentPlantLauncher");
    (*pcVar2)(plVar1,asStack_10,FUN_0428d628,0x128,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentPlantLauncher::StaticGetClass() */

long * ComponentPlantLauncher::StaticGetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"ComponentPlantLauncher",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ComponentPlantLauncher::GetClass() const */

long * ComponentPlantLauncher::GetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"ComponentPlantLauncher",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ComponentPlantLauncher::deselect() */

void __thiscall ComponentPlantLauncher::deselect(ComponentPlantLauncher *this)

{
  int iVar1;
  
  iVar1 = FUN_0428b27c(*(undefined8 *)(this + 0x30),*(undefined8 *)(this + 0x40));
  if (iVar1 == 0) {
    return;
  }
  Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x28));
  return;
}


/* ComponentPlantLauncher::~ComponentPlantLauncher() */

void __thiscall ComponentPlantLauncher::~ComponentPlantLauncher(ComponentPlantLauncher *this)

{
  *(undefined ***)this = &PTR_GetClass_06826750;
  std::string::~string((string *)(this + 0x118));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  GameObject::~GameObject((GameObject *)this);
  return;
}


/* ComponentPlantLauncher::~ComponentPlantLauncher() */

void __thiscall ComponentPlantLauncher::~ComponentPlantLauncher(ComponentPlantLauncher *this)

{
  ~ComponentPlantLauncher(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentPlantLauncher::RegisterOwner(Plant*, Sexy::Delegate0wRet<bool>, Sexy::Delegate0,
   Sexy::Delegate0, Sexy::Delegate2wRet<bool, Sexy::SexyVector3&, PlantLauncherProps const*>,
   Sexy::Delegate2<Projectile&, PlantLauncherProps const*>) */

void __thiscall
ComponentPlantLauncher::RegisterOwner
          (ComponentPlantLauncher *this,undefined8 param_2,Delegate1wRet *param_3,Delegate2 *param_4
          ,Delegate2 *param_5,Delegate1wRet *param_6,Delegate2 *param_7)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x20),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator=
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x88),param_3);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x28),param_4);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x58),param_5);
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator=
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0xe8),param_6);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0xb8),param_7);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentPlantLauncher::forceStopSelection() */

void __thiscall ComponentPlantLauncher::forceStopSelection(ComponentPlantLauncher *this)

{
  RtMixedPtr<Sexy::Image> *this_00;
  char cVar1;
  long lVar2;
  Plant *this_01;
  
  this_00 = (RtMixedPtr<Sexy::Image> *)(this + 0x20);
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
  if (cVar1 == '\0') {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    if (*(int *)(lVar2 + 200) == 10) {
      this_01 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      if (*(code **)(*(long *)this_01 + 0x1f8) == Plant::IsInPlantFoodState) {
        cVar1 = Plant::IsInPlantFoodState(this_01);
      }
      else {
        cVar1 = (**(code **)(*(long *)this_01 + 0x1f8))();
      }
      if (cVar1 == '\0') {
        deselect(this);
      }
    }
    if ((*(BaseCursor **)(this + 0x18) != (BaseCursor *)0x0) &&
       (cVar1 = BaseCursor::IsCachedCursor(*(BaseCursor **)(this + 0x18)), cVar1 == '\0')) {
      BaseCursor::Destroy(*(BaseCursor **)(this + 0x18));
    }
    *(undefined8 *)(this + 0x18) = 0;
    return;
  }
  return;
}


/* ComponentPlantLauncher::OnApplyCondition(PlantConditions) */

void ComponentPlantLauncher::OnApplyCondition(ComponentPlantLauncher *param_1)

{
  char cVar1;
  Plant *this;
  
  this = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x20));
  cVar1 = Plant::IsSuspended(this);
  if (cVar1 == '\0') {
    return;
  }
  forceStopSelection(param_1);
  return;
}


/* ComponentPlantLauncher::onCursorDestroyed(BaseCursor*) */

void __thiscall
ComponentPlantLauncher::onCursorDestroyed(ComponentPlantLauncher *this,BaseCursor *param_1)

{
  if (*(BaseCursor **)(this + 0x18) != param_1) {
    return;
  }
  forceStopSelection(this);
  return;
}


/* ComponentPlantLauncher::NotifySetHidden(bool, bool) */

void __thiscall
ComponentPlantLauncher::NotifySetHidden(ComponentPlantLauncher *this,bool param_1,bool param_2)

{
  if (param_1 <= param_2) {
    return;
  }
  forceStopSelection(this);
  return;
}


/* ComponentPlantLauncher::select() */

undefined8 __thiscall ComponentPlantLauncher::select(ComponentPlantLauncher *this)

{
  RtMixedPtr<Sexy::Image> *this_00;
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  this_00 = (RtMixedPtr<Sexy::Image> *)(this + 0x20);
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
  if (cVar1 == '\0') {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    if (*(int *)(lVar3 + 200) == 0xc) {
      MessageRouter::Broadcast((_func_void *)gMessageRouter);
    }
    else {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      if (((*(int *)(lVar3 + 200) == 0xd) ||
          (lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00), *(int *)(lVar3 + 200) == 1)
          ) && (iVar2 = FUN_0428b27c(*(undefined8 *)(this + 0x90),*(undefined8 *)(this + 0xa0)),
               iVar2 != 0)) {
        uVar4 = Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn
                          ((RtInvokeVariant *)(this + 0x88));
        return uVar4;
      }
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentPlantLauncher::ComponentPlantLauncher() */

void __thiscall ComponentPlantLauncher::ComponentPlantLauncher(ComponentPlantLauncher *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = ___stack_chk_guard;
  GameObject::GameObject((GameObject *)this);
  *(undefined8 *)(this + 0x18) = 0;
  this[0x10] = (ComponentPlantLauncher)0x0;
  *(undefined ***)this = &PTR_GetClass_06826750;
  this[0x11] = (ComponentPlantLauncher)0x0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x20));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x28),(DummyInit *)0x0);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x58),(DummyInit *)0x0);
  Sexy::Delegate0wRet<bool>::Delegate0wRet((DummyInit *)(this + 0x88));
  Sexy::Delegate2<Projectile&,PlantLauncherProps_const*>::Delegate2((DummyInit *)(this + 0xb8));
  Sexy::Delegate2wRet<bool,Sexy::SexyVector3&,PlantLauncherProps_const*>::Delegate2wRet
            ((DummyInit *)(this + 0xe8));
  std::string::string((string *)(this + 0x118),"");
  nop();
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x120) = 1;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentPlantLauncher::StaticNew() */

ComponentPlantLauncher * ComponentPlantLauncher::StaticNew(void)

{
  ComponentPlantLauncher *this;
  
  this = ::operator_new(0x128);
  ComponentPlantLauncher(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentPlantLauncher::ComponentPlantLauncher(Plant*, Sexy::Delegate0wRet<bool>,
   Sexy::Delegate0, Sexy::Delegate0, Sexy::Delegate2wRet<bool, Sexy::SexyVector3&,
   PlantLauncherProps const*>, Sexy::Delegate2<Projectile&, PlantLauncherProps const*>) */

void __thiscall
ComponentPlantLauncher::ComponentPlantLauncher
          (ComponentPlantLauncher *this,undefined8 param_1,Delegate0wRet *param_3,Delegate0 *param_4
          ,Delegate0 *param_5,Delegate2wRet *param_6,Delegate2 *param_7)

{
  Delegate0wRet<bool> aDStack_f8 [48];
  Delegate0 aDStack_c8 [48];
  Delegate0 aDStack_98 [48];
  Delegate2wRet<bool,Sexy::SexyVector3&,PlantLauncherProps_const*> aDStack_68 [48];
  Delegate2<Projectile&,PlantLauncherProps_const*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GameObject::GameObject((GameObject *)this);
  *(undefined8 *)(this + 0x18) = 0;
  this[0x10] = (ComponentPlantLauncher)0x0;
  *(undefined ***)this = &PTR_GetClass_06826750;
  this[0x11] = (ComponentPlantLauncher)0x0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x20));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x28),(DummyInit *)0x0);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x58),(DummyInit *)0x0);
  Sexy::Delegate0wRet<bool>::Delegate0wRet((DummyInit *)(this + 0x88));
  Sexy::Delegate2<Projectile&,PlantLauncherProps_const*>::Delegate2((DummyInit *)(this + 0xb8));
  Sexy::Delegate2wRet<bool,Sexy::SexyVector3&,PlantLauncherProps_const*>::Delegate2wRet
            ((DummyInit *)(this + 0xe8));
  std::string::string((string *)(this + 0x118),"");
  nop();
  *(undefined4 *)(this + 0x120) = 1;
  Sexy::Delegate0wRet<bool>::Delegate0wRet(aDStack_f8,param_3);
  Sexy::Delegate0::Delegate0(aDStack_c8,param_4);
  Sexy::Delegate0::Delegate0(aDStack_98,param_5);
  Sexy::Delegate2wRet<bool,Sexy::SexyVector3&,PlantLauncherProps_const*>::Delegate2wRet
            (aDStack_68,param_6);
  Sexy::Delegate2<Projectile&,PlantLauncherProps_const*>::Delegate2(aDStack_38,param_7);
  RegisterOwner(this,param_1,aDStack_f8,aDStack_c8,aDStack_98,aDStack_68,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentPlantLauncher::onTouchEvent(Sexy::Touch const&) */

void __thiscall ComponentPlantLauncher::onTouchEvent(ComponentPlantLauncher *this,Touch *param_1)

{
  RtMixedPtr<Sexy::Image> *this_00;
  char cVar1;
  char cVar2;
  Plant *pPVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  TRect<int> *this_01;
  BaseCursor *pBVar7;
  Board *this_02;
  float fVar8;
  float fVar9;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Point_const&> aDStack_38 [48];
  long local_8;
  
  this_00 = (RtMixedPtr<Sexy::Image> *)(this + 0x20);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
  if (cVar1 == '\0') {
    pPVar3 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    cVar2 = Plant::IsSuspended(pPVar3);
    cVar1 = '\0';
    if (cVar2 != '\0') goto LAB_0428d0a0;
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    cVar2 = FUN_0428b348(*(undefined1 *)(lVar4 + 0x278));
    if (cVar2 != '\0') goto LAB_0428d0a0;
    pPVar3 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    cVar2 = Plant::IsWatering(pPVar3);
    if (cVar2 != '\0') goto LAB_0428d0a0;
    uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    cVar2 = Plant::HasCondition(uVar5,0x11);
    if (cVar2 != '\0') goto LAB_0428d0a0;
    uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    cVar2 = Plant::HasCondition(uVar5,0x17);
    if (cVar2 != '\0') goto LAB_0428d0a0;
    this_02 = *(Board **)(gLawnApp + 0x9f0);
    cVar1 = Board::IsPlaying(this_02);
    if (((cVar1 != '\0') && (cVar1 = FUN_0428b34c(this_02[0x887]), cVar1 != '\0')) ||
       (this[0x11] != (ComponentPlantLauncher)0x0)) {
      fVar8 = (float)FUN_0428b6a0((float)*(int *)(param_1 + 0x10));
      fVar9 = (float)FUN_0428b6a0((float)*(int *)(param_1 + 0x14));
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      this_01 = (TRect<int> *)(**(code **)(*plVar6 + 0x178))();
      cVar1 = Sexy::TRect<int>::Contains(this_01,(int)fVar8,(int)fVar9);
      if ((((cVar1 != '\0') && (*(int *)(param_1 + 0x30) == 0)) &&
          ((*(BaseCursor **)(this + 0x18) == (BaseCursor *)0x0 ||
           (cVar1 = BaseCursor::IsCachedCursor(*(BaseCursor **)(this + 0x18)), cVar1 != '\0')))) &&
         (cVar1 = select(this), cVar1 != '\0')) {
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        uVar5 = *(undefined8 *)(lVar4 + 0xa8);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,Fire);
        Sexy::Delegate1<Sexy::Point_const&>::
        Delegate1<ComponentPlantLauncher,void(ComponentPlantLauncher::*)(Sexy::Point_const&)>
                  (aDStack_38,aCStack_50);
        pBVar7 = ::operator_new(0x88);
        PlantLauncherTargetCursor::PlantLauncherTargetCursor
                  ((PlantLauncherTargetCursor *)pBVar7,param_1,uVar5,this + 0x118,aDStack_38);
        cVar1 = Board::TryToAddCursor(*(Board **)(gLawnApp + 0x9f0),pBVar7,true);
        if (cVar1 == '\0') {
          deselect(this);
        }
        else {
          *(BaseCursor **)(this + 0x18) = pBVar7;
        }
        goto LAB_0428d0a0;
      }
    }
  }
  cVar1 = '\0';
LAB_0428d0a0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentPlantLauncher::RegisterForEvents() */

void __thiscall ComponentPlantLauncher::RegisterForEvents(ComponentPlantLauncher *this)

{
  undefined *puVar1;
  Board *pBVar2;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  RtWeakPtr<Sexy::SoundResource> aRStack_88 [8];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTouchEvent);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<ComponentPlantLauncher,bool(ComponentPlantLauncher::*)(Sexy::Touch_const&)>
            (aDStack_68,(CBMemberTranslatorX *)&local_80);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_88,(RtWeakPtrBase *)(this + 0x20));
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Board::RegisterTouchGameplayObject(pBVar2,aDStack_68,6,aRStack_88,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCursorDestroyed);
  local_b0 = local_80;
  uStack_a8 = uStack_78;
  local_a0 = local_70;
  MessageRouter::
  Subscribe<BaseCursor*,Sexy::CBMemberTranslatorX<ComponentPlantLauncher,void(ComponentPlantLauncher::*)(BaseCursor*)>>
            ((MessageRouter *)puVar1,Message::CursorDestroyed,&local_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentPlantLauncher::canFire() const */

void ComponentPlantLauncher::canFire(void)

{
  undefined1 uVar1;
  long in_x0;
  long lVar2;
  wchar16 *pwVar3;
  LineBreakCategory *pLVar4;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x20));
  if ((*(int *)(lVar2 + 200) == 1) ||
     (lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x20)),
     *(int *)(lVar2 + 200) == 10)) {
    uVar1 = 1;
  }
  else {
    pwVar3 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    pLVar4 = aLStack_18;
    std::string::string(asStack_10,"FreePlanting");
    uVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar3,(wchar16 *)asStack_10,pLVar4,in_x3,in_x4);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* ComponentPlantLauncher::queueShot(float, Sexy::Point const&, PlantWeapon) */

void __thiscall
ComponentPlantLauncher::queueShot
          (undefined8 param_1,ComponentPlantLauncher *this,undefined8 param_2,undefined4 param_4)

{
  PlantLauncherSubSystem *pPVar1;
  
  pPVar1 = Board::GetGameSubSystem<PlantLauncherSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  PlantLauncherSubSystem::QueueShot(param_1,pPVar1,this,param_2,param_4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentPlantLauncher::Fire(Sexy::Point const&) */

void __thiscall ComponentPlantLauncher::Fire(ComponentPlantLauncher *this,Point *param_1)

{
  RtMixedPtr<Sexy::Image> *this_00;
  int iVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  RtObject *this_01;
  PlantLauncherProps *pPVar6;
  Plant *this_02;
  long lVar7;
  float fVar8;
  undefined8 local_30;
  ulong local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  this_00 = (RtMixedPtr<Sexy::Image> *)(this + 0x20);
  local_8 = ___stack_chk_guard;
  lVar7 = ___stack_chk_guard;
  cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
  iVar5 = (int)lVar7;
  if (cVar2 != '\0') goto LAB_0428e818;
  if (this[0x11] == (ComponentPlantLauncher)0x0) {
    lVar7 = *(long *)(gLawnApp + 0x9f0);
    cVar2 = FUN_0428b34c(*(undefined1 *)(lVar7 + 0x887));
    if ((cVar2 == '\0') || (cVar2 = FUN_0428b350(*(undefined1 *)(lVar7 + 0x888)), cVar2 == '\0'))
    goto LAB_0428e818;
  }
  lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  cVar2 = FUN_0428bc6c(*(undefined4 *)(lVar7 + 0x28));
  if ((cVar2 != '\0') || (cVar2 = canFire(), cVar2 == '\0')) goto LAB_0428e818;
  BoardTransforms::BoardSpaceToGrid
            ((BoardTransforms *)(ulong)*(uint *)param_1,*(int *)(param_1 + 4),iVar5);
  if (this[0x10] == (ComponentPlantLauncher)0x0) {
    if (((int)local_30 != -1) && (local_30._4_4_ != -1)) {
LAB_0428e900:
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_00);
      if (bVar3) {
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        iVar5 = FUN_0428b344(*(undefined4 *)(lVar7 + 0x50));
        if (iVar5 != 5) goto LAB_0428e910;
        bVar3 = true;
        iVar5 = 3;
      }
      else {
LAB_0428e910:
        bVar3 = false;
        iVar5 = 1;
      }
      bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_00);
      if (bVar4) {
        this_02 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        cVar2 = Plant::GetAvatarEnable(this_02);
        if ((cVar2 != '\0') && (iVar5 = 4, !bVar3)) {
          iVar5 = 2;
        }
      }
      iVar1 = *(int *)(this + 0x120);
      if (*(int *)(this + 0x120) == 1) {
        iVar1 = iVar5;
      }
      fVar8 = (float)PVZ_T();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      Plant::GetProps();
      this_01 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)avStack_20);
      pPVar6 = Sexy::RtObject::Cast<PlantLauncherProps>(this_01);
      queueShot((ComponentPlantLauncher *)(fVar8 + *(float *)(pPVar6 + 0x2b8)),this,&local_30,iVar1)
      ;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)avStack_20);
      iVar5 = FUN_0428b27c(*(undefined8 *)(this + 0x60),*(undefined8 *)(this + 0x70));
      if (iVar5 != 0) {
        Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x58));
      }
      goto LAB_0428e818;
    }
  }
  else {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    EntityFinder::GetEntitiesAtGridSquare(avStack_20,2,local_30 & 0xffffffff,local_30._4_4_);
    cVar2 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
    if (cVar2 != '\0') {
      Sexy::Point::Point((Point *)&local_28,-1,-1);
      local_30 = local_28;
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
    if (((int)local_30 != -1) && (local_30._4_4_ != -1)) goto LAB_0428e900;
    if (this[0x10] != (ComponentPlantLauncher)0x0) goto LAB_0428e818;
  }
  deselect(this);
LAB_0428e818:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

