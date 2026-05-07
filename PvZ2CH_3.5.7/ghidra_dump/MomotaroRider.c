// Class: MomotaroRider


/* MomotaroRider::~MomotaroRider() */

void __thiscall MomotaroRider::~MomotaroRider(MomotaroRider *this)

{
  *(undefined ***)this = &PTR_GetClass_0692fe10;
  *(undefined ***)(this + 0x10) = &PTR__MomotaroRider_06930090;
  RiverCrossingDodoRider::~RiverCrossingDodoRider((RiverCrossingDodoRider *)this);
  return;
}


/* non-virtual thunk to MomotaroRider::~MomotaroRider() */

void __thiscall MomotaroRider::~MomotaroRider(MomotaroRider *this)

{
  ~MomotaroRider(this + -0x10);
  return;
}


/* MomotaroRider::~MomotaroRider() */

void __thiscall MomotaroRider::~MomotaroRider(MomotaroRider *this)

{
  ~MomotaroRider(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to MomotaroRider::~MomotaroRider() */

void __thiscall MomotaroRider::~MomotaroRider(MomotaroRider *this)

{
  ~MomotaroRider(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MomotaroRider::StaticClassInit() */

void MomotaroRider::StaticClassInit(void)

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
    std::string::string(asStack_10,"MomotaroRider");
    (*pcVar2)(plVar1,asStack_10,FUN_04a293d4,0x180,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MomotaroRider::StaticGetClass() */

long * MomotaroRider::StaticGetClass(void)

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
  uVar2 = RiverCrossingDodoRider::StaticGetClass();
  (*pcVar3)(plVar1,"MomotaroRider",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MomotaroRider::GetClass() const */

long * MomotaroRider::GetClass(void)

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
  uVar2 = RiverCrossingDodoRider::StaticGetClass();
  (*pcVar3)(plVar1,"MomotaroRider",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MomotaroRider::MomotaroRider() */

void __thiscall MomotaroRider::MomotaroRider(MomotaroRider *this)

{
  RiverCrossingDodoRider::RiverCrossingDodoRider((RiverCrossingDodoRider *)this);
  *(undefined ***)this = &PTR_GetClass_0692fe10;
  *(undefined ***)(this + 0x10) = &PTR__MomotaroRider_06930090;
  return;
}


/* MomotaroRider::StaticNew() */

MomotaroRider * MomotaroRider::StaticNew(void)

{
  MomotaroRider *this;
  
  this = ::operator_new(0x180);
  MomotaroRider(this);
  return this;
}


/* MomotaroRider::IsDying() */

void __thiscall MomotaroRider::IsDying(MomotaroRider *this)

{
  RiverCrossingDodoRider::isInState((RiverCrossingDodoRider *)this,4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MomotaroRider::calcCollisionRect() */

void __thiscall MomotaroRider::calcCollisionRect(MomotaroRider *this)

{
  int *piVar1;
  bool bVar2;
  undefined4 in_w8;
  undefined4 in_register_00004044;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  piVar1 = (int *)CONCAT44(in_register_00004044,in_w8);
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)CONCAT44(in_register_00004044,in_w8));
  Sexy::Insets::Insets((Insets *)&local_18,10,10,0x20,0x28);
  fVar5 = *(float *)(this + 0x1c);
  uVar3 = *(undefined4 *)(this + 0x18);
  uVar6 = *(undefined4 *)(this + 0x20);
  *(undefined8 *)piVar1 = local_18;
  *(undefined8 *)(piVar1 + 2) = uStack_10;
  fVar4 = (float)FUN_04a29244(uVar3,fVar5,uVar6);
  bVar2 = local_8 == ___stack_chk_guard;
  piVar1[1] = (int)(((float)piVar1[1] + fVar5) - (float)piVar1[3]);
  *piVar1 = (int)(((float)*piVar1 + fVar4) - (float)(piVar1[2] / 2));
  if (bVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MomotaroRider::initializePAM(Sexy::PopAnim*) */

void __thiscall MomotaroRider::initializePAM(MomotaroRider *this,PopAnim *param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  long *plVar2;
  RtClass *pRVar3;
  PopAnimRig *pPVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x178);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  }
  pRVar3 = (RtClass *)PopAnimRig::StaticGetClass();
  PopAnimRig::CreateRig(param_1,pRVar3);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  pPVar4 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string((string *)aRStack_10,"butter");
  PopAnimRig::SetLayerVisibility(pPVar4,(string *)aRStack_10,false);
  std::string::~string((string *)aRStack_10);
  nop();
  pPVar4 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string((string *)aRStack_10,"_ground");
  PopAnimRig::SetLayerVisibility(pPVar4,(string *)aRStack_10,false);
  std::string::~string((string *)aRStack_10);
  nop();
  pPVar4 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string((string *)aRStack_10,"ground_swatch");
  PopAnimRig::SetLayerVisibility(pPVar4,(string *)aRStack_10,false);
  std::string::~string((string *)aRStack_10);
  nop();
  pPVar4 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string((string *)aRStack_10,"ground_swatch_plane");
  PopAnimRig::SetLayerVisibility(pPVar4,(string *)aRStack_10,false);
  std::string::~string((string *)aRStack_10);
  nop();
  pPVar4 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string((string *)aRStack_10,"ink");
  PopAnimRig::SetLayerVisibility(pPVar4,(string *)aRStack_10,false);
  std::string::~string((string *)aRStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MomotaroRider::GetIdleWeights(ProbabilitySet<std::string >&) */

void __thiscall MomotaroRider::GetIdleWeights(MomotaroRider *this,ProbabilitySet *param_1)

{
  long lVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = ProbabilitySet<std::string>::GetSize((ProbabilitySet<std::string> *)param_1);
  if (lVar1 == 0) {
    std::string::string(asStack_10,"idle");
    ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)param_1,asStack_10,100);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MomotaroRider::onInitialized() */

void __thiscall MomotaroRider::onInitialized(MomotaroRider *this)

{
  FUN_04a29238(this + 0x24);
  RiverCrossingDodoRider::onInitialized((RiverCrossingDodoRider *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MomotaroRider::onAnimStopped(std::string const&) */

void __thiscall MomotaroRider::onAnimStopped(MomotaroRider *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  PopAnimRig *pPVar3;
  undefined4 uVar4;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  bVar1 = std::operator==("fly_end",param_1);
  if ((bVar1) && (*(int *)(this + 0x170) == 3)) {
    DScrollView::setDirection((DScrollView *)this,0);
  }
  cVar2 = RiverCrossingDodoRider::isInState((RiverCrossingDodoRider *)this,0);
  if ((cVar2 == '\0') || (*(int *)(this + 0x170) != 0)) {
    cVar2 = RiverCrossingDodoRider::isInState((RiverCrossingDodoRider *)this,4);
    if (cVar2 == '\0') {
      cVar2 = RiverCrossingDodoRider::isInState((RiverCrossingDodoRider *)this,2);
      if (cVar2 != '\0') {
        if (*(int *)(this + 0x170) == 1) {
          DScrollView::setDirection((DScrollView *)this,2);
          uVar4 = PVZ_T();
          *(undefined4 *)(this + 0xbc) = uVar4;
          pPVar3 = (PopAnimRig *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178));
          std::string::string(asStack_40,"fly_loop");
          Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
          PopAnimRig::PlayAndContinue(pPVar3,asStack_40,0,aDStack_38);
          std::string::~string(asStack_40);
          nop();
        }
        else if (*(int *)(this + 0x170) == 3) {
          DScrollView::setDirection((DScrollView *)this,0);
        }
      }
    }
    else {
      MessageRouter::Post((_func_void *)gMessageRouter);
    }
  }
  else {
    RiverCrossingDodoRider::PlayIdleLooped((RiverCrossingDodoRider *)this);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

