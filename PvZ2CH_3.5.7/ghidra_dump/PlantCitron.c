// Class: PlantCitron


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCitron::DoProjectileCombo() */

void __thiscall PlantCitron::DoProjectileCombo(PlantCitron *this)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar1;
  float local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)(**(code **)(*(long *)this + 0x528))(this,0);
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_00);
  local_18 = (float)*puVar1;
  local_10 = *(undefined4 *)(puVar1 + 1);
  _local_18 = CONCAT44((int)((ulong)*puVar1 >> 0x20),local_18 + 30.0);
  (**(code **)(*(long *)this_00 + 0x78))(this_00,&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCitron::StaticClassInit() */

void PlantCitron::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantCitron");
    (*pcVar2)(plVar1,asStack_10,FUN_0408a03c,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCitron::StaticGetClass() */

long * PlantCitron::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantCitron",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantCitron::GetClass() const */

long * PlantCitron::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantCitron",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCitron::addProjectile(int) */

void __thiscall PlantCitron::addProjectile(PlantCitron *this,int param_1)

{
  char cVar1;
  long lVar2;
  float *pfVar3;
  long lVar4;
  undefined8 uVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  lVar4 = (long)param_1;
  local_8 = ___stack_chk_guard;
  FUN_0408672c(aRStack_10,*(undefined8 *)(this + 0x10));
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  lVar2 = FUN_0408675c(*(undefined8 *)(lVar2 + 0x70),lVar4);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)(lVar2 + 8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_18);
  if (cVar1 == '\0') {
    uVar5 = 0;
  }
  else {
    p_Var6 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               **)(this + 0x10);
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var6);
    fVar10 = *pfVar3;
    FUN_0408672c(aRStack_10,p_Var6);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    lVar2 = FUN_0408675c(*(undefined8 *)(lVar2 + 0x70),lVar4);
    fVar7 = *(float *)(lVar2 + 0x68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    p_Var6 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               **)(this + 0x10);
    lVar2 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(p_Var6);
    uVar8 = *(undefined4 *)(lVar2 + 4);
    fVar11 = *(float *)(lVar2 + 8);
    FUN_0408672c(aRStack_10,p_Var6);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    lVar2 = FUN_0408675c(*(undefined8 *)(lVar2 + 0x70),lVar4);
    fVar9 = *(float *)(lVar2 + 0x6c);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    uVar5 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
    uVar5 = Board::AddProjectile
                      ((Board *)(fVar10 + fVar7),uVar8,fVar11 - fVar9,uVar5,aRStack_10,
                       *(undefined8 *)(this + 0x10),0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCitron::SetPopAnimDelegates(PlantAnimRig*) */

void __thiscall PlantCitron::SetPopAnimDelegates(PlantCitron *this,PlantAnimRig *param_1)

{
  PlantAnimRig *pPVar1;
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1<float> aDStack_68 [48];
  Delegate1<float> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::SetPopAnimDelegates((PlantFramework *)this,param_1);
  pPVar1 = (PlantAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
  ;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,fireProjectileCallback);
  Sexy::Delegate1<float>::Delegate1<PlantCitron,void(PlantCitron::*)(float)>(aDStack_68,aCStack_98);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,fireProjectileCallback);
  Sexy::Delegate1<float>::Delegate1<PlantCitron,void(PlantCitron::*)(float)>(aDStack_38,aCStack_80);
  PlantAnimRig::SetPlantDelegates(pPVar1,aDStack_68,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCitron::PlantCitron() */

void __thiscall PlantCitron::PlantCitron(PlantCitron *this)

{
  long lVar1;
  undefined4 uVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067cb9a0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x40),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  uVar2 = PVZ_EOT();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x48) = uVar2;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCitron::StaticNew() */

PlantCitron * PlantCitron::StaticNew(void)

{
  PlantCitron *this;
  
  this = ::operator_new(0x50);
  PlantCitron(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCitron::setState(unsigned int) */

void __thiscall PlantCitron::setState(PlantCitron *this,uint param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  PlantAnimRig_Citron *pPVar4;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar5;
  undefined8 *puVar6;
  UIEasyButtonWidget *this_01;
  code *pcVar7;
  float fVar8;
  string asStack_68 [8];
  float local_60;
  float fStack_5c;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  this_01 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if (*(uint *)(this_01 + 200) != param_1) {
    *(uint *)(this_01 + 200) = param_1;
    switch(param_1) {
    case 10:
      iVar1 = FUN_04086750(this_01);
      if (1 < iVar1) {
        plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(this_01);
        (**(code **)(*plVar2 + 0x88))();
        this_01 = *(UIEasyButtonWidget **)(this + 0x10);
      }
      lVar3 = FUN_040883d0(this_01);
      FUN_04086704(lVar3 + 0x218);
      plVar2 = (long *)FUN_040883d0(*(undefined8 *)(this + 0x10));
      (**(code **)(*plVar2 + 0x118))();
      break;
    case 0xb:
      plVar2 = (long *)FUN_040883d0(this_01);
      pcVar7 = *(code **)(*plVar2 + 0x130);
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
      (*pcVar7)(plVar2,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      break;
    case 0xc:
      lVar3 = FUN_040883d0(this_01);
      FUN_04086710(lVar3 + 0x218);
      pPVar4 = (PlantAnimRig_Citron *)FUN_040883d0(*(undefined8 *)(this + 0x10));
      PlantAnimRig_Citron::PlayRecovery(pPVar4);
      break;
    case 0xd:
      iVar1 = FUN_04086750(this_01);
      if (iVar1 == 2) {
        plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(this_01);
        fVar8 = (float)FUN_040866fc(*(undefined4 *)(*(long *)(this + 0x10) + 0x420));
        (**(code **)(*plVar2 + 0x80))(2.25 - fVar8);
      }
      else if (iVar1 < 3) {
        plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(this_01);
        fVar8 = (float)FUN_040866fc(*(undefined4 *)(*(long *)(this + 0x10) + 0x420));
        (**(code **)(*plVar2 + 0x80))(2.0 - fVar8);
      }
      else {
        plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(this_01);
        fVar8 = (float)FUN_040866fc(*(undefined4 *)(*(long *)(this + 0x10) + 0x420));
        (**(code **)(*plVar2 + 0x80))(2.4 - fVar8);
      }
      lVar3 = FUN_040883d0(*(undefined8 *)(this + 0x10));
      FUN_0408671c(lVar3 + 0x218);
      pPVar4 = (PlantAnimRig_Citron *)FUN_040883d0(*(undefined8 *)(this + 0x10));
      PlantAnimRig_Citron::PlayCharging(pPVar4);
      break;
    case 0xe:
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string(asStack_68,"POPANIM_EFFECTS_CITRON_PLANTFOOD_LIGHTNING_CHARGE");
      GetPAMByName(asStack_68);
      pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_60);
      Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar5,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
      std::string::~string(asStack_68);
      nop();
      iVar1 = (**(code **)(**(long **)(this + 0x10) + 0x170))(*(long **)(this + 0x10));
      FUN_040866cc(this_00 + 0x1c,iVar1 + -1);
      std::string::string((string *)&local_60,"Citron_Plantfood_Lightning_Charge");
      Effect_PopAnim::PlaySingleAnimation(this_00,(RtWeakPtr *)&local_60,0);
      std::string::~string((string *)&local_60);
      nop();
      StandaloneEffect::SetIsScreenSpaceEffect((StandaloneEffect *)this_00,false);
      puVar6 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               **)(this + 0x10));
      local_60 = (float)*puVar6;
      local_58 = *(undefined4 *)(puVar6 + 1);
      fStack_5c = (float)((ulong)*puVar6 >> 0x20);
      _local_60 = CONCAT44((fStack_5c + -125.0) - *(float *)(puVar6 + 1),local_60 - 100.0);
      StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_60,-1)
      ;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantCitron::Initialize() */

void __thiscall PlantCitron::Initialize(PlantCitron *this)

{
  PlantFramework::Initialize((PlantFramework *)this);
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0;
  setState(this,0xc);
  return;
}


/* PlantCitron::CancelPlantfood() */

void __thiscall PlantCitron::CancelPlantfood(PlantCitron *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  setState(this,0xc);
  return;
}


/* PlantCitron::Idle() */

void __thiscall PlantCitron::Idle(PlantCitron *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(long *)(this + 0x10) + 200);
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0;
  if (uVar1 != 10) {
    uVar1 = 0xd;
  }
  setState(this,uVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCitron::FindTargetLightningZombie() */

void PlantCitron::FindTargetLightningZombie(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long *in_x0;
  long lVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  ulong uVar6;
  float *pfVar7;
  RtWeakPtr *this_00;
  ResourceInfo *pRVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  code *pcVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  int local_30 [4];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(code **)(*in_x0 + 400) == PlantFramework::GetCollisionFlags) {
    uVar2 = PlantFramework::GetCollisionFlags();
  }
  else {
    uVar2 = (**(code **)(*in_x0 + 400))(in_x0,2);
  }
  uVar13 = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  Sexy::Insets::Insets((Insets *)local_30,-1,*(int *)(in_x0[2] + 0x110) + -1,0x14,3);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,
             (Insets *)local_30);
  uVar11 = local_20;
  fVar14 = 800.0;
  lVar5 = FUN_0408676c(local_20,local_18);
  if (lVar5 != 0) {
    do {
      FUN_04086778(uVar11,uVar13);
      nop();
      cVar1 = (**(code **)(*(long *)this + 0x328))();
      uVar11 = local_20;
      if (cVar1 == '\0') {
        pfVar7 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(this);
        fVar15 = *pfVar7;
        lVar5 = Board::GetBoardProperties(*(Board **)(gLawnApp + 0x9f0));
        uVar11 = local_20;
        if (fVar15 <= *(float *)(lVar5 + 0x10)) {
          uVar6 = 0;
          do {
            lVar5 = in_x0[5];
            uVar10 = FUN_04086780(lVar5,in_x0[6]);
            if (uVar10 <= uVar6) {
              pcVar12 = *(code **)(*(long *)this + 0x3d0);
              Plant::GetType();
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)local_30,(RtWeakPtrBase *)aRStack_38);
              cVar1 = (*pcVar12)(this,(Insets *)local_30,0);
              if ((cVar1 == '\0') ||
                 (cVar1 = (**(code **)(*(long *)this + 0xb8))(this,uVar2), cVar1 == '\0')) {
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
                uVar11 = local_20;
              }
              else {
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
                fVar15 = *pfVar7;
                if ((fVar15 < fVar14) && (Plant::GetCenterPt(), (float)local_30[0] <= fVar15)) {
                  ToolPacketData::GetProps();
                  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                            ((RtWeakPtr<SpartanBambooMatrixSystem> *)in_x8,(RtWeakPtrBase *)local_30
                            );
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
                  fVar14 = fVar15;
                }
                pcVar12 = *(code **)(*(long *)this + 0x20);
                uVar11 = Zomboss::StaticGetClass();
                cVar1 = (*pcVar12)(this,uVar11);
                uVar11 = local_20;
                if (cVar1 != '\0') {
                  (**(code **)(*(long *)this + 0xd0))((Insets *)local_30,this);
                  iVar4 = local_30[0] + -2;
                  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
                  iVar4 = FUN_040868b4(iVar4 * iVar3);
                  fVar15 = (float)iVar4 + fVar15;
                  uVar11 = local_20;
                  if ((fVar15 < fVar14) &&
                     (Plant::GetCenterPt(), uVar11 = local_20, (float)local_30[0] <= fVar15)) {
                    ToolPacketData::GetProps();
                    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                              ((RtWeakPtr<SpartanBambooMatrixSystem> *)in_x8,
                               (RtWeakPtrBase *)local_30);
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                              ((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
                    uVar11 = local_20;
                    fVar14 = fVar15;
                  }
                }
              }
              break;
            }
            this_00 = (RtWeakPtr *)FUN_0408678c(lVar5,uVar6);
            pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
            uVar11 = local_20;
            puVar9 = (undefined8 *)FUN_04086778(local_20,uVar13);
            uVar6 = uVar6 + 1;
          } while (pRVar8 != (ResourceInfo *)*puVar9);
        }
      }
      uVar13 = uVar13 + 1;
      uVar6 = FUN_0408676c(uVar11,local_18);
    } while (uVar13 < uVar6);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCitron::fireProjectileCallback(float) */

void PlantCitron::fireProjectileCallback(float param_1)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this;
  char cVar1;
  long *in_x0;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  float fVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*in_x0 + 0x180))();
  if (cVar1 == '\0') {
    FUN_04086750(in_x0[2]);
    (**(code **)(*in_x0 + 0x528))();
    MessageRouter::Post<Plant*,Plant*>
              ((MessageRouter *)gMessageRouter,Message::PlantCombos,(Plant *)in_x0[2]);
  }
  else {
    fVar6 = (float)PVZ_T();
    this = (RtWeakPtr<SpartanBambooMatrixSystem> *)(in_x0 + 8);
    pcVar5 = *(code **)(*in_x0 + 0x528);
    *(float *)(in_x0 + 9) = fVar6 + 0.75;
    (*pcVar5)();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    uVar4 = FUN_040866d4(*(undefined8 *)(lVar3 + 0xe0));
    uVar4 = operator|(uVar4,0x2000);
    FUN_040866d8(lVar2 + 0xe0,uVar4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCitron::ApplyPlantfood() */

void __thiscall PlantCitron::ApplyPlantfood(PlantCitron *this)

{
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x28));
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  setState(this,0xe);
  return;
}


/* PlantCitron::~PlantCitron() */

void __thiscall PlantCitron::~PlantCitron(PlantCitron *this)

{
  *(undefined ***)this = &PTR_GetClass_067cb9a0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantCitron::~PlantCitron() */

void __thiscall PlantCitron::~PlantCitron(PlantCitron *this)

{
  ~PlantCitron(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCitron::ReleaseChainLightning() */

void __thiscall PlantCitron::ReleaseChainLightning(PlantCitron *this)

{
  RtMixedPtrBase *this_00;
  int iVar1;
  char cVar2;
  long lVar3;
  ResourceInfo *pRVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  undefined8 *puVar5;
  LightningBolt *this_02;
  code *pcVar6;
  int iVar7;
  Plant *this_03;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  RtMixedPtrBase aRStack_90 [8];
  string asStack_88 [8];
  Point aPStack_80 [8];
  undefined8 local_78;
  undefined4 local_70;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_68 [8];
  int local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar2 != '\0') {
    this_00 = (RtMixedPtrBase *)(this + 0x40);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar2 != '\0') {
      iVar7 = 3;
      do {
        FindTargetLightningZombie();
        cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_90);
        if (cVar2 != '\0') {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)a_Stack_68,(RtWeakPtrBase *)aRStack_90);
          std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
          push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                     *)(this + 0x28),(RtWeakPtr *)a_Stack_68);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_68);
          Plant::GetProps();
          lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_68);
          lVar3 = FUN_0408675c(*(undefined8 *)(lVar3 + 0x70),2);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_68);
          pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_90);
          if (pRVar4 != (ResourceInfo *)0x0) {
            this_03 = *(Plant **)(this + 0x10);
            pcVar6 = *(code **)(*(long *)pRVar4 + 0x110);
            fVar8 = (float)FUN_040866e8(*(undefined4 *)(this_03 + 0xf4),
                                        *(undefined4 *)(this_03 + 0x100),
                                        *(undefined4 *)(this_03 + 0x104),
                                        *(undefined4 *)(this_03 + 0x3b8));
            fVar9 = (float)FUN_040866f8(*(undefined4 *)(this_03 + 0x3bc));
            iVar1 = *(int *)(lVar3 + 0x2c);
            fVar10 = (float)Plant::GetExtraDPSmodifier(this_03);
            lVar3 = *(long *)(this + 0x10);
            fVar11 = (float)FUN_04086700(*(undefined4 *)(lVar3 + 0x424));
            Sexy::Point::Point(aPStack_80,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_78,1.0,0.0);
            DamageInfo::DamageInfo
                      ((DamageInfo *)(fVar8 * fVar9 * (float)iVar1 * fVar10 * fVar11),
                       (float)local_78,local_78._4_4_,a_Stack_68,0x80,lVar3,aPStack_80,0);
            (*pcVar6)(pRVar4,a_Stack_68);
            DamageInfo::~DamageInfo((DamageInfo *)a_Stack_68);
            (**(code **)(*(long *)pRVar4 + 0x170))(pRVar4);
            this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            puVar5 = (undefined8 *)
                     std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost(this_01);
            local_78 = *puVar5;
            local_70 = *(undefined4 *)(puVar5 + 1);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            Projectile::CalcCollisionRectBoardSpace();
            local_78 = CONCAT44(local_78._4_4_,(float)local_60 + (float)local_78);
            this_02 = GameObject::Create<LightningBolt>();
            std::string::string(asStack_88,"POPANIM_EFFECTS_CITRON_AVATAR_BOLT_DEFAULT");
            std::string::string((string *)aPStack_80,"POPANIM_EFFECTS_CITRON_AVATAR_BOLT");
            std::string::string((string *)a_Stack_68,"POPANIM_EFFECTS_CITRON_AVATAR_HIT");
            LightningBolt::SetPopAnim(this_02,asStack_88,(string *)aPStack_80,(string *)a_Stack_68);
            std::string::~string((string *)a_Stack_68);
            nop();
            std::string::~string((string *)aPStack_80);
            nop();
            std::string::~string(asStack_88);
            nop();
            FUN_04086838(this_02 + 0xa9);
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)a_Stack_68,(RtWeakPtrBase *)aPStack_80);
            TwinsAssistPerson::SetOwner((TwinsAssistPerson *)this_02,a_Stack_68);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_68);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_80);
            BoardEntity::PlaceOnBoard((SexyVector3 *)this_02);
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)aPStack_80,(RtWeakPtrBase *)a_Stack_68);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_68);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)a_Stack_68,(RtWeakPtrBase *)aPStack_80);
            LightningBolt::SetInitialTarget(this_02,a_Stack_68);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_68);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_80);
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90)
        ;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_68);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)a_Stack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCitron::UpdateActions() */

void __thiscall PlantCitron::UpdateActions(PlantCitron *this)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  PopAnimRig *pPVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  
  lVar3 = *(long *)(this + 0x10);
  iVar6 = *(int *)(lVar3 + 200);
  do {
    switch(iVar6) {
    case 10:
      cVar2 = Plant::CanFindTargetInRow(lVar3,*(undefined4 *)(lVar3 + 0x110),0);
      if (cVar2 == '\0') break;
      setState(this,0xb);
      lVar3 = *(long *)(this + 0x10);
      iVar5 = *(int *)(lVar3 + 200);
      goto LAB_040897b4;
    case 0xb:
    case 0xe:
      pPVar4 = (PopAnimRig *)FUN_040883d0();
      cVar2 = PopAnimRig::IsPlayingAnything(pPVar4);
      if (cVar2 == '\0') {
        setState(this,0xc);
        lVar3 = *(long *)(this + 0x10);
        iVar5 = *(int *)(lVar3 + 200);
        goto LAB_040897b4;
      }
      break;
    case 0xc:
      pPVar4 = (PopAnimRig *)FUN_040883d0();
      cVar2 = PopAnimRig::IsPlayingAnything(pPVar4);
      if (cVar2 == '\0') {
        setState(this,0xd);
        lVar3 = *(long *)(this + 0x10);
        iVar5 = *(int *)(lVar3 + 200);
        goto LAB_040897b4;
      }
      break;
    case 0xd:
      pPVar4 = (PopAnimRig *)FUN_040883d0();
      cVar2 = PopAnimRig::IsPlayingAnything(pPVar4);
      if (cVar2 == '\0') {
        setState(this,10);
      }
      break;
    default:
      goto switchD_04089798_default;
    }
    lVar3 = *(long *)(this + 0x10);
    iVar5 = *(int *)(lVar3 + 200);
LAB_040897b4:
    bVar1 = iVar6 != iVar5;
    iVar6 = iVar5;
  } while (bVar1);
switchD_04089798_default:
  fVar7 = (float)PVZ_T();
  if (*(float *)(this + 0x48) < fVar7) {
    ReleaseChainLightning(this);
    uVar8 = PVZ_EOT();
    *(undefined4 *)(this + 0x48) = uVar8;
  }
  return;
}

