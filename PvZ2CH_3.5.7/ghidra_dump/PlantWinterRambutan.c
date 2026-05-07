// Class: PlantWinterRambutan


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWinterRambutan::StaticClassInit() */

void PlantWinterRambutan::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantWinterRambutan");
    (*pcVar2)(plVar1,asStack_10,FUN_038a2e68,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWinterRambutan::StaticGetClass() */

long * PlantWinterRambutan::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantWinterRambutan",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWinterRambutan::GetClass() const */

long * PlantWinterRambutan::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantWinterRambutan",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWinterRambutan::OnAnimCommand(std::string const&, std::string const&) */

void PlantWinterRambutan::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  RtObject *this;
  code *pcVar4;
  SharkMinion *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"use_action2");
  if (bVar1) {
    FUN_038a2210(aRStack_10,*(undefined8 *)(param_1 + 0x10));
    this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    Sexy::RtObject::Cast<PlantWinterRambutanProps_const>(this);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    pcVar4 = *(code **)(*(long *)param_1 + 0x180);
    *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x150) = 1;
    cVar2 = (*pcVar4)(param_1);
    if (cVar2 != '\0') {
      *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x150) = 2;
    }
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10);
    this_00 = *(SharkMinion **)(param_1 + 0x10);
    uVar3 = SharkMinion::getRow(this_00);
    Plant::Fire((Plant *)this_00,aRStack_10,uVar3,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x150) = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWinterRambutan::onAnimStoppedCallback(std::string const&) */

void __thiscall
PlantWinterRambutan::onAnimStoppedCallback(PlantWinterRambutan *this,string *param_1)

{
  bool bVar1;
  RtObject *this_00;
  PopAnimRig *pPVar2;
  long *plVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_038a2210(aRStack_40,*(undefined8 *)(this + 0x10));
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
  Sexy::RtObject::Cast<PlantWinterRambutanProps_const>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  bVar1 = std::operator==(param_1,"attack_end");
  if (bVar1) {
    plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    (**(code **)(*plVar3 + 0x118))();
  }
  else {
    bVar1 = std::operator==(param_1,"attack_3");
    if (bVar1) {
      pPVar2 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string((string *)aRStack_40,"plantfood");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(pPVar2,aRStack_40,0,aDStack_38);
      std::string::~string((string *)aRStack_40);
      nop();
    }
    else {
      std::operator==(param_1,"sleep03");
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWinterRambutan::PlantWinterRambutan() */

void __thiscall PlantWinterRambutan::PlantWinterRambutan(PlantWinterRambutan *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR_GetClass_066b1790;
  this[0x2c] = (PlantWinterRambutan)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnRambutanReturn);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<BoardEntity*,bool,Sexy::CBMemberTranslatorX<PlantWinterRambutan,void(PlantWinterRambutan::*)(BoardEntity*,bool)>>
            ((MessageRouter *)puVar1,Message::RambutanReturn,&local_40);
  return;
}


/* PlantWinterRambutan::StaticNew() */

PlantWinterRambutan * PlantWinterRambutan::StaticNew(void)

{
  PlantWinterRambutan *this;
  
  this = ::operator_new(0x30);
  PlantWinterRambutan(this);
  return this;
}


/* PlantWinterRambutan::~PlantWinterRambutan() */

void __thiscall PlantWinterRambutan::~PlantWinterRambutan(PlantWinterRambutan *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  *(undefined ***)this = &PTR_GetClass_066b1790;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnRambutanReturn);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Unsubscribe<BoardEntity*,bool,Sexy::CBMemberTranslatorX<PlantWinterRambutan,void(PlantWinterRambutan::*)(BoardEntity*,bool)>>
            ((MessageRouter *)puVar1,Message::RambutanReturn,&local_40);
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantWinterRambutan::~PlantWinterRambutan() */

void __thiscall PlantWinterRambutan::~PlantWinterRambutan(PlantWinterRambutan *this)

{
  ~PlantWinterRambutan(this);
  AK::FreeHook(this);
  return;
}


/* PlantWinterRambutan::LaunchProjectileAt(Projectile*, Sexy::SexyVector3 const&, float, float) */

void __thiscall
PlantWinterRambutan::LaunchProjectileAt
          (PlantWinterRambutan *this,Projectile *param_1,SexyVector3 *param_2,float param_3,
          float param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_038a583c(*(undefined8 *)(this + 0x10));
  fVar4 = *(float *)(lVar1 + 700);
  lVar1 = FUN_038a583c(*(undefined8 *)(this + 0x10));
  fVar2 = (float)PlantFramework::Rand((PlantFramework *)this,*(float *)(lVar1 + 700));
  lVar1 = FUN_038a583c(*(undefined8 *)(this + 0x10));
  fVar5 = *(float *)(lVar1 + 0x2b8);
  lVar1 = FUN_038a583c(*(undefined8 *)(this + 0x10));
  fVar3 = (float)PlantFramework::Rand((PlantFramework *)this,*(float *)(lVar1 + 0x2b8));
  Projectile::LaunchAt(param_1,param_2,fVar4 + param_3 * fVar2,fVar5 + param_4 * fVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWinterRambutan::OnRambutanReturn(BoardEntity*, bool) */

void __thiscall
PlantWinterRambutan::OnRambutanReturn(PlantWinterRambutan *this,BoardEntity *param_1,bool param_2)

{
  bool bVar1;
  char cVar2;
  UIEasyButtonWidget *this_00;
  RtObject *this_01;
  PlantAnimRig_WinterRambutan *pPVar3;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    bVar1 = Sexy::RtObject::IsA<Plant>((RtObject *)param_1);
    if ((bVar1) &&
       (this_00 = *(UIEasyButtonWidget **)(this + 0x10), this_00 == (UIEasyButtonWidget *)param_1))
    {
      if (param_2) {
        cVar2 = (**(code **)(*(long *)this + 0x180))(this);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)this + 0x228))(this);
          goto LAB_038a5f24;
        }
        this_00 = *(UIEasyButtonWidget **)(this + 0x10);
      }
      this_01 = (RtObject *)UIEasyButtonWidget::GetImageNormal(this_00);
      pPVar3 = Sexy::RtObject::Cast<PlantAnimRig_WinterRambutan>(this_01);
      std::string::string(asStack_68,"attack_end");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      PlantAnimRig_WizardThorns::PlayTapAnimation
                ((PlantAnimRig_WizardThorns *)pPVar3,asStack_68,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_68);
      nop();
      this[0x2c] = (PlantWinterRambutan)0x0;
    }
  }
LAB_038a5f24:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWinterRambutan::FindTargetAndFire(PlantWeapon) */

void PlantWinterRambutan::FindTargetAndFire(long *param_1)

{
  char cVar1;
  char cVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  float *pfVar3;
  RtObject *pRVar4;
  Zombie *this_00;
  PlantAnimRig_WinterRambutan *pPVar5;
  RtMixedPtrBase aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::FindTarget(aRStack_78,param_1[2]);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_78);
  if (cVar1 != '\0') {
    this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this);
    if (*pfVar3 <= 800.0) {
      pRVar4 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78)
      ;
      this_00 = Sexy::RtObject::Cast<Zombie>(pRVar4);
      if ((((this_00 == (Zombie *)0x0) ||
           (cVar2 = Zombie::HasCondition(this_00,0x99), cVar2 == '\0')) ||
          (cVar2 = Zombie::IsFlying(this_00), cVar2 != '\0')) && ((int)param_1[5] < 7)) {
        *(int *)(param_1 + 5) = (int)param_1[5] + 1;
        (**(code **)(*param_1 + 0x1a0))(param_1);
      }
      else {
        pRVar4 = (RtObject *)UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)param_1[2]);
        pPVar5 = Sexy::RtObject::Cast<PlantAnimRig_WinterRambutan>(pRVar4);
        std::string::string(asStack_68,"attack_3");
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
        std::string::string(asStack_58,"onAnimStoppedCallback");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   aRStack_60,asStack_58);
        PlantAnimRig_WizardThorns::PlayTapAnimation
                  ((PlantAnimRig_WizardThorns *)pPVar5,asStack_68,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string(asStack_58);
        nop();
        Sexy::RtId::~RtId(aRStack_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70)
        ;
        std::string::~string(asStack_68);
        nop();
        *(undefined1 *)((long)param_1 + 0x2c) = 1;
        *(int *)(param_1 + 5) = (int)param_1[5] % 7;
      }
      goto LAB_038a60b8;
    }
  }
  cVar1 = '\0';
LAB_038a60b8:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWinterRambutan::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantWinterRambutan::Fire
          (PlantWinterRambutan *this,RtWeakPtrBase *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  RtObject *pRVar3;
  PlantWinterRambutanProps *pPVar4;
  RambutanSmallSnowballProjectile *this_00;
  RambutanPlantfoodSnowballProjectile *pRVar5;
  RambutanSnowballProjectile *this_01;
  ResourceInfo *pRVar6;
  long *plVar7;
  float *pfVar8;
  Plant *pPVar9;
  float fVar10;
  float fVar11;
  RtMixedPtrBase aRStack_38 [8];
  int local_30;
  int local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_18;
  float local_14;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_038a2210((RtWeakPtr<Sexy::ResourceInfo> *)&local_18,*(undefined8 *)(this + 0x10));
  pRVar3 = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  pPVar4 = Sexy::RtObject::Cast<PlantWinterRambutanProps_const>(pRVar3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  cVar1 = (**(code **)(*(long *)this + 0x180))(this);
  if (cVar1 == '\0') {
    if (this[0x2c] == (PlantWinterRambutan)0x0) {
      pPVar9 = *(Plant **)(this + 0x10);
      iVar2 = FUN_038a21dc(*(undefined4 *)(pPVar9 + 0x50));
      if (4 < iVar2) {
        *(undefined4 *)(pPVar9 + 0x150) = 3;
      }
    }
    else {
      pPVar9 = *(Plant **)(this + 0x10);
      *(undefined4 *)(pPVar9 + 0x150) = 1;
      this[0x2c] = (PlantWinterRambutan)0x0;
    }
  }
  else {
    pPVar9 = *(Plant **)(this + 0x10);
    *(undefined4 *)(pPVar9 + 0x150) = 2;
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_2);
  pRVar3 = (RtObject *)
           Plant::Fire(pPVar9,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18,param_3,param_4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  if (pRVar3 == (RtObject *)0x0) goto LAB_038a754c;
  this_00 = Sexy::RtObject::Cast<RambutanSmallSnowballProjectile>(pRVar3);
  pRVar5 = Sexy::RtObject::Cast<RambutanPlantfoodSnowballProjectile>(pRVar3);
  this_01 = Sexy::RtObject::Cast<RambutanSnowballProjectile>(pRVar3);
  if (this_00 != (RambutanSmallSnowballProjectile *)0x0) {
    fVar10 = *(float *)(pPVar4 + 0x2c0);
    iVar2 = FUN_038a21dc(*(undefined4 *)(*(long *)(this + 0x10) + 0x50));
    if (iVar2 < 3) {
      if (iVar2 == 2) {
        fVar10 = *(float *)(pPVar4 + 0x2c8);
      }
LAB_038a75a4:
      fVar11 = 0.0;
    }
    else {
      fVar10 = *(float *)(pPVar4 + 0x2d0);
      if (iVar2 < 5) goto LAB_038a75a4;
      fVar11 = *(float *)(pPVar4 + 0x2d8);
    }
    RambutanSmallSnowballProjectile::SetIceProbability(this_00,fVar10,fVar10,fVar11);
    PlantFramework::FindTargetZombie(aRStack_38,this,0);
    (**(code **)(*(long *)this + 0xf8))((RtWeakPtr<Sexy::ResourceInfo> *)&local_18,this,param_4);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    DVec3::DVec3((DVec3 *)&local_28);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
    if (cVar1 == '\0') {
      if (pRVar6 == (ResourceInfo *)0x0) {
        pfVar8 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          **)(this + 0x10));
        local_24 = pfVar8[1];
        local_28 = *pfVar8 + 600.0;
        local_20 = 0;
      }
      else {
        GridItem::GetGridLocation();
        BoardTransforms::GridToBoardSpace((Point *)&local_18);
        local_28 = (float)local_30;
        local_20 = 0x41c80000;
        local_24 = (float)local_2c;
      }
    }
    else {
      plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      local_18 = (**(code **)(*plVar7 + 0x3b0))(*(undefined4 *)(pPVar4 + 0x2b8));
      local_14 = fVar10;
      local_10 = fVar11;
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)&local_18);
    }
    LaunchProjectileAt(this,(Projectile *)pRVar3,(SexyVector3 *)&local_28,0.1,0.15);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  }
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if ((cVar1 != '\0') && (pRVar5 != (RambutanPlantfoodSnowballProjectile *)0x0)) {
    pRVar5[0x1b0] = (RambutanPlantfoodSnowballProjectile)0x1;
  }
  if (this_01 != (RambutanSnowballProjectile *)0x0) {
    iVar2 = FUN_038a21e0(*(undefined4 *)(*(long *)(this + 0x10) + 0x294));
    RambutanSnowballProjectile::SetAvatarIndex(this_01,iVar2);
  }
LAB_038a754c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pRVar3);
}

