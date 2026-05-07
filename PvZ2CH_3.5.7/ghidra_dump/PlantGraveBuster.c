// Class: PlantGraveBuster


/* PlantGraveBuster::IsInvincible() const */

bool __thiscall PlantGraveBuster::IsInvincible(PlantGraveBuster *this)

{
  return *(int *)(this + 0x28) == 2;
}


/* PlantGraveBuster::CalcRenderOrder() */

void __thiscall PlantGraveBuster::CalcRenderOrder(PlantGraveBuster *this)

{
  float *pfVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  
  this_00 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(this + 0x10);
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(this_00);
  Board::MakeRenderOrder(0x64578,*(undefined4 *)(this_00 + 0x110),(int)(805.0 - *pfVar1));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGraveBuster::StaticClassInit() */

void PlantGraveBuster::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantGraveBuster");
    (*pcVar2)(plVar1,asStack_10,FUN_04033054,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGraveBuster::StaticGetClass() */

long * PlantGraveBuster::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantGraveBuster",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantGraveBuster::GetClass() const */

long * PlantGraveBuster::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantGraveBuster",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantGraveBuster::PlantGraveBuster() */

void __thiscall PlantGraveBuster::PlantGraveBuster(PlantGraveBuster *this)

{
  undefined4 uVar1;
  
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined4 *)(this + 0x28) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_067ba1c0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x2c) = uVar1;
  *(undefined4 *)(this + 0x30) = uVar1;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  return;
}


/* PlantGraveBuster::StaticNew() */

PlantGraveBuster * PlantGraveBuster::StaticNew(void)

{
  PlantGraveBuster *this;
  
  this = ::operator_new(0x40);
  PlantGraveBuster(this);
  return this;
}


/* PlantGraveBuster::~PlantGraveBuster() */

void __thiscall PlantGraveBuster::~PlantGraveBuster(PlantGraveBuster *this)

{
  *(undefined ***)this = &PTR_GetClass_067ba1c0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantGraveBuster::~PlantGraveBuster() */

void __thiscall PlantGraveBuster::~PlantGraveBuster(PlantGraveBuster *this)

{
  ~PlantGraveBuster(this);
  AK::FreeHook(this);
  return;
}


/* PlantGraveBuster::GetEatingProgress() const */

float __thiscall PlantGraveBuster::GetEatingProgress(PlantGraveBuster *this)

{
  char cVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (*(int *)(this + 0x28) == 2) {
    return 1.0;
  }
  cVar1 = FUN_0403223c(*(int *)(this + 0x28));
  if (cVar1 == '\0') {
    return 0.0;
  }
  lVar2 = FUN_040326fc(0,*(undefined8 *)(this + 0x10));
  fVar4 = *(float *)(this + 0x2c);
  fVar5 = *(float *)(lVar2 + 0x2b8);
  fVar3 = (float)PVZ_T();
  return (fVar3 - (fVar4 - fVar5)) / fVar5;
}


/* PlantGraveBuster::GetAdditionalDrawHeightOffset() */

float __thiscall PlantGraveBuster::GetAdditionalDrawHeightOffset(PlantGraveBuster *this)

{
  float fVar1;
  
  fVar1 = (float)GetEatingProgress(this);
  return fVar1 * 80.0;
}


/* PlantGraveBuster::onKilled(bool) */

void PlantGraveBuster::onKilled(bool param_1)

{
  RtMixedPtrBase *this;
  char cVar1;
  GridItemGravestone *this_00;
  float fVar2;
  
  this = (RtMixedPtrBase *)((PlantGraveBuster *)(ulong)param_1 + 0x38);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar1 == '\0') {
    return;
  }
  this_00 = (GridItemGravestone *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  fVar2 = (float)GetEatingProgress((PlantGraveBuster *)(ulong)param_1);
  GridItemGravestone::CancelBeingEaten(this_00,fVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGraveBuster::Draw(Sexy::Graphics*) */

void __thiscall PlantGraveBuster::Draw(PlantGraveBuster *this,Graphics *param_1)

{
  PopAnimRig *pPVar1;
  undefined4 *puVar2;
  long lVar3;
  PASpriteInst *pPVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float local_68;
  float local_64;
  GraphicsAutoState aGStack_60 [8];
  string asStack_58 [8];
  int local_50;
  int local_4c;
  int local_48;
  string asStack_40 [16];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Draw((Graphics *)this);
  if (*(int *)(this + 0x28) - 1U < 2) {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_60,param_1);
    local_68 = 0.0;
    local_64 = 0.0;
    pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_40,"gravebuster_dirt");
    PopAnimRig::CalcLayerTranslation(pPVar1,asStack_40,&local_68,&local_64);
    std::string::~string(asStack_40);
    nop();
    fVar7 = *(float *)(param_1 + 0x20);
    puVar2 = (undefined4 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             **)(this + 0x10));
    fVar5 = (float)FUN_04032250(*puVar2);
    uVar6 = puVar2[1];
    fVar8 = *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x10) =
         *(float *)(param_1 + 0x10) + fVar7 +
         (float)(int)((fVar5 - fVar7) * *(float *)(param_1 + 0x18));
    fVar5 = (float)FUN_04032250(uVar6);
    *(float *)(param_1 + 0x14) =
         *(float *)(param_1 + 0x14) + fVar8 +
         (float)(int)((fVar5 - fVar8) * *(float *)(param_1 + 0x1c));
    Plant::GetProps();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
    fVar5 = (float)FUN_04032250(*(float *)(param_1 + 0x18) * *(float *)(lVar3 + 0x9c));
    Plant::GetProps();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
    fVar7 = (float)FUN_04032250(*(float *)(param_1 + 0x1c) * *(float *)(lVar3 + 0xa0));
    Sexy::Graphics::Translate(param_1,(int)-fVar5,(int)-fVar7);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
    UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    PopAnimRig::GetPAMColor();
    if (*(int *)(this + 0x28) == 2) {
      lVar3 = FUN_040326fc(*(undefined8 *)(this + 0x10));
      fVar5 = *(float *)(this + 0x30);
      fVar8 = *(float *)(lVar3 + 700);
      fVar7 = (float)PVZ_T();
      pPVar1 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      Sexy::Insets::Insets
                ((Insets *)asStack_40,local_50,local_4c,local_48,
                 (int)((1.0 - (fVar7 - (fVar5 - fVar8)) / fVar8) * 255.0));
      PopAnimRig::SetPAMColor(pPVar1,(Color *)asStack_40);
    }
    Sexy::Insets::Insets((Insets *)asStack_40);
    pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_58,"gravebuster_dirt");
    pPVar4 = (PASpriteInst *)PopAnimRig::CalcSymbolRect(pPVar1,asStack_58,(TRect *)asStack_40);
    std::string::~string(asStack_58);
    nop();
    pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    PopAnimRig::DrawSprite(pPVar1,param_1,pPVar4,aSStack_30);
    pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    PopAnimRig::SetPAMColor(pPVar1,(Color *)&local_50);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGraveBuster::OnStateChanged(GraveBusterState) */

void PlantGraveBuster::OnStateChanged(long param_1)

{
  int iVar1;
  long *plVar2;
  PlantAnimRig *pPVar3;
  long lVar4;
  GridItemGravestone *this;
  RealObject *this_00;
  code *pcVar5;
  float fVar6;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  iVar1 = *(int *)(param_1 + 0x28);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 1) {
    fVar6 = (float)PVZ_T();
    lVar4 = FUN_040326fc(*(undefined8 *)(param_1 + 0x10));
    *(float *)(param_1 + 0x2c) = fVar6 + *(float *)(lVar4 + 0x2b8);
    plVar2 = (long *)FUN_04032bec(*(undefined8 *)(param_1 + 0x10));
    (**(code **)(*plVar2 + 0x260))();
    lVar4 = Board::GetGridItemGravestone
                      (*(Board **)(gLawnApp + 0x9f0),*(int *)(*(long *)(param_1 + 0x10) + 0x114),
                       *(int *)(*(long *)(param_1 + 0x10) + 0x110));
    RealObject::SetUseGroundClipRect(*(RealObject **)(param_1 + 0x10),true);
    if (lVar4 != 0) {
      nop();
      GridItemGravestone::SetBeingEaten(this);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x38),
                 (RtWeakPtrBase *)asStack_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
    }
  }
  else if (iVar1 == 2) {
    fVar6 = (float)PVZ_T();
    lVar4 = FUN_040326fc(*(undefined8 *)(param_1 + 0x10));
    *(float *)(param_1 + 0x30) = fVar6 + *(float *)(lVar4 + 700);
  }
  else if (iVar1 == 0) {
    plVar2 = (long *)FUN_04032bec(*(undefined8 *)(param_1 + 0x10));
    pcVar5 = *(code **)(*plVar2 + 600);
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
    (*pcVar5)(plVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    pPVar3 = (PlantAnimRig *)
             UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
    PlantAnimRig::SetState(pPVar3,0xe);
    this_00 = *(RealObject **)(param_1 + 0x10);
    std::string::string(asStack_58,"Play_GraveBusterChomp");
    RealObject::PlayPositionalSound(this_00,asStack_58,0.0);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGraveBuster::SetState(GraveBusterState) */

void __thiscall PlantGraveBuster::SetState(PlantGraveBuster *this,int param_2)

{
  int iVar1;
  char cVar2;
  SexyVector3 *pSVar3;
  
  iVar1 = *(int *)(this + 0x28);
  if (iVar1 != param_2) {
    *(int *)(this + 0x28) = param_2;
    OnStateChanged(this,iVar1);
    cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    if ((cVar2 != '\0') && (param_2 == 2)) {
      pSVar3 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               **)(this + 0x10));
      Board::FanOutSun(*(Board **)(gLawnApp + 0x9f0),pSVar3,0x32,false,false,false,false,false);
      return;
    }
  }
  return;
}


/* PlantGraveBuster::Initialize() */

void __thiscall PlantGraveBuster::Initialize(PlantGraveBuster *this)

{
  char cVar1;
  undefined4 uVar2;
  
  PlantFramework::Initialize((PlantFramework *)this);
  *(undefined4 *)(this + 0x28) = 0xffffffff;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x2c) = uVar2;
  cVar1 = Plant::IsOnBoard(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    return;
  }
  SetState(this,0);
  return;
}


/* PlantGraveBuster::UpdateState() */

void __thiscall PlantGraveBuster::UpdateState(PlantGraveBuster *this)

{
  int iVar1;
  char cVar2;
  PopAnimRig *this_00;
  GridItemGravestone *this_01;
  float fVar3;
  
  iVar1 = *(int *)(this + 0x28);
  if (iVar1 == 1) {
    fVar3 = (float)PVZ_T();
    if (*(float *)(this + 0x2c) < fVar3) {
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x38));
      if (cVar2 != '\0') {
        this_01 = (GridItemGravestone *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
        GridItemGravestone::FinishEatingAndDestroy(this_01);
      }
      SetState(this,2);
      return;
    }
  }
  else if (iVar1 == 2) {
    fVar3 = (float)PVZ_T();
    if (*(float *)(this + 0x30) < fVar3) {
      Plant::KillPlant(*(Plant **)(this + 0x10),1,0,0x8000000000);
      return;
    }
  }
  else if (iVar1 == 0) {
    this_00 = (PopAnimRig *)
              UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    cVar2 = PopAnimRig::IsPlayingAnything(this_00);
    if (cVar2 == '\0') {
      SetState(this,1);
      return;
    }
  }
  return;
}


/* PlantGraveBuster::UpdateActions() */

void __thiscall PlantGraveBuster::UpdateActions(PlantGraveBuster *this)

{
  int iVar1;
  char cVar2;
  PopAnimRig *this_00;
  GridItemGravestone *this_01;
  float fVar3;
  
  iVar1 = *(int *)(this + 0x28);
  if (iVar1 == 1) {
    fVar3 = (float)PVZ_T();
    if (*(float *)(this + 0x2c) < fVar3) {
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x38));
      if (cVar2 != '\0') {
        this_01 = (GridItemGravestone *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
        GridItemGravestone::FinishEatingAndDestroy(this_01);
      }
      SetState(this,2);
      return;
    }
  }
  else if (iVar1 == 2) {
    fVar3 = (float)PVZ_T();
    if (*(float *)(this + 0x30) < fVar3) {
      Plant::KillPlant(*(Plant **)(this + 0x10),1,0,0x8000000000);
      return;
    }
  }
  else if (iVar1 == 0) {
    this_00 = (PopAnimRig *)
              UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    cVar2 = PopAnimRig::IsPlayingAnything(this_00);
    if (cVar2 == '\0') {
      SetState(this,1);
      return;
    }
  }
  return;
}

