// Class: PlantFireGourd


/* PlantFireGourd::isReadyToFire() */

bool __thiscall PlantFireGourd::isReadyToFire(PlantFireGourd *this)

{
  return *(int *)(*(long *)(this + 0x10) + 200) - 0xbU < 3;
}


/* PlantFireGourd::unregisterForEvents() */

void __thiscall PlantFireGourd::unregisterForEvents(PlantFireGourd *this)

{
  char cVar1;
  
  cVar1 = PlantFramework::IsArenaBattle();
  if (cVar1 != '\0') {
    return;
  }
  LawnApp::UnregisterBoardTouchGameplayObject(gLawnApp,this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFireGourd::GetDamageFlags(PlantWeapon) */

void __thiscall PlantFireGourd::GetDamageFlags(undefined8 param_1,int param_2)

{
  undefined8 local_10;
  long local_8;
  
  local_10 = 0x400;
  local_8 = ___stack_chk_guard;
  if (param_2 == 1) {
    operator|=(&local_10,0x2000);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10);
}


/* PlantFireGourd::onCancelEvent() */

void __thiscall PlantFireGourd::onCancelEvent(PlantFireGourd *this)

{
  *(undefined8 *)(this + 0x30) = 0;
  return;
}


/* PlantFireGourd::OnUseActionAnimCommand(float) */

void PlantFireGourd::OnUseActionAnimCommand(float param_1)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFireGourd::StaticClassInit() */

void PlantFireGourd::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantFireGourd");
    (*pcVar2)(plVar1,asStack_10,FUN_04084ae0,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantFireGourd::StaticGetClass() */

long * PlantFireGourd::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantFireGourd",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantFireGourd::GetClass() const */

long * PlantFireGourd::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantFireGourd",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFireGourd::GetPrimaryTarget(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&) */

void __thiscall PlantFireGourd::GetPrimaryTarget(PlantFireGourd *this,vector *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_18 [2];
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x2b8))(local_18,this,0);
  iVar1 = BoardTransforms::GridToBoardSpaceX(*(int *)(*(long *)(this + 0x10) + 0x114));
  iVar2 = BoardTransforms::GridToBoardSpaceXUnbounded
                    (*(int *)(*(long *)(this + 0x10) + 0x114) + *(int *)(this + 0x38));
  local_18[0] = (int)(float)iVar1;
  local_10 = (int)((float)iVar2 - (float)iVar1);
  uVar3 = operator|(2,4);
  EntityFinder::GetEntitiesTouchingRectangle
            (param_1,uVar3,local_18,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),
             *(undefined4 *)(*(long *)(this + 0x10) + 0x110));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFireGourd::CalcFiringAnimRenderOrder() */

void __thiscall PlantFireGourd::CalcFiringAnimRenderOrder(PlantFireGourd *this)

{
  float *pfVar1;
  int iStack_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  BoardTransforms::BoardSpaceToGrid(*pfVar1,pfVar1[1],&iStack_10,&local_c);
  Board::MakeRenderOrder(0x65130,local_c,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFireGourd::OnAnimCommand(std::string const&, std::string const&) */

void __thiscall PlantFireGourd::OnAnimCommand(PlantFireGourd *this,string *param_1,string *param_2)

{
  bool bVar1;
  string *psVar2;
  string *psVar3;
  RealObject *this_00;
  string asStack_10 [8];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"use_special_avatar");
  if (bVar1) {
    this_00 = *(RealObject **)(this + 0x10);
    std::string::string(asStack_10,"Play_Plant_FireGourd_Attack");
    RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
    psVar2 = (string *)0x1;
    psVar3 = ___stack_chk_guard;
    param_2 = local_8;
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
  else {
    psVar2 = ___stack_chk_guard;
    psVar3 = local_8;
    if (local_8 == ___stack_chk_guard) {
      PlantFramework::OnAnimCommand((string *)this,param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(psVar2,psVar3,param_2);
}


/* PlantFireGourd::Draw(Sexy::Graphics*) */

void __thiscall PlantFireGourd::Draw(PlantFireGourd *this,Graphics *param_1)

{
  bool bVar1;
  long *plVar2;
  
  PlantFramework::Draw((Graphics *)this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x70));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x70));
    (**(code **)(*plVar2 + 0xe8))(plVar2,param_1);
  }
  return;
}


/* PlantFireGourd::onDestroy() */

void __thiscall PlantFireGourd::onDestroy(PlantFireGourd *this)

{
  bool bVar1;
  long *plVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x78));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x78));
    (**(code **)(*plVar2 + 0x48))();
  }
  PlantFramework::onDestroy((PlantFramework *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFireGourd::OnRelocating(Sexy::SexyVector2) */

void PlantFireGourd::OnRelocating(float param_1,float param_2,PlantFireGourd *param_3)

{
  bool bVar1;
  int iVar2;
  StandaloneEffect *this;
  int local_20;
  int local_1c;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_3 + 0x78));
  if (bVar1) {
    Sexy::Point::Point((Point *)&local_20,(int)param_1,(int)param_2);
    this = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_3 + 0x78));
    EATextSquish::Vec3::Vec3(aVStack_18,(float)local_20,(float)(local_1c + -10),0.0);
    iVar2 = CalcFiringAnimRenderOrder(param_3);
    StandaloneEffect::SetBoardSpaceOrigin(this,(SexyVector3 *)aVStack_18,iVar2 + 1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantFireGourd::onThrown() */

void __thiscall PlantFireGourd::onThrown(PlantFireGourd *this)

{
  bool bVar1;
  StandaloneEffect *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x78));
  if (bVar1) {
    this_00 = (StandaloneEffect *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x78));
    StandaloneEffect::SetVisibility(this_00,false);
  }
  PlantFramework::onBeThrown((PlantFramework *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFireGourd::SetPopAnimDelegates(PlantAnimRig*) */

void __thiscall PlantFireGourd::SetPopAnimDelegates(PlantFireGourd *this,PlantAnimRig *param_1)

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
            ((ReceivedDataCallback *)this,OnUseSpecialAnimCommand);
  Sexy::Delegate1<float>::Delegate1<PlantFireGourd,void(PlantFireGourd::*)(float)>
            (aDStack_68,aCStack_98);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnUseActionAnimCommand);
  Sexy::Delegate1<float>::Delegate1<PlantFireGourd,void(PlantFireGourd::*)(float)>
            (aDStack_38,aCStack_80);
  PlantAnimRig::SetPlantDelegates(pPVar1,aDStack_68,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFireGourd::FindTargetAndFire(PlantWeapon) */

void __thiscall PlantFireGourd::FindTargetAndFire(PlantFireGourd *this,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ResourceInfo *pRVar4;
  undefined1 auStack_2c [4];
  undefined8 local_28;
  RtWeakPtr aRStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = (**(code **)(*(long *)this + 0x180))();
  if (cVar2 == '\0') {
    iVar1 = *(int *)(*(long *)(this + 0x10) + 0x110);
    Sexy::Insets::Insets(aIStack_18,*(int *)(*(long *)(this + 0x10) + 0x114),iVar1 + -1,2,3);
    (**(code **)(*(long *)this + 0x100))(aRStack_20,this,aIStack_18,param_2);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    if (pRVar4 == (ResourceInfo *)0x0) {
      local_28 = (**(code **)(*(long *)this + 0x3f8))(this,param_2);
      (**(code **)(*(long *)this + 0xe0))(aRStack_20,this,iVar1,param_2,auStack_2c,&local_28);
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      if (!bVar3) {
        (**(code **)(*(long *)this + 0xe0))(aRStack_20,this,iVar1 + -1,param_2,auStack_2c,&local_28)
        ;
        cVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20)
        ;
        if (!(bool)cVar2) {
          (**(code **)(*(long *)this + 0xe0))
                    (aRStack_20,this,iVar1 + 1,param_2,auStack_2c,&local_28);
          bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
          if (!bVar3) goto LAB_040827a0;
        }
      }
    }
    cVar2 = '\x01';
    (**(code **)(*(long *)this + 0x1a0))(this);
  }
LAB_040827a0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFireGourd::PlantFireGourd() */

void __thiscall PlantFireGourd::PlantFireGourd(PlantFireGourd *this)

{
  long lVar1;
  Board *this_00;
  undefined4 uVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined ***)this = &PTR_GetClass_067caf20;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x70));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x78));
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"gourdFire");
  Board::AddGridItem(this_00,asStack_10,0,0,1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x70),(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  std::string::~string(asStack_10);
  nop();
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x4c) = uVar2;
  *(undefined4 *)(this + 0x50) = uVar2;
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x38) = 4;
  *(undefined4 *)(this + 0x3c) = 0x3f800000;
  *(undefined4 *)(this + 0x40) = 0x3f800000;
  *(undefined4 *)(this + 0x44) = 0x3f800000;
  *(undefined4 *)(this + 0x48) = 0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantFireGourd::StaticNew() */

PlantFireGourd * PlantFireGourd::StaticNew(void)

{
  PlantFireGourd *this;
  
  this = ::operator_new(0x80);
  PlantFireGourd(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFireGourd::registerForEvents() */

void __thiscall PlantFireGourd::registerForEvents(PlantFireGourd *this)

{
  char cVar1;
  Board *pBVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a8 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_a0 [8];
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = PlantFramework::IsArenaBattle();
  if (cVar1 == '\0') {
    pBVar2 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onTouchEvent);
    Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
    Delegate1wRet<PlantFireGourd,bool(PlantFireGourd::*)(Sexy::Touch_const&)>(aDStack_68,aCStack_98)
    ;
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a0,(RtWeakPtrBase *)aRStack_a8);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onCancelEvent);
    Sexy::Delegate0::Delegate0<PlantFireGourd,void(PlantFireGourd::*)()>(aDStack_38,aCStack_80);
    Board::RegisterTouchGameplayObject(pBVar2,aDStack_68,2,aRStack_a0,aDStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantFireGourd::CalcDamageGridAndAmount() */

void __thiscall PlantFireGourd::CalcDamageGridAndAmount(PlantFireGourd *this)

{
  int iVar1;
  long lVar2;
  Plant *this_00;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar1 = *(int *)(*(long *)(this + 0x10) + 200);
  if (iVar1 == 0xb) {
    *(undefined4 *)(this + 0x38) = 1;
    lVar2 = FUN_04082d84();
    this_00 = *(Plant **)(this + 0x10);
    fVar3 = (float)FUN_04081e48(*(undefined4 *)(this_00 + 0xf4),*(undefined4 *)(this_00 + 0x100),
                                *(undefined4 *)(this_00 + 0x104),*(undefined4 *)(this_00 + 0x3b8));
    fVar4 = (float)FUN_04081e58(*(undefined4 *)(this_00 + 0x3bc));
    fVar3 = fVar3 * fVar4;
    fVar4 = *(float *)(lVar2 + 0x2b8);
  }
  else if (iVar1 == 0xc) {
    *(undefined4 *)(this + 0x38) = 2;
    lVar2 = FUN_04082d84();
    this_00 = *(Plant **)(this + 0x10);
    fVar3 = (float)FUN_04081e48(*(undefined4 *)(this_00 + 0xf4),*(undefined4 *)(this_00 + 0x100),
                                *(undefined4 *)(this_00 + 0x104),*(undefined4 *)(this_00 + 0x3b8));
    fVar4 = (float)FUN_04081e58(*(undefined4 *)(this_00 + 0x3bc));
    fVar3 = fVar3 * fVar4;
    fVar4 = *(float *)(lVar2 + 700);
  }
  else {
    if (iVar1 != 0xd) {
      return;
    }
    *(undefined4 *)(this + 0x38) = 4;
    lVar2 = FUN_04082d84();
    this_00 = *(Plant **)(this + 0x10);
    fVar3 = (float)FUN_04081e48(*(undefined4 *)(this_00 + 0xf4),*(undefined4 *)(this_00 + 0x100),
                                *(undefined4 *)(this_00 + 0x104),*(undefined4 *)(this_00 + 0x3b8));
    fVar4 = (float)FUN_04081e58(*(undefined4 *)(this_00 + 0x3bc));
    fVar3 = fVar3 * fVar4;
    fVar4 = *(float *)(lVar2 + 0x2c0);
  }
  fVar5 = (float)Plant::GetExtraDPSmodifier(this_00);
  fVar6 = (float)FUN_04081e60(*(undefined4 *)(*(long *)(this + 0x10) + 0x424));
  *(float *)(this + 0x48) = fVar3 * fVar4 * fVar5 * fVar6;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFireGourd::setState(int) */

void __thiscall PlantFireGourd::setState(PlantFireGourd *this,int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  UIEasyButtonWidget *this_00;
  PlantAnimRig_DevilsFlower *pPVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  float *pfVar9;
  PopAnimRig *pPVar10;
  PlantAnimRig_WizardThorns *pPVar11;
  long *plVar12;
  char *__s;
  ulong uVar13;
  RealObject *this_01;
  undefined8 uVar14;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  RtMixedPtr aRStack_88 [8];
  int local_80 [2];
  int local_78 [4];
  undefined8 local_68;
  undefined8 local_60;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if (*(int *)(this_00 + 200) == param_1) goto switchD_04082fd4_caseD_c;
  *(int *)(this_00 + 200) = param_1;
  switch(param_1) {
  case 10:
    pPVar5 = (PlantAnimRig_DevilsFlower *)FUN_04082cfc();
    std::string::string((string *)&local_68,"attack_loop");
    PlantAnimRig_DevilsFlower::playLoopAnimation(pPVar5,(string *)&local_68);
    std::string::~string((string *)&local_68);
    nop();
    PlantAnimRig::SetState((PlantAnimRig *)pPVar5,0xe);
    this_01 = *(RealObject **)(this + 0x10);
    std::string::string((string *)&local_68,"Play_Plant_FireGourd_Attack");
    RealObject::PlayPositionalSound(this_01,(string *)&local_68,0.0);
    std::string::~string((string *)&local_68);
    nop();
    break;
  case 0xb:
    pPVar11 = (PlantAnimRig_WizardThorns *)FUN_04082cfc();
    __s = "rest";
    goto LAB_04083360;
  case 0xd:
    pPVar10 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
    Sexy::Color::Color((Color *)&local_68,1);
    PopAnimRig::SetPAMColor(pPVar10,(Color *)&local_68);
    break;
  case 0xe:
    pPVar11 = (PlantAnimRig_WizardThorns *)FUN_04082cfc();
    std::string::string((string *)&local_68,"attack_ready");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_88);
    std::string::string((string *)local_78,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
               (RtId *)local_80,(string *)local_78);
    PlantAnimRig_WizardThorns::PlayTapAnimation(pPVar11,(string *)&local_68,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)local_78);
    nop();
    Sexy::RtId::~RtId((RtId *)local_80);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
    std::string::~string((string *)&local_68);
    nop();
    pPVar10 = (PopAnimRig *)
              UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    Sexy::Color::Color((Color *)&local_68,1);
    PopAnimRig::SetPAMColor(pPVar10,(Color *)&local_68);
    break;
  case 0xf:
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x78));
    if (bVar3) {
      plVar12 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x78));
      (**(code **)(*plVar12 + 0x48))();
    }
    uVar13 = 0;
    pPVar5 = (PlantAnimRig_DevilsFlower *)FUN_04082cfc(*(undefined8 *)(this + 0x10));
    std::string::string((string *)&local_68,"rest");
    PlantAnimRig_DevilsFlower::playLoopAnimation(pPVar5,(string *)&local_68);
    std::string::~string((string *)&local_68);
    nop();
    fVar15 = (float)PVZ_T();
    fVar16 = (float)FUN_04081e5c(*(undefined4 *)(*(long *)(this + 0x10) + 0x420));
    *(float *)(this + 0x3c) = fVar15 + fVar16 * 5.0;
    fVar15 = (float)PVZ_T();
    fVar16 = (float)FUN_04081e5c(*(undefined4 *)(*(long *)(this + 0x10) + 0x420));
    *(float *)(this + 0x40) = fVar15 + fVar16 * 10.0;
    fVar15 = (float)PVZ_T();
    fVar16 = (float)FUN_04081e5c(*(undefined4 *)(*(long *)(this + 0x10) + 0x420));
    *(float *)(this + 0x44) = fVar15 + fVar16 * 15.0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68);
    Sexy::Insets::Insets
              ((Insets *)local_78,*(int *)(*(long *)(this + 0x10) + 0x114),
               *(int *)(*(long *)(this + 0x10) + 0x110),*(int *)(this + 0x38) + 1,1);
    EntityFinder::GetEntitiesInGridSquares((string *)&local_68,4,(Insets *)local_78);
    uVar14 = local_68;
    lVar6 = FUN_04081e9c(local_68,local_60);
    if (lVar6 != 0) {
      do {
        puVar7 = (undefined8 *)FUN_04081ea8(uVar14,uVar13);
        bVar3 = Sexy::RtObject::IsA<GridItemFlame>((RtObject *)*puVar7);
        if (!bVar3) {
          puVar7 = (undefined8 *)FUN_04081ea8(local_68,uVar13);
          bVar3 = Sexy::RtObject::IsA<GridItemEnergyGrid>((RtObject *)*puVar7);
          if (!bVar3) {
            puVar7 = (undefined8 *)FUN_04081ea8(local_68,uVar13);
            bVar3 = Sexy::RtObject::IsA<GridItemArmrack>((RtObject *)*puVar7);
            if (bVar3) {
              lVar6 = FUN_04082d84(*(undefined8 *)(this + 0x10));
              puVar7 = (undefined8 *)FUN_04081ea8(local_68,uVar13);
              this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)*puVar7;
              fVar15 = *(float *)(lVar6 + 0x2d4);
              *(undefined4 *)(this_02 + 0x30) = 1;
              *(int *)(this_02 + 0x34) = (int)fVar15;
              uVar17 = PVZ_EOT();
              *(undefined4 *)(this_02 + 0x3c) = uVar17;
              pfVar9 = (float *)std::
                                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                ::_M_leftmost(this_02);
              BoardTransforms::BoardSpaceToGrid(*pfVar9,pfVar9[1],local_80,local_78);
              bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x70));
              if (bVar3) {
                iVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x70));
                iVar2 = local_78[0];
                iVar1 = local_80[0];
                fVar15 = *(float *)(lVar6 + 0x2c8);
                puVar7 = (undefined8 *)FUN_04081ea8(local_68,uVar13);
                Sexy::RtObject::Cast<GridItemArmrack>((RtObject *)*puVar7);
                GridItemGourdFire::fire(iVar4,iVar2,iVar1,fVar15,(GridItemArmrack *)0x0);
              }
            }
          }
        }
        uVar14 = local_68;
        uVar13 = uVar13 + 1;
        uVar8 = FUN_04081e9c(local_68,local_60);
      } while (uVar13 < uVar8);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_68);
    break;
  case 0x10:
    pPVar11 = (PlantAnimRig_WizardThorns *)FUN_04082cfc();
    __s = "return";
LAB_04083360:
    std::string::string((string *)&local_68,__s);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_88);
    std::string::string((string *)local_78,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
               (RtId *)local_80,(string *)local_78);
    PlantAnimRig_WizardThorns::PlayTapAnimation(pPVar11,(string *)&local_68,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)local_78);
    nop();
    Sexy::RtId::~RtId((RtId *)local_80);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
    std::string::~string((string *)&local_68);
    nop();
  }
switchD_04082fd4_caseD_c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFireGourd::Initialize() */

void __thiscall PlantFireGourd::Initialize(PlantFireGourd *this)

{
  PlantAnimRig_DevilsFlower *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  this[0x28] = (PlantFireGourd)0x0;
  setState(this,0xd);
  pPVar1 = (PlantAnimRig_DevilsFlower *)FUN_04082cfc(*(undefined8 *)(this + 0x10));
  std::string::string(asStack_10,"idle3");
  PlantAnimRig_DevilsFlower::playLoopAnimation(pPVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantFireGourd::AutoFire() */

void __thiscall PlantFireGourd::AutoFire(PlantFireGourd *this)

{
  long lVar1;
  Plant *this_00;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  *(undefined4 *)(this + 0x38) = 4;
  lVar1 = FUN_04082d84(*(undefined8 *)(this + 0x10));
  this_00 = *(Plant **)(this + 0x10);
  fVar2 = (float)FUN_04081e48(*(undefined4 *)(this_00 + 0xf4),*(undefined4 *)(this_00 + 0x100),
                              *(undefined4 *)(this_00 + 0x104),*(undefined4 *)(this_00 + 0x3b8));
  fVar3 = (float)FUN_04081e58(*(undefined4 *)(this_00 + 0x3bc));
  fVar4 = *(float *)(lVar1 + 0x2c0);
  fVar5 = (float)Plant::GetExtraDPSmodifier(this_00);
  fVar6 = (float)FUN_04081e60(*(undefined4 *)(*(long *)(this + 0x10) + 0x424));
  *(float *)(this + 0x48) = fVar2 * fVar3 * fVar4 * fVar5 * fVar6;
  setState(this,0xe);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFireGourd::willStartFiringAnimation() */

void __thiscall PlantFireGourd::willStartFiringAnimation(PlantFireGourd *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  Effect_PopAnim *pEVar5;
  ResourceInfo *pRVar6;
  StandaloneEffect *pSVar7;
  float *pfVar8;
  long *plVar9;
  size_t __n;
  long lVar10;
  Plant *this_01;
  RealObject *this_02;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int local_20;
  int local_1c;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x28] == (PlantFireGourd)0x0) {
    lVar4 = FUN_04082d84(*(undefined8 *)(this + 0x10));
    setState(this,10);
    if (this[0x28] == (PlantFireGourd)0x0) goto LAB_04083664;
LAB_040838fc:
    this_01 = *(Plant **)(this + 0x10);
    uVar16 = *(undefined4 *)(this_01 + 0x100);
    uVar18 = *(undefined4 *)(this_01 + 0x104);
    uVar19 = *(undefined4 *)(this_01 + 0x3b8);
    uVar12 = *(undefined4 *)(this_01 + 0xf4);
    *(int *)(this + 0x38) = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) + 1;
    fVar11 = (float)FUN_04081e48(uVar12,uVar16,uVar18,uVar19);
    fVar13 = (float)FUN_04081e58(*(undefined4 *)(this_01 + 0x3bc));
    fVar17 = *(float *)(lVar4 + 0x2c4);
    fVar14 = (float)Plant::GetExtraDPSmodifier(this_01);
    lVar10 = *(long *)(this + 0x10);
    fVar15 = (float)FUN_04081e60(*(undefined4 *)(lVar10 + 0x424));
    *(float *)(this + 0x48) = fVar11 * fVar13 * fVar17 * fVar14 * fVar15;
  }
  else {
    cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    if (cVar2 != '\0') goto LAB_0408389c;
    lVar4 = FUN_04082d84(*(undefined8 *)(this + 0x10));
    setState(this,10);
    if (this[0x28] != (PlantFireGourd)0x0) goto LAB_040838fc;
LAB_04083664:
    lVar10 = *(long *)(this + 0x10);
  }
  iVar3 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8);
  if (iVar3 < *(int *)(lVar10 + 0x114) + *(int *)(this + 0x38)) {
    *(int *)(this + 0x38) = iVar3 - *(int *)(lVar10 + 0x114);
  }
  fVar11 = (float)PVZ_T();
  this_02 = *(RealObject **)(this + 0x10);
  *(float *)(this + 0x4c) = fVar11 + *(float *)(lVar4 + 0x2c8);
  if (this[0x28] == (PlantFireGourd)0x0) {
    iVar3 = FUN_04081e68(this_02);
    if (iVar3 == 2) {
      fVar11 = (float)PVZ_T();
      this_02 = *(RealObject **)(this + 0x10);
      *(float *)(this + 0x4c) = *(float *)(lVar4 + 0x2c8) + 1.0 + fVar11;
    }
    else if (2 < iVar3) {
      fVar11 = (float)PVZ_T();
      this_02 = *(RealObject **)(this + 0x10);
      *(float *)(this + 0x4c) = *(float *)(lVar4 + 0x2c8) + 2.0 + fVar11;
    }
  }
  this_00 = (RtWeakPtr *)(this + 0x78);
  std::string::string(asStack_18,"Play_Coconut_Cannon_Fire");
  RealObject::PlayPositionalSound(this_02,asStack_18,0.0);
  std::string::~string(asStack_18);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar9 + 0x48))();
  }
  Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)asStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  pEVar5 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string((string *)&local_20,"POPANIM_PLANT_PLANT_KONGFU_CUCURBIT_FIRE");
  GetPAMByName((string *)&local_20);
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar5,(PopAnim *)pRVar6,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  std::string::~string((string *)&local_20);
  nop();
  pEVar5 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Effect_PopAnim::SetCentered(pEVar5,true);
  pSVar7 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  StandaloneEffect::SetKeepAlive(pSVar7,true);
  pSVar7 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  StandaloneEffect::SetVisibility(pSVar7,true);
  pfVar8 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  Sexy::Point::Point((Point *)&local_20,(int)*pfVar8,(int)pfVar8[1]);
  pSVar7 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,(float)local_20,(float)(local_1c + -10),0.0);
  iVar3 = CalcFiringAnimRenderOrder(this);
  __n = (size_t)(iVar3 + 1U);
  StandaloneEffect::SetBoardSpaceOrigin(pSVar7,(SexyVector3 *)asStack_18,iVar3 + 1U);
  Set8BytesTo0(asStack_18);
  iVar3 = *(int *)(this + 0x38);
  if (iVar3 == 2) {
    std::string::append(asStack_18,"cubit_fire2",__n);
  }
  else if (iVar3 == 4) {
    std::string::append(asStack_18,"cubit_fire4",__n);
  }
  else if (iVar3 == 1) {
    std::string::append(asStack_18,"cubit_fire1",__n);
  }
  else {
    std::string::append(asStack_18,"cubit_plantfood",__n);
  }
  if (this[0x28] != (PlantFireGourd)0x0) {
    std::string::append(asStack_18,"cubit_plantfood",__n);
  }
  pEVar5 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar5,asStack_18,0);
  std::string::~string(asStack_18);
LAB_0408389c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFireGourd::OnUseSpecialAnimCommand(float) */

void PlantFireGourd::OnUseSpecialAnimCommand(float param_1)

{
  RtWeakPtr *this;
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  Effect_PopAnim *pEVar5;
  ResourceInfo *pRVar6;
  StandaloneEffect *pSVar7;
  float *pfVar8;
  long *plVar9;
  PlantFireGourd *in_x0;
  size_t __n;
  long lVar10;
  Plant *this_00;
  RealObject *this_01;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int iStack_20;
  int iStack_1c;
  string asStack_18 [16];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (in_x0[0x28] == (PlantFireGourd)0x0) {
    lVar4 = FUN_04082d84(*(undefined8 *)(in_x0 + 0x10));
    setState(in_x0,10);
    if (in_x0[0x28] == (PlantFireGourd)0x0) goto LAB_04083664;
LAB_040838fc:
    this_00 = *(Plant **)(in_x0 + 0x10);
    uVar16 = *(undefined4 *)(this_00 + 0x100);
    uVar18 = *(undefined4 *)(this_00 + 0x104);
    uVar19 = *(undefined4 *)(this_00 + 0x3b8);
    uVar12 = *(undefined4 *)(this_00 + 0xf4);
    *(int *)(in_x0 + 0x38) = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) + 1;
    fVar11 = (float)FUN_04081e48(uVar12,uVar16,uVar18,uVar19);
    fVar13 = (float)FUN_04081e58(*(undefined4 *)(this_00 + 0x3bc));
    fVar17 = *(float *)(lVar4 + 0x2c4);
    fVar14 = (float)Plant::GetExtraDPSmodifier(this_00);
    lVar10 = *(long *)(in_x0 + 0x10);
    fVar15 = (float)FUN_04081e60(*(undefined4 *)(lVar10 + 0x424));
    *(float *)(in_x0 + 0x48) = fVar11 * fVar13 * fVar17 * fVar14 * fVar15;
  }
  else {
    cVar2 = Plant::GetAvatarEnable(*(Plant **)(in_x0 + 0x10));
    if (cVar2 != '\0') goto LAB_0408389c;
    lVar4 = FUN_04082d84(*(undefined8 *)(in_x0 + 0x10));
    setState(in_x0,10);
    if (in_x0[0x28] != (PlantFireGourd)0x0) goto LAB_040838fc;
LAB_04083664:
    lVar10 = *(long *)(in_x0 + 0x10);
  }
  iVar3 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8);
  if (iVar3 < *(int *)(lVar10 + 0x114) + *(int *)(in_x0 + 0x38)) {
    *(int *)(in_x0 + 0x38) = iVar3 - *(int *)(lVar10 + 0x114);
  }
  fVar11 = (float)PVZ_T();
  this_01 = *(RealObject **)(in_x0 + 0x10);
  *(float *)(in_x0 + 0x4c) = fVar11 + *(float *)(lVar4 + 0x2c8);
  if (in_x0[0x28] == (PlantFireGourd)0x0) {
    iVar3 = FUN_04081e68(this_01);
    if (iVar3 == 2) {
      fVar11 = (float)PVZ_T();
      this_01 = *(RealObject **)(in_x0 + 0x10);
      *(float *)(in_x0 + 0x4c) = *(float *)(lVar4 + 0x2c8) + 1.0 + fVar11;
    }
    else if (2 < iVar3) {
      fVar11 = (float)PVZ_T();
      this_01 = *(RealObject **)(in_x0 + 0x10);
      *(float *)(in_x0 + 0x4c) = *(float *)(lVar4 + 0x2c8) + 2.0 + fVar11;
    }
  }
  this = (RtWeakPtr *)(in_x0 + 0x78);
  std::string::string(asStack_18,"Play_Coconut_Cannon_Fire");
  RealObject::PlayPositionalSound(this_01,asStack_18,0.0);
  std::string::~string(asStack_18);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
  if (bVar1) {
    plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
    ;
    (**(code **)(*plVar9 + 0x48))();
  }
  Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this,(RtWeakPtrBase *)asStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  pEVar5 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  std::string::string((string *)&iStack_20,"POPANIM_PLANT_PLANT_KONGFU_CUCURBIT_FIRE");
  GetPAMByName((string *)&iStack_20);
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar5,(PopAnim *)pRVar6,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  std::string::~string((string *)&iStack_20);
  nop();
  pEVar5 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  Effect_PopAnim::SetCentered(pEVar5,true);
  pSVar7 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  StandaloneEffect::SetKeepAlive(pSVar7,true);
  pSVar7 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  StandaloneEffect::SetVisibility(pSVar7,true);
  pfVar8 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(in_x0 + 0x10));
  Sexy::Point::Point((Point *)&iStack_20,(int)*pfVar8,(int)pfVar8[1]);
  pSVar7 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,(float)iStack_20,(float)(iStack_1c + -10),0.0);
  iVar3 = CalcFiringAnimRenderOrder(in_x0);
  __n = (size_t)(iVar3 + 1U);
  StandaloneEffect::SetBoardSpaceOrigin(pSVar7,(SexyVector3 *)asStack_18,iVar3 + 1U);
  Set8BytesTo0(asStack_18);
  iVar3 = *(int *)(in_x0 + 0x38);
  if (iVar3 == 2) {
    std::string::append(asStack_18,"cubit_fire2",__n);
  }
  else if (iVar3 == 4) {
    std::string::append(asStack_18,"cubit_fire4",__n);
  }
  else if (iVar3 == 1) {
    std::string::append(asStack_18,"cubit_fire1",__n);
  }
  else {
    std::string::append(asStack_18,"cubit_plantfood",__n);
  }
  if (in_x0[0x28] != (PlantFireGourd)0x0) {
    std::string::append(asStack_18,"cubit_plantfood",__n);
  }
  pEVar5 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar5,asStack_18,0);
  std::string::~string(asStack_18);
LAB_0408389c:
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFireGourd::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantFireGourd::onAnimStoppedCallback(PlantFireGourd *this,string *param_1)

{
  bool bVar1;
  PlantAnimRig_WizardThorns *pPVar2;
  long lVar3;
  PlantAnimRig_DevilsFlower *pPVar4;
  char *pcVar5;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"attack_ready");
  if (bVar1) {
    willStartFiringAnimation(this);
    goto LAB_04083ba4;
  }
  bVar1 = std::operator==(param_1,"plantfood");
  if (bVar1) {
    setState(this,10);
    goto LAB_04083ba4;
  }
  bVar1 = std::operator==(param_1,"return");
  if (bVar1) {
    lVar3 = *(long *)(this + 0x10);
LAB_04083c1c:
    pPVar4 = (PlantAnimRig_DevilsFlower *)FUN_04082cfc(lVar3);
    std::string::string(asStack_58,"idle3");
    PlantAnimRig_DevilsFlower::playLoopAnimation(pPVar4,asStack_58);
    std::string::~string(asStack_58);
    nop();
    goto LAB_04083ba4;
  }
  pcVar5 = "idle";
  bVar1 = std::operator==(param_1,"idle");
  if (bVar1) {
    if (*(int *)(*(long *)(this + 0x10) + 200) == 0xb) {
LAB_04083ce0:
      pPVar2 = (PlantAnimRig_WizardThorns *)FUN_04082cfc();
      std::string::string(asStack_58,pcVar5);
      ToolPacketData::GetProps();
    }
    else {
      if (*(int *)(*(long *)(this + 0x10) + 200) != 0xc) goto LAB_04083ba4;
      pPVar2 = (PlantAnimRig_WizardThorns *)FUN_04082cfc();
      std::string::string(asStack_58,"idle2");
      ToolPacketData::GetProps();
    }
  }
  else {
    pcVar5 = "idle2";
    bVar1 = std::operator==(param_1,"idle2");
    if (bVar1) {
      lVar3 = *(long *)(this + 0x10);
      if (*(int *)(lVar3 + 200) != 0xc) {
        if (*(int *)(lVar3 + 200) != 0xd) goto LAB_04083ba4;
        goto LAB_04083c1c;
      }
      goto LAB_04083ce0;
    }
    pcVar5 = "rest";
    bVar1 = std::operator==(param_1,"rest");
    if (!bVar1) goto LAB_04083ba4;
    if (*(int *)(*(long *)(this + 0x10) + 200) - 0xbU < 2) {
      pPVar2 = (PlantAnimRig_WizardThorns *)FUN_04082cfc();
    }
    else {
      if (*(int *)(*(long *)(this + 0x10) + 200) != 0xd) goto LAB_04083ba4;
      pPVar2 = (PlantAnimRig_WizardThorns *)FUN_04082cfc();
      pcVar5 = "return";
    }
    std::string::string(asStack_58,pcVar5);
    ToolPacketData::GetProps();
  }
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             asStack_60);
  PlantAnimRig_WizardThorns::PlayTapAnimation(pPVar2,asStack_58,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_58);
  nop();
LAB_04083ba4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFireGourd::Idle() */

void __thiscall PlantFireGourd::Idle(PlantFireGourd *this)

{
  PlantAnimRig_DevilsFlower *pPVar1;
  long lVar2;
  string asStack_10 [8];
  long local_8;
  
  lVar2 = *(long *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if (*(int *)(lVar2 + 200) == 0xf) {
    *(undefined4 *)(lVar2 + 200) = 0xc;
    setState(this,0xf);
  }
  else {
    *(undefined4 *)(lVar2 + 200) = 0xc;
    setState(this,0xd);
    pPVar1 = (PlantAnimRig_DevilsFlower *)FUN_04082cfc(*(undefined8 *)(this + 0x10));
    std::string::string(asStack_10,"idle3");
    PlantAnimRig_DevilsFlower::playLoopAnimation(pPVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFireGourd::UpdateActions() */

void __thiscall PlantFireGourd::UpdateActions(PlantFireGourd *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  StandaloneEffect *this_00;
  PopAnimRig *pPVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ZombieSwashbuckler *pZVar8;
  float *pfVar9;
  int *piVar10;
  UIEasyButtonWidget *this_01;
  Zombie *pZVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  RtObject *this_02;
  undefined8 uVar15;
  code *pcVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float local_40;
  float local_3c;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int iStack_1c;
  int local_18;
  undefined4 uStack_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(*(undefined4 *)(*(long *)(this + 0x10) + 200)) {
  case 10:
    fVar19 = *(float *)(this + 0x4c);
    fVar17 = (float)PVZ_T();
    if (fVar19 < fVar17) {
      setState(this,0xf);
    }
    else {
      uVar13 = 0;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
      GetPrimaryTarget(this,(vector *)&local_20);
      uVar15 = CONCAT44(iStack_1c,local_20);
      lVar14 = FUN_04081e9c(uVar15,CONCAT44(uStack_14,local_18));
      if (lVar14 != 0) {
        do {
          puVar6 = (undefined8 *)FUN_04081ea8(uVar15,uVar13);
          bVar2 = Sexy::RtObject::IsA<GridItemFlame>((RtObject *)*puVar6);
          if (bVar2) {
LAB_040841d0:
            uVar15 = CONCAT44(iStack_1c,local_20);
          }
          else {
            puVar6 = (undefined8 *)FUN_04081ea8(CONCAT44(iStack_1c,local_20),uVar13);
            bVar2 = Sexy::RtObject::IsA<GridItemEnergyGrid>((RtObject *)*puVar6);
            if (bVar2) goto LAB_040841d0;
            puVar6 = (undefined8 *)FUN_04081ea8(CONCAT44(iStack_1c,local_20),uVar13);
            bVar2 = Sexy::RtObject::IsA<Zombie>((RtObject *)*puVar6);
            if (bVar2) {
              puVar6 = (undefined8 *)FUN_04081ea8(CONCAT44(iStack_1c,local_20),uVar13);
              pZVar11 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
              pcVar16 = *(code **)(*(long *)pZVar11 + 0x3d0);
              Plant::GetType();
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)&local_30,(RtWeakPtrBase *)&local_40);
              cVar1 = (*pcVar16)(pZVar11,(RtWeakPtr<Sexy::SoundResource> *)&local_30,1);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
              if (cVar1 != '\0') goto LAB_04084230;
              uVar15 = CONCAT44(iStack_1c,local_20);
            }
            else {
LAB_04084230:
              uVar15 = CONCAT44(iStack_1c,local_20);
              puVar6 = (undefined8 *)FUN_04081ea8(uVar15,uVar13);
              if (*(int *)((RtObject *)*puVar6 + 0x30) != 1) {
                bVar2 = Sexy::RtObject::IsA<ZombieSwashbuckler>((RtObject *)*puVar6);
                if (bVar2) {
                  puVar6 = (undefined8 *)FUN_04081ea8(CONCAT44(iStack_1c,local_20),uVar13);
                  pZVar8 = Sexy::RtObject::Cast<ZombieSwashbuckler>((RtObject *)*puVar6);
                  (**(code **)(*(long *)pZVar8 + 0xb0))((RtWeakPtr<Sexy::SoundResource> *)&local_30)
                  ;
                  DVec3::DVec3((DVec3 *)&local_40);
                  fVar19 = (float)(local_30 + local_28 / 2);
                  local_3c = (float)(local_2c + local_24 / 2);
                  local_40 = fVar19;
                  pfVar9 = (float *)std::
                                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    ::_M_leftmost(*(
                                                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  **)(this + 0x10));
                  fVar17 = *pfVar9;
                  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
                  if (*(int *)(this + 0x38) < (int)(ABS(fVar17 - fVar19) / (float)iVar3))
                  goto LAB_040841d0;
                }
                puVar6 = (undefined8 *)FUN_04081ea8(CONCAT44(iStack_1c,local_20),uVar13);
                cVar1 = RealObject::IsOnOpposingTeam
                                  ((RealObject *)*puVar6,*(RealObject **)(this + 0x10));
                if (cVar1 == '\0') goto LAB_040841d0;
                plVar5 = (long *)FUN_04081ea8(CONCAT44(iStack_1c,local_20),uVar13);
                this_02 = (RtObject *)*plVar5;
                fVar17 = *(float *)(this + 0x48);
                if (*(int *)(this_02 + 0x30) < 1) {
                  *(undefined4 *)(this_02 + 0x30) = 1;
                  *(int *)(this_02 + 0x34) = (int)fVar17;
                  uVar18 = PVZ_T();
                  *(undefined4 *)(this_02 + 0x38) = uVar18;
                  puVar6 = (undefined8 *)FUN_04081ea8(CONCAT44(iStack_1c,local_20),uVar13);
                  this_02 = (RtObject *)*puVar6;
                }
                else {
                  local_30 = (int)fVar17;
                  piVar10 = eastl::max_alt<int>(&local_30,(int *)(this_02 + 0x34));
                  *(int *)(this_02 + 0x34) = *piVar10;
                }
                bVar2 = Sexy::RtObject::IsA<GridItemArmrack>(this_02);
                if (bVar2) {
                  lVar14 = FUN_04082d84(*(undefined8 *)(this + 0x10));
                  uVar15 = CONCAT44(iStack_1c,local_20);
                  plVar5 = (long *)FUN_04081ea8(uVar15,uVar13);
                  lVar12 = *plVar5;
                  *(int *)(lVar12 + 0x34) =
                       (int)(*(float *)(lVar14 + 0x2cc) * *(float *)(this + 0x48));
                }
                else {
                  uVar15 = CONCAT44(iStack_1c,local_20);
                  plVar5 = (long *)FUN_04081ea8(uVar15,uVar13);
                  lVar12 = *plVar5;
                }
                *(undefined4 *)(lVar12 + 0x3c) = *(undefined4 *)(this + 0x4c);
              }
            }
          }
          uVar13 = uVar13 + 1;
          uVar7 = FUN_04081e9c(uVar15,CONCAT44(uStack_14,local_18));
        } while (uVar13 < uVar7);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
    }
    break;
  case 0xb:
    fVar17 = (float)PVZ_T();
    if (fVar17 <= *(float *)(this + 0x40)) {
      fVar17 = *(float *)(this + 0x44);
      fVar19 = (float)PVZ_T();
      fVar17 = fVar17 - fVar19;
LAB_04083ea4:
      fVar17 = 1.0 - fVar17 * 0.06666667;
      fVar17 = fVar17 * fVar17;
      fVar17 = cosf(fVar17 * fVar17 * 125.66371 + 3.1415927);
      local_20 = 0x3f800000;
      local_30 = 0x3ecccccd;
      fVar17 = CurveEvaluate<float>((fVar17 + 1.0) * 0.5,&local_30,(Color *)&local_20,1);
      Sexy::Color::Color((Color *)&local_20);
      this_01 = *(UIEasyButtonWidget **)(this + 0x10);
      iStack_1c = (int)(fVar17 * 255.0);
      local_20 = iStack_1c;
      goto LAB_04083f04;
    }
    setState(this,0xc);
    break;
  case 0xc:
    fVar19 = (float)PVZ_T();
    fVar17 = *(float *)(this + 0x44);
    if (fVar19 <= fVar17) {
      fVar19 = (float)PVZ_T();
      fVar17 = fVar17 - fVar19;
      goto LAB_04083ea4;
    }
    pPVar4 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    Sexy::Color::Color((Color *)&local_20,1);
    PopAnimRig::SetPAMColor(pPVar4,(Color *)&local_20);
    setState(this,0xd);
    break;
  case 0xf:
    fVar17 = (float)PVZ_T();
    if (*(float *)(this + 0x3c) < fVar17) {
      setState(this,0xb);
      cVar1 = PlantFramework::IsArenaBattle();
      goto joined_r0x04084064;
    }
    fVar19 = *(float *)(this + 0x44);
    fVar17 = (float)PVZ_T();
    fVar17 = 1.0 - (fVar19 - fVar17) * 0.06666667;
    fVar17 = fVar17 * fVar17;
    fVar17 = cosf(fVar17 * fVar17 * 125.66371 + 3.1415927);
    local_20 = 0x3f800000;
    local_30 = 0x3ecccccd;
    fVar17 = CurveEvaluate<float>((fVar17 + 1.0) * 0.5,&local_30,(Color *)&local_20,1);
    Sexy::Color::Color((Color *)&local_20);
    this_01 = *(UIEasyButtonWidget **)(this + 0x10);
    iStack_1c = (int)(fVar17 * 255.0);
    local_20 = (int)(fVar17 * 255.0);
LAB_04083f04:
    local_18 = iStack_1c;
    pPVar4 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_01);
    PopAnimRig::SetPAMColor(pPVar4,(Color *)&local_20);
  }
  cVar1 = PlantFramework::IsArenaBattle();
joined_r0x04084064:
  if ((cVar1 == '\0') || (cVar1 = isReadyToFire(this), cVar1 == '\0')) {
    cVar1 = (**(code **)(*(long *)this + 0x180))(this);
  }
  else {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    CalcDamageGridAndAmount(this);
    GetPrimaryTarget(this,(vector *)&local_20);
    lVar14 = FUN_04081e9c(CONCAT44(iStack_1c,local_20),CONCAT44(uStack_14,local_18));
    if (lVar14 != 0) {
      setState(this,0xe);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
    cVar1 = (**(code **)(*(long *)this + 0x180))(this);
  }
  if (cVar1 == '\0') {
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x70));
  }
  else {
    pPVar4 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    Sexy::Color::Color((Color *)&local_20,1);
    PopAnimRig::SetPAMColor(pPVar4,(Color *)&local_20);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x70));
  }
  if (bVar2) {
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x70));
    (**(code **)(*plVar5 + 0x1c8))();
  }
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x78));
  if (bVar2) {
    lVar14 = *(long *)(this + 0x10);
    cVar1 = FUN_04081e3c(*(undefined4 *)(lVar14 + 0x1d0));
    if (cVar1 == '\0') {
      fVar19 = *(float *)(lVar14 + 0x1c);
      fVar17 = (float)FUN_04081ecc(*(undefined4 *)(lVar14 + 0x18),fVar19,
                                   *(undefined4 *)(lVar14 + 0x20));
      Sexy::Point::Point((Point *)&local_30,(int)fVar17,(int)fVar19);
      this_00 = (StandaloneEffect *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x78));
      EATextSquish::Vec3::Vec3((Vec3 *)&local_20,(float)local_30,(float)(local_2c + -10),0.0);
      iVar3 = CalcFiringAnimRenderOrder(this);
      StandaloneEffect::SetBoardSpaceOrigin(this_00,(SexyVector3 *)&local_20,iVar3 + 1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFireGourd::onTouchEvent(Sexy::Touch const&) */

void PlantFireGourd::onTouchEvent(Touch *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  LevelModuleManager *pLVar4;
  LastStandMinigameModule *pLVar5;
  ZombossLastStandMinigameModule *pZVar6;
  TRect<int> *pTVar7;
  wchar16 *pwVar8;
  long *in_x1;
  LineBreakCategory *pLVar9;
  LineBreakCategory *pLVar10;
  LineBreakCategory *in_x4;
  Plant *this;
  long lVar11;
  float fVar12;
  float fVar13;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_04081e78(*(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x104));
  if (iVar3 != 7) {
    this = *(Plant **)(param_1 + 0x10);
    cVar1 = FUN_04081e3c(*(undefined4 *)(this + 0x1d0));
    if ((cVar1 == '\0') && (cVar1 = Plant::IsSuspended(this), cVar1 == '\0')) {
      lVar11 = *(long *)(param_1 + 0x10);
      cVar1 = FUN_04081e38(*(undefined1 *)(lVar11 + 0x278));
      if ((cVar1 == '\0') && (cVar1 = Plant::HasCondition(lVar11,0x11), cVar1 == '\0')) {
        cVar1 = Plant::HasCondition(*(undefined8 *)(param_1 + 0x10),0x17);
        if (cVar1 == '\0') {
          pLVar4 = (LevelModuleManager *)
                   FUN_04081e74(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
          pLVar5 = LevelModuleManager::GetModuleByClass<LastStandMinigameModule>(pLVar4);
          if ((pLVar5 == (LastStandMinigameModule *)0x0) ||
             (cVar1 = FUN_04081e7c(*(undefined4 *)(pLVar5 + 0x4c)), cVar1 != '\0')) {
            pLVar4 = (LevelModuleManager *)
                     FUN_04081e74(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
            pZVar6 = LevelModuleManager::GetModuleByClass<ZombossLastStandMinigameModule>(pLVar4);
            if (((pZVar6 == (ZombossLastStandMinigameModule *)0x0) ||
                (cVar1 = FUN_04081e88(*(undefined4 *)(pZVar6 + 0x4c)), cVar1 != '\0')) &&
               (cVar1 = FUN_04081e70(*(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + 0x887)),
               cVar1 != '\0')) {
              cVar1 = '\0';
              if ((*(long *)(param_1 + 0x30) == 0) && ((int)in_x1[6] == 0)) {
                fVar12 = (float)FUN_04082070((float)(int)in_x1[2]);
                fVar13 = (float)FUN_04082070((float)*(int *)((long)in_x1 + 0x14));
                pTVar7 = (TRect<int> *)
                         (**(code **)(**(long **)(param_1 + 0x10) + 0x178))
                                   (*(long **)(param_1 + 0x10));
                cVar2 = Sexy::TRect<int>::Contains(pTVar7,(int)fVar12,(int)fVar13);
                if (cVar2 != '\0') {
                  *(long *)(param_1 + 0x30) = *in_x1;
                  goto LAB_040846dc;
                }
              }
              else if (*(long *)(param_1 + 0x30) == *in_x1) {
                if ((int)in_x1[6] == 4) {
                  *(undefined8 *)(param_1 + 0x30) = 0;
                  goto LAB_040846dc;
                }
                if ((int)in_x1[6] == 3) {
                  lVar11 = in_x1[2];
                  *(undefined8 *)(param_1 + 0x30) = 0;
                  fVar12 = (float)FUN_04082070((float)(int)lVar11);
                  fVar13 = (float)FUN_04082070((float)*(int *)((long)in_x1 + 0x14));
                  pLVar10 = *(LineBreakCategory **)(param_1 + 0x10);
                  pTVar7 = (TRect<int> *)(**(code **)(*(long *)pLVar10 + 0x178))(pLVar10);
                  cVar2 = Sexy::TRect<int>::Contains(pTVar7,(int)fVar12,(int)fVar13);
                  if (cVar2 != '\0') {
                    pLVar9 = aLStack_18;
                    MessageRouter::Post<PlantFireGourd*,PlantFireGourd*>
                              ((MessageRouter *)gMessageRouter,Message::FireGourdIsHit,
                               (PlantFireGourd *)param_1);
                    pwVar8 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
                    std::string::string(asStack_10,"FreePlanting");
                    cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                                      (pwVar8,(wchar16 *)asStack_10,pLVar9,pLVar10,in_x4);
                    if (((cVar2 == '\0') &&
                        (cVar2 = isReadyToFire((PlantFireGourd *)param_1), cVar2 == '\0')) ||
                       (cVar2 = *(char *)(*(long *)(gLawnApp + 0x9f0) + 0x973), cVar2 == '\0')) {
                      std::string::~string(asStack_10);
                      nop();
                    }
                    else {
                      std::string::~string(asStack_10);
                      nop();
                      CalcDamageGridAndAmount((PlantFireGourd *)param_1);
                      setState((PlantFireGourd *)param_1,0xe);
                      cVar1 = cVar2;
                    }
                    goto LAB_040846dc;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  cVar1 = '\0';
LAB_040846dc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFireGourd::ApplyPlantfood() */

void __thiscall PlantFireGourd::ApplyPlantfood(PlantFireGourd *this)

{
  long lVar1;
  RealObject *this_00;
  undefined4 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x50) = uVar2;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x58));
  this_00 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_10,"Play_CoconutCannon_PF_Fire");
  RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  setState(this,5);
  lVar1 = ___stack_chk_guard;
  this[0x28] = (PlantFireGourd)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantFireGourd::CancelPlantfood() */

void __thiscall PlantFireGourd::CancelPlantfood(PlantFireGourd *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  this[0x28] = (PlantFireGourd)0x0;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x58));
  setState(this,0xf);
  return;
}


/* PlantFireGourd::~PlantFireGourd() */

void __thiscall PlantFireGourd::~PlantFireGourd(PlantFireGourd *this)

{
  bool bVar1;
  long *plVar2;
  RtWeakPtr *this_00;
  
  this_00 = (RtWeakPtr *)(this + 0x70);
  *(undefined ***)this = &PTR_GetClass_067caf20;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x78));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x58));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantFireGourd::~PlantFireGourd() */

void __thiscall PlantFireGourd::~PlantFireGourd(PlantFireGourd *this)

{
  ~PlantFireGourd(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFireGourd::UpdatePlantfood() */

void __thiscall PlantFireGourd::UpdatePlantfood(PlantFireGourd *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  PopAnimRig *this_00;
  float *pfVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  RtWeakPtrBase *this_01;
  float *pfVar12;
  Zombie *pZVar13;
  code *pcVar14;
  ulong uVar15;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  float fVar16;
  float local_a8;
  float local_a4;
  RtWeakPtr<Sexy::SoundResource> aRStack_a0 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_98 [8];
  Insets aIStack_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  string asStack_68 [16];
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar2 != '\0') {
    local_a8 = 0.0;
    local_a4 = 0.0;
    this_00 = (PopAnimRig *)
              UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    std::string::string(asStack_68,"dragon_shaow");
    cVar2 = PopAnimRig::CalcLayerTranslation(this_00,asStack_68,&local_a8,&local_a4);
    std::string::~string(asStack_68);
    nop();
    if ((cVar2 != '\0') && (fVar16 = (float)PVZ_T(), *(float *)(this + 0x50) <= fVar16)) {
      pfVar6 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(this + 0x10));
      iVar3 = BoardTransforms::BoardSpaceToGridX(*pfVar6);
      pfVar6 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(this + 0x10));
      iVar4 = BoardTransforms::BoardSpaceToGridX(local_a8 + *pfVar6);
      bVar1 = iVar4 == -1;
      if (bVar1) {
        iVar4 = 0x11;
      }
      lVar7 = *(long *)this;
      if (iVar4 <= iVar3) {
        iVar4 = iVar3 + 1;
      }
      if (*(code **)(lVar7 + 400) != PlantFramework::GetCollisionFlags) {
        (**(code **)(lVar7 + 400))(this,2);
        lVar7 = *(long *)this;
      }
      uVar15 = 0;
      uVar8 = (**(code **)(lVar7 + 0x198))(this,2);
      uVar8 = operator|(uVar8,0x2000);
      uVar8 = operator|(uVar8,0x1000);
      Plant::GetProps();
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
      FUN_04081ec4(*(undefined8 *)(lVar7 + 0x70));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
      Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
      operator|=(auStack_58,uVar8);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
      uVar5 = operator|(2,4);
      Sexy::Insets::Insets
                (aIStack_90,*(int *)(*(long *)(this + 0x10) + 0x114),
                 *(int *)(*(long *)(this + 0x10) + 0x110),(iVar4 - iVar3) + 1,1);
      EntityFinder::GetEntitiesInGridSquares
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar5,
                 aIStack_90);
      while (uVar8 = local_80, uVar9 = FUN_04081e9c(local_80,local_78), uVar15 < uVar9) {
        puVar10 = (undefined8 *)FUN_04081ea8(uVar8,uVar15);
        this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)*puVar10;
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a0,(RtWeakPtrBase *)aIStack_90);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_90)
        ;
        uVar8 = *(undefined8 *)(this + 0x58);
        lVar11 = FUN_04081eb0(uVar8,*(undefined8 *)(this + 0x60));
        for (lVar7 = 0; lVar7 != lVar11; lVar7 = lVar7 + 1) {
          this_01 = (RtWeakPtrBase *)FUN_04081ebc(uVar8,lVar7);
          cVar2 = Sexy::RtWeakPtrBase::operator==(this_01,(RtWeakPtrBase *)aRStack_a0);
          if (cVar2 != '\0') goto LAB_040853dc;
        }
        if (bVar1) {
LAB_0408532c:
          pZVar13 = Sexy::RtObject::Cast<Zombie>((RtObject *)this_02);
          if (pZVar13 != (Zombie *)0x0) {
            pcVar14 = *(code **)(*(long *)pZVar13 + 0x3d0);
            Plant::GetType();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)aIStack_90,(RtWeakPtrBase *)aRStack_98);
            cVar2 = (*pcVar14)(pZVar13,aIStack_90,1);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_90);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
            if (cVar2 == '\0') goto LAB_040853dc;
          }
          uVar15 = uVar15 + 1;
          (**(code **)(*(long *)this_02 + 0x110))(this_02,asStack_68);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aIStack_90,(RtWeakPtrBase *)aRStack_98);
          std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
          push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                     *)(this + 0x58),(RtWeakPtr *)aIStack_90);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_90);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
        }
        else {
          pfVar6 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost(this_02);
          pfVar12 = (float *)std::
                             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                             **)(this + 0x10));
          if (*pfVar6 <= local_a8 + *pfVar12) goto LAB_0408532c;
LAB_040853dc:
          uVar15 = uVar15 + 1;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
        }
      }
      fVar16 = (float)PVZ_T();
      *(float *)(this + 0x50) = fVar16 + 0.1;
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
      DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

