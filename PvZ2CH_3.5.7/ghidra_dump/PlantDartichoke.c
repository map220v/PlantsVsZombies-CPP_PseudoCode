// Class: PlantDartichoke


/* PlantDartichoke::UpdateUnconditionally() */

void __thiscall PlantDartichoke::UpdateUnconditionally(PlantDartichoke *this)

{
  this[0x30] = (PlantDartichoke)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDartichoke::StaticClassInit() */

void PlantDartichoke::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantDartichoke");
    (*pcVar2)(plVar1,asStack_10,FUN_042e3364,0x90,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDartichoke::StaticGetClass() */

long * PlantDartichoke::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantDartichoke",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantDartichoke::GetClass() const */

long * PlantDartichoke::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantDartichoke",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDartichoke::GetPlantAttackRect(PlantWeapon) */

void PlantDartichoke::GetPlantAttackRect(Insets *param_1)

{
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::GetPlantAttackRect(&local_18);
  Sexy::Insets::Insets(param_1,local_18,local_14 + -2,local_10,local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDartichoke::UpdateActions() */

void __thiscall PlantDartichoke::UpdateActions(PlantDartichoke *this)

{
  int iVar1;
  long extraout_x0;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((*(int *)(*(long *)(this + 0x10) + 200) == 1) ||
      (*(int *)(*(long *)(this + 0x10) + 200) == 4)) && (*(int *)(this + 0x60) < 1)) {
    FUN_042e1108(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    iVar1 = FUN_042e112c(*(undefined8 *)(this + 0x10));
    if (iVar1 < 3) {
      if (iVar1 == 2) {
        fVar2 = *(float *)(extraout_x0 + 0x2d4);
      }
      else {
        fVar2 = 1.0;
      }
    }
    else {
      fVar2 = *(float *)(extraout_x0 + 0x2d8);
    }
    (**(code **)(*(long *)this + 0x248))(fVar2 * *(float *)(extraout_x0 + 0x2d0),this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDartichoke::calcZombieTargetWeight(Zombie*, PlantTargetParams&) */

void __thiscall
PlantDartichoke::calcZombieTargetWeight
          (PlantDartichoke *this,Zombie *param_1,PlantTargetParams *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long extraout_x0;
  undefined8 uVar5;
  long lVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = PlantFramework::calcZombieTargetWeight((PlantFramework *)this,param_1,param_2);
  FUN_042e1108(aRStack_10,*(undefined8 *)(this + 0x10));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  uVar5 = Zombie::GetTypeName(param_1);
  lVar6 = FUN_05474374(uVar5,"Veteran",0);
  if (lVar6 == -1) {
    iVar4 = 0;
    cVar1 = Zombie::IsFlying(param_1);
    if (cVar1 == '\0') {
      iVar4 = ClassBucketFilter::GetBucket
                        ((ClassBucketFilter *)(extraout_x0 + 0x2e8),(BoardEntity *)param_1);
    }
  }
  else {
    iVar4 = 1;
  }
  iVar3 = ClassBucketFilter::size((ClassBucketFilter *)(extraout_x0 + 0x2e8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 + (iVar3 - iVar4) * 10000 + 10000);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDartichoke::GetPlantFoodPlayCount() */

void __thiscall PlantDartichoke::GetPlantFoodPlayCount(PlantDartichoke *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  long extraout_x0;
  long lVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_042e1108(aRStack_10,*(undefined8 *)(this + 0x10));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  lVar4 = FUN_042e114c(*(undefined8 *)(this + 0x48),*(undefined8 *)(this + 0x50));
  if (lVar4 == 0) {
    iVar1 = *(int *)(extraout_x0 + 0x2b8);
  }
  else {
    iVar2 = *(int *)(extraout_x0 + 0x2cc) / 5;
    cVar3 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    iVar1 = iVar2 + 2;
    if (cVar3 == '\0') {
      iVar1 = iVar2 + 1;
    }
    *(int *)(this + 100) = iVar1 * *(int *)(extraout_x0 + 0x2cc);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDartichoke::fireRotatedProjectile(PlantWeapon, int) */

void __thiscall
PlantDartichoke::fireRotatedProjectile(PlantDartichoke *this,int param_2,int param_3)

{
  Projectile *this_00;
  long extraout_x0;
  DVec3 *this_01;
  float fVar1;
  undefined8 uVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  PlantFramework::Fire
            ((PlantFramework *)this,a_Stack_10,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),
             param_2);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  FUN_042e1108(a_Stack_10,*(undefined8 *)(this + 0x10));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  uVar2 = Sexy::SexyMath::DegToRad((float)(param_3 * *(int *)(extraout_x0 + 0x2c4)));
  if (this_00 != (Projectile *)0x0) {
    FUN_042e1134(this_00 + 0x1b8,param_2 == 3);
  }
  FUN_042e10f8(uVar2,this_00 + 0xc4);
  this_01 = (DVec3 *)Projectile::GetVelocity(this_00);
  fVar1 = (float)DVec3::getLength(this_01);
  Projectile::SetRotatedVelocity(this_00,fVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* PlantDartichoke::FindTargetZombie(Sexy::TRect<int>&, PlantWeapon, PlantTargetParams&) */

RtWeakPtr<Sexy::SoundResource> *
PlantDartichoke::FindTargetZombie
          (RtWeakPtr<Sexy::SoundResource> *param_1_00,long param_1,undefined8 param_3,
          undefined8 param_4,undefined8 param_5)

{
  RtMixedPtrBase *this;
  char cVar1;
  Zombie *this_00;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    this = (RtMixedPtrBase *)(param_1 + 0x38);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      nop();
      cVar1 = (**(code **)(*(long *)this_00 + 0x328))();
      if (cVar1 == '\0') {
        cVar1 = RealObject::IsOnOpposingTeam(this_00,1);
        if (cVar1 != '\0') {
          cVar1 = Zombie::IsNotTargetableFlagSet(this_00);
          if (cVar1 == '\0') {
            cVar1 = Zombie::IsIgnoringAllDamage(this_00);
            if (cVar1 == '\0') {
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1_00,(RtWeakPtrBase *)this);
              return param_1_00;
            }
          }
        }
      }
    }
  }
  PlantFramework::FindTargetZombie(param_1_00,param_1,param_3,param_4,param_5);
  return param_1_00;
}


/* PlantDartichoke::PlantDartichoke() */

void __thiscall PlantDartichoke::PlantDartichoke(PlantDartichoke *this)

{
  size_t in_x2;
  undefined4 uVar1;
  
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_068304c0;
  Set8BytesTo0((string *)(this + 0x28));
  this[0x30] = (PlantDartichoke)0x0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  *(undefined4 *)(this + 0x40) = 0xffffffff;
  *(undefined4 *)(this + 0x44) = 0xffffffff;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  *(undefined4 *)(this + 0x60) = 0xffffffff;
  *(undefined4 *)(this + 100) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x68) = uVar1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x78));
  std::string::append((string *)(this + 0x28),"null",in_x2);
  *(undefined4 *)(this + 0x74) = 1;
  return;
}


/* PlantDartichoke::StaticNew() */

PlantDartichoke * PlantDartichoke::StaticNew(void)

{
  PlantDartichoke *this;
  
  this = ::operator_new(0x90);
  PlantDartichoke(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDartichoke::FindDangerousTarget(PlantWeapon) */

void __thiscall
PlantDartichoke::FindDangerousTarget(RtWeakPtr<Sexy::SoundResource> *param_1,PlantDartichoke *this)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  Zombie *this_00;
  string *psVar6;
  Insets *this_01;
  string asStack_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  iVar1 = *(int *)(*(long *)(this + 0x10) + 0x110);
  local_8 = ___stack_chk_guard;
  this_01 = aIStack_30;
  iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
  Sexy::Insets::Insets
            (this_01,*(int *)(*(long *)(this + 0x10) + 0x114),iVar1,
             iVar4 - *(int *)(*(long *)(this + 0x10) + 0x114),1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x78));
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x78));
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)&local_50);
    if (!bVar2) {
      std::string::append((string *)(this + 0x28),"null",(size_t)this_01);
      Plant::FindTarget(param_1,*(undefined8 *)(this + 0x10),0);
LAB_042e2a54:
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(param_1);
    }
    uVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    FUN_05475d88(asStack_60,uVar5);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar2)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
      nop();
      if (this_00 != (Zombie *)0x0) {
        psVar6 = (string *)Zombie::GetTypeName(this_00);
        cVar3 = std::operator==(psVar6,asStack_60);
        if (cVar3 != '\0') {
          thunk_FUN_05475e00(this + 0x28,asStack_60);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1,(RtWeakPtrBase *)aRStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          std::string::~string(asStack_60);
          goto LAB_042e2a54;
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
    }
    std::string::~string(asStack_60);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDartichoke::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantDartichoke::Fire(PlantDartichoke *this,RtWeakPtrBase *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  PlantDartichoke PVar3;
  char cVar4;
  int iVar5;
  long extraout_x0;
  ulong uVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar7;
  long lVar8;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  BoardEntity *pBVar9;
  DartichokeLeaf *this_02;
  RtObject *this_03;
  PlantAnimRig_Dartichoke *this_04;
  ValueRange *pVVar10;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var11;
  undefined8 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_042e1108((RtWeakPtr<Sexy::ResourceInfo> *)&local_18,*(undefined8 *)(this + 0x10));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  cVar4 = (**(code **)(*(long *)this + 0x180))(this);
  if (cVar4 != '\0') {
    iVar5 = *(int *)(this + 0x40);
    uVar6 = FUN_042e114c(*(undefined8 *)(this + 0x48),*(undefined8 *)(this + 0x50));
    if (uVar6 <= (ulong)(long)iVar5) {
      if (uVar6 == 0) {
        iVar1 = *(int *)(extraout_x0 + 700);
        *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 1;
        p_Var11 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)fireRotatedProjectile(this,1,iVar5 + iVar1);
        *(int *)(this + 0x40) = *(int *)(this + 0x40) + 1;
        goto LAB_042e458c;
      }
      *(undefined4 *)(this + 0x40) = 0;
    }
  }
  cVar4 = (**(code **)(*(long *)this + 0x180))(this);
  if (cVar4 == '\0') {
    uVar2 = *(undefined4 *)(*(long *)(this + 0x10) + 0x150);
    fVar14 = (float)RandRangeFloat(0.0,1.0);
    if (fVar14 < *(float *)(extraout_x0 + 0x2c8)) {
      param_4 = 2;
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 2;
    }
    cVar4 = TimeUtil::CheckTimeEclapse(*(float *)(this + 0x6c),*(float *)(this + 0x70));
    if (cVar4 != '\0') {
      lVar8 = *(long *)(this + 0x10);
      iVar5 = FUN_042e112c(lVar8);
      if (4 < iVar5) {
        param_4 = 3;
        *(undefined4 *)(lVar8 + 0x150) = 3;
        uVar13 = PVZ_T();
        *(undefined4 *)(this + 0x70) = uVar13;
      }
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_2);
    PlantFramework::Fire
              ((PlantFramework *)this,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18,
               *(undefined4 *)(*(long *)(this + 0x10) + 0x110),param_4);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    if (this_02 != (DartichokeLeaf *)0x0) {
      FUN_042e1134(this_02 + 0x1b8,param_4 == 3);
    }
    PVar3 = this[0x30];
    *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = uVar2;
    if (PVar3 == (PlantDartichoke)0x0) {
      Plant::FindTarget((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(this + 0x38),(RtWeakPtr *)&local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x38));
      if (cVar4 != '\0') {
        this[0x30] = (PlantDartichoke)0x1;
      }
    }
    pBVar9 = (BoardEntity *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
    DartichokeLeaf::SetOverrideTarget(this_02,pBVar9);
    *(int *)(this + 0x60) = *(int *)(this + 0x60) + -1;
    this_03 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    this_04 = Sexy::RtObject::Cast<PlantAnimRig_Dartichoke>(this_03);
    PlantAnimRig_Dartichoke::UpdateAmmo(this_04,*(int *)(this + 0x60),*(int *)(extraout_x0 + 0x2cc))
    ;
    p_Var11 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)this_02;
  }
  else {
    p_Var11 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)0x0;
    if (0 < *(int *)(this + 100)) {
      iVar5 = *(int *)(this + 0x44);
      iVar1 = *(int *)(extraout_x0 + 0x2c0);
      *(int *)(this + 100) = *(int *)(this + 100) + -1;
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 1;
      fireRotatedProjectile(this,1,iVar5 + iVar1);
      nop();
      *(int *)(this + 0x44) = *(int *)(this + 0x44) + 1;
      puVar7 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(this_00);
      local_18 = *puVar7;
      uVar12 = *(undefined8 *)(extraout_x0 + 800);
      local_10 = *(undefined4 *)(puVar7 + 1);
      lVar8 = FUN_042e1158(uVar12,*(undefined8 *)(extraout_x0 + 0x328));
      if (lVar8 == 2) {
        pVVar10 = (ValueRange *)FUN_042e113c(uVar12,0);
        fVar14 = (float)ValueRange::GetRandomValue(pVVar10);
        local_18._0_4_ = fVar14 + (float)local_18;
        pVVar10 = (ValueRange *)FUN_042e113c(*(undefined8 *)(extraout_x0 + 800),1);
        fVar14 = (float)ValueRange::GetRandomValue(pVVar10);
        local_18 = CONCAT44(fVar14 + local_18._4_4_,(float)local_18);
      }
      (**(code **)(*(long *)this_00 + 0x78))(this_00,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      iVar5 = *(int *)(this + 0x40);
      *(int *)(this + 0x40) = iVar5 + 1;
      this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)
                FUN_042e1164(*(undefined8 *)(this + 0x48),(long)iVar5);
      pBVar9 = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
      DartichokeLeaf::SetOverrideTarget((DartichokeLeaf *)this_00,pBVar9);
      p_Var11 = this_00;
    }
  }
LAB_042e458c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(p_Var11);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDartichoke::updateAmmo() */

void __thiscall PlantDartichoke::updateAmmo(PlantDartichoke *this)

{
  long extraout_x0;
  RtObject *this_00;
  PlantAnimRig_Dartichoke *this_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_042e1108(aRStack_10,*(undefined8 *)(this + 0x10));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  this_01 = Sexy::RtObject::Cast<PlantAnimRig_Dartichoke>(this_00);
  PlantAnimRig_Dartichoke::UpdateAmmo(this_01,*(int *)(this + 0x60),*(int *)(extraout_x0 + 0x2cc));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDartichoke::PostInitialize() */

void __thiscall PlantDartichoke::PostInitialize(PlantDartichoke *this)

{
  long extraout_x0;
  RtObject *this_00;
  PlantAnimRig_Dartichoke *this_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  FUN_042e1108(aRStack_10,*(undefined8 *)(this + 0x10));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  this_01 = Sexy::RtObject::Cast<PlantAnimRig_Dartichoke>(this_00);
  PlantAnimRig_Dartichoke::UpdateAmmo(this_01,*(int *)(this + 0x60),*(int *)(extraout_x0 + 0x2cc));
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDartichoke::fillAmmo() */

void __thiscall PlantDartichoke::fillAmmo(PlantDartichoke *this)

{
  long extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_042e1108(aRStack_10,*(undefined8 *)(this + 0x10));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(extraout_x0 + 0x2cc);
  updateAmmo(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDartichoke::CancelExhausted() */

void __thiscall PlantDartichoke::CancelExhausted(PlantDartichoke *this)

{
  fillAmmo(this);
  PlantFramework::CancelExhausted((PlantFramework *)this);
  return;
}


/* PlantDartichoke::~PlantDartichoke() */

void __thiscall PlantDartichoke::~PlantDartichoke(PlantDartichoke *this)

{
  *(undefined ***)this = &PTR_GetClass_068304c0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x78));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x48));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  std::string::~string((string *)(this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantDartichoke::~PlantDartichoke() */

void __thiscall PlantDartichoke::~PlantDartichoke(PlantDartichoke *this)

{
  ~PlantDartichoke(this);
  AK::FreeHook(this);
  return;
}


/* PlantDartichoke::Initialize() */

void __thiscall PlantDartichoke::Initialize(PlantDartichoke *this)

{
  long lVar1;
  size_t in_x2;
  undefined4 uVar2;
  
  PlantFramework::Initialize((PlantFramework *)this);
  std::string::append((string *)(this + 0x28),"null",in_x2);
  fillAmmo(this);
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x68) = uVar2;
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x70) = uVar2;
  lVar1 = FUN_042e246c(*(undefined8 *)(this + 0x10));
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(lVar1 + 0x2dc);
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x78),
             (vector *)(lVar1 + 0x308));
  uVar2 = FUN_042e112c(*(undefined8 *)(this + 0x10));
  *(undefined4 *)(this + 0x74) = uVar2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDartichoke::ApplyPlantfood() */

void __thiscall PlantDartichoke::ApplyPlantfood(PlantDartichoke *this)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x0;
  float fVar4;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_38 [24];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 200))(avStack_38,this,2,0x800);
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  fVar4 = *pfVar1;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(avStack_38);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(avStack_38);
  local_50 = FUN_042e27d8(uVar2,uVar3,(int)fVar4);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_40,(__normal_iterator *)&local_50);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_38);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_20,(__normal_iterator *)&local_48);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::erase
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             avStack_38,local_40,local_20[0]);
  FUN_042e1108((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)local_20,*(undefined8 *)(this + 0x10));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
  ClassBucketFilter::FilterToList((vector *)(extraout_x0 + 0x2e8),SUB81(avStack_38,0));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::operator=
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x48),(vector *)local_20);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             local_20);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  fillAmmo(this);
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

