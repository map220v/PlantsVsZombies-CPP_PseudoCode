// Class: Effect_ZombieGate


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_ZombieGate::StaticClassInit() */

void Effect_ZombieGate::StaticClassInit(void)

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
    std::string::string(asStack_10,"Effect_ZombieGate");
    (*pcVar2)(plVar1,asStack_10,FUN_03cd4134,0xb0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_ZombieGate::StaticGetClass() */

long * Effect_ZombieGate::StaticGetClass(void)

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
  uVar2 = StandaloneEffect::StaticGetClass();
  (*pcVar3)(plVar1,"Effect_ZombieGate",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_ZombieGate::GetClass() const */

long * Effect_ZombieGate::GetClass(void)

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
  uVar2 = StandaloneEffect::StaticGetClass();
  (*pcVar3)(plVar1,"Effect_ZombieGate",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_ZombieGate::SetRow(int) */

void __thiscall Effect_ZombieGate::SetRow(Effect_ZombieGate *this,int param_1)

{
  int iVar1;
  ResistenceValueInfo aRStack_10 [8];
  long local_8;
  
  *(int *)(this + 0xa8) = param_1;
  local_8 = ___stack_chk_guard;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo(aRStack_10);
  iVar1 = Board::MakeRenderOrder(400000,*(undefined4 *)(this + 0xa8),0);
  StandaloneEffect::SetScreenSpaceOrigin((StandaloneEffect *)this,(SexyVector2 *)aRStack_10,iVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_ZombieGate::Effect_ZombieGate() */

void __thiscall Effect_ZombieGate::Effect_ZombieGate(Effect_ZombieGate *this)

{
  StandaloneEffect::StandaloneEffect((StandaloneEffect *)this);
  *(undefined ***)this = &PTR_GetClass_0675f8d0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa0));
  *(undefined4 *)(this + 0xa8) = 0xffffffff;
  this[0xac] = (Effect_ZombieGate)0x1;
  return;
}


/* Effect_ZombieGate::StaticNew() */

Effect_ZombieGate * Effect_ZombieGate::StaticNew(void)

{
  Effect_ZombieGate *this;
  
  this = ::operator_new(0xb0);
  Effect_ZombieGate(this);
  return this;
}


/* Effect_ZombieGate::~Effect_ZombieGate() */

void __thiscall Effect_ZombieGate::~Effect_ZombieGate(Effect_ZombieGate *this)

{
  char cVar1;
  long *plVar2;
  RtMixedPtrBase *this_00;
  
  this_00 = (RtMixedPtrBase *)(this + 0xa0);
  *(undefined ***)this = &PTR_GetClass_0675f8d0;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  StandaloneEffect::~StandaloneEffect((StandaloneEffect *)this);
  return;
}


/* Effect_ZombieGate::~Effect_ZombieGate() */

void __thiscall Effect_ZombieGate::~Effect_ZombieGate(Effect_ZombieGate *this)

{
  ~Effect_ZombieGate(this);
  AK::FreeHook(this);
  return;
}


/* Effect_ZombieGate::onUpdate() */

void __thiscall Effect_ZombieGate::onUpdate(Effect_ZombieGate *this)

{
  PopAnimRig *this_00;
  float fVar1;
  float fVar2;
  
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa0))
  ;
  fVar1 = (float)PVZ_T();
  fVar2 = (float)PVZ_Dt();
  PopAnimRig::UpdateAnim(this_00,fVar1,fVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_ZombieGate::onDraw(Sexy::Graphics*) */

void __thiscall Effect_ZombieGate::onDraw(Effect_ZombieGate *this,Graphics *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  Image *pIVar4;
  PopAnimRig *this_00;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  int local_40;
  int local_3c;
  int local_38;
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::GetGridBoundingRect();
  iVar3 = local_40 + local_38;
  uVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
  if (*(int *)(this + 0xa8) == 5) {
    if (((DAT_06ad4260 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ad4260), iVar2 != 0)) {
      Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06ad4250,-4.0,-126.0);
      __cxa_guard_release(&DAT_06ad4260);
    }
    pIVar4 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad41d8);
    fVar5 = (float)FUN_03cd38d0((float)iVar3 + DAT_06ad4250);
    fVar6 = (float)FUN_03cd38d0((float)local_3c + DAT_06ad4254);
    iVar3 = FUN_03cd38bc(uVar1);
    Sexy::Graphics::DrawImage
              (param_1,pIVar4,(int)fVar5,
               (int)((float)(iVar3 + *(int *)(this + 0xa8) * iVar3) + fVar6));
  }
  else {
    if (*(int *)(this + 0xa8) == 0) {
      if (((DAT_06ad4228 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ad4228), iVar2 != 0)) {
        Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06ad42c0,-20.0,-46.0);
        __cxa_guard_release(&DAT_06ad4228);
      }
      pIVar4 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                  ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad4290);
      fVar5 = (float)FUN_03cd38d0((float)iVar3 + DAT_06ad42c0);
      fVar6 = (float)FUN_03cd38d0((float)local_3c + DAT_06ad42c4);
      Sexy::Graphics::DrawImage(param_1,pIVar4,(int)fVar5,(int)fVar6);
      Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    }
    else {
      if (((DAT_06ad4230 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ad4230), iVar2 != 0)) {
        Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06ad4220,-20.0,-55.0);
        __cxa_guard_release(&DAT_06ad4230);
      }
      pIVar4 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                  ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad4268);
      fVar5 = (float)FUN_03cd38d0((float)iVar3 + DAT_06ad4220);
      fVar6 = (float)FUN_03cd38d0((float)local_3c + DAT_06ad4224);
      iVar2 = FUN_03cd38bc(uVar1);
      Sexy::Graphics::DrawImage
                (param_1,pIVar4,(int)fVar5,(int)((float)(iVar2 * *(int *)(this + 0xa8)) + fVar6));
      Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    }
    if (((DAT_06ad42c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ad42c8), iVar2 != 0)) {
      Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06ad4170,-146.0,-128.0);
      __cxa_guard_release(&DAT_06ad42c8);
    }
    uVar7 = FUN_03cd38d0((float)iVar3 + DAT_06ad4170);
    fVar5 = (float)FUN_03cd38d0((float)local_3c + DAT_06ad4174);
    iVar3 = FUN_03cd38bc(uVar1);
    FUN_03cd37a4(uVar7,(float)(iVar3 * *(int *)(this + 0xa8)) + fVar5,auStack_28,auStack_1c);
    this_00 = (PopAnimRig *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa0));
    PopAnimRig::Draw(this_00,param_1,aSStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_ZombieGate::SetGateVisible(bool) */

void __thiscall Effect_ZombieGate::SetGateVisible(Effect_ZombieGate *this,bool param_1)

{
  PopAnimRig *pPVar1;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xac] == (Effect_ZombieGate)0x0) {
    if (param_1) {
      pPVar1 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa0));
      std::string::string(asStack_58,"animation5");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_60,"OnAnimDone");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
                 asStack_60);
      PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_60);
      nop();
      Sexy::RtId::~RtId(aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_58);
      nop();
    }
  }
  else if (!param_1) {
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa0));
    std::string::string(asStack_58,"animation4");
    Sexy::Delegate1<std::string_const&>::Delegate1((DummyInit *)aRStack_50);
    PopAnimRig::PlayAndStop(pPVar1,asStack_58,param_1,(DummyInit *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
  }
  this[0xac] = (Effect_ZombieGate)param_1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_ZombieGate::playNormalAnim() */

void __thiscall Effect_ZombieGate::playNormalAnim(Effect_ZombieGate *this)

{
  long lVar1;
  PopAnimRig *pPVar2;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = ProbabilitySet<std::string>::GetSize((ProbabilitySet<std::string> *)&DAT_06ad4178);
  if (lVar1 == 0) {
    std::string::string(asStack_58,"animation");
    ProbabilitySet<std::string>::AddItem
              ((ProbabilitySet<std::string> *)&DAT_06ad4178,asStack_58,0x5c);
    std::string::~string(asStack_58);
    nop();
    std::string::string(asStack_58,"animation2");
    ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)&DAT_06ad4178,asStack_58,4);
    std::string::~string(asStack_58);
    nop();
    std::string::string(asStack_58,"animation3");
    ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)&DAT_06ad4178,asStack_58,4);
    std::string::~string(asStack_58);
    nop();
  }
  ProbabilitySet<std::string>::PickItem();
  pPVar2 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa0));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"OnAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PopAnimRig::PlayAndStop(pPVar2,asStack_70,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  pPVar2 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa0));
  PopAnimRig::RandomizeCurrentAnimFrame(pPVar2);
  std::string::~string(asStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_ZombieGate::onInitialized() */

void __thiscall Effect_ZombieGate::onInitialized(Effect_ZombieGate *this)

{
  ResourceInfo *pRVar1;
  RtClass *pRVar2;
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  *(undefined4 *)(this + 0xa8) = 0xffffffff;
  this[0xac] = (Effect_ZombieGate)0x1;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"POPANIM_EFFECTS_ZOMBIE_GATE_ELECTRICITY");
  GetPAMByName(asStack_18);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  pRVar2 = (RtClass *)PopAnimRig::StaticGetClass();
  PopAnimRig::CreateRig((PopAnim *)pRVar1,pRVar2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  std::string::~string(asStack_18);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xa0),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  playNormalAnim(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_ZombieGate::OnAnimDone(std::string const&) */

void Effect_ZombieGate::OnAnimDone(string *param_1)

{
  long lVar1;
  PopAnimRig *pPVar2;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  lVar1 = ProbabilitySet<std::string>::GetSize((ProbabilitySet<std::string> *)&DAT_06ad4178);
  if (lVar1 == 0) {
    std::string::string(asStack_58,"animation");
    ProbabilitySet<std::string>::AddItem
              ((ProbabilitySet<std::string> *)&DAT_06ad4178,asStack_58,0x5c);
    std::string::~string(asStack_58);
    nop();
    std::string::string(asStack_58,"animation2");
    ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)&DAT_06ad4178,asStack_58,4);
    std::string::~string(asStack_58);
    nop();
    std::string::string(asStack_58,"animation3");
    ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)&DAT_06ad4178,asStack_58,4);
    std::string::~string(asStack_58);
    nop();
  }
  ProbabilitySet<std::string>::PickItem();
  pPVar2 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xa0));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"OnAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PopAnimRig::PlayAndStop(pPVar2,asStack_70,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  pPVar2 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xa0));
  PopAnimRig::RandomizeCurrentAnimFrame(pPVar2);
  std::string::~string(asStack_70);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

