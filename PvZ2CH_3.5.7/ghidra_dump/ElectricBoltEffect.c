// Class: ElectricBoltEffect


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricBoltEffect::StaticClassInit() */

void ElectricBoltEffect::StaticClassInit(void)

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
    std::string::string(asStack_10,"ElectricBoltEffect");
    (*pcVar2)(plVar1,asStack_10,FUN_03c14938,0xd0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ElectricBoltEffect::StaticGetClass() */

long * ElectricBoltEffect::StaticGetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"ElectricBoltEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ElectricBoltEffect::GetClass() const */

long * ElectricBoltEffect::GetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"ElectricBoltEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ElectricBoltEffect::ElectricBoltEffect() */

void __thiscall ElectricBoltEffect::ElectricBoltEffect(ElectricBoltEffect *this)

{
  undefined4 uVar1;
  
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_06747160;
  *(undefined ***)(this + 0x10) = &PTR__ElectricBoltEffect_06747348;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb8));
  this[0xc0] = (ElectricBoltEffect)0x0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 200) = uVar1;
  return;
}


/* ElectricBoltEffect::StaticNew() */

ElectricBoltEffect * ElectricBoltEffect::StaticNew(void)

{
  ElectricBoltEffect *this;
  
  this = ::operator_new(0xd0);
  ElectricBoltEffect(this);
  return this;
}


/* ElectricBoltEffect::~ElectricBoltEffect() */

void __thiscall ElectricBoltEffect::~ElectricBoltEffect(ElectricBoltEffect *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0xa8);
  *(undefined ***)this = &PTR_GetClass_06747160;
  *(undefined ***)(this + 0x10) = &PTR__ElectricBoltEffect_06747348;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to ElectricBoltEffect::~ElectricBoltEffect() */

void __thiscall ElectricBoltEffect::~ElectricBoltEffect(ElectricBoltEffect *this)

{
  ~ElectricBoltEffect(this + -0x10);
  return;
}


/* ElectricBoltEffect::~ElectricBoltEffect() */

void __thiscall ElectricBoltEffect::~ElectricBoltEffect(ElectricBoltEffect *this)

{
  ~ElectricBoltEffect(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ElectricBoltEffect::~ElectricBoltEffect() */

void __thiscall ElectricBoltEffect::~ElectricBoltEffect(ElectricBoltEffect *this)

{
  ~ElectricBoltEffect(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricBoltEffect::onUpdate() */

void ElectricBoltEffect::onUpdate(void)

{
  RtMixedPtrBase *this;
  RtMixedPtrBase *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  char cVar1;
  bool bVar2;
  long in_x0;
  StandaloneEffect *pSVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var4;
  undefined8 *puVar5;
  Effect_PopAnim *this_02;
  float *pfVar6;
  long *plVar7;
  RtObject *pRVar8;
  long *extraout_x0;
  long *extraout_x0_00;
  float fVar9;
  float in_s1;
  float in_s2;
  float local_50 [2];
  undefined8 local_48;
  float local_40;
  undefined8 local_38;
  float local_30;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_18 [4];
  long local_8;
  
  this = (RtMixedPtrBase *)(in_x0 + 0xb0);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
  if ((cVar1 != '\0') &&
     (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(in_x0 + 0xb8)), cVar1 != '\0')) {
    fVar9 = (float)PVZ_T();
    in_s1 = *(float *)(in_x0 + 200);
    if (fVar9 <= in_s1) goto LAB_03c1290c;
  }
  *(undefined1 *)(in_x0 + 0xc0) = 0;
  pSVar3 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0xa8))
  ;
  StandaloneEffect::SetVisibility(pSVar3,*(bool *)(in_x0 + 0xc0));
LAB_03c1290c:
  if (*(char *)(in_x0 + 0xc0) != '\0') {
    this_00 = (RtMixedPtrBase *)(in_x0 + 0xa8);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar1 != '\0') {
      this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0xb8);
      p_Var4 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
      puVar5 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(p_Var4);
      local_48 = *puVar5;
      local_40 = *(float *)(puVar5 + 1);
      p_Var4 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      puVar5 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(p_Var4);
      local_38 = *puVar5;
      local_30 = *(float *)(puVar5 + 1);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_01);
      if (bVar2) {
        pRVar8 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
        bVar2 = Sexy::RtObject::IsA<BoardEntity>(pRVar8);
        if (bVar2) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
          nop();
          (**(code **)(*extraout_x0_00 + 0x178))();
          Sexy::TRect<int>::GetCenter();
          fVar9 = (float)(int)local_50[0];
          (**(code **)(*extraout_x0_00 + 0x178))(extraout_x0_00);
          Sexy::TRect<int>::GetCenter();
          in_s1 = (float)(int)local_24;
          in_s2 = local_40;
          EATextSquish::Vec3::Vec3((Vec3 *)local_18,fVar9,in_s1,local_40);
          Sexy::SexyVector3::operator=((SexyVector3 *)&local_48,(SexyVector3 *)local_18);
        }
      }
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this);
      if (bVar2) {
        pRVar8 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
        bVar2 = Sexy::RtObject::IsA<BoardEntity>(pRVar8);
        if (bVar2) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
          nop();
          (**(code **)(*extraout_x0 + 0x178))();
          Sexy::TRect<int>::GetCenter();
          (**(code **)(*extraout_x0 + 0x178))(extraout_x0);
          Sexy::TRect<int>::GetCenter();
          in_s1 = (float)(int)local_24 + local_40;
          in_s2 = local_30;
          EATextSquish::Vec3::Vec3((Vec3 *)local_18,(float)(int)local_50[0],in_s1,local_30);
          Sexy::SexyVector3::operator=((SexyVector3 *)&local_38,(SexyVector3 *)local_18);
        }
      }
      local_28 = (float)Sexy::SexyVector3::operator-
                                  ((SexyVector3 *)&local_38,(SexyVector3 *)&local_48);
      local_24 = in_s1;
      local_20 = in_s2;
      this_02 = (Effect_PopAnim *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      Sexy::FastCurve::SetOutRange((FastCurve *)local_18,local_28,local_24);
      Effect_PopAnim::SetOrientation(this_02,(SexyVector2 *)local_18);
      local_50[0] = (float)DVec3::getLength((DVec3 *)&local_28);
      local_50[0] = local_50[0] * 0.016666668;
      local_18[0] = 0x3e800000;
      pfVar6 = eastl::max_alt<float>(local_50,(float *)local_18);
      fVar9 = *pfVar6;
      plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      (**(code **)(*plVar7 + 0xb8))(fVar9,0x3f800000);
      pSVar3 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      EATextSquish::Vec3::Vec3((Vec3 *)local_18,(float)local_48,local_48._4_4_,local_40);
      StandaloneEffect::SetBoardSpaceOrigin(pSVar3,(SexyVector3 *)local_18,-1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricBoltEffect::SetupEffect(std::string, std::string, float) */

void __thiscall
ElectricBoltEffect::SetupEffect
          (undefined4 param_1,ElectricBoltEffect *this,string *param_3,undefined8 param_4)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  Effect_PopAnim *pEVar1;
  PopAnim *pPVar2;
  StandaloneEffect *pSVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  *(undefined4 *)(this + 0xc4) = param_1;
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xa8);
  GetPAMByName(param_3);
  Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  pEVar1 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  pPVar2 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar1,pPVar2,(RtClass *)0x0);
  pEVar1 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Effect_PopAnim::SetCentered(pEVar1,true);
  pEVar1 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar1,param_4,0);
  pSVar3 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  StandaloneEffect::SetVisibility(pSVar3,false);
  pSVar3 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  StandaloneEffect::SetKeepAlive(pSVar3,true);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricBoltEffect::SetActive(Sexy::RtWeakPtr<RealObject>, Sexy::RtWeakPtr<RealObject>,
   std::string const&) */

void __thiscall
ElectricBoltEffect::SetActive
          (ElectricBoltEffect *this,RtWeakPtr *param_2,RtWeakPtr *param_3,string *param_4)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  RtWeakPtr<PowerPropertySheet> *this_01;
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  StandaloneEffect *this_02;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var5;
  undefined8 *puVar6;
  Effect_PopAnim *this_03;
  PopAnim *pPVar7;
  RtObject *pRVar8;
  long *extraout_x0;
  long *extraout_x0_00;
  float fVar9;
  int local_48;
  int local_3c;
  undefined8 local_38;
  float local_30;
  undefined8 local_28;
  float local_20;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0xb0);
  local_8 = ___stack_chk_guard;
  this_01 = (RtWeakPtr<PowerPropertySheet> *)(this + 0xb8);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,param_2);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_01,param_3);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
  if ((cVar1 != '\0') &&
     (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_01), cVar1 != '\0')) {
    this[0xc0] = (ElectricBoltEffect)0x1;
    fVar9 = (float)PVZ_T();
    *(float *)(this + 200) = fVar9 + *(float *)(this + 0xc4);
    this_02 = (StandaloneEffect *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
    StandaloneEffect::SetVisibility(this_02,(bool)this[0xc0]);
    p_Var5 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    puVar6 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(p_Var5);
    local_38 = *puVar6;
    local_30 = *(float *)(puVar6 + 1);
    p_Var5 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    puVar6 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(p_Var5);
    local_28 = *puVar6;
    local_20 = *(float *)(puVar6 + 1);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_01);
    if (bVar2) {
      pRVar8 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      bVar2 = Sexy::RtObject::IsA<BoardEntity>(pRVar8);
      if (bVar2) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
        nop();
        (**(code **)(*extraout_x0_00 + 0x178))();
        Sexy::TRect<int>::GetCenter();
        (**(code **)(*extraout_x0_00 + 0x178))(extraout_x0_00);
        Sexy::TRect<int>::GetCenter();
        EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)local_48,(float)local_3c,local_30);
        Sexy::SexyVector3::operator=((SexyVector3 *)&local_38,(SexyVector3 *)aRStack_18);
      }
    }
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_00);
    if (bVar2) {
      pRVar8 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      bVar2 = Sexy::RtObject::IsA<BoardEntity>(pRVar8);
      if (bVar2) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        nop();
        (**(code **)(*extraout_x0 + 0x178))();
        Sexy::TRect<int>::GetCenter();
        (**(code **)(*extraout_x0 + 0x178))(extraout_x0);
        Sexy::TRect<int>::GetCenter();
        EATextSquish::Vec3::Vec3
                  ((Vec3 *)aRStack_18,(float)local_48,(float)local_3c + local_30,local_20);
        Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)aRStack_18);
      }
    }
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
    this_03 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    GetPAMByName(param_4);
    pPVar7 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    Effect_PopAnim::CreatePopAnimRig(this_03,pPVar7,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    std::string::string((string *)aRStack_18,"idle");
    Effect_PopAnim::PlaySingleAnimation(this_03,aRStack_18,0);
    std::string::~string((string *)aRStack_18);
    nop();
    EATextSquish::Vec3::Vec3
              ((Vec3 *)aRStack_18,(float)local_28 - (float)iVar3 * 1.5,
               local_28._4_4_ - (float)iVar4 * 1.75,local_20);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_03,(SexyVector3 *)aRStack_18,-1);
    iVar3 = BoardEntity::CalcRenderOrderFromPosition((SexyVector3 *)&local_28);
    FUN_03c0fd60(this_03 + 0x1c,iVar3 + 1);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

