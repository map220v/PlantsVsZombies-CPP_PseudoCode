// Class: PlantMorningGlory


/* PlantMorningGlory::onAnimStoppedCallback(std::string const&) */

void PlantMorningGlory::onAnimStoppedCallback(string *param_1)

{
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 200) = 4;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMorningGlory::StaticClassInit() */

void PlantMorningGlory::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantMorningGlory");
    (*pcVar2)(plVar1,asStack_10,FUN_04178858,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMorningGlory::StaticGetClass() */

long * PlantMorningGlory::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantMorningGlory",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantMorningGlory::GetClass() const */

long * PlantMorningGlory::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantMorningGlory",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantMorningGlory::~PlantMorningGlory() */

void __thiscall PlantMorningGlory::~PlantMorningGlory(PlantMorningGlory *this)

{
  *(undefined ***)this = &PTR_GetClass_067f57c0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantMorningGlory::~PlantMorningGlory() */

void __thiscall PlantMorningGlory::~PlantMorningGlory(PlantMorningGlory *this)

{
  ~PlantMorningGlory(this);
  AK::FreeHook(this);
  return;
}


/* PlantMorningGlory::PlantMorningGlory() */

void __thiscall PlantMorningGlory::PlantMorningGlory(PlantMorningGlory *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067f57c0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  DVec3::DVec3((DVec3 *)(this + 0x40));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x50));
  return;
}


/* PlantMorningGlory::StaticNew() */

PlantMorningGlory * PlantMorningGlory::StaticNew(void)

{
  PlantMorningGlory *this;
  
  this = ::operator_new(0x60);
  PlantMorningGlory(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMorningGlory::Initialize() */

void __thiscall PlantMorningGlory::Initialize(PlantMorningGlory *this)

{
  long lVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x38),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  this[0x2c] = (PlantMorningGlory)0x0;
  lVar1 = ___stack_chk_guard;
  this[0x2d] = (PlantMorningGlory)0x0;
  this[0x58] = (PlantMorningGlory)0x0;
  *(undefined4 *)(this + 0x5c) = 0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMorningGlory::onDestroy() */

void __thiscall PlantMorningGlory::onDestroy(PlantMorningGlory *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0x38);
  PlantFramework::onDestroy((PlantFramework *)this);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMorningGlory::checkLinkingHelper(PlantMorningGlory::LinkDirection, int&) */

void __thiscall
PlantMorningGlory::checkLinkingHelper(undefined8 param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  RtWeakPtr *this;
  long extraout_x0;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  BoardEntity::CalcGridPosition();
  switch(param_2) {
  case 0:
    local_c = local_c + -1;
    break;
  case 1:
    local_c = local_c + 1;
    break;
  case 2:
    local_10 = local_10 + -1;
    break;
  case 3:
    local_10 = local_10 + 1;
  }
  cVar1 = BoardTransforms::IsGridCoordinateOnBoard(local_10,local_c);
  if ((cVar1 != '\0') &&
     (lVar3 = Board::GetPlantGroupAt(*(Board **)(gLawnApp + 0x9f0),local_10,local_c), lVar3 != 0)) {
    puVar4 = (undefined8 *)PlantGroup::Plants();
    local_20 = FUN_041776f0(*puVar4);
    local_18 = FUN_04177740(puVar4[1]);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar2)
    {
      this = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
      if (bVar2) {
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
        cVar1 = FUN_04177154(*(undefined4 *)(lVar3 + 0x28));
        if (cVar1 == '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
          Plant::GetType();
          lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
          bVar2 = std::operator!=((string *)(lVar3 + 8),"morningglory");
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
          if (!bVar2) {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
            nop();
            if (extraout_x0 != 0) {
              *param_3 = *param_3 + 1;
              break;
            }
          }
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMorningGlory::setIsLinking(bool) */

void __thiscall PlantMorningGlory::setIsLinking(PlantMorningGlory *this,bool param_1)

{
  RtWeakPtr *this_00;
  RtMixedPtrBase *this_01;
  RtWeakPtr<SpartanBambooMatrixSystem> *this_02;
  PlantMorningGlory PVar1;
  bool bVar2;
  char cVar3;
  long *plVar4;
  Effect_PopAnim *pEVar5;
  ResourceInfo *pRVar6;
  long lVar7;
  StandaloneEffect *pSVar8;
  float fVar9;
  int local_30;
  int local_2c;
  string asStack_28 [8];
  int local_20;
  int local_1c;
  Point aPStack_18 [16];
  long local_8;
  
  PVar1 = this[0x2c];
  local_8 = ___stack_chk_guard;
  this[0x2c] = (PlantMorningGlory)param_1;
  if (param_1) {
    if (*(int *)(this + 0x34) < *(int *)(this + 0x30)) {
      *(int *)(this + 0x34) = *(int *)(this + 0x30);
      Plant::PlayAttackUpEffect(*(Plant **)(this + 0x10));
      if (this[0x2c] == (PlantMorningGlory)0x0) goto LAB_04177a10;
    }
    if (PVar1 == (PlantMorningGlory)0x0) {
      this_02 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x38);
      BoardEntity::CalcGridPosition();
      BoardTransforms::GridToBoardSpace(aPStack_18);
      EATextSquish::Vec3::Vec3((Vec3 *)aPStack_18,(float)local_30,(float)(local_2c + -10),0.0);
      Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_02,(RtWeakPtrBase *)&local_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      pEVar5 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
      std::string::string(asStack_28,"POPANIM_EFFECTS_MORNINGGLORY_PROJECTILE");
      GetPAMByName(asStack_28);
      pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_20);
      Effect_PopAnim::CreatePopAnimRig(pEVar5,(PopAnim *)pRVar6,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      std::string::~string(asStack_28);
      nop();
      pSVar8 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
      StandaloneEffect::SetBoardSpaceOrigin(pSVar8,(SexyVector3 *)aPStack_18,-1);
      pEVar5 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
      Effect_PopAnim::SetCentered(pEVar5,true);
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
      FUN_04175c4c(lVar7 + 0x1c,0x61a81);
      pEVar5 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
      std::string::string((string *)&local_20,"beats");
      PVZ_EOT();
      Effect_PopAnim::PlayLoopingAnimation(pEVar5,(RtWeakPtr<Sexy::ResourceInfo> *)&local_20,0);
      std::string::~string((string *)&local_20);
      nop();
    }
    else {
      this_00 = (RtWeakPtr *)(this + 0x38);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
      if (((bVar2) &&
          (cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00), cVar3 != '\0')) &&
         (*(long *)(this + 0x10) != 0)) {
        pSVar8 = (StandaloneEffect *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        fVar9 = (float)StandaloneEffect::GetBoardSpaceOrigin(pSVar8);
        BoardEntity::CalcGridPosition();
        BoardTransforms::GridToBoardSpace(aPStack_18);
        if (fVar9 != (float)local_20) {
          pSVar8 = (StandaloneEffect *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          EATextSquish::Vec3::Vec3((Vec3 *)aPStack_18,(float)local_20,(float)(local_1c + -10),0.0);
          StandaloneEffect::SetBoardSpaceOrigin(pSVar8,(SexyVector3 *)aPStack_18,-1);
        }
      }
    }
  }
  else {
LAB_04177a10:
    this_01 = (RtMixedPtrBase *)(this + 0x38);
    *(undefined4 *)(this + 0x34) = 0;
    cVar3 = Sexy::RtMixedPtrBase::IsValid(this_01);
    if (cVar3 == '\0') {
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_01);
    }
    else {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      (**(code **)(*plVar4 + 0x48))();
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_01);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMorningGlory::FindTargetAndFire(PlantWeapon) */

void __thiscall PlantMorningGlory::FindTargetAndFire(PlantMorningGlory *this,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  ResourceInfo *this_00;
  SexyVector3 *pSVar5;
  long extraout_x0;
  long extraout_x0_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  code *pcVar6;
  long lVar7;
  UIEasyButtonWidget *this_02;
  ulong uVar8;
  float fVar9;
  undefined8 local_40;
  undefined8 local_28;
  RtWeakPtr aRStack_20 [8];
  undefined1 auStack_18 [16];
  long local_8;
  
  pcVar6 = *(code **)(*(long *)this + 0x2b0);
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x40) = 0;
  (*pcVar6)(auStack_18);
  local_28 = (**(code **)(*(long *)this + 0x3f8))(this,param_2);
  uVar3 = (**(code **)(*(long *)this + 0x400))(this,param_2);
  uVar8 = uVar3 & 0xffffffff;
  iVar2 = operator&(uVar3,2);
  if (iVar2 == 0) {
    iVar2 = operator&(uVar8,4);
    if (iVar2 != 0) {
      lVar7 = *(long *)this;
LAB_04178170:
      (**(code **)(lVar7 + 0x100))(aRStack_20,this,auStack_18,param_2);
      this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      if (this_00 != (ResourceInfo *)0x0) {
LAB_041781a0:
        fVar9 = *(float *)(this + 0x40);
        if (fVar9 <= 0.0) {
          pSVar5 = (SexyVector3 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  *)this_00);
        }
        else {
          pSVar5 = (SexyVector3 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  *)this_00);
          if (fVar9 <= *(float *)pSVar5) goto LAB_041781ec;
        }
        Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x40),pSVar5);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x50),(RtWeakPtrBase *)aRStack_20
                  );
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20)
        ;
        goto LAB_041781ec;
      }
    }
  }
  else {
    (**(code **)(*(long *)this + 0xd8))
              ((RtMixedPtrBase *)aRStack_20,this,auStack_18,param_2,&local_28);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
    if (cVar1 != '\0') {
      this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      pSVar5 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(this_01);
      Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x40),pSVar5);
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x50),(RtWeakPtrBase *)aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      iVar2 = operator&(uVar8,4);
      if (iVar2 != 0) {
        (**(code **)(*(long *)this + 0x100))((RtMixedPtrBase *)aRStack_20,this,auStack_18,param_2);
        this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20)
        ;
        if (this_00 != (ResourceInfo *)0x0) goto LAB_041781a0;
      }
LAB_041781ec:
      this_02 = *(UIEasyButtonWidget **)(this + 0x10);
      this[0x58] = (PlantMorningGlory)0x0;
      iVar2 = FUN_04175c68(this_02);
      if (iVar2 == 5) {
        fVar9 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
        lVar7 = FUN_04178034(*(undefined8 *)(this + 0x10));
        this_02 = *(UIEasyButtonWidget **)(this + 0x10);
        if (*(float *)(lVar7 + 0x2c4) <= fVar9) goto LAB_04178208;
        this[0x58] = (PlantMorningGlory)0x1;
        *(undefined4 *)(this + 0x5c) = 3;
        local_40 = 1;
        UIEasyButtonWidget::GetImageNormal(this_02);
        nop();
        lVar7 = extraout_x0_00;
      }
      else {
LAB_04178208:
        UIEasyButtonWidget::GetImageNormal(this_02);
        nop();
        local_40 = 0;
        lVar7 = extraout_x0;
      }
      FUN_04175c7c(lVar7 + 0x3b8,local_40);
      (**(code **)(*(long *)this + 0x1a0))(this);
      uVar4 = 1;
      goto LAB_0417813c;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    iVar2 = operator&(uVar8,4);
    if (iVar2 != 0) {
      lVar7 = *(long *)this;
      goto LAB_04178170;
    }
  }
  uVar4 = 0;
LAB_0417813c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* PlantMorningGlory::getMaxLinkingCount() */

undefined4 __thiscall PlantMorningGlory::getMaxLinkingCount(PlantMorningGlory *this)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 0x10);
  iVar1 = FUN_04175c68(uVar3);
  if (2 < iVar1) {
    lVar2 = FUN_04178034(uVar3);
    return *(undefined4 *)(lVar2 + 700);
  }
  if (iVar1 == 2) {
    lVar2 = FUN_04178034(uVar3);
    return *(undefined4 *)(lVar2 + 0x2b8);
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMorningGlory::checkLinkingStatus() */

void __thiscall PlantMorningGlory::checkLinkingStatus(PlantMorningGlory *this)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_04175c68(*(undefined8 *)(this + 0x10));
  if (1 < iVar2) {
    local_10 = 0;
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 1;
      checkLinkingHelper(this,iVar2,&local_10);
      iVar2 = iVar1;
    } while (iVar1 != 4);
    local_c = getMaxLinkingCount(this);
    piVar3 = eastl::min_alt<int>(&local_10,&local_c);
    iVar2 = *piVar3;
    *(int *)(this + 0x30) = iVar2;
    if (iVar2 < 1) {
      setIsLinking(this,false);
      fVar5 = (float)PVZ_EOT();
      Plant::SetAttackUpValue(*(Plant **)(this + 0x10),false,fVar5,0.0);
    }
    else {
      lVar4 = FUN_04178034(*(undefined8 *)(this + 0x10));
      fVar6 = *(float *)(lVar4 + 0x2c0);
      setIsLinking(this,true);
      fVar5 = (float)PVZ_EOT();
      Plant::SetAttackUpValue
                (*(Plant **)(this + 0x10),true,fVar5,(float)*(int *)(this + 0x30) * fVar6);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMorningGlory::UpdateActions() */

void __thiscall PlantMorningGlory::UpdateActions(PlantMorningGlory *this)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  int iStack_10;
  int iStack_c;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  iVar2 = FUN_04175c68(*(undefined8 *)(this + 0x10));
  if (1 < iVar2) {
    iStack_10 = 0;
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 1;
      checkLinkingHelper(this,iVar2,&iStack_10);
      iVar2 = iVar1;
    } while (iVar1 != 4);
    iStack_c = getMaxLinkingCount(this);
    piVar3 = eastl::min_alt<int>(&iStack_10,&iStack_c);
    iVar2 = *piVar3;
    *(int *)(this + 0x30) = iVar2;
    if (iVar2 < 1) {
      setIsLinking(this,false);
      fVar5 = (float)PVZ_EOT();
      Plant::SetAttackUpValue(*(Plant **)(this + 0x10),false,fVar5,0.0);
    }
    else {
      lVar4 = FUN_04178034(*(undefined8 *)(this + 0x10));
      fVar6 = *(float *)(lVar4 + 0x2c0);
      setIsLinking(this,true);
      fVar5 = (float)PVZ_EOT();
      Plant::SetAttackUpValue
                (*(Plant **)(this + 0x10),true,fVar5,(float)*(int *)(this + 0x30) * fVar6);
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMorningGlory::AbsorbSoundWave(Sexy::RtWeakPtr<Zombie>) */

void PlantMorningGlory::AbsorbSoundWave(long param_1)

{
  long lVar1;
  PopAnimRig *pPVar2;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  *(undefined1 *)(param_1 + 0x2d) = 1;
  local_8 = ___stack_chk_guard;
  pPVar2 = (PopAnimRig *)
           UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
  std::string::string(asStack_58,"defend");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             asStack_60);
  PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_58);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 200) = 2;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMorningGlory::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantMorningGlory::Fire
          (PlantMorningGlory *this,RtWeakPtrBase *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  long lVar4;
  MorningGloryProjectile *this_00;
  char *pcVar5;
  Plant *pPVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = (**(code **)(*(long *)this + 0x180))();
  if (cVar3 == '\0') {
    if (this[0x58] == (PlantMorningGlory)0x0) {
      if (this[0x2d] == (PlantMorningGlory)0x0) {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
        lVar4 = PlantFramework::Fire((PlantFramework *)this,aRStack_10,param_3,param_4);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        nop();
        iVar1 = *(int *)(this + 0x28);
        bVar2 = iVar1 == (iVar1 / 5) * 5;
        if (bVar2) {
          pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
          AudioMgr::SendEvent(pcVar5,"Play_Plant_PhatBeet_Attack_Impact");
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x50))
          ;
          JackOLanternGhost::SetPlant((JackOLanternGhost *)this_00,aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        }
        FUN_04175c74(this_00 + 0x1ac,bVar2);
        MorningGloryProjectile::setDiePosition(this_00,(SexyVector3 *)(this + 0x40));
        *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
      }
      else {
        pPVar6 = *(Plant **)(this + 0x10);
        this[0x2d] = (PlantMorningGlory)0x0;
        *(undefined4 *)(pPVar6 + 0x150) = 3;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
        lVar4 = Plant::Fire(pPVar6,aRStack_10,param_3,param_4);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        FUN_04175d50(lVar4 + 0xd4);
      }
      goto LAB_04179e00;
    }
    iVar1 = *(int *)(this + 0x5c);
    pPVar6 = *(Plant **)(this + 0x10);
    if (iVar1 < 2) {
      if (iVar1 == 1) {
        *(undefined4 *)(pPVar6 + 0x150) = 5;
        *(undefined4 *)(this + 0x5c) = 0;
        this[0x58] = (PlantMorningGlory)0x0;
      }
      else {
        this[0x58] = (PlantMorningGlory)0x0;
      }
    }
    else {
      *(undefined4 *)(pPVar6 + 0x150) = 4;
      *(int *)(this + 0x5c) = iVar1 + -1;
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  }
  else {
    pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar5,"Play_Plant_MorningGlory_PlantFood");
    cVar3 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    pPVar6 = *(Plant **)(this + 0x10);
    if (cVar3 == '\0') {
      *(undefined4 *)(pPVar6 + 0x150) = 1;
    }
    else {
      *(undefined4 *)(pPVar6 + 0x150) = 2;
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  }
  lVar4 = Plant::Fire(pPVar6,(RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10,param_3,param_4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
LAB_04179e00:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar4);
  }
  return;
}

