// Class: SilverkeyTentacleShadow


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SilverkeyTentacleShadow::StaticClassInit() */

void SilverkeyTentacleShadow::StaticClassInit(void)

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
    std::string::string(asStack_10,"SilverkeyTentacleShadow");
    (*pcVar2)(plVar1,asStack_10,FUN_03760ec0,200,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SilverkeyTentacleShadow::StaticGetClass() */

long * SilverkeyTentacleShadow::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SilverkeyTentacleShadow",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SilverkeyTentacleShadow::GetClass() const */

long * SilverkeyTentacleShadow::GetClass(void)

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
  (*pcVar3)(plVar1,"SilverkeyTentacleShadow",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SilverkeyTentacleShadow::~SilverkeyTentacleShadow() */

void __thiscall SilverkeyTentacleShadow::~SilverkeyTentacleShadow(SilverkeyTentacleShadow *this)

{
  *(undefined ***)this = &PTR_GetClass_06692770;
  *(undefined ***)(this + 0x10) = &PTR__SilverkeyTentacleShadow_06692958;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to SilverkeyTentacleShadow::~SilverkeyTentacleShadow() */

void __thiscall SilverkeyTentacleShadow::~SilverkeyTentacleShadow(SilverkeyTentacleShadow *this)

{
  ~SilverkeyTentacleShadow(this + -0x10);
  return;
}


/* SilverkeyTentacleShadow::~SilverkeyTentacleShadow() */

void __thiscall SilverkeyTentacleShadow::~SilverkeyTentacleShadow(SilverkeyTentacleShadow *this)

{
  ~SilverkeyTentacleShadow(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SilverkeyTentacleShadow::~SilverkeyTentacleShadow() */

void __thiscall SilverkeyTentacleShadow::~SilverkeyTentacleShadow(SilverkeyTentacleShadow *this)

{
  ~SilverkeyTentacleShadow(this + -0x10);
  return;
}


/* SilverkeyTentacleShadow::SilverkeyTentacleShadow() */

void __thiscall SilverkeyTentacleShadow::SilverkeyTentacleShadow(SilverkeyTentacleShadow *this)

{
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_06692770;
  *(undefined ***)(this + 0x10) = &PTR__SilverkeyTentacleShadow_06692958;
  Sexy::Point::Point((Point *)(this + 0xa4));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb0));
  DVec3::DVec3((DVec3 *)(this + 0xb8));
  return;
}


/* SilverkeyTentacleShadow::StaticNew() */

SilverkeyTentacleShadow * SilverkeyTentacleShadow::StaticNew(void)

{
  SilverkeyTentacleShadow *this;
  
  this = ::operator_new(200);
  SilverkeyTentacleShadow(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SilverkeyTentacleShadow::SetTarget(Sexy::RtWeakPtr<Zombie>) */

void SilverkeyTentacleShadow::SetTarget
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *param_4,RtWeakPtr *param_5)

{
  undefined8 *puVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  float fVar2;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(param_4 + 0xb0),param_5);
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(param_4);
  local_48 = *puVar1;
  local_40 = *(undefined4 *)(puVar1 + 1);
  this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(param_4 + 0xb0));
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this);
  local_38 = *puVar1;
  local_30 = *(undefined4 *)(puVar1 + 1);
  local_28 = Sexy::SexyVector3::operator-((SexyVector3 *)&local_38,(SexyVector3 *)&local_48);
  local_24 = param_2;
  local_20 = param_3;
  fVar2 = (float)PVZ_Dt();
  local_18 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_28,fVar2);
  local_14 = param_2;
  local_10 = param_3;
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_4 + 0xb8),(SexyVector3 *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SilverkeyTentacleShadow::onUpdate() */

void SilverkeyTentacleShadow::onUpdate(void)

{
  RtMixedPtrBase *this;
  float fVar1;
  char cVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  undefined8 *puVar3;
  long *plVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_18;
  long local_8;
  
  this = (RtMixedPtrBase *)(in_x0 + 0xb0);
  local_8 = ___stack_chk_guard;
  puVar3 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(in_x0);
  local_28 = *puVar3;
  local_20 = *(undefined4 *)(puVar3 + 1);
  local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_28,(SexyVector3 *)(in_x0 + 0xb8));
  cVar2 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar2 != '\0') {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
    ;
    cVar2 = (**(code **)(*plVar4 + 0x328))();
    if (cVar2 == '\0') {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this);
      cVar2 = (**(code **)(*plVar4 + 0x330))();
      if (cVar2 == '\0') {
        fVar1 = (float)local_28;
        this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
        ;
        pfVar5 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(this_00);
        if (*pfVar5 < fVar1) {
          BoardEntity::CalcGridPosition();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)this);
          ArtifactSilverKey::GenerateTentacle();
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          (**(code **)(*(long *)in_x0 + 0x48))();
          goto LAB_0374ba80;
        }
      }
    }
  }
  (**(code **)(*(long *)in_x0 + 0x78))();
LAB_0374ba80:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SilverkeyTentacleShadow::onDrawShadow(Sexy::Graphics*) */

void __thiscall
SilverkeyTentacleShadow::onDrawShadow(SilverkeyTentacleShadow *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  Image *pIVar4;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  float fVar5;
  float fVar6;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  puVar3 = (undefined4 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  fVar5 = (float)FUN_03728ac0(*puVar3);
  fVar6 = (float)FUN_03728ac0(puVar3[1]);
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + fVar6;
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + fVar5;
  pIVar4 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06aaf558);
  this_00 = (LotteryResultProgressBar *)
            CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06aaf558);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06aaf558);
  iVar2 = SalesProgressBar::GetCurrentLevel(this_01);
  Sexy::Graphics::DrawImage(param_1,pIVar4,-(iVar1 / 2),-(iVar2 / 2));
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

