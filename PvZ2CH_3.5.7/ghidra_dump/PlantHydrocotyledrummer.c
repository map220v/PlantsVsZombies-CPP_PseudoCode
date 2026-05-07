// Class: PlantHydrocotyledrummer


/* PlantHydrocotyledrummer::setState(HydrocotyledrummerState) */

void __thiscall PlantHydrocotyledrummer::setState(PlantHydrocotyledrummer *this,undefined4 param_2)

{
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHydrocotyledrummer::HavePlantfoodSinger() */

void __thiscall PlantHydrocotyledrummer::HavePlantfoodSinger(PlantHydrocotyledrummer *this)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  Plant *this_00;
  undefined8 local_40;
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesOnBoard(avStack_20,1);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
    if (!bVar1) {
LAB_040de22c:
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(bVar1);
    }
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar3);
    if ((this_00 != (Plant *)0x0) && (*(Plant **)(this + 0x10) != this_00)) {
      Plant::GetType();
      Plant::GetType();
      cVar2 = Sexy::RtWeakPtrBase::operator==
                        ((RtWeakPtrBase *)aRStack_30,(RtWeakPtrBase *)aRStack_28);
      if (cVar2 != '\0') {
        if (*(code **)(*(long *)this_00 + 0x1f8) == Plant::IsInPlantFoodState) {
          cVar2 = Plant::IsInPlantFoodState(this_00);
        }
        else {
          cVar2 = (**(code **)(*(long *)this_00 + 0x1f8))();
        }
        if (cVar2 != '\0') {
          bVar1 = true;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
          goto LAB_040de22c;
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHydrocotyledrummer::GetFireSoundEvent() const */

void PlantHydrocotyledrummer::GetFireSoundEvent(void)

{
  long lVar1;
  char cVar2;
  long *in_x0;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = (**(code **)(*in_x0 + 0x180))();
  if (cVar2 == '\0') {
    std::string::string(in_x8,"Play_Plant_WitchHazel_Attack");
    nop();
  }
  else {
    std::string::string(in_x8,"Play_Plant_WitchHazel_Plantfood");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHydrocotyledrummer::StaticClassInit() */

void PlantHydrocotyledrummer::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantHydrocotyledrummer");
    (*pcVar2)(plVar1,asStack_10,FUN_04cd9d44,200,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHydrocotyledrummer::StaticGetClass() */

long * PlantHydrocotyledrummer::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantHydrocotyledrummer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantHydrocotyledrummer::GetClass() const */

long * PlantHydrocotyledrummer::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantHydrocotyledrummer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHydrocotyledrummer::BuffAttackPlant(Plant*, bool) */

void __thiscall
PlantHydrocotyledrummer::BuffAttackPlant(PlantHydrocotyledrummer *this,Plant *param_1,bool param_2)

{
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HydrocotyledrummerParams::HydrocotyledrummerParams((HydrocotyledrummerParams *)&local_20);
  if (param_2) {
    local_10 = *(undefined8 *)(this + 0x54);
    local_20 = *(undefined8 *)(this + 0x44);
    local_18 = *(undefined8 *)(this + 0x4c);
  }
  else {
    local_10 = *(undefined8 *)(this + 0x3c);
    local_20 = *(undefined8 *)(this + 0x2c);
    local_18 = *(undefined8 *)(this + 0x34);
  }
  Plant::SetAttackUpValue(param_1,true,(float)local_20,local_20._4_4_);
  Plant::ChangeSpeedModifier
            (param_1,((float)local_18 + 1.0) * *(float *)(param_1 + 0xe0),(float)local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHydrocotyledrummer::BuffDefendPlant(Plant*, bool) */

void __thiscall
PlantHydrocotyledrummer::BuffDefendPlant(PlantHydrocotyledrummer *this,Plant *param_1,bool param_2)

{
  float fVar1;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HydrocotyledrummerParams::HydrocotyledrummerParams((HydrocotyledrummerParams *)&local_20);
  if (param_2) {
    local_10 = *(undefined8 *)(this + 0x54);
    local_20 = *(undefined8 *)(this + 0x44);
    uStack_18 = *(undefined8 *)(this + 0x4c);
  }
  else {
    local_10 = *(undefined8 *)(this + 0x3c);
    local_20 = *(undefined8 *)(this + 0x2c);
    uStack_18 = *(undefined8 *)(this + 0x34);
  }
  fVar1 = (float)Plant::GetMaxHealth(param_1);
  (**(code **)(*(long *)param_1 + 0x1e0))(param_1,(int)(fVar1 * uStack_18._4_4_),0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHydrocotyledrummer::BuffMusicPlant(Plant*, bool) */

void __thiscall
PlantHydrocotyledrummer::BuffMusicPlant(PlantHydrocotyledrummer *this,Plant *param_1,bool param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HydrocotyledrummerParams::HydrocotyledrummerParams((HydrocotyledrummerParams *)&local_20);
  if (param_2) {
    local_10 = *(undefined8 *)(this + 0x54);
    local_20 = *(undefined8 *)(this + 0x44);
    uStack_18 = *(undefined8 *)(this + 0x4c);
  }
  else {
    local_10 = *(undefined8 *)(this + 0x3c);
    local_20 = *(undefined8 *)(this + 0x2c);
    uStack_18 = *(undefined8 *)(this + 0x34);
  }
  fVar3 = (float)local_10;
  fVar1 = (float)local_20;
  fVar2 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
  Plant::SetAttackUpValue(param_1,true,fVar1,fVar2 + fVar3);
  fVar2 = *(float *)(param_1 + 0xe0);
  fVar1 = local_10._4_4_;
  fVar3 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
  Plant::ChangeSpeedModifier(param_1,(fVar1 + 1.0 + fVar3) * fVar2,(float)local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHydrocotyledrummer::PlayDanceEffect(Plant*) */

void __thiscall
PlantHydrocotyledrummer::PlayDanceEffect(PlantHydrocotyledrummer *this,Plant *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ResourceInfo *pRVar3;
  Effect_PopAnim *pEVar4;
  string asStack_38 [8];
  string asStack_30 [8];
  Vec3 aVStack_28 [16];
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3(aVStack_28,0.0,-28.0,0.0);
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  local_18 = *puVar2;
  local_10 = *(undefined4 *)(puVar2 + 1);
  EATextSquish::Vec3::operator+=((Vec3 *)&local_18,aVStack_28);
  iVar1 = Board::MakeRenderOrder(0x65130,0,0);
  pEVar4 = *(Effect_PopAnim **)(this + 0xc0);
  if (pEVar4 == (Effect_PopAnim *)0x0) {
    pEVar4 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    *(Effect_PopAnim **)(this + 0xc0) = pEVar4;
    std::string::string(asStack_38,"POPANIM_EFFECTS_HYDROCOTYLEDRUMMER_PLANTFOOD_SUNTX");
    GetPAMByName(asStack_38);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_30);
    std::string::~string(asStack_38);
    nop();
    Effect_PopAnim::CreatePopAnimRig
              (*(Effect_PopAnim **)(this + 0xc0),(PopAnim *)pRVar3,(RtClass *)0x0);
    Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0xc0),true);
    StandaloneEffect::SetBoardSpaceOrigin
              (*(StandaloneEffect **)(this + 0xc0),(SexyVector3 *)&local_18,iVar1);
    pEVar4 = *(Effect_PopAnim **)(this + 0xc0);
  }
  std::string::string(asStack_30,"dancing");
  Effect_PopAnim::PlaySingleAnimation(pEVar4,asStack_30,0);
  std::string::~string(asStack_30);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantHydrocotyledrummer::PlantHydrocotyledrummer() */

void __thiscall PlantHydrocotyledrummer::PlantHydrocotyledrummer(PlantHydrocotyledrummer *this)

{
  undefined4 uVar1;
  
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_0699f970;
  HydrocotyledrummerParams::HydrocotyledrummerParams((HydrocotyledrummerParams *)(this + 0x2c));
  HydrocotyledrummerParams::HydrocotyledrummerParams((HydrocotyledrummerParams *)(this + 0x44));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x78));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x90));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xa8));
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x28) = uVar1;
  return;
}


/* PlantHydrocotyledrummer::StaticNew() */

PlantHydrocotyledrummer * PlantHydrocotyledrummer::StaticNew(void)

{
  PlantHydrocotyledrummer *this;
  
  this = ::operator_new(200);
  PlantHydrocotyledrummer(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHydrocotyledrummer::Level5Cure(Plant*, bool) */

void PlantHydrocotyledrummer::Level5Cure(Plant *param_1,bool param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  Plant *this;
  float fVar4;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this = (Plant *)(ulong)param_2;
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_04cdaeb8(*(undefined8 *)(param_1 + 0x10));
  Plant::GetType();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  FUN_05475d88(asStack_18,lVar3 + 8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  cVar1 = StringRestrictionSet::IsExcluded((StringRestrictionSet *)(lVar2 + 0x440),asStack_18);
  if (cVar1 == '\0') {
    fVar4 = (float)Plant::GetMaxHealth(this);
    (**(code **)(*(long *)this + 0x1e0))(this,(int)(fVar4 * *(float *)(lVar2 + 0x378)),0);
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHydrocotyledrummer::onAnimStoppedCallback(std::string const&) */

void __thiscall
PlantHydrocotyledrummer::onAnimStoppedCallback(PlantHydrocotyledrummer *this,string *param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  undefined4 uVar5;
  float fVar6;
  string asStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"attack");
  if (bVar1) {
    plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    pcVar4 = *(code **)(*plVar2 + 0x78);
    std::string::string(asStack_28,"idle");
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    (*pcVar4)(plVar2,asStack_28,1,0,avStack_20);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
    std::string::~string(asStack_28);
    nop();
    setState(this,0xb);
    fVar6 = (float)PVZ_T();
    lVar3 = FUN_04cdaeb8(*(undefined8 *)(this + 0x10));
    *(float *)(this + 0x28) = fVar6 + *(float *)(lVar3 + 0x2b8);
  }
  else {
    bVar1 = std::operator==(param_1,"plantfood");
    if (bVar1) {
      plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      pcVar4 = *(code **)(*plVar2 + 0x78);
      std::string::string(asStack_28,"idle");
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
      (*pcVar4)(plVar2,asStack_28,1,0,avStack_20);
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
      std::string::~string(asStack_28);
      nop();
      setState(this,10);
      uVar5 = PVZ_EOT();
      *(undefined4 *)(this + 0x28) = uVar5;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHydrocotyledrummer::FindTarget() */

void __thiscall PlantHydrocotyledrummer::FindTarget(PlantHydrocotyledrummer *this)

{
  undefined4 uVar1;
  ulong uVar2;
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets
            (aIStack_30,*(int *)(*(long *)(this + 0x10) + 0x114) + -1,
             *(int *)(*(long *)(this + 0x10) + 0x110) + -1,3,3);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar1 = operator|(1,2);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,uVar1,
             aIStack_30);
  uVar2 = FUN_04cd8830(local_20,local_18);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1 < uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHydrocotyledrummer::ApplyEffect(Plant*, int, int, int, bool, bool) */

void __thiscall
PlantHydrocotyledrummer::ApplyEffect
          (PlantHydrocotyledrummer *this,Plant *param_1,int param_2,int param_3,int param_4,
          bool param_5,bool param_6)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long extraout_x0;
  long lVar5;
  Board *this_00;
  float fVar6;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_04cdb4a0(param_2,param_3);
  if (lVar3 == 0) {
    this_00 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"hydrocotyledrummer_effect");
    Board::AddGridItem(this_00,asStack_10,param_2,param_3,1);
    nop();
    std::string::~string(asStack_10);
    nop();
    lVar3 = extraout_x0;
    if (!param_5) {
      fVar6 = *(float *)(this + 0x2c);
      lVar4 = FUN_04cdaeb8(*(undefined8 *)(this + 0x10));
      if (extraout_x0 == 0) goto LAB_04cdb640;
      goto LAB_04cdb5f8;
    }
    fVar6 = *(float *)(this + 0x44);
    lVar4 = FUN_04cdaeb8(*(undefined8 *)(this + 0x10));
    if (extraout_x0 != 0) goto LAB_04cdb5f8;
  }
  else {
    if (param_5) {
      fVar6 = *(float *)(this + 0x44);
      lVar4 = FUN_04cdaeb8(*(undefined8 *)(this + 0x10));
    }
    else {
      fVar6 = *(float *)(this + 0x2c);
      lVar4 = FUN_04cdaeb8(*(undefined8 *)(this + 0x10));
    }
LAB_04cdb5f8:
    iVar2 = FUN_04cd84b8(*(undefined4 *)(*(long *)(this + 0x10) + 0x50));
    GridItemHydrocotyledrummerEffect::StartEffect((int)lVar3,fVar6,SUB41(param_4,0));
    if (iVar2 == 5) {
      Plant::GetType();
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      FUN_05475d88(asStack_18,lVar5 + 8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      cVar1 = StringRestrictionSet::IsExcluded((StringRestrictionSet *)(lVar4 + 0x440),asStack_18);
      if (cVar1 == '\0') {
        GridItemHydrocotyledrummerEffect::StartHealEffect
                  (*(float *)(lVar4 + 0x378),*(float *)(lVar4 + 0x374),SUB81(lVar3,0));
      }
      std::string::~string(asStack_18);
    }
    FUN_04cd8510(lVar3 + 0x1d0,iVar2);
    FUN_04cd8518(lVar3 + 0x1d4,param_6);
    if (!param_5) goto LAB_04cdb640;
  }
  cVar1 = Plant::CanBeWatered(param_1);
  if ((cVar1 != '\0') && (cVar1 = Plant::IsWatering(param_1), cVar1 == '\0')) {
    Plant::Water(param_1,true,-1.0);
  }
LAB_04cdb640:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHydrocotyledrummer::StopWaterPlant() */

void __thiscall PlantHydrocotyledrummer::StopWaterPlant(PlantHydrocotyledrummer *this)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  Plant *this_00;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesOnBoard(avStack_20,1);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar3);
    if (((this_00 != (Plant *)0x0) && (*(Plant **)(this + 0x10) != this_00)) &&
       (cVar2 = Plant::IsWatering(this_00), cVar2 != '\0')) {
      Plant::Water(this_00,false,-1.0);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHydrocotyledrummer::UpdateActions() */

void __thiscall PlantHydrocotyledrummer::UpdateActions(PlantHydrocotyledrummer *this)

{
  int iVar1;
  char cVar2;
  long lVar3;
  PopAnimRig *pPVar4;
  float fVar5;
  undefined4 uVar6;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  iVar1 = *(int *)(*(long *)(this + 0x10) + 200);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 10) {
    cVar2 = FindTarget(this);
    if (cVar2 != '\0') {
      pPVar4 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_58,"attack");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x398);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<PlantHydrocotyledrummer,void(PlantHydrocotyledrummer::*)(std::string_const&)>
                (aDStack_38,aCStack_50);
      PopAnimRig::PlayAndStop(pPVar4,asStack_58,0,aDStack_38);
      std::string::~string(asStack_58);
      nop();
      setState(this,0xc);
    }
  }
  else if (iVar1 == 0xb) {
    fVar5 = (float)PVZ_T();
    if (*(float *)(this + 0x28) < fVar5) {
      uVar6 = PVZ_EOT();
      *(undefined4 *)(this + 0x28) = uVar6;
      setState(this,10);
    }
  }
  else if (iVar1 == 0xd) {
    StopWaterPlant(this);
    fVar5 = (float)PVZ_T();
    lVar3 = FUN_04cdaeb8(*(undefined8 *)(this + 0x10));
    *(float *)(this + 0x28) = fVar5 + *(float *)(lVar3 + 0x2b8);
    setState(this,0xb);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHydrocotyledrummer::ApplyPlantfood() */

void __thiscall PlantHydrocotyledrummer::ApplyPlantfood(PlantHydrocotyledrummer *this)

{
  char cVar1;
  RealObject *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  setState(this,0xe);
  cVar1 = HavePlantfoodSinger(this);
  if (cVar1 == '\0') {
    this_00 = *(RealObject **)(this + 0x10);
    std::string::string(asStack_10,"Play_TwoYear_BGM");
    RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
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
/* PlantHydrocotyledrummer::CancelPlantfood() */

void __thiscall PlantHydrocotyledrummer::CancelPlantfood(PlantHydrocotyledrummer *this)

{
  char cVar1;
  RealObject *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  setState(this,0xd);
  cVar1 = HavePlantfoodSinger(this);
  if (cVar1 == '\0') {
    this_00 = *(RealObject **)(this + 0x10);
    std::string::string(asStack_10,"Stop_TwoYear_BGM");
    RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHydrocotyledrummer::~PlantHydrocotyledrummer() */

void __thiscall PlantHydrocotyledrummer::~PlantHydrocotyledrummer(PlantHydrocotyledrummer *this)

{
  *(undefined ***)this = &PTR_GetClass_0699f970;
  if (*(long **)(this + 0xc0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xc0) + 0x18))();
    *(undefined8 *)(this + 0xc0) = 0;
  }
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xa8));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x90));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x78));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x60));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantHydrocotyledrummer::~PlantHydrocotyledrummer() */

void __thiscall PlantHydrocotyledrummer::~PlantHydrocotyledrummer(PlantHydrocotyledrummer *this)

{
  ~PlantHydrocotyledrummer(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHydrocotyledrummer::DoBuff() */

void __thiscall PlantHydrocotyledrummer::DoBuff(PlantHydrocotyledrummer *this)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets
            (aIStack_30,*(int *)(*(long *)(this + 0x10) + 0x114) + -1,
             *(int *)(*(long *)(this + 0x10) + 0x110) + -1,3,3);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar1 = operator|(1,2);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,uVar1,
             aIStack_30);
  lVar2 = FUN_04cd8830(local_20,local_18);
  if (lVar2 != 0) {
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_20);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_20);
    FUN_04cdcc7c(uVar3,uVar4,this);
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
/* PlantHydrocotyledrummer::DoSpecialBuff() */

void __thiscall PlantHydrocotyledrummer::DoSpecialBuff(PlantHydrocotyledrummer *this)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  RealObject *extraout_x0;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_04cdaeb8(*(undefined8 *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntities
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2);
  lVar4 = FUN_04cd8830(local_20,local_18);
  if (lVar4 != 0) {
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      nop();
      cVar2 = RealObject::IsOnOpposingTeam(*(RealObject **)(this + 0x10),extraout_x0);
      if (cVar2 != '\0') {
                    /* WARNING: Load size is inaccurate */
        Zombie::ApplyCondition(*(Zombie **)(lVar3 + 0x2c8),0,extraout_x0,2,1);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  EntityFinder::GetEntities
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1);
  lVar3 = FUN_04cd8830(local_20,local_18);
  if (lVar3 != 0) {
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_20);
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_20);
    FUN_04cdcf34(uVar5,uVar6,this);
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
/* PlantHydrocotyledrummer::OnAnimCommand(std::string const&, std::string const&) */

void PlantHydrocotyledrummer::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  char cVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"use_action");
  if (bVar1) {
    cVar2 = (**(code **)(*(long *)param_1 + 0x180))(param_1);
    if (cVar2 == '\0') {
      DoBuff((PlantHydrocotyledrummer *)param_1);
    }
    else {
      DoSpecialBuff((PlantHydrocotyledrummer *)param_1);
    }
    (**(code **)(*(long *)param_1 + 0x300))(asStack_10,param_1);
    RealObject::PlayPositionalSound(*(RealObject **)(param_1 + 0x10),asStack_10,0.0);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* PlantHydrocotyledrummer::Initialize() */

void __thiscall PlantHydrocotyledrummer::Initialize(PlantHydrocotyledrummer *this)

{
  vector<std::string,std::allocator<std::string>> *pvVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  Plant *this_00;
  undefined8 local_8;
  
  PlantFramework::Initialize((PlantFramework *)this);
  this_00 = *(Plant **)(this + 0x10);
  *(undefined4 *)(this_00 + 200) = 10;
  iVar3 = FUN_04cd84b8(*(undefined4 *)(this_00 + 0x50));
  cVar2 = Plant::GetAvatarEnable(this_00);
  lVar4 = FUN_04cdaeb8(*(undefined8 *)(this + 0x10));
  if (lVar4 != 0) {
    if ((iVar3 == 1) ||
       ((((puVar5 = (undefined8 *)(lVar4 + 0x2e4), iVar3 != 2 &&
          (puVar5 = (undefined8 *)(lVar4 + 0x2fc), iVar3 != 3)) &&
         (puVar5 = (undefined8 *)(lVar4 + 0x314), iVar3 != 4)) &&
        (puVar5 = (undefined8 *)(lVar4 + 0x32c), iVar3 != 5)))) {
      puVar5 = (undefined8 *)(lVar4 + 0x2cc);
    }
    uVar6 = *puVar5;
    uVar7 = puVar5[1];
    *(undefined8 *)(this + 0x3c) = puVar5[2];
    puVar5 = (undefined8 *)(lVar4 + 0x35c);
    *(undefined8 *)(this + 0x2c) = uVar6;
    *(undefined8 *)(this + 0x34) = uVar7;
    if (cVar2 == '\0') {
      puVar5 = (undefined8 *)(lVar4 + 0x344);
    }
    pvVar1 = (vector<std::string,std::allocator<std::string>> *)(this + 0x60);
    uVar6 = *puVar5;
    uVar7 = puVar5[1];
    *(undefined8 *)(this + 0x54) = puVar5[2];
    *(undefined8 *)(this + 0x44) = uVar6;
    *(undefined8 *)(this + 0x4c) = uVar7;
    std::vector<std::string,std::allocator<std::string>>::clear(pvVar1);
    std::vector<std::string,std::allocator<std::string>>::clear
              ((vector<std::string,std::allocator<std::string>> *)(this + 0x78));
    if (iVar3 == 1) {
      uVar6 = FUN_04cdaaa0(*(undefined8 *)(lVar4 + 0x380));
      uVar7 = FUN_04cdaaf0(*(undefined8 *)(lVar4 + 0x388));
      std::vector<std::string,std::allocator<std::string>>::
      assign<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,void>
                (pvVar1,uVar6,uVar7);
      local_8 = FUN_04cdaaa0(*(undefined8 *)(lVar4 + 0x398));
      uVar6 = *(undefined8 *)(lVar4 + 0x3a0);
    }
    else {
      uVar6 = FUN_04cdaaa0(*(undefined8 *)(lVar4 + 0x3b0));
      uVar7 = FUN_04cdaaf0(*(undefined8 *)(lVar4 + 0x3b8));
      std::vector<std::string,std::allocator<std::string>>::
      assign<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,void>
                (pvVar1,uVar6,uVar7);
      local_8 = FUN_04cdaaa0(*(undefined8 *)(lVar4 + 0x3c8));
      uVar6 = *(undefined8 *)(lVar4 + 0x3d0);
    }
    uVar6 = FUN_04cdaaf0(uVar6);
    pvVar1 = (vector<std::string,std::allocator<std::string>> *)(this + 0x90);
    std::vector<std::string,std::allocator<std::string>>::
    assign<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,void>
              ((vector<std::string,std::allocator<std::string>> *)(this + 0x78),local_8,uVar6);
    std::vector<std::string,std::allocator<std::string>>::clear(pvVar1);
    std::vector<std::string,std::allocator<std::string>>::clear
              ((vector<std::string,std::allocator<std::string>> *)(this + 0xa8));
    cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    if (cVar2 == '\0') {
      uVar6 = FUN_04cdaaa0(*(undefined8 *)(lVar4 + 0x3e0));
      uVar7 = FUN_04cdaaf0(*(undefined8 *)(lVar4 + 1000));
      std::vector<std::string,std::allocator<std::string>>::
      assign<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,void>
                (pvVar1,uVar6,uVar7);
      local_8 = FUN_04cdaaa0(*(undefined8 *)(lVar4 + 0x3f8));
      uVar6 = *(undefined8 *)(lVar4 + 0x400);
    }
    else {
      uVar6 = FUN_04cdaaa0(*(undefined8 *)(lVar4 + 0x410));
      uVar7 = FUN_04cdaaf0(*(undefined8 *)(lVar4 + 0x418));
      std::vector<std::string,std::allocator<std::string>>::
      assign<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,void>
                (pvVar1,uVar6,uVar7);
      local_8 = FUN_04cdaaa0(*(undefined8 *)(lVar4 + 0x428));
      uVar6 = *(undefined8 *)(lVar4 + 0x430);
    }
    uVar6 = FUN_04cdaaf0(uVar6);
    std::vector<std::string,std::allocator<std::string>>::
    assign<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,void>
              ((vector<std::string,std::allocator<std::string>> *)(this + 0xa8),local_8,uVar6);
  }
  *(undefined8 *)(this + 0xc0) = 0;
  return;
}

