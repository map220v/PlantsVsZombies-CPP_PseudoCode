// Class: SkateBoardMower


/* SkateBoardMower::OnAnimStoppedCallback(std::string const&) */

void SkateBoardMower::OnAnimStoppedCallback(string *param_1)

{
  (**(code **)(**(long **)(param_1 + 0xa8) + 0x28))(*(long **)(param_1 + 0xa8));
  return;
}


/* SkateBoardMower::OnUseActionAnimCommand(float) */

void SkateBoardMower::OnUseActionAnimCommand(float param_1)

{
  long in_x0;
  
  (**(code **)(**(long **)(in_x0 + 0xa8) + 0x30))(*(long **)(in_x0 + 0xa8));
  return;
}


/* SkateBoardMower::OnUseSpecialAnimCommand(float) */

float SkateBoardMower::OnUseSpecialAnimCommand(float param_1)

{
  long in_x0;
  code *pcVar1;
  
  pcVar1 = *(code **)(**(long **)(in_x0 + 0xa8) + 0x38);
  if (pcVar1 != SkatePlant::OnUseSpecialAnimCommand) {
    param_1 = (float)(*pcVar1)();
  }
  return param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkateBoardMower::StaticClassInit() */

void SkateBoardMower::StaticClassInit(void)

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
    std::string::string(asStack_10,"SkateBoardMower");
    (*pcVar2)(plVar1,asStack_10,FUN_037dda58,0xd0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SkateBoardMower::StaticGetClass() */

long * SkateBoardMower::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SkateBoardMower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SkateBoardMower::GetClass() const */

long * SkateBoardMower::GetClass(void)

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
  (*pcVar3)(plVar1,"SkateBoardMower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkateBoardMower::onTouchEvent(Sexy::Touch const&) */

void __thiscall SkateBoardMower::onTouchEvent(SkateBoardMower *this,Touch *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
  if (cVar2 == '\0') goto LAB_037dc948;
  iVar4 = *(int *)(param_1 + 0x30);
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 0x10);
    *(undefined8 *)(this + 0xb8) = *(undefined8 *)param_1;
    fVar6 = (float)FUN_037dc044((float)iVar4);
    fVar7 = (float)FUN_037dc044((float)*(int *)(param_1 + 0x14));
    Sexy::Point::Point((Point *)&local_18,(int)fVar6,(int)fVar7);
    *(undefined8 *)(this + 0xc0) = local_18;
    goto LAB_037dc948;
  }
  if (iVar4 == 3) {
    if (*(long *)(this + 0xb8) != *(long *)param_1) goto LAB_037dc948;
    fVar6 = (float)FUN_037dc044((float)*(int *)(param_1 + 0x14));
    iVar4 = *(int *)(this + 0xc4);
    uVar1 = (int)(fVar6 - (float)iVar4) >> 0x1f;
    iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
    if (iVar3 < (int)(((int)(fVar6 - (float)iVar4) ^ uVar1) - uVar1)) {
      if (fVar6 - (float)*(int *)(this + 0xc4) <= 0.0) {
        iVar4 = SharkMinion::getRow((SharkMinion *)this);
        if (0 < iVar4) {
          puVar5 = (undefined8 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  *)this);
          iVar4 = iVar4 + -1;
          goto LAB_037dca00;
        }
      }
      else {
        iVar4 = SharkMinion::getRow((SharkMinion *)this);
        iVar3 = BoardConstants::NUMBER_OF_ROWS();
        if (iVar4 < iVar3 + -1) {
          puVar5 = (undefined8 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  *)this);
          iVar4 = iVar4 + 1;
LAB_037dca00:
          local_18 = *puVar5;
          local_10 = *(undefined4 *)(puVar5 + 1);
          iVar4 = BoardTransforms::GridToBoardSpaceY(iVar4);
          local_18 = CONCAT44((float)iVar4,(undefined4)local_18);
          (**(code **)(*(long *)this + 0x78))(this,&local_18);
        }
      }
    }
  }
  else if (iVar4 != 4) goto LAB_037dc948;
  *(undefined8 *)(this + 0xb8) = 0;
LAB_037dc948:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


/* SkateBoardMower::~SkateBoardMower() */

void __thiscall SkateBoardMower::~SkateBoardMower(SkateBoardMower *this)

{
  *(undefined ***)this = &PTR_GetClass_0669aca0;
  *(undefined ***)(this + 0x10) = &PTR__SkateBoardMower_0669ae88;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to SkateBoardMower::~SkateBoardMower() */

void __thiscall SkateBoardMower::~SkateBoardMower(SkateBoardMower *this)

{
  ~SkateBoardMower(this + -0x10);
  return;
}


/* SkateBoardMower::~SkateBoardMower() */

void __thiscall SkateBoardMower::~SkateBoardMower(SkateBoardMower *this)

{
  ~SkateBoardMower(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SkateBoardMower::~SkateBoardMower() */

void __thiscall SkateBoardMower::~SkateBoardMower(SkateBoardMower *this)

{
  ~SkateBoardMower(this + -0x10);
  return;
}


/* SkateBoardMower::SkateBoardMower() */

void __thiscall SkateBoardMower::SkateBoardMower(SkateBoardMower *this)

{
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_0669aca0;
  *(undefined ***)(this + 0x10) = &PTR__SkateBoardMower_0669ae88;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb0));
  Sexy::Point::Point((Point *)(this + 0xc0));
  return;
}


/* SkateBoardMower::StaticNew() */

SkateBoardMower * SkateBoardMower::StaticNew(void)

{
  SkateBoardMower *this;
  
  this = ::operator_new(0xd0);
  SkateBoardMower(this);
  return this;
}


/* SkateBoardMower::onDestroy() */

void __thiscall SkateBoardMower::onDestroy(SkateBoardMower *this)

{
  bool bVar1;
  long *plVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xb0));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
    (**(code **)(*plVar2 + 0x48))();
  }
  if (*(long **)(this + 0xa8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xa8) + 8))();
    *(undefined8 *)(this + 0xa8) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkateBoardMower::onDraw(Sexy::Graphics*) */

void __thiscall SkateBoardMower::onDraw(SkateBoardMower *this,Graphics *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  PopAnimRig *pPVar1;
  long *plVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  GraphicsAutoState aGStack_40 [8];
  float local_38;
  float local_34;
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  uVar4 = *(undefined4 *)(this + 0x1c);
  local_8 = ___stack_chk_guard;
  fVar3 = (float)FUN_037dbe60(*(undefined4 *)(this + 0x18),uVar4,*(undefined4 *)(this + 0x20));
  fVar5 = *(float *)(param_1 + 0x18);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
  (**(code **)(*(long *)this + 0xf8))(this,param_1);
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0);
  fVar6 = *(float *)(param_1 + 0x20);
  fVar3 = (float)FUN_037dc020(fVar3 + 20.0);
  fVar7 = *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x10) =
       *(float *)(param_1 + 0x10) + fVar6 +
       (float)(int)((fVar3 - fVar6) * *(float *)(param_1 + 0x18));
  fVar3 = (float)FUN_037dc020(uVar4);
  *(float *)(param_1 + 0x14) =
       *(float *)(param_1 + 0x14) + fVar7 +
       (float)(int)((fVar3 - fVar7) * *(float *)(param_1 + 0x1c));
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_38,118.0,135.0);
  if (fVar5 == 1.0) {
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
    pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    PopAnimRig::SetRenderTransform(pPVar1,aSStack_30);
    fVar3 = (float)FUN_037dc020(local_38);
    fVar5 = (float)FUN_037dc020(local_34);
    Sexy::Graphics::Translate(param_1,(int)-fVar3,(int)-fVar5);
  }
  else {
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
    Sexy::SexyTransform2D::Scale(aSStack_30,fVar5,fVar5);
    fVar3 = (float)FUN_037dc020(fVar5 * local_38);
    fVar5 = (float)FUN_037dc020(fVar5 * local_34);
    FUN_037dbccc(-fVar3,-fVar5,auStack_28,auStack_1c);
    pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    PopAnimRig::SetRenderTransform(pPVar1,aSStack_30);
  }
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  PopAnimRig::Draw(pPVar1,param_1);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
  plVar2 = *(long **)(this + 0xa8);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkateBoardMower::onUpdate() */

void __thiscall SkateBoardMower::onUpdate(SkateBoardMower *this)

{
  PopAnimRig *this_00;
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0xa8))(this,0);
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0))
  ;
  fVar2 = (float)PVZ_T();
  fVar3 = (float)PVZ_Dt();
  PopAnimRig::UpdateAnim(this_00,fVar2,fVar3);
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_18 = *puVar1;
  local_10 = *(undefined4 *)(puVar1 + 1);
  fVar2 = (float)PVZ_Dt();
  local_18 = CONCAT44(local_18._4_4_,(float)local_18 + fVar2 * 110.0);
  (**(code **)(*(long *)this + 0x78))(this,&local_18);
  if (*(long **)(this + 0xa8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xa8) + 0x18))();
  }
  if (800.0 < (float)local_18) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkateBoardMower::InitSkatePlant(std::string const&, int) */

void __thiscall SkateBoardMower::InitSkatePlant(SkateBoardMower *this,string *param_1,int param_2)

{
  bool bVar1;
  SkatePlant_StarFruit *this_00;
  SkatePlant_Citron *this_01;
  long lVar2;
  code *pcVar3;
  char *__s;
  PlantAnimRig *pPVar4;
  CBMemberTranslatorX aCStack_98 [24];
  string asStack_80 [24];
  Delegate1<float> aDStack_68 [48];
  Delegate1<float> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xcc) = param_2;
  bVar1 = std::operator==(param_1,"starfruit");
  if (bVar1) {
LAB_037ddd9c:
    this_00 = ::operator_new(0x48);
    SkatePlant_StarFruit::SkatePlant_StarFruit(this_00,this);
    lVar2 = *(long *)this_00;
    *(SkatePlant_StarFruit **)(this + 0xa8) = this_00;
    pcVar3 = *(code **)(lVar2 + 0x10);
    std::string::string(asStack_80,"starfruit");
    (*pcVar3)(this_00,asStack_80);
    std::string::~string(asStack_80);
    nop();
  }
  else {
    __s = "pinkstarfruit";
    bVar1 = std::operator==(param_1,"pinkstarfruit");
    if (bVar1) {
      this_01 = ::operator_new(0x50);
      SkatePlant_PinkStarFruit::SkatePlant_PinkStarFruit((SkatePlant_PinkStarFruit *)this_01,this);
    }
    else {
      __s = "homingthistle";
      bVar1 = std::operator==(param_1,"homingthistle");
      if (bVar1) {
        this_01 = ::operator_new(0x50);
        SkatePlant_HomingThistle::SkatePlant_HomingThistle((SkatePlant_HomingThistle *)this_01,this)
        ;
      }
      else {
        __s = "nekotail";
        bVar1 = std::operator==(param_1,"nekotail");
        if (bVar1) {
          this_01 = ::operator_new(0x68);
          SkatePlant_Nekotail::SkatePlant_Nekotail((SkatePlant_Nekotail *)this_01,this);
        }
        else {
          __s = "electricblueberry";
          bVar1 = std::operator==(param_1,"electricblueberry");
          if (bVar1) {
            this_01 = ::operator_new(0x48);
            SkatePlant_ElectricBlueberry::SkatePlant_ElectricBlueberry
                      ((SkatePlant_ElectricBlueberry *)this_01,this);
          }
          else {
            __s = "citron";
            bVar1 = std::operator==(param_1,"citron");
            if (!bVar1) goto LAB_037ddd9c;
            this_01 = ::operator_new(0x48);
            SkatePlant_Citron::SkatePlant_Citron(this_01,this);
          }
        }
      }
    }
    lVar2 = *(long *)this_01;
    *(SkatePlant_Citron **)(this + 0xa8) = this_01;
    pcVar3 = *(code **)(lVar2 + 0x10);
    std::string::string(asStack_80,__s);
    (*pcVar3)(this_01,asStack_80);
    std::string::~string(asStack_80);
    nop();
  }
  pPVar4 = *(PlantAnimRig **)(*(long *)(this + 0xa8) + 0x20);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnUseSpecialAnimCommand);
  Sexy::Delegate1<float>::Delegate1<SkateBoardMower,void(SkateBoardMower::*)(float)>
            (aDStack_68,aCStack_98);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnUseActionAnimCommand);
  Sexy::Delegate1<float>::Delegate1<SkateBoardMower,void(SkateBoardMower::*)(float)>
            (aDStack_38,asStack_80);
  PlantAnimRig::SetPlantDelegates(pPVar4,aDStack_68,aDStack_38);
  *(int *)(*(long *)(this + 0xa8) + 0x30) = param_2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkateBoardMower::initPopAnim() */

void __thiscall SkateBoardMower::initPopAnim(SkateBoardMower *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  long *plVar2;
  ResourceInfo *pRVar3;
  RtClass *pRVar4;
  code *pcVar5;
  float fVar6;
  RtWeakPtr aRStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [24];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0xb0);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  }
  std::string::string(asStack_20,"POPANIM_EFFECTS_ARTIFACT_GRIDITEM_SKATEBOARD");
  GetPAMByName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_30);
  pRVar4 = (RtClass *)PopAnimRig::StaticGetClass();
  PopAnimRig::CreateRig((PopAnim *)pRVar3,pRVar4);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)asStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  pcVar5 = *(code **)(*plVar2 + 0x78);
  std::string::string(asStack_28,"animation");
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_20);
  (*pcVar5)(plVar2,asStack_28,1,0,asStack_20);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)asStack_20);
  std::string::~string(asStack_28);
  nop();
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  pcVar5 = *(code **)(*plVar2 + 0x80);
  fVar6 = (float)Sexy::Rand(20.0);
  (*pcVar5)((fVar6 + -10.0) * 0.01 + 1.0,plVar2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkateBoardMower::onInitialized() */

void __thiscall SkateBoardMower::onInitialized(SkateBoardMower *this)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  float local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::onInitialized((BoardEntity *)this);
  DVec3::DVec3((DVec3 *)&local_18);
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  local_18 = 200.0 - (float)iVar2 * 0.5;
  iVar2 = BoardTransforms::GridToBoardSpaceY(2);
  local_14 = (float)iVar2;
  (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_18);
  initPopAnim(this);
  *(undefined8 *)(this + 0xb8) = 0;
  uVar3 = PVZ_T();
  *(undefined8 *)(this + 0xa8) = 0;
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 200) = uVar3;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkateBoardMower::onDrawShadow(Sexy::Graphics*) */

void __thiscall SkateBoardMower::onDrawShadow(SkateBoardMower *this,Graphics *param_1)

{
  Image *pIVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  GraphicsAutoState aGStack_40 [8];
  undefined4 local_38;
  undefined4 local_34;
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
  uVar4 = *(undefined4 *)(this + 0x1c);
  uVar2 = FUN_037dbe60(*(undefined4 *)(this + 0x18),uVar4,*(undefined4 *)(this + 0x20));
  fVar5 = *(float *)(param_1 + 0x20);
  fVar3 = (float)FUN_037dc020(uVar2);
  fVar6 = *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x10) =
       *(float *)(param_1 + 0x10) + fVar5 +
       (float)(int)((fVar3 - fVar5) * *(float *)(param_1 + 0x18));
  fVar3 = (float)FUN_037dc020(uVar4);
  *(float *)(param_1 + 0x14) =
       *(float *)(param_1 + 0x14) + fVar6 +
       (float)(int)((fVar3 - fVar6) * *(float *)(param_1 + 0x1c));
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_38,12.0,-20.0);
  fVar3 = (float)FUN_037dc020(0x3f800000);
  Sexy::SexyVector2::operator*=((SexyVector2 *)&local_38,fVar3);
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
  Sexy::SexyTransform2D::Scale(aSStack_30,*(float *)(param_1 + 0x18),*(float *)(param_1 + 0x1c));
  FUN_037dbccc(local_38,local_34,auStack_28,auStack_1c);
  pIVar1 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06ab17b0);
  Sexy::Graphics::DrawImageMatrix(param_1,pIVar1,(SexyMatrix3 *)aSStack_30,0.0,0.0);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkateBoardMower::registerForEvents() */

void __thiscall SkateBoardMower::registerForEvents(SkateBoardMower *this)

{
  Board *pBVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_90 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_88 [8];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar1 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTouchEvent);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<SkateBoardMower,bool(SkateBoardMower::*)(Sexy::Touch_const&)>(aDStack_68,aCStack_80)
  ;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_88,(RtWeakPtrBase *)aRStack_90);
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Board::RegisterTouchGameplayObject(pBVar1,aDStack_68,4,aRStack_88,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

