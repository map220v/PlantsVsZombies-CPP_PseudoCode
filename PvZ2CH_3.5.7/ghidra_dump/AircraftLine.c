// Class: AircraftLine


/* AircraftLine::onAircraftDisconnect(int) */

void __thiscall AircraftLine::onAircraftDisconnect(AircraftLine *this,int param_1)

{
  if (*(int *)(this + 0xb8) != param_1) {
    return;
  }
  (**(code **)(*(long *)this + 0x48))();
  return;
}


/* AircraftLine::CalcRenderOrder() const */

undefined8 AircraftLine::CalcRenderOrder(void)

{
  return 500000;
}


/* non-virtual thunk to AircraftLine::CalcRenderOrder() const */

void __thiscall AircraftLine::CalcRenderOrder(AircraftLine *this)

{
  CalcRenderOrder();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AircraftLine::StaticClassInit() */

void AircraftLine::StaticClassInit(void)

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
    std::string::string(asStack_10,"AircraftLine");
    (*pcVar2)(plVar1,asStack_10,FUN_03b7ac88,200,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AircraftLine::StaticGetClass() */

long * AircraftLine::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AircraftLine",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AircraftLine::GetClass() const */

long * AircraftLine::GetClass(void)

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
  (*pcVar3)(plVar1,"AircraftLine",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AircraftLine::GetAttackRect() */

void __thiscall AircraftLine::GetAttackRect(AircraftLine *this)

{
  int *piVar1;
  undefined4 in_w8;
  undefined4 in_register_00004044;
  float fVar2;
  float fVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  piVar1 = (int *)CONCAT44(in_register_00004044,in_w8);
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)CONCAT44(in_register_00004044,in_w8));
  if (this[0xb0] == (AircraftLine)0x0) {
    Sexy::Insets::Insets((Insets *)&local_18,0x24,0xd7,0x40,200);
    *(undefined8 *)piVar1 = local_18;
    *(undefined8 *)(piVar1 + 2) = uStack_10;
  }
  else {
    Sexy::Insets::Insets((Insets *)&local_18,0x24,0xd2,0x40,0x5a);
    *(undefined8 *)piVar1 = local_18;
    *(undefined8 *)(piVar1 + 2) = uStack_10;
  }
  fVar3 = *(float *)(this + 0x1c);
  fVar2 = (float)FUN_03b78cf0(*(undefined4 *)(this + 0x18),fVar3,*(undefined4 *)(this + 0x20));
  piVar1[1] = (int)(((float)piVar1[1] + fVar3) - (float)piVar1[3]);
  *piVar1 = (int)(((float)*piVar1 + fVar2) - (float)(piVar1[2] / 2));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AircraftLine::~AircraftLine() */

void __thiscall AircraftLine::~AircraftLine(AircraftLine *this)

{
  *(undefined ***)this = &PTR_GetClass_06734730;
  *(undefined ***)(this + 0x10) = &PTR__AircraftLine_06734918;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to AircraftLine::~AircraftLine() */

void __thiscall AircraftLine::~AircraftLine(AircraftLine *this)

{
  ~AircraftLine(this + -0x10);
  return;
}


/* AircraftLine::~AircraftLine() */

void __thiscall AircraftLine::~AircraftLine(AircraftLine *this)

{
  ~AircraftLine(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to AircraftLine::~AircraftLine() */

void __thiscall AircraftLine::~AircraftLine(AircraftLine *this)

{
  ~AircraftLine(this + -0x10);
  return;
}


/* AircraftLine::onDestroy() */

void __thiscall AircraftLine::onDestroy(AircraftLine *this)

{
  bool bVar1;
  long *plVar2;
  
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xa8));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
    (**(code **)(*plVar2 + 0x48))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AircraftLine::onDraw(Sexy::Graphics*) */

void __thiscall AircraftLine::onDraw(AircraftLine *this,Graphics *param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  PopAnimRig *pPVar2;
  float fVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  GraphicsAutoState aGStack_38 [8];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  uVar4 = (ulong)*(uint *)(this + 0x1c);
  this_00 = (RtWeakPtr *)(this + 0xa8);
  local_8 = ___stack_chk_guard;
  fVar3 = (float)FUN_03b78cf0(*(undefined4 *)(this + 0x18),uVar4,*(undefined4 *)(this + 0x20));
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
  (**(code **)(*(long *)this + 0xf8))(this,param_1);
  fVar5 = *(float *)(param_1 + 0x20);
  fVar3 = (float)FUN_03b78f20(fVar3 + 20.0);
  fVar6 = *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x10) =
       *(float *)(param_1 + 0x10) + fVar5 +
       (float)(int)((fVar3 - fVar5) * *(float *)(param_1 + 0x18));
  fVar3 = (float)FUN_03b78f20(uVar4 & 0xffffffff);
  *(float *)(param_1 + 0x14) =
       *(float *)(param_1 + 0x14) + fVar6 +
       (float)(int)((fVar3 - fVar6) * *(float *)(param_1 + 0x1c));
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    PopAnimRig::SetRenderTransform(pPVar2,aSStack_30);
    fVar3 = (float)FUN_03b78f20(0xc2b40000);
    fVar5 = (float)FUN_03b78f20(0xc28c0000);
    Sexy::Graphics::Translate(param_1,(int)fVar3,(int)fVar5);
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    PopAnimRig::Draw(pPVar2,param_1);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AircraftLine::onAircraftSeparateDone(int) */

void __thiscall AircraftLine::onAircraftSeparateDone(AircraftLine *this,int param_1)

{
  float fVar1;
  
  if (*(int *)(this + 0xb8) != param_1) {
    return;
  }
  this[0xb1] = (AircraftLine)0x1;
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0xbc) = fVar1 + 0.5;
  return;
}


/* AircraftLine::AircraftLine() */

void __thiscall AircraftLine::AircraftLine(AircraftLine *this)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_06734730;
  *(undefined ***)(this + 0x10) = &PTR__AircraftLine_06734918;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa8));
  *(undefined4 *)(this + 0xb8) = 0;
  this[0xb1] = (AircraftLine)0x0;
  this[0xb0] = (AircraftLine)0x1;
  *(undefined4 *)(this + 0xb4) = 0;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0xbc) = uVar2;
  *(undefined4 *)(this + 0xc0) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAircraftSeparateDone);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<AircraftLine,void(AircraftLine::*)(int)>>
            ((MessageRouter *)puVar1,Message::AircraftSeparateDone,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAircraftDisconnect);
  local_40 = local_8;
  local_50 = local_18;
  uStack_48 = uStack_10;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<AircraftLine,void(AircraftLine::*)(int)>>
            ((MessageRouter *)puVar1,Message::AircraftDisconnect,&local_50);
  return;
}


/* AircraftLine::StaticNew() */

AircraftLine * AircraftLine::StaticNew(void)

{
  AircraftLine *this;
  
  this = ::operator_new(200);
  AircraftLine(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AircraftLine::AircraftLineInitialize(int, bool, float) */

void __thiscall
AircraftLine::AircraftLineInitialize(AircraftLine *this,int param_1,bool param_2,float param_3)

{
  RtWeakPtr *this_00;
  bool bVar1;
  ResourceInfo *pRVar2;
  RtClass *pRVar3;
  PopAnimRig *pPVar4;
  long *plVar5;
  RtWeakPtr aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  *(int *)(this + 0xb8) = param_1;
  this_00 = (RtWeakPtr *)(this + 0xa8);
  local_8 = ___stack_chk_guard;
  this[0xb0] = (AircraftLine)param_2;
  *(float *)(this + 0xc0) = param_3;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar5 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  }
  std::string::string(asStack_58,"POPANIM_EFFECTS_ZOMBOSS_AIRCRAFT_LINE");
  GetPAMByName(asStack_58);
  std::string::~string(asStack_58);
  nop();
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_78);
  pRVar3 = (RtClass *)PopAnimRig::StaticGetClass();
  PopAnimRig::CreateRig((PopAnim *)pRVar2,pRVar3);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)asStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
  if (this[0xb0] == (AircraftLine)0x0) {
    pPVar4 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    std::string::string(asStack_58,"d1");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_60,"onLineSeparateAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_68,asStack_60);
  }
  else {
    pPVar4 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    std::string::string(asStack_58,"d3");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_60,"onLineSeparateAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_68,asStack_60);
  }
  PopAnimRig::PlayAndStop
            (pPVar4,asStack_58,0,
             (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AircraftLine::onLineSeparateAnimDone(std::string const&) */

void AircraftLine::onLineSeparateAnimDone(string *param_1)

{
  PopAnimRig *pPVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MessageRouter::Post<int,int>
            ((MessageRouter *)gMessageRouter,Message::AircraftSeparateDone,*(int *)(param_1 + 0xb8))
  ;
  if (param_1[0xb0] == (string)0x0) {
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xa8));
    std::string::string(asStack_40,"d2");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  }
  else {
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xa8));
    std::string::string(asStack_40,"d4");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  }
  PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AircraftLine::onUpdate() */

void __thiscall AircraftLine::onUpdate(AircraftLine *this)

{
  bool bVar1;
  char cVar2;
  PopAnimRig *this_00;
  undefined8 *puVar3;
  undefined8 uVar4;
  PVZDB *pPVar5;
  RtDbTable *this_01;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  TRect *pTVar6;
  Effect_PopAnim *this_03;
  ResourceInfo *pRVar7;
  float *pfVar8;
  char *pcVar9;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  int iVar10;
  code *pcVar11;
  float fVar12;
  float fVar13;
  DamageInfo *pDVar14;
  Point aPStack_b8 [8];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  TRect<int> aTStack_98 [16];
  Iterator aIStack_88 [32];
  RtId aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xb1] == (AircraftLine)0x0) {
    if (this[0xb0] == (AircraftLine)0x0) {
      fVar12 = (float)PVZ_Dt();
      *(float *)(this + 0xb4) = *(float *)(this + 0xb4) + fVar12 * 0.42;
    }
    else {
      fVar12 = (float)PVZ_Dt();
      *(float *)(this + 0xb4) = *(float *)(this + 0xb4) + fVar12 * 0.24;
    }
  }
  else {
    puVar3 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    local_a8 = *puVar3;
    local_a0 = *(undefined4 *)(puVar3 + 1);
    fVar12 = (float)FUN_03b78f20(0x41a00000);
    fVar13 = (float)PVZ_Dt();
    local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8 - fVar12 * fVar13);
    (**(code **)(*(long *)this + 0x78))(this,&local_a8);
    cVar2 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
    if ((cVar2 != '\0') && (fVar12 = (float)PVZ_T(), *(float *)(this + 0xbc) < fVar12)) {
      fVar12 = (float)PVZ_T();
      *(float *)(this + 0xbc) = fVar12 + 0.5;
      GetAttackRect(this);
      uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
      PVZDB::GetObjectIteratorForTable(aIStack_88,uVar4,0x2c);
      while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_88), bVar1) {
        pPVar5 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
        this_01 = (RtDbTable *)PVZDB::GetTable(pPVar5,0x2c);
        Sexy::RtDbTable::Iterator::operator*(aIStack_88);
        Sexy::RtDbTable::GetObjectForId(this_01,aRStack_68);
        nop();
        Sexy::RtId::~RtId(aRStack_68);
        iVar10 = extraout_w1;
        if (this_02 !=
            (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)0x0) {
          pTVar6 = (TRect *)(**(code **)(*(long *)this_02 + 0x178))(this_02);
          cVar2 = Sexy::TRect<int>::Intersects(aTStack_98,pTVar6);
          iVar10 = extraout_w1_00;
          if (cVar2 != '\0') {
                    /* WARNING: Load size is inaccurate */
            pDVar14._0_4_ = *(DamageInfo **)(this + 0xc0);
            pcVar11 = *(code **)(*(long *)this_02 + 0x110);
            Sexy::Point::Point(aPStack_b8,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_b0,1.0,0.0);
            DamageInfo::DamageInfo(pDVar14._0_4_,local_b0,local_ac,aRStack_68,aPStack_b8,0);
            (*pcVar11)(this_02,aRStack_68);
            DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
            this_03 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
            std::string::string((string *)&local_b0,"POPANIM_EFFECTS_ZOMBOSS_AIRCRAFT_HIT");
            GetPAMByName((string *)&local_b0);
            pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_68);
            Effect_PopAnim::CreatePopAnimRig(this_03,(PopAnim *)pRVar7,(RtClass *)0x0);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
            std::string::~string((string *)&local_b0);
            nop();
            pfVar8 = (float *)std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_leftmost(this_02);
            EATextSquish::Vec3::Vec3((Vec3 *)aRStack_68,*pfVar8 - 98.0,pfVar8[1] - 125.0,0.0);
            StandaloneEffect::SetBoardSpaceOrigin
                      ((StandaloneEffect *)this_03,(SexyVector3 *)aRStack_68,-1);
            FUN_03b78cc8(this_03 + 0x1c,0xdbba1);
            std::string::string((string *)aRStack_68,"dian07");
            Effect_PopAnim::PlaySingleAnimation(this_03,aRStack_68,0);
            std::string::~string((string *)aRStack_68);
            nop();
            pcVar9 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
            AudioMgr::SendEvent(pcVar9,"Play_Zomb_SkyCity_Zomboss_Attack_Shoot_Hit");
            iVar10 = extraout_w1_01;
          }
        }
        Sexy::RtDbTable::Iterator::operator++(aIStack_88,iVar10);
      }
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_88);
    }
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xa8));
  if (bVar1) {
    this_00 = (PopAnimRig *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
    fVar12 = (float)PVZ_T();
    fVar13 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this_00,fVar12,fVar13);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

