// Class: GridItemIcyFence


/* GridItemIcyFence::CalcRenderOrder() const */

void __thiscall GridItemIcyFence::CalcRenderOrder(GridItemIcyFence *this)

{
  int iVar1;
  
  iVar1 = FUN_03d68dcc(*(undefined4 *)(this + 0x134));
  Board::MakeGroundRenderOrder(iVar1,1);
  return;
}


/* non-virtual thunk to GridItemIcyFence::CalcRenderOrder() const */

void __thiscall GridItemIcyFence::CalcRenderOrder(GridItemIcyFence *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemIcyFence::StaticClassInit() */

void GridItemIcyFence::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemIcyFence");
    (*pcVar2)(plVar1,asStack_10,FUN_03d69cf4,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemIcyFence::StaticGetClass() */

long * GridItemIcyFence::StaticGetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemIcyFence",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemIcyFence::GetClass() const */

long * GridItemIcyFence::GetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemIcyFence",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemIcyFence::Increase() */

void __thiscall GridItemIcyFence::Increase(GridItemIcyFence *this)

{
  *(int *)(this + 0x1ac) = *(int *)(this + 0x1ac) + 1;
  return;
}


/* GridItemIcyFence::~GridItemIcyFence() */

void __thiscall GridItemIcyFence::~GridItemIcyFence(GridItemIcyFence *this)

{
  *(undefined ***)this = &PTR_GetClass_0676df10;
  *(undefined ***)(this + 0x10) = &PTR__GridItemIcyFence_0676e1c8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b8));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemIcyFence::~GridItemIcyFence() */

void __thiscall GridItemIcyFence::~GridItemIcyFence(GridItemIcyFence *this)

{
  ~GridItemIcyFence(this + -0x10);
  return;
}


/* GridItemIcyFence::~GridItemIcyFence() */

void __thiscall GridItemIcyFence::~GridItemIcyFence(GridItemIcyFence *this)

{
  ~GridItemIcyFence(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemIcyFence::~GridItemIcyFence() */

void __thiscall GridItemIcyFence::~GridItemIcyFence(GridItemIcyFence *this)

{
  ~GridItemIcyFence(this + -0x10);
  return;
}


/* GridItemIcyFence::GridItemIcyFence() */

void __thiscall GridItemIcyFence::GridItemIcyFence(GridItemIcyFence *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemIcyFence_0676e1c8;
  *(undefined ***)this = &PTR_GetClass_0676df10;
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x1a8) = 0x42480000;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1b8));
  return;
}


/* GridItemIcyFence::StaticNew() */

GridItemIcyFence * GridItemIcyFence::StaticNew(void)

{
  GridItemIcyFence *this;
  
  this = ::operator_new(0x1c0);
  GridItemIcyFence(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemIcyFence::playWindAnim(int) */

void __thiscall GridItemIcyFence::playWindAnim(GridItemIcyFence *this,int param_1)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  Effect_PopAnim *pEVar2;
  ResourceInfo *pRVar3;
  StandaloneEffect *this_01;
  long lVar4;
  long *plVar5;
  char *__s;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_38 [8];
  int local_30;
  int local_2c;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  Point aPStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_38);
  BoardEntity::CalcGridPosition();
  BoardTransforms::GridToBoardSpace(aPStack_18);
  EATextSquish::Vec3::Vec3((Vec3 *)aPStack_18,(float)local_30,(float)(local_2c + -0x1e),0.0);
  Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)a_Stack_38,(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  pEVar2 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38);
  std::string::string(asStack_28,"POPANIM_EFFECTS_ICYCURRANT_LV5_EFFECT");
  GetPAMByName(asStack_28);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
  Effect_PopAnim::CreatePopAnimRig(pEVar2,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::string::~string(asStack_28);
  nop();
  this_01 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38);
  StandaloneEffect::SetBoardSpaceOrigin(this_01,(SexyVector3 *)aPStack_18,-1);
  pEVar2 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38);
  Effect_PopAnim::SetCentered(pEVar2,true);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38);
  FUN_03d68e84(lVar4 + 0x1c);
  if (param_1 == 1) {
    pEVar2 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38);
    __s = "effect_on";
  }
  else {
    if (param_1 == 2) {
      this_00 = (RtMixedPtrBase *)(this + 0x1b8);
      pEVar2 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38)
      ;
      std::string::string((string *)aRStack_20,"effect_loop");
      PVZ_EOT();
      Effect_PopAnim::PlayLoopingAnimation(pEVar2,aRStack_20,0);
      std::string::~string((string *)aRStack_20);
      nop();
      cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
      if (cVar1 != '\0') {
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        (**(code **)(*plVar5 + 0x48))();
      }
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)a_Stack_38);
      goto LAB_03d69680;
    }
    if (param_1 != 3) goto LAB_03d69680;
    pEVar2 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38);
    __s = "effect_off";
  }
  std::string::string((string *)aRStack_20,__s);
  Effect_PopAnim::PlaySingleAnimation(pEVar2,aRStack_20,0);
  std::string::~string((string *)aRStack_20);
  nop();
LAB_03d69680:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemIcyFence::Release() */

void __thiscall GridItemIcyFence::Release(GridItemIcyFence *this)

{
  PopAnimRig *pPVar1;
  int iVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  iVar2 = *(int *)(this + 0x1ac);
  local_8 = ___stack_chk_guard;
  if (0 < iVar2) {
    iVar2 = iVar2 + -1;
    *(int *)(this + 0x1ac) = iVar2;
  }
  if (iVar2 == 0) {
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
    std::string::string(asStack_58,"animation3");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onAnimStopped);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<GridItemIcyFence,void(GridItemIcyFence::*)(std::string_const&)>(aDStack_38,aCStack_50)
    ;
    PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aDStack_38);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
    playWindAnim(this,3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemIcyFence::onAnimStopped(std::string const&) */

void __thiscall GridItemIcyFence::onAnimStopped(GridItemIcyFence *this,string *param_1)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"animation");
  if (bVar1) {
    GridItemAnimation::GetAnimRig();
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
    std::string::string(asStack_50,"animation2");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_50,0,(DummyInit *)aDStack_38);
    std::string::~string(asStack_50);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
    playWindAnim(this,2);
  }
  else {
    bVar1 = std::operator==(param_1,"animation3");
    if (bVar1) {
      if (*(int *)(this + 0x1ac) < 1) {
        (**(code **)(*(long *)this + 0x230))(this);
      }
      else {
        GridItemAnimation::GetAnimRig();
        pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
        std::string::string(asStack_58,"animation");
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,onAnimStopped);
        Sexy::Delegate1<std::string_const&>::
        Delegate1<GridItemIcyFence,void(GridItemIcyFence::*)(std::string_const&)>
                  (aDStack_38,asStack_50);
        PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aDStack_38);
        std::string::~string(asStack_58);
        nop();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
        playWindAnim(this,1);
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
/* GridItemIcyFence::onGridItemInitialize() */

void __thiscall GridItemIcyFence::onGridItemInitialize(GridItemIcyFence *this)

{
  PopAnimRig *pPVar1;
  undefined4 uVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onGridItemInitialize((GridItemAnimation *)this);
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x1b0) = uVar2;
  *(undefined4 *)(this + 0x1a8) = 0x42480000;
  Increase(this);
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
  std::string::string(asStack_58,"animation");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAnimStopped);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<GridItemIcyFence,void(GridItemIcyFence::*)(std::string_const&)>(aDStack_38,aCStack_50);
  PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
  playWindAnim(this,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemIcyFence::onUpdate() */

void __thiscall GridItemIcyFence::onUpdate(GridItemIcyFence *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  GridItemIcyFenceProps *pGVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  Insets aIStack_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  GridItemIcyFence *local_68;
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  fVar12 = *(float *)(this + 0x1b0);
  fVar11 = (float)PVZ_T();
  if (fVar12 <= fVar11) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
    iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
    iVar3 = SharkMinion::getRow((SharkMinion *)this);
    Sexy::Insets::Insets(aIStack_90,iVar2,iVar3,1,1);
    uVar4 = operator|(2,4);
    EntityFinder::GetEntitiesInGridSquares
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar4,
               aIStack_90);
    lVar5 = FUN_03d68dfc(local_80,local_78);
    if (lVar5 == 0) {
      uVar4 = PVZ_T();
      *(undefined4 *)(this + 0x1b0) = uVar4;
    }
    else {
      uVar9 = 0;
      DamageInfo::DamageInfo((DamageInfo *)&local_68);
      local_60 = *(undefined4 *)(this + 0x1a8);
      local_68 = this;
      pGVar6 = GridItem::GetProps<GridItemIcyFenceProps>();
                    /* WARNING: Load size is inaccurate */
      DamageInfo::AddCondition(*(DamageInfo **)(pGVar6 + 0xd4),(DamageInfo *)&local_68,0);
      pGVar6 = GridItem::GetProps<GridItemIcyFenceProps>();
                    /* WARNING: Load size is inaccurate */
      DamageInfo::AddCondition(*(DamageInfo **)(pGVar6 + 0xd4),(DamageInfo *)&local_68,4);
      FUN_03d68d74(this + 0x24,1);
      uVar10 = local_80;
      uVar7 = FUN_03d68dfc(local_80,local_78);
      if (uVar7 != 0) {
        do {
          puVar8 = (undefined8 *)FUN_03d68e08(uVar10,uVar9);
          if (this != (GridItemIcyFence *)*puVar8) {
            cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)*puVar8);
            if (cVar1 != '\0') {
              puVar8 = (undefined8 *)FUN_03d68e08(local_80,uVar9);
              (**(code **)(*(long *)*puVar8 + 0x110))((long *)*puVar8,(DamageInfo *)&local_68);
            }
            uVar10 = local_80;
            uVar7 = FUN_03d68dfc(local_80,local_78);
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar7);
      }
      FUN_03d68d74(this + 0x24,0);
      pGVar6 = GridItem::GetProps<GridItemIcyFenceProps>();
      *(float *)(this + 0x1b0) = *(float *)(this + 0x1b0) + *(float *)(pGVar6 + 0xd0);
      DamageInfo::~DamageInfo((DamageInfo *)&local_68);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

