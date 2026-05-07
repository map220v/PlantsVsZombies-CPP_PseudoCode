// Class: PlantIcelotus


/* PlantIcelotus::ApplyPlantfood() */

void __thiscall PlantIcelotus::ApplyPlantfood(PlantIcelotus *this)

{
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xc;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIcelotus::StaticClassInit() */

void PlantIcelotus::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantIcelotus");
    (*pcVar2)(plVar1,asStack_10,FUN_04ce79c0,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantIcelotus::StaticGetClass() */

long * PlantIcelotus::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantIcelotus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantIcelotus::GetClass() const */

long * PlantIcelotus::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantIcelotus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantIcelotus::PlantIcelotus() */

void __thiscall PlantIcelotus::PlantIcelotus(PlantIcelotus *this)

{
  undefined4 uVar1;
  
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined4 *)(this + 0x28) = 3;
  *(undefined ***)this = &PTR_GetClass_069a2680;
  *(undefined4 *)(this + 0x2c) = 3;
  *(undefined4 *)(this + 0x30) = 2;
  *(undefined4 *)(this + 0x34) = 1;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x38) = uVar1;
  return;
}


/* PlantIcelotus::StaticNew() */

PlantIcelotus * PlantIcelotus::StaticNew(void)

{
  PlantIcelotus *this;
  
  this = ::operator_new(0x40);
  PlantIcelotus(this);
  return this;
}


/* PlantIcelotus::CheckFireField(int, int, int) */

bool __thiscall
PlantIcelotus::CheckFireField(PlantIcelotus *this,int param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  
  if (param_3 == 2) {
    return true;
  }
  if (param_3 == 0) {
    bVar1 = param_1 + 1U < 2;
    bVar2 = bVar1 && param_2 == -1;
    if (!bVar1 || param_2 != -1) {
      bVar2 = (uint)param_2 < 2 && param_1 == -1;
    }
  }
  else {
    bVar2 = false;
    if (((param_3 == 1) && (bVar2 = true, param_1 != 0 || param_2 != 0)) &&
       (param_1 != 1 || param_2 != 1 && 1 < param_2 + 1U)) {
      return param_2 == 1 && param_1 == 0;
    }
  }
  return bVar2;
}


/* PlantIcelotus::CalcProjectileType() */

undefined1 __thiscall PlantIcelotus::CalcProjectileType(PlantIcelotus *this)

{
  if (*(int *)(this + 0x28) <= *(int *)(this + 0x34)) {
    return 2;
  }
  return *(int *)(this + 0x28) <= *(int *)(this + 0x30);
}


/* PlantIcelotus::~PlantIcelotus() */

void __thiscall PlantIcelotus::~PlantIcelotus(PlantIcelotus *this)

{
  *(undefined ***)this = &PTR_GetClass_069a2680;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantIcelotus::~PlantIcelotus() */

void __thiscall PlantIcelotus::~PlantIcelotus(PlantIcelotus *this)

{
  ~PlantIcelotus(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIcelotus::CreateFireEffect(bool) */

void __thiscall PlantIcelotus::CreateFireEffect(PlantIcelotus *this,bool param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  RtObject *this_00;
  Effect_PopAnim *this_01;
  char *__s;
  int local_30;
  int local_2c;
  RtWeakPtr aRStack_28 [8];
  string asStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  iVar4 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  uVar5 = Board::MakeRenderOrder(0x64960,iVar4,iVar3);
  Sexy::Point::Point((Point *)&local_18,iVar3,iVar4);
  BoardTransforms::GridToBoardSpace((Point *)&local_18);
  std::string::string(asStack_20,"POPANIM_EFFECTS_ICELOTUS_HIT");
  EATextSquish::Vec3::Vec3((Vec3 *)&local_18,(float)local_30,(float)(local_2c + -10),0.0);
  PopAnimEffectFactory::CreateEffect(aRStack_28,local_18,local_14,local_10,asStack_20,uVar5,0,1);
  std::string::~string(asStack_20);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_28);
  if ((bVar1) &&
     (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_28), cVar2 != '\0')) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    this_01 = Sexy::RtObject::Cast<Effect_PopAnim>(this_00);
    Effect_PopAnim::SetCentered(this_01,true);
    if (param_1) {
      __s = "plantfood_hit";
    }
    else {
      __s = "attack_hit";
    }
    std::string::string((string *)&local_18,__s);
    Effect_PopAnim::PlaySingleAnimation(this_01,(Point *)&local_18,0);
    std::string::~string((string *)&local_18);
    nop();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantIcelotus::CanFreezeZombieWhenBite(DamageInfo) */

byte __thiscall PlantIcelotus::CanFreezeZombieWhenBite(PlantIcelotus *this,long param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = *(long *)(this + 0x10);
  iVar3 = FUN_04ce6b7c(*(undefined4 *)(lVar4 + 0x50));
  bVar1 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_2 + 0x10),0x40000);
  lVar4 = FUN_04ce8e78(lVar4);
  bVar2 = FUN_04ce6bf8(lVar4 + 0x2c0);
  return 2 < iVar3 & bVar2 & bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIcelotus::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantIcelotus::onAnimStoppedCallback(PlantIcelotus *this,string *param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  float fVar5;
  string asStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"attack");
  if (bVar1) {
    if (*(int *)(this + 0x28) < 1) {
      *(undefined4 *)(*(UIEasyButtonWidget **)(this + 0x10) + 200) = 0xe;
    }
    else {
      plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      pcVar4 = *(code **)(*plVar2 + 0x78);
      std::string::string(asStack_28,"idle");
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
      (*pcVar4)(plVar2,asStack_28,1,0,avStack_20);
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
      std::string::~string(asStack_28);
      nop();
      fVar5 = (float)PVZ_T();
      lVar3 = FUN_04ce8e78(*(undefined8 *)(this + 0x10));
      *(float *)(this + 0x38) = fVar5 + *(float *)(lVar3 + 0x2d8);
      *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xd;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIcelotus::PostInitialize() */

void __thiscall PlantIcelotus::PostInitialize(PlantIcelotus *this)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  PlantAnimRig_Icelotus *this_00;
  long lVar4;
  undefined4 uVar5;
  string asStack_10 [8];
  long local_8;
  
  lVar4 = *(long *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_04ce6b7c(*(undefined4 *)(lVar4 + 0x50));
  lVar4 = FUN_04ce8e78(lVar4);
  if (iVar2 < 2) {
    uVar5 = *(undefined4 *)(lVar4 + 0x2b8);
    uVar1 = *(undefined4 *)(lVar4 + 0x2c8);
    *(undefined4 *)(this + 0x34) = *(undefined4 *)(lVar4 + 0x2cc);
    *(undefined4 *)(this + 0x28) = uVar5;
    *(undefined4 *)(this + 0x2c) = uVar5;
    *(undefined4 *)(this + 0x30) = uVar1;
  }
  else {
    uVar5 = *(undefined4 *)(lVar4 + 700);
    uVar1 = *(undefined4 *)(lVar4 + 0x2d0);
    *(undefined4 *)(this + 0x34) = *(undefined4 *)(lVar4 + 0x2d4);
    *(undefined4 *)(this + 0x28) = uVar5;
    *(undefined4 *)(this + 0x2c) = uVar5;
    *(undefined4 *)(this + 0x30) = uVar1;
  }
  uVar5 = PVZ_T();
  lVar4 = *(long *)(this + 0x10);
  *(undefined4 *)(this + 0x38) = uVar5;
  *(undefined4 *)(lVar4 + 200) = 10;
  uVar3 = FUN_04ce90e8(lVar4);
  FUN_05475d88(asStack_10,&DAT_06b96488);
  PlantAnimRig_DragonBabyBruit::ShowBoostedLayerSet(uVar3,asStack_10);
  std::string::~string(asStack_10);
  this_00 = (PlantAnimRig_Icelotus *)FUN_04ce90e8(*(undefined8 *)(this + 0x10));
  PlantAnimRig_Icelotus::ShowIceLayer(this_00,2 < iVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantIcelotus::CancelPlantfood() */

void __thiscall PlantIcelotus::CancelPlantfood(PlantIcelotus *this)

{
  long lVar1;
  
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  lVar1 = *(long *)(this + 0x10);
  *(undefined4 *)(lVar1 + 200) = 10;
  lVar1 = FUN_04ce90e8(lVar1);
  FUN_04ce6c20(lVar1 + 0x400);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIcelotus::UpdateLife(bool) */

void __thiscall PlantIcelotus::UpdateLife(PlantIcelotus *this,bool param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined *puVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    uVar2 = *(uint *)(this + 0x2c);
    *(uint *)(this + 0x28) = uVar2;
LAB_04ce9270:
    if ((int)uVar2 <= *(int *)(this + 0x34)) {
LAB_04ce92fc:
      uVar1 = FUN_04ce90e8(*(undefined8 *)(this + 0x10));
      puVar3 = &DAT_06b963f0;
      goto LAB_04ce92a4;
    }
  }
  else {
    uVar2 = *(int *)(this + 0x28) - 1;
    if ((int)uVar2 < 0) {
      *(undefined4 *)(this + 0x28) = 0;
      uVar2 = (uint)param_1;
      goto LAB_04ce9270;
    }
    *(uint *)(this + 0x28) = uVar2;
    if ((int)uVar2 <= *(int *)(this + 0x34)) goto LAB_04ce92fc;
  }
  if (*(int *)(this + 0x30) < (int)uVar2) {
    uVar1 = FUN_04ce90e8(*(undefined8 *)(this + 0x10));
    puVar3 = &DAT_06b96488;
  }
  else {
    uVar1 = FUN_04ce90e8(*(undefined8 *)(this + 0x10));
    puVar3 = &DAT_06b96420;
  }
LAB_04ce92a4:
  FUN_05475d88(asStack_10,puVar3);
  PlantAnimRig_DragonBabyBruit::ShowBoostedLayerSet(uVar1,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIcelotus::FindTarget() */

void __thiscall PlantIcelotus::FindTarget(PlantIcelotus *this)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  GridItemHanabi *pGVar4;
  GridItemFireCracker *pGVar5;
  GridItemSummerFireworks *pGVar6;
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  bVar1 = true;
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets
            (aIStack_30,*(int *)(*(long *)(this + 0x10) + 0x114) + -1,
             *(int *)(*(long *)(this + 0x10) + 0x110) + -1,3,3);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,aIStack_30
            );
  lVar2 = FUN_04ce6be4(local_20,local_18);
  if (lVar2 == 0) {
    bVar1 = false;
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
    EntityFinder::GetEntitiesInGridSquares
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,4,
               aIStack_30);
    lVar2 = FUN_04ce6be4(local_20,local_18);
    if (lVar2 != 0) {
      local_40 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_20);
      local_38 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38),
            bVar1) {
        puVar3 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
        pGVar4 = Sexy::RtObject::Cast<GridItemHanabi>((RtObject *)*puVar3);
        if (((pGVar4 != (GridItemHanabi *)0x0) ||
            (pGVar5 = Sexy::RtObject::Cast<GridItemFireCracker>((RtObject *)*puVar3),
            pGVar5 != (GridItemFireCracker *)0x0)) ||
           (pGVar6 = Sexy::RtObject::Cast<GridItemSummerFireworks>((RtObject *)*puVar3),
           pGVar6 != (GridItemSummerFireworks *)0x0)) break;
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
      }
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIcelotus::UpdateActions() */

void __thiscall PlantIcelotus::UpdateActions(PlantIcelotus *this)

{
  int iVar1;
  char cVar2;
  long *plVar3;
  code *pcVar4;
  float fVar5;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  iVar1 = *(int *)(*(Plant **)(this + 0x10) + 200);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 10) {
    cVar2 = FindTarget(this);
    if ((cVar2 != '\0') && (cVar2 = (**(code **)(*(long *)this + 0x180))(this), cVar2 == '\0')) {
      plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      pcVar4 = *(code **)(*plVar3 + 0x130);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      (*pcVar4)(plVar3,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xb;
    }
  }
  else if (1 < iVar1 - 0xbU) {
    if (iVar1 == 0xd) {
      fVar5 = (float)PVZ_T();
      if (*(float *)(this + 0x38) < fVar5) {
        *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
      }
    }
    else if (iVar1 == 0xe) {
      Plant::KillPlant(*(Plant **)(this + 0x10),1,0,1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIcelotus::CreateIcelotusDropwater(Sexy::Point) */

void __thiscall PlantIcelotus::CreateIcelotusDropwater(PlantIcelotus *this,int *param_2)

{
  char cVar1;
  undefined1 uVar2;
  GridIcelotusDropwater *this_00;
  GridIcelotusDropwater *this_01;
  Board *this_02;
  float fVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (GridIcelotusDropwater *)FUN_04ce9690(*param_2,param_2[1]);
  if (this_00 == (GridIcelotusDropwater *)0x0) {
    this_02 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"icelotus_dropwater");
    Board::AddGridItem(this_02,asStack_10,*param_2,param_2[1],1);
    nop();
    std::string::~string(asStack_10);
    nop();
    cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    uVar2 = false;
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(*(long *)this + 0x180))(this);
    }
    GridIcelotusDropwater::InitParam(this_01,(bool)uVar2);
    this_00 = this_01;
  }
  else {
    cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    uVar2 = false;
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(*(long *)this + 0x180))(this);
    }
    GridIcelotusDropwater::Resume(this_00,(bool)uVar2);
  }
  fVar3 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
  GridIcelotusDropwater::ExtensionDuration(this_00,fVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIcelotus::CreateDropwaterProjectile(std::vector<Sexy::Point, std::allocator<Sexy::Point> >)
    */

void __thiscall
PlantIcelotus::CreateDropwaterProjectile
          (PlantIcelotus *this,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_2)

{
  bool bVar1;
  TPoint *pTVar2;
  undefined8 local_20;
  undefined8 local_18;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(param_2);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(param_2);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    pTVar2 = (TPoint *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    Sexy::Point::Point(aPStack_10,pTVar2);
    CreateIcelotusDropwater(this,aPStack_10);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIcelotus::CreateFireField(Sexy::Point, int, int) */

void PlantIcelotus::CreateFireField
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *param_1,
               PlantIcelotus *param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(param_1);
  iVar2 = *param_3;
  iVar3 = param_3[1];
  param_4 = param_4 / 2;
  iVar4 = iVar2 - param_4;
  do {
    if (iVar2 + param_4 < iVar4) {
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(param_1);
      }
      return;
    }
    for (iVar6 = iVar3 - param_4; iVar6 <= param_4 + iVar3; iVar6 = iVar6 + 1) {
      while( true ) {
        Sexy::Point::Point(aPStack_10,iVar4,iVar6);
        cVar5 = CheckGridValid(aPStack_10);
        if ((cVar5 == '\0') ||
           (cVar5 = CheckFireField(param_2,iVar4 - iVar2,iVar6 - iVar3,param_5), cVar5 == '\0'))
        break;
        iVar1 = iVar6 + 1;
        Sexy::Point::Point(aPStack_10,iVar4,iVar6);
        std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                  ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)param_1,aPStack_10);
        iVar6 = iVar1;
        if (param_4 + iVar3 < iVar1) goto LAB_04cea36c;
      }
    }
LAB_04cea36c:
    iVar4 = iVar4 + 1;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIcelotus::TakeDamage(DamageInfo const&) */

void PlantIcelotus::TakeDamage(DamageInfo *param_1)

{
  char cVar1;
  Zombie *this;
  long lVar2;
  DamageInfo *in_x1;
  ZombieConditionsStruct *pZVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_70 [8];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo(aDStack_68,in_x1);
  cVar1 = CanFreezeZombieWhenBite((PlantIcelotus *)param_1,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
  if (((cVar1 != '\0') && (*(RtObject **)in_x1 != (RtObject *)0x0)) &&
     (this = Sexy::RtObject::Cast<Zombie>(*(RtObject **)in_x1), this != (Zombie *)0x0)) {
    lVar2 = FUN_04ce8e78(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Load size is inaccurate */
    pZVar3._0_4_ = *(ZombieConditionsStruct **)(lVar2 + 0x2c4);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_70,(RtWeakPtrBase *)aRStack_78);
    ZombieConditionsStruct::ZombieConditionsStruct(pZVar3._0_4_,aDStack_68,1,aRStack_70);
    Zombie::ApplyCondition(this,(ZombieConditionsStruct *)aDStack_68);
    PVPZoneData::~PVPZoneData((PVPZoneData *)aDStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  }
  PlantMagicbeans::TakeDamage(param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIcelotus::FireDropwater(int) */

void __thiscall PlantIcelotus::FireDropwater(PlantIcelotus *this,int param_1)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  Point aPStack_40 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<Sexy::Point,std::allocator<Sexy::Point>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  cVar1 = (**(code **)(*(long *)this + 0x180))(this);
  lVar3 = *(long *)(this + 0x10);
  if (cVar1 == '\0') {
    Sexy::Point::Point(aPStack_40,*(int *)(lVar3 + 0x114),*(int *)(lVar3 + 0x110));
    CreateFireField(avStack_20,this,aPStack_40,3,param_1);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::operator=
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_38,(vector *)avStack_20);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector(avStack_20);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::vector(avStack_20,(vector *)avStack_38);
    CreateDropwaterProjectile(this,avStack_20);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector(avStack_20);
    UpdateLife(this,false);
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_Plant_Aloe_Attack_Start");
  }
  else {
    Sexy::Point::Point(aPStack_40,*(int *)(lVar3 + 0x114),*(int *)(lVar3 + 0x110));
    CreateFireField(avStack_20,this,aPStack_40,5,param_1);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::operator=
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_38,(vector *)avStack_20);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector(avStack_20);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::vector(avStack_20,(vector *)avStack_38);
    CreateDropwaterProjectile(this,avStack_20);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector(avStack_20);
    UpdateLife(this,true);
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_Plant_Aloe_Plantfood_Start");
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantIcelotus::OnAnimCommand(std::string const&, std::string const&) */

void PlantIcelotus::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_2,"use_action");
  if (bVar1) {
    FireDropwater((PlantIcelotus *)param_1,2);
    PlantFramework::OnAnimCommand(param_1,param_2);
    return;
  }
  bVar1 = std::operator==(param_2,"use_action_left");
  if (bVar1) {
    FireDropwater((PlantIcelotus *)param_1,0);
    CreateFireEffect((PlantIcelotus *)param_1,false);
  }
  else {
    bVar1 = std::operator==(param_2,"use_action_right");
    if (bVar1) {
      FireDropwater((PlantIcelotus *)param_1,1);
      CreateFireEffect((PlantIcelotus *)param_1,false);
      PlantFramework::OnAnimCommand(param_1,param_2);
      return;
    }
    bVar1 = std::operator==(param_2,"use_action_plantfood");
    if (bVar1) {
      FireDropwater((PlantIcelotus *)param_1,2);
      CreateFireEffect((PlantIcelotus *)param_1,true);
    }
  }
  PlantFramework::OnAnimCommand(param_1,param_2);
  return;
}

