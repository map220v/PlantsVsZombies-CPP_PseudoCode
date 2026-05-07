// Class: PlantAnimRig_MatchFlower


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_MatchFlower::StaticClassInit() */

void PlantAnimRig_MatchFlower::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_MatchFlower");
    (*pcVar2)(plVar1,asStack_10,FUN_04138ad4,0x3d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_MatchFlower::StaticGetClass() */

long * PlantAnimRig_MatchFlower::StaticGetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_MatchFlower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_MatchFlower::GetClass() const */

long * PlantAnimRig_MatchFlower::GetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_MatchFlower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_MatchFlower::PlayPunchAttack(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_MatchFlower::PlayPunchAttack
          (PlantAnimRig_MatchFlower *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  long lVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x1f0))(asStack_58);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 0xe;
    *(int *)(this + 0x3c4) = *(int *)(this + 0x3c4) + 1;
    lVar2 = FUN_05474374(asStack_58,&DAT_0561e758,0);
    this[0x3cc] = (PlantAnimRig_MatchFlower)(lVar2 != -1);
  }
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_MatchFlower::getFlameColorName() */

void PlantAnimRig_MatchFlower::getFlameColorName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x3c8) == 0) {
    __s = "yellow";
  }
  else if (*(int *)(in_x0 + 0x3c8) == 1) {
    __s = "blue";
  }
  else {
    __s = "";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_MatchFlower::getAttackAnimationName() */

void PlantAnimRig_MatchFlower::getAttackAnimationName(void)

{
  int iVar1;
  long in_x0;
  undefined8 uVar2;
  string asStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(in_x0 + 0x3c4);
  local_8 = ___stack_chk_guard;
  getFlameColorName();
  uVar2 = FUN_0547429c(asStack_10);
  Sexy::StrFormat("attack_%s_0%d",uVar2,(ulong)(iVar1 % 4 + 1));
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_MatchFlower::getPlantFoodMainAnimName() */

void PlantAnimRig_MatchFlower::getPlantFoodMainAnimName(void)

{
  long in_x0;
  undefined8 uVar1;
  uint uVar2;
  string asStack_10 [8];
  long local_8;
  
  uVar2 = 2;
  if (*(char *)(in_x0 + 0x220) == '\0') {
    uVar2 = 1;
  }
  local_8 = ___stack_chk_guard;
  getFlameColorName();
  uVar1 = FUN_0547429c(asStack_10);
  Sexy::StrFormat("plantfood_%s_0%d",uVar1,(ulong)uVar2);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_MatchFlower::IsFinalPunchAttack() */

PlantAnimRig_MatchFlower __thiscall
PlantAnimRig_MatchFlower::IsFinalPunchAttack(PlantAnimRig_MatchFlower *this)

{
  return this[0x3cc];
}


/* PlantAnimRig_MatchFlower::~PlantAnimRig_MatchFlower() */

void __thiscall PlantAnimRig_MatchFlower::~PlantAnimRig_MatchFlower(PlantAnimRig_MatchFlower *this)

{
  *(undefined ***)this = &PTR_GetClass_067ec750;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_MatchFlower_067ec9c0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_MatchFlower::~PlantAnimRig_MatchFlower() */

void __thiscall PlantAnimRig_MatchFlower::~PlantAnimRig_MatchFlower(PlantAnimRig_MatchFlower *this)

{
  ~PlantAnimRig_MatchFlower(this + -0x10);
  return;
}


/* PlantAnimRig_MatchFlower::~PlantAnimRig_MatchFlower() */

void __thiscall PlantAnimRig_MatchFlower::~PlantAnimRig_MatchFlower(PlantAnimRig_MatchFlower *this)

{
  ~PlantAnimRig_MatchFlower(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_MatchFlower::~PlantAnimRig_MatchFlower() */

void __thiscall PlantAnimRig_MatchFlower::~PlantAnimRig_MatchFlower(PlantAnimRig_MatchFlower *this)

{
  ~PlantAnimRig_MatchFlower(this + -0x10);
  return;
}


/* PlantAnimRig_MatchFlower::onDestroy() */

void __thiscall PlantAnimRig_MatchFlower::onDestroy(PlantAnimRig_MatchFlower *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0x3b8);
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
/* PlantAnimRig_MatchFlower::updateFirePos(Sexy::SexyVector2 const&, Sexy::SexyVector2 const&, int)
    */

void __thiscall
PlantAnimRig_MatchFlower::updateFirePos
          (PlantAnimRig_MatchFlower *this,SexyVector2 *param_1,SexyVector2 *param_2,int param_3)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  StandaloneEffect *this_01;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  string asStack_28 [16];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3b8);
  local_8 = ___stack_chk_guard;
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  cVar1 = FUN_04136e18(*(undefined1 *)(lVar4 + 0x88));
  if (cVar1 != '\0') {
    Sexy::Insets::Insets((Insets *)&local_18);
    std::string::string(asStack_28,"eye");
    PopAnimRig::CalcSymbolRect((PopAnimRig *)this,asStack_28,(TRect *)&local_18);
    std::string::~string(asStack_28);
    nop();
    iVar2 = FUN_04136f4c(local_18 + local_10 / 2);
    fVar9 = *(float *)param_2;
    fVar7 = *(float *)param_1;
    iVar3 = FUN_04136f4c(local_14 + local_c / 2);
    fVar8 = *(float *)(param_2 + 4);
    fVar10 = *(float *)(param_1 + 4);
    fVar5 = (float)NewPVPUtils::GetBoardScale();
    fVar6 = (float)NewPVPUtils::GetBoardScale();
    this_01 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)asStack_28,(float)(int)((fVar7 - fVar9) + (float)iVar2) + fVar5 * -105.0,
               (float)(int)((fVar10 - fVar8) + (float)iVar3) + fVar6 * -95.0,0.0);
    StandaloneEffect::SetBoardSpaceOrigin(this_01,(SexyVector3 *)asStack_28,-1);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    FUN_04136e1c(lVar4 + 0x1c,param_3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_MatchFlower::PlantAnimRig_MatchFlower() */

void __thiscall PlantAnimRig_MatchFlower::PlantAnimRig_MatchFlower(PlantAnimRig_MatchFlower *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *this_00;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar1;
  StandaloneEffect *this_02;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x3b8);
  local_8 = ___stack_chk_guard;
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067ec750;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_MatchFlower_067ec9c0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(this_00)
  ;
  *(undefined4 *)(this + 0x3c8) = 0;
  *(undefined4 *)(this + 0x3c4) = 0;
  *(undefined4 *)(this + 0x3c0) = 0;
  this[0x3cc] = (PlantAnimRig_MatchFlower)0x0;
  Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  this_01 = (Effect_PopAnim *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string((string *)aRStack_10,"POPANIM_EFFECTS_MATCHFLOWER_BURN_EFFECT");
  GetPAMByName((string *)aRStack_10);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string((string *)aRStack_10);
  nop();
  this_02 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  StandaloneEffect::SetVisibility(this_02,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_MatchFlower::StaticNew() */

PlantAnimRig_MatchFlower * PlantAnimRig_MatchFlower::StaticNew(void)

{
  PlantAnimRig_MatchFlower *this;
  
  this = ::operator_new(0x3d0);
  PlantAnimRig_MatchFlower(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_MatchFlower::setFireLayerVisible(std::vector<std::string, std::allocator<std::string
   > > const&) */

void __thiscall
PlantAnimRig_MatchFlower::setFireLayerVisible(PlantAnimRig_MatchFlower *this,vector *param_1)

{
  bool bVar1;
  string *psVar2;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_38,"hair_01");
  std::string::string(asStack_30,"hair_02");
  psVar2 = (string *)&local_8;
  std::string::string(asStack_28,"hair_yellow_01");
  std::string::string(asStack_20,"hair_yellow_02");
  std::string::string(asStack_18,"hair_blue_01");
  std::string::string(asStack_10,"hair_blue_02");
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)&local_50,asStack_38,6,
             (__normal_iterator *)&local_58);
  do {
    psVar2 = psVar2 + -8;
    std::string::~string(psVar2);
  } while (psVar2 != asStack_38);
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  local_60 = FUN_041381bc(local_50);
  local_58 = FUN_0413820c(local_48);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58), bVar1) {
    psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar2,false);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
  }
  local_60 = FUN_041381bc(*(undefined8 *)param_1);
  local_58 = FUN_0413820c(*(undefined8 *)(param_1 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58), bVar1) {
    psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar2,true);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
  }
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_MatchFlower::updateFireEffect(int) */

void __thiscall
PlantAnimRig_MatchFlower::updateFireEffect(PlantAnimRig_MatchFlower *this,int param_1)

{
  StandaloneEffect *pSVar1;
  undefined8 uVar2;
  Effect_PopAnim *pEVar3;
  undefined1 auStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x3c0) != param_1) {
    *(int *)(this + 0x3c0) = param_1;
    if (param_1 == 0) {
      pSVar1 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3b8));
      StandaloneEffect::SetVisibility(pSVar1,false);
      std::string::string(asStack_30,"hair_01");
      std::string::string(asStack_28,"hair_02");
      std::vector<std::string,std::allocator<std::string>>::vector
                (avStack_20,asStack_30,2,asStack_38);
      setFireLayerVisible(this,(vector *)avStack_20);
      std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
      std::string::~string(asStack_28);
      std::string::~string(asStack_30);
      nop();
      nop();
    }
    else {
      pSVar1 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3b8));
      StandaloneEffect::SetVisibility(pSVar1,true);
      getFlameColorName();
      uVar2 = FUN_0547429c((string *)avStack_20);
      Sexy::StrFormat("fire_%s_0%d",asStack_48,uVar2,(ulong)*(uint *)(this + 0x3c0));
      std::string::~string((string *)avStack_20);
      pEVar3 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3b8));
      PVZ_EOT();
      Effect_PopAnim::PlayLoopingAnimation(pEVar3,asStack_48,0);
      getFlameColorName();
      uVar2 = FUN_0547429c(asStack_40);
      Sexy::StrFormat("hair_%s_01",asStack_30,uVar2);
      getFlameColorName();
      uVar2 = FUN_0547429c(asStack_38);
      Sexy::StrFormat("hair_%s_02",asStack_28,uVar2);
      std::vector<std::string,std::allocator<std::string>>::vector
                (avStack_20,asStack_30,2,auStack_50);
      std::string::~string(asStack_28);
      std::string::~string(asStack_30);
      std::string::~string(asStack_38);
      std::string::~string(asStack_40);
      setFireLayerVisible(this,(vector *)avStack_20);
      std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
      std::string::~string(asStack_48);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

