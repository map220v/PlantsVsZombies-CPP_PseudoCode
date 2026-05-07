// Class: BeanChemistSmoke


/* BeanChemistSmoke::CalcRenderOrder() const */

void __thiscall BeanChemistSmoke::CalcRenderOrder(BeanChemistSmoke *this)

{
  undefined4 uVar1;
  
  uVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x61cd8,0,uVar1);
  return;
}


/* non-virtual thunk to BeanChemistSmoke::CalcRenderOrder() const */

void __thiscall BeanChemistSmoke::CalcRenderOrder(BeanChemistSmoke *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeanChemistSmoke::StaticClassInit() */

void BeanChemistSmoke::StaticClassInit(void)

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
    std::string::string(asStack_10,"BeanChemistSmoke");
    (*pcVar2)(plVar1,asStack_10,FUN_04251b4c,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BeanChemistSmoke::StaticGetClass() */

long * BeanChemistSmoke::StaticGetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"BeanChemistSmoke",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BeanChemistSmoke::GetClass() const */

long * BeanChemistSmoke::GetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"BeanChemistSmoke",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BeanChemistSmoke::~BeanChemistSmoke() */

void __thiscall BeanChemistSmoke::~BeanChemistSmoke(BeanChemistSmoke *this)

{
  *(undefined ***)this = &PTR_GetClass_06819270;
  *(undefined ***)(this + 0x10) = &PTR__BeanChemistSmoke_06819528;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c0));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to BeanChemistSmoke::~BeanChemistSmoke() */

void __thiscall BeanChemistSmoke::~BeanChemistSmoke(BeanChemistSmoke *this)

{
  ~BeanChemistSmoke(this + -0x10);
  return;
}


/* BeanChemistSmoke::~BeanChemistSmoke() */

void __thiscall BeanChemistSmoke::~BeanChemistSmoke(BeanChemistSmoke *this)

{
  ~BeanChemistSmoke(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BeanChemistSmoke::~BeanChemistSmoke() */

void __thiscall BeanChemistSmoke::~BeanChemistSmoke(BeanChemistSmoke *this)

{
  ~BeanChemistSmoke(this + -0x10);
  return;
}


/* BeanChemistSmoke::BeanChemistSmoke() */

void __thiscall BeanChemistSmoke::BeanChemistSmoke(BeanChemistSmoke *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_06819270;
  *(undefined ***)(this + 0x10) = &PTR__BeanChemistSmoke_06819528;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1a8) = uVar1;
  *(undefined4 *)(this + 0x1b8) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1c0));
  return;
}


/* BeanChemistSmoke::StaticNew() */

BeanChemistSmoke * BeanChemistSmoke::StaticNew(void)

{
  BeanChemistSmoke *this;
  
  this = ::operator_new(0x1c8);
  BeanChemistSmoke(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeanChemistSmoke::SetBulletType(BeanChemistBulletType) */

void __thiscall BeanChemistSmoke::SetBulletType(BeanChemistSmoke *this,int param_2)

{
  PopAnimRig *pPVar1;
  char *__s;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  *(int *)(this + 0x1ac) = param_2;
  local_8 = ___stack_chk_guard;
  if (param_2 == 0) {
    __s = "POPANIM_EFFECTS_BEANCHEMIST_SMOKE_GREEN";
  }
  else if (param_2 == 1) {
    __s = "POPANIM_EFFECTS_BEANCHEMIST_SMOKE_BLUE";
  }
  else {
    if (param_2 != 2) goto LAB_04252040;
    __s = "POPANIM_EFFECTS_BEANCHEMIST_SMOKE_PURPLE";
  }
  std::string::string((string *)aRStack_48,__s);
  std::string::string(asStack_40,"PopAnimRig");
  GridItemAnimation::setAnimRig((GridItemAnimation *)this,(string *)aRStack_48,asStack_40);
  std::string::~string(asStack_40);
  nop();
  std::string::~string((string *)aRStack_48);
  nop();
LAB_04252040:
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  std::string::string(asStack_40,"animation");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x1a8) = fVar2 + 10.0;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeanChemistSmoke::onUpdate() */

void __thiscall BeanChemistSmoke::onUpdate(BeanChemistSmoke *this)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  Zombie *this_00;
  ulong uVar7;
  undefined8 uVar8;
  int *piVar9;
  Plant *this_01;
  ulong uVar10;
  code *pcVar11;
  Board *pBVar12;
  float fVar13;
  int local_98;
  int local_94;
  Point aPStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_68 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  fVar13 = (float)PVZ_T();
  if (fVar13 <= *(float *)(this + 0x1a8)) {
    uVar10 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
    uVar3 = FUN_04250df0(*(undefined4 *)(this + 0x130));
    uVar4 = FUN_04250df4(*(undefined4 *)(this + 0x134));
    EntityFinder::GetEntitiesAtGridSquare
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,2,uVar3,
               uVar4);
    uVar8 = local_80;
    lVar5 = FUN_04250ec8(local_80,local_78);
    if (lVar5 != 0) {
      do {
        puVar6 = (undefined8 *)FUN_04250ed4(uVar8,uVar10);
        this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
        if (this_00 != (Zombie *)0x0) {
          cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x1c0));
          if (cVar2 != '\0') {
            ToolPacketData::GetProps();
            cVar2 = Sexy::RtWeakPtrBase::operator==
                              ((RtWeakPtrBase *)local_68,(RtWeakPtrBase *)(this + 0x1c0));
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
            if (cVar2 != '\0') goto LAB_042541c0;
          }
          cVar2 = FUN_04253148(this_00,5);
          if (cVar2 == '\0') {
            Zombie::ApplyCondition((Zombie *)0x3f800000,0,this_00,0x7e,1);
            uVar8 = Zombie::GetConditionTracker(this_00);
                    /* WARNING: Load size is inaccurate */
            ZombieConditionTracker::SetAdditionalValue
                      (*(ZombieConditionTracker **)(this + 0x1b0),uVar8,0x7e);
          }
          else {
            BoardEntity::CalcGridPosition();
            pcVar11 = *(code **)(*(long *)this_00 + 0x120);
            Sexy::Point::Point(aPStack_90,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
            DamageInfo::DamageInfo
                      ((DamageInfo *)0x0,local_88,local_84,(DamageInfo *)local_68,4,0,aPStack_90,0);
            (*pcVar11)(this_00,(DamageInfo *)local_68);
            DamageInfo::~DamageInfo((DamageInfo *)local_68);
            FUN_042536c8((FastCurve *)&local_88,*(undefined4 *)(this + 0x1ac));
            pBVar12 = *(Board **)(gLawnApp + 0x9f0);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)local_68,(RtWeakPtrBase *)&local_88);
            cVar2 = Board::CanPlantAt(pBVar12,&local_98,(DamageInfo *)local_68);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
            if (cVar2 != '\0') {
              local_68[0] = 1;
              lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
              lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar5 + 0x28));
              piVar9 = eastl::min_alt<int>((int *)(this + 0x1b4),(int *)(lVar5 + 0x2c));
              piVar9 = eastl::max_alt<int>((int *)local_68,piVar9);
              iVar1 = *piVar9;
              pBVar12 = *(Board **)(gLawnApp + 0x9f0);
              lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
              this_01 = (Plant *)Board::AddPlant(pBVar12,local_98,local_94,(string *)(lVar5 + 8),
                                                 iVar1,false,true,false,false);
              if (this_01 != (Plant *)0x0) {
                Plant::SetIsDuplicatePlant(this_01,true);
                fVar13 = (float)Sexy::Rand(1.0);
                if (((*(int *)(this + 0x1ac) - 1U < 2) &&
                    (cVar2 = Plant::CanApplyPlantfood(this_01), cVar2 != '\0')) &&
                   (fVar13 < *(float *)(this + 0x1b8))) {
                  (**(code **)(**(long **)(this_01 + 0xa8) + 0x220))(*(long **)(this_01 + 0xa8));
                }
              }
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
          }
          (**(code **)(*(long *)this + 0x48))(this);
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
          goto LAB_04253fdc;
        }
LAB_042541c0:
        uVar8 = local_80;
        uVar10 = uVar10 + 1;
        uVar7 = FUN_04250ec8(local_80,local_78);
      } while (uVar10 < uVar7);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  }
  else {
    (**(code **)(*(long *)this + 0x48))(this);
  }
LAB_04253fdc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

