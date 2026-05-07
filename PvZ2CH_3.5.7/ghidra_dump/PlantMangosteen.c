// Class: PlantMangosteen


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMangosteen::StaticClassInit() */

void PlantMangosteen::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantMangosteen");
    (*pcVar2)(plVar1,asStack_10,FUN_03b080cc,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMangosteen::StaticGetClass() */

long * PlantMangosteen::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantMangosteen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantMangosteen::GetClass() const */

long * PlantMangosteen::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantMangosteen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMangosteen::getIndexStr() */

void PlantMangosteen::getIndexStr(void)

{
  long in_x0;
  undefined1 *__n;
  string *in_x8;
  undefined1 auStack_10 [8];
  long local_8;
  
  __n = auStack_10;
  local_8 = ___stack_chk_guard;
  std::string::string(in_x8,"");
  nop();
  if (*(int *)(in_x0 + 0x34) == 0xc) {
    std::string::append(in_x8,"2",(size_t)__n);
  }
  else if (*(int *)(in_x0 + 0x34) == 0xd) {
    std::string::append(in_x8,"3",(size_t)__n);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMangosteen::~PlantMangosteen() */

void __thiscall PlantMangosteen::~PlantMangosteen(PlantMangosteen *this)

{
  *(undefined ***)this = &PTR_GetClass_0672a980;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantMangosteen::~PlantMangosteen() */

void __thiscall PlantMangosteen::~PlantMangosteen(PlantMangosteen *this)

{
  ~PlantMangosteen(this);
  AK::FreeHook(this);
  return;
}


/* PlantMangosteen::PlantMangosteen() */

void __thiscall PlantMangosteen::PlantMangosteen(PlantMangosteen *this)

{
  undefined4 uVar1;
  
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_0672a980;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x28) = uVar1;
  *(undefined4 *)(this + 0x2c) = uVar1;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x34) = 0xb;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x30) = uVar1;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48));
  return;
}


/* PlantMangosteen::StaticNew() */

PlantMangosteen * PlantMangosteen::StaticNew(void)

{
  PlantMangosteen *this;
  
  this = ::operator_new(0x50);
  PlantMangosteen(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMangosteen::canTarget(BoardEntity*) */

void PlantMangosteen::canTarget(BoardEntity *param_1)

{
  char cVar1;
  Zombie *this;
  GridItem *pGVar2;
  undefined8 uVar3;
  string *psVar4;
  code *pcVar5;
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (BoardEntity *)0x0) {
    uVar3 = 0;
    goto LAB_03b08a48;
  }
  this = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
  if ((((this == (Zombie *)0x0) || (cVar1 = (**(code **)(*(long *)this + 0x330))(), cVar1 != '\0'))
      || (cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 != '\0')) ||
     (cVar1 = Zombie::IsIgnoringAllDamage(this), cVar1 != '\0')) {
LAB_03b08a24:
    pGVar2 = Sexy::RtObject::Cast<GridItem>((RtObject *)param_1);
    if ((pGVar2 == (GridItem *)0x0) ||
       (cVar1 = (**(code **)(*(long *)pGVar2 + 0x200))(), cVar1 == '\0')) {
      uVar3 = 0;
      goto LAB_03b08a48;
    }
  }
  else {
    pcVar5 = *(code **)(*(long *)this + 0x3d0);
    psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_20,"mangosteen");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    cVar1 = (*pcVar5)(this,aRStack_10,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    std::string::~string(asStack_20);
    nop();
    if (cVar1 == '\0') goto LAB_03b08a24;
  }
  uVar3 = 1;
LAB_03b08a48:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMangosteen::startAttack() */

void __thiscall PlantMangosteen::startAttack(PlantMangosteen *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  PlantAnimRig_Mangosteen *pPVar6;
  long lVar7;
  float *pfVar8;
  undefined8 *puVar9;
  Zombie *this_00;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_48;
  undefined8 local_40;
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 == '\0') {
    if (*(int *)(this + 0x3c) <= *(int *)(this + 0x38)) goto LAB_03b08c2c;
    uVar10 = *(undefined8 *)(this + 0x10);
    iVar3 = FUN_03b06108(uVar10);
    if (4 < iVar3) {
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x40));
      if (cVar1 == '\0') {
        lVar7 = FUN_03b07de0(*(undefined8 *)(this + 0x10));
        pfVar8 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          **)(this + 0x10));
        fVar13 = *pfVar8;
        fVar12 = pfVar8[1];
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_20);
        fVar11 = k_mangosteen_find_rang_factor;
        cVar1 = NewPVPUtils::IsPlayingNewPVP();
        if (cVar1 == '\0') {
          iVar3 = -1;
          iVar4 = -1;
        }
        else {
          iVar4 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
          iVar4 = iVar4 - (int)*(float *)(lVar7 + 0x2c4);
          iVar3 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
          iVar3 = iVar3 + (int)*(float *)(lVar7 + 0x2c4);
          iVar5 = BoardConstants::GRIDSQUARE_HEIGHT();
          fVar11 = (float)iVar5 * 0.9;
        }
        Sexy::FastCurve::SetOutRange((FastCurve *)asStack_28,fVar13,fVar12);
        EntityFinder::GetEntitiesTouchingCircle2D
                  (fVar11 * *(float *)(lVar7 + 0x2c4),
                   (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_20,2,
                   (FastCurve *)asStack_28,iVar4,iVar3);
        local_48 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)asStack_20);
        local_40 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)asStack_20);
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40),
              bVar2) {
          puVar9 = (undefined8 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
          this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar9);
          cVar1 = canTarget((BoardEntity *)this_00);
          if ((((cVar1 != '\0') && (cVar1 = Zombie::IsControlled(this_00), cVar1 == '\0')) &&
              (cVar1 = Creature::IsOnBoard(), cVar1 != '\0')) &&
             ((iVar3 = Zombie::GetSizeType(this_00), iVar3 == 0 ||
              (iVar3 = Zombie::GetSizeType(this_00), iVar3 == 1)))) {
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                      ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x40),
                       (RtWeakPtrBase *)asStack_28);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
            pPVar6 = (PlantAnimRig_Mangosteen *)FUN_03b07ec0(*(undefined8 *)(this + 0x10));
            getIndexStr();
            std::operator+("fire",asStack_38);
            std::string::string(asStack_28,"onAnimStoppedCallback");
            PlantAnimRig_Mangosteen::playAnimation(pPVar6,asStack_30,asStack_28);
            std::string::~string(asStack_28);
            nop();
            std::string::~string(asStack_30);
            std::string::~string(asStack_38);
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)asStack_20);
            goto LAB_03b08c2c;
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
        }
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)asStack_20);
        uVar10 = *(undefined8 *)(this + 0x10);
      }
      else {
        uVar10 = *(undefined8 *)(this + 0x10);
      }
    }
    pPVar6 = (PlantAnimRig_Mangosteen *)FUN_03b07ec0(uVar10);
    getIndexStr();
    std::operator+("attack",asStack_30);
    std::string::string(asStack_20,"onAnimStoppedCallback");
    PlantAnimRig_Mangosteen::playAnimation(pPVar6,asStack_28,asStack_20);
    std::string::~string(asStack_20);
  }
  else {
    pPVar6 = (PlantAnimRig_Mangosteen *)FUN_03b07ec0(*(undefined8 *)(this + 0x10));
    getIndexStr();
    std::operator+("plantfood",asStack_30);
    std::string::string(asStack_20,"onAnimStoppedCallback");
    PlantAnimRig_Mangosteen::playAnimation(pPVar6,asStack_28,asStack_20);
    std::string::~string(asStack_20);
  }
  nop();
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
LAB_03b08c2c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMangosteen::setState(MangosteenState) */

void __thiscall PlantMangosteen::setState(PlantMangosteen *this,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  PlantAnimRig_Mangosteen *pPVar3;
  char *pcVar4;
  long lVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_03b07de0(*(undefined8 *)(this + 0x10));
  lVar5 = *(long *)(this + 0x10);
  *(undefined4 *)(lVar5 + 200) = param_2;
  switch(param_2) {
  case 0xb:
    *(undefined4 *)(this + 0x38) = 0;
    *(undefined4 *)(this + 0x34) = 0xb;
    fVar6 = (float)PVZ_T();
    lVar2 = FUN_03b07de0(*(undefined8 *)(this + 0x10));
    *(float *)(this + 0x28) = fVar6 + *(float *)(lVar2 + 0x2b8);
    pPVar3 = (PlantAnimRig_Mangosteen *)FUN_03b07ec0(*(undefined8 *)(this + 0x10));
    pcVar4 = "idle";
    goto LAB_03b08fdc;
  case 0xc:
    *(undefined4 *)(this + 0x38) = 0;
    *(undefined4 *)(this + 0x34) = 0xc;
    fVar6 = (float)PVZ_T();
    lVar2 = FUN_03b07de0(*(undefined8 *)(this + 0x10));
    *(float *)(this + 0x28) = fVar6 + *(float *)(lVar2 + 0x2b8);
    pPVar3 = (PlantAnimRig_Mangosteen *)FUN_03b07ec0(*(undefined8 *)(this + 0x10));
    pcVar4 = "idle2";
LAB_03b08fdc:
    std::string::string(asStack_10,pcVar4);
LAB_03b08fe4:
    PlantAnimRig_Mangosteen::playIdleAnimation(pPVar3,asStack_10);
    std::string::~string(asStack_10);
    nop();
    break;
  case 0xd:
    *(undefined4 *)(this + 0x38) = 0;
    *(undefined4 *)(this + 0x34) = 0xd;
    uVar7 = PVZ_EOT();
    *(undefined4 *)(this + 0x28) = uVar7;
    pPVar3 = (PlantAnimRig_Mangosteen *)FUN_03b07ec0(lVar5);
    std::string::string(asStack_10,"idle3");
    goto LAB_03b08fe4;
  case 0xe:
    fVar6 = *(float *)(lVar2 + 700);
    iVar1 = FUN_03b06108(lVar5);
    if (1 < iVar1) {
      fVar6 = fVar6 - *(float *)(lVar2 + 0x2e4);
      if (iVar1 != 2) {
        fVar6 = fVar6 - *(float *)(lVar2 + 0x2e4);
      }
    }
    fVar8 = (float)PVZ_T();
    *(float *)(this + 0x2c) = fVar8 + fVar6;
    pPVar3 = (PlantAnimRig_Mangosteen *)FUN_03b07ec0(*(undefined8 *)(this + 0x10));
    getIndexStr();
    pcVar4 = "recovery";
    goto LAB_03b090f8;
  case 0xf:
    startAttack(this);
    break;
  case 0x10:
    if (*(int *)(this + 0x34) == 0xb) {
      pPVar3 = (PlantAnimRig_Mangosteen *)FUN_03b07ec0(lVar5);
      pcVar4 = "upgrade122";
    }
    else {
      if (*(int *)(this + 0x34) != 0xc) break;
      pPVar3 = (PlantAnimRig_Mangosteen *)FUN_03b07ec0(lVar5);
      pcVar4 = "upgrade223";
    }
    std::string::string(asStack_18,pcVar4);
    std::string::string(asStack_10,"onAnimStoppedCallback");
    PlantAnimRig_Mangosteen::playAnimation(pPVar3,asStack_18,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    break;
  case 0x11:
    fVar6 = (float)PVZ_T();
    *(float *)(this + 0x30) = fVar6 + *(float *)(lVar2 + 0x2c0);
    pPVar3 = (PlantAnimRig_Mangosteen *)FUN_03b07ec0(*(undefined8 *)(this + 0x10));
    getIndexStr();
    pcVar4 = "idle";
LAB_03b090f8:
    std::operator+(pcVar4,asStack_18);
    PlantAnimRig_Mangosteen::playIdleAnimation(pPVar3,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantMangosteen::Initialize() */

void __thiscall PlantMangosteen::Initialize(PlantMangosteen *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  PlantFramework::Initialize((PlantFramework *)this);
  setState(this,0xb);
  lVar4 = FUN_03b07de0(*(undefined8 *)(this + 0x10));
  uVar5 = *(undefined8 *)(this + 0x10);
  iVar1 = *(int *)(lVar4 + 0x2e0);
  *(int *)(this + 0x3c) = iVar1;
  iVar2 = FUN_03b06108(uVar5);
  if (1 < iVar2) {
    iVar2 = *(int *)(lVar4 + 0x2e8);
    iVar1 = iVar1 + iVar2;
    *(int *)(this + 0x3c) = iVar1;
    iVar3 = FUN_03b06108(uVar5);
    if (2 < iVar3) {
      *(int *)(this + 0x3c) = iVar1 + iVar2;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMangosteen::ApplyPlantfood() */

void __thiscall PlantMangosteen::ApplyPlantfood(PlantMangosteen *this)

{
  float fVar1;
  int iVar2;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar3;
  undefined8 *puVar4;
  string asStack_20 [8];
  float local_18;
  float fStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  setState(this,0xf);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_MANGOSTEEN_LIGHTNING_CHARGE");
  GetPAMByName(asStack_20);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string(asStack_20);
  nop();
  iVar2 = (**(code **)(**(long **)(this + 0x10) + 0x170))(*(long **)(this + 0x10));
  FUN_03b060f4(this_00 + 0x1c,iVar2 + -1);
  std::string::string((string *)&local_18,"idle");
  Effect_PopAnim::PlaySingleAnimation(this_00,(RtWeakPtr *)&local_18,0);
  std::string::~string((string *)&local_18);
  nop();
  StandaloneEffect::SetIsScreenSpaceEffect((StandaloneEffect *)this_00,false);
  if (*(int *)(this + 0x34) != 0xb) {
    DAT_06a884e8 = 110.0;
  }
  fVar1 = DAT_06a884e8;
  puVar4 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           **)(this + 0x10));
  local_18 = (float)*puVar4;
  local_10 = *(undefined4 *)(puVar4 + 1);
  fStack_14 = (float)((ulong)*puVar4 >> 0x20);
  _local_18 = CONCAT44((fStack_14 + -125.0) - *(float *)(puVar4 + 1),local_18 - fVar1);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_18,-1);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMangosteen::CancelPlantfood() */

void __thiscall PlantMangosteen::CancelPlantfood(PlantMangosteen *this)

{
  PopAnimRig *this_00;
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  setState(this,*(undefined4 *)(this + 0x34));
  *(undefined4 *)(this + 0x38) = 0;
  if (*(int *)(this + 0x34) != 0xd) {
    fVar1 = (float)PVZ_T();
    this_00 = (PopAnimRig *)
              UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    std::string::string(asStack_10,"plantfood");
    fVar2 = (float)PopAnimRig::CalcAnimLengthSeconds(this_00,asStack_10);
    *(float *)(this + 0x28) = fVar2 + fVar1;
    std::string::~string(asStack_10);
    nop();
  }
  uVar3 = PVZ_T();
  *(undefined4 *)(this + 0x2c) = uVar3;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMangosteen::SetAttackState() */

void __thiscall PlantMangosteen::SetAttackState(PlantMangosteen *this)

{
  setState(this,0xf);
  return;
}


/* PlantMangosteen::DoProjectileCombo() */

void __thiscall PlantMangosteen::DoProjectileCombo(PlantMangosteen *this)

{
  setState(this,0xf);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMangosteen::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantMangosteen::onAnimStoppedCallback(PlantMangosteen *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  float *pfVar10;
  undefined8 *puVar11;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar8 = FUN_03b07de0(*(undefined8 *)(this + 0x10));
  lVar9 = FUN_05474374(param_1,"attack",0);
  if (lVar9 == -1) {
    bVar3 = std::operator==(param_1,"upgrade122");
    if (bVar3) {
      setState(this,0xc);
    }
    else {
      bVar3 = std::operator==(param_1,"upgrade223");
      if (bVar3) {
        setState(this,0xd);
      }
      else {
        lVar8 = FUN_05474374(param_1,&DAT_055bb3c8,0);
        if (lVar8 != -1) {
          setState(this,*(undefined4 *)(this + 0x34));
        }
      }
    }
  }
  else {
    setState(this,0x11);
    this_00 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                **)(this + 0x10);
    iVar6 = *(int *)(lVar8 + 0x2e0);
    iVar4 = FUN_03b06108(this_00);
    if (1 < iVar4) {
      iVar7 = iVar6 + *(int *)(lVar8 + 0x2e8);
      iVar6 = iVar7 + *(int *)(lVar8 + 0x2e8);
      if (iVar4 == 2) {
        iVar6 = iVar7;
      }
    }
    iVar4 = *(int *)(this + 0x38);
    *(int *)(this + 0x38) = iVar4 + 1;
    if (iVar4 + 1 < iVar6) {
      pfVar10 = (float *)std::
                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::_M_leftmost(this_00);
      fVar13 = *pfVar10;
      fVar14 = pfVar10[1];
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
      fVar12 = k_mangosteen_find_rang_factor;
      cVar1 = NewPVPUtils::IsPlayingNewPVP();
      if (cVar1 == '\0') {
        iVar6 = -1;
        iVar4 = -1;
      }
      else {
        iVar4 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
        iVar4 = iVar4 - (int)*(float *)(lVar8 + 0x2c4);
        iVar6 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
        iVar6 = iVar6 + (int)*(float *)(lVar8 + 0x2c4);
        iVar7 = BoardConstants::GRIDSQUARE_HEIGHT();
        fVar12 = (float)iVar7 * 0.9;
      }
      bVar3 = true;
      uVar5 = operator|(2,4);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_28,fVar13,fVar14);
      EntityFinder::GetEntitiesTouchingCircle2D
                (fVar12 * *(float *)(lVar8 + 0x2c4),avStack_20,uVar5,(FastCurve *)&local_28,iVar4,
                 iVar6);
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28),
            bVar2) {
        puVar11 = (undefined8 *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
        cVar1 = canTarget((BoardEntity *)*puVar11);
        if (cVar1 != '\0') {
          bVar3 = false;
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
      }
      if (bVar3) {
        *(undefined4 *)(this + 0x38) = 0;
        setState(this,*(undefined4 *)(this + 0x34));
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
    }
    else {
      setState(this,0xe);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMangosteen::findTargets() */

void __thiscall PlantMangosteen::findTargets(PlantMangosteen *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  float *pfVar8;
  undefined8 *puVar9;
  Zombie *this_00;
  float *pfVar10;
  GridItem *this_01;
  RtObject *this_02;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x48));
  if (!bVar1) {
    lVar7 = FUN_03b07de0(*(undefined8 *)(this + 0x10));
    pfVar8 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(this + 0x10));
    fVar12 = *pfVar8;
    fVar13 = pfVar8[1];
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    fVar11 = k_mangosteen_find_rang_factor;
    cVar2 = NewPVPUtils::IsPlayingNewPVP();
    if (cVar2 == '\0') {
      iVar5 = -1;
      iVar4 = -1;
    }
    else {
      iVar4 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
      iVar4 = iVar4 - (int)*(float *)(lVar7 + 0x2c4);
      iVar5 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
      iVar5 = iVar5 + (int)*(float *)(lVar7 + 0x2c4);
      iVar6 = BoardConstants::GRIDSQUARE_HEIGHT();
      fVar11 = (float)iVar6 * 0.9;
    }
    uVar3 = operator|(2,4);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_28,fVar12,fVar13);
    EntityFinder::GetEntitiesTouchingCircle2D
              (fVar11 * *(float *)(lVar7 + 0x2c4),avStack_20,uVar3,(FastCurve *)&local_28,iVar4,
               iVar5);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1)
    {
      puVar9 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30)
      ;
      this_02 = (RtObject *)*puVar9;
      this_00 = Sexy::RtObject::Cast<Zombie>(this_02);
      cVar2 = canTarget((BoardEntity *)this_00);
      if (cVar2 != '\0') {
        pfVar8 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          **)(this + 0x10));
        pfVar10 = (float *)std::
                           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          *)this_00);
        fVar12 = (float)Distance2D(*pfVar8,pfVar8[1],*pfVar10,pfVar10[1]);
        if (fVar11 * *(float *)(lVar7 + 0x2c4) <= fVar12) goto LAB_03b099d4;
LAB_03b09a4c:
        setState(this,0xf);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
        goto LAB_03b0988c;
      }
LAB_03b099d4:
      this_01 = Sexy::RtObject::Cast<GridItem>(this_02);
      cVar2 = canTarget((BoardEntity *)this_01);
      if (cVar2 != '\0') {
        pfVar8 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          **)(this + 0x10));
        pfVar10 = (float *)std::
                           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          *)this_01);
        fVar12 = (float)Distance2D(*pfVar8,pfVar8[1],*pfVar10,pfVar10[1]);
        if (fVar12 < fVar11 * *(float *)(lVar7 + 0x2c4)) goto LAB_03b09a4c;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
LAB_03b0988c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMangosteen::UpdateActions() */

void __thiscall PlantMangosteen::UpdateActions(PlantMangosteen *this)

{
  char cVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 == '\0') {
    switch(*(undefined4 *)(*(long *)(this + 0x10) + 200)) {
    case 0xb:
    case 0xc:
    case 0xd:
      fVar4 = *(float *)(this + 0x28);
      fVar2 = (float)PVZ_T();
      if (fVar2 <= fVar4) {
LAB_03b09b54:
        findTargets(this);
        return;
      }
LAB_03b09b2c:
      setState(this,0x10);
      return;
    case 0xe:
      fVar4 = *(float *)(this + 0x2c);
      fVar2 = (float)PVZ_T();
      if (fVar4 < fVar2) {
        uVar3 = PVZ_EOT();
        *(undefined4 *)(this + 0x2c) = uVar3;
        setState(this,*(undefined4 *)(this + 0x34));
        return;
      }
      fVar4 = *(float *)(this + 0x28);
      fVar2 = (float)PVZ_T();
      if (fVar4 < fVar2) goto LAB_03b09b2c;
      break;
    case 0x11:
      fVar4 = *(float *)(this + 0x28);
      fVar2 = (float)PVZ_T();
      if (fVar4 < fVar2) goto LAB_03b09b2c;
      fVar4 = *(float *)(this + 0x30);
      fVar2 = (float)PVZ_T();
      if (fVar4 < fVar2) goto LAB_03b09b54;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMangosteen::setCircleEffectValues(MangosteenElectricCircle*) */

void __thiscall
PlantMangosteen::setCircleEffectValues(PlantMangosteen *this,MangosteenElectricCircle *param_1)

{
  char cVar1;
  int iVar2;
  RtObject *this_00;
  MangosteenProps *pMVar3;
  SexyVector3 *pSVar4;
  Plant *this_01;
  size_t in_x2;
  code *__n;
  size_t __n_00;
  code *pcVar5;
  float fVar6;
  float fVar7;
  ElectricCircleDescription aEStack_238 [8];
  float local_230;
  undefined4 local_22c;
  DamageInfo aDStack_220 [8];
  float local_218;
  undefined1 auStack_210 [80];
  DamageInfo aDStack_1c0 [8];
  float local_1b8;
  string asStack_160 [8];
  string asStack_158 [8];
  string asStack_150 [8];
  string asStack_148 [8];
  SexyVector3 aSStack_140 [12];
  float local_134;
  int local_130;
  float local_12c;
  undefined1 local_128;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_120 [280];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (MangosteenElectricCircle *)0x0) {
    Plant::GetProps();
    this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_120);
    pMVar3 = Sexy::RtObject::Cast<MangosteenProps_const>(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_120);
    ElectricCircleDescription::ElectricCircleDescription(aEStack_238);
    fVar6 = *(float *)(pMVar3 + 0x2c4);
    cVar1 = NewPVPUtils::IsPlayingNewPVP();
    local_230 = k_mangosteen_attack_rang_factor;
    if (cVar1 != '\0') {
      iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
      local_230 = (float)iVar2;
    }
    local_230 = local_230 * fVar6;
    FUN_03b06120(*(undefined8 *)(pMVar3 + 0x70),0);
    Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
    DamageInfo::operator=(aDStack_220,(DamageInfo *)aRStack_120);
    DamageInfo::~DamageInfo((DamageInfo *)aRStack_120);
    fVar6 = (float)FUN_03b06104(*(undefined4 *)(*(long *)(this + 0x10) + 0x564));
    local_218 = fVar6 * local_218;
    std::string::append(asStack_160,"POPANIM_EFFECTS_MANGOSTEEN_ATTACK_NORMAL",in_x2);
    std::string::append(asStack_158,"idle",in_x2);
    local_22c = 0x3ea8f5c3;
    pSVar4 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             **)(this + 0x10));
    Sexy::SexyVector3::operator=(aSStack_140,pSVar4);
    local_130 = *(int *)(this + 0x34);
    if (local_130 == 0xc) {
      local_134 = (float)Plant::GetZombieConditionExtendRate(*(Plant **)(this + 0x10),0x18);
      local_134 = local_134 * 0.5;
    }
    else if (local_130 == 0xd) {
      local_134 = (float)Plant::GetZombieConditionExtendRate(*(Plant **)(this + 0x10),0x18);
      local_134 = local_134 * 1.5;
    }
    __n = Plant::IsInPlantFoodState;
    pcVar5 = *(code **)(*(long *)*(Plant **)(this + 0x10) + 0x1f8);
    if (pcVar5 == Plant::IsInPlantFoodState) {
      cVar1 = Plant::IsInPlantFoodState(*(Plant **)(this + 0x10));
    }
    else {
      cVar1 = (*pcVar5)();
    }
    if (cVar1 != '\0') {
      std::string::append(asStack_160,"POPANIM_EFFECTS_MANGOSTEEN_ATTACK_PLANTFOOD",(size_t)__n);
      fVar7 = *(float *)(pMVar3 + 0x2c8);
      cVar1 = NewPVPUtils::IsPlayingNewPVP();
      fVar6 = k_mangosteen_attack_rang_factor;
      if (cVar1 != '\0') {
        iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
        fVar6 = (float)iVar2;
      }
      local_230 = fVar6 * fVar7;
      FUN_03b06120(*(undefined8 *)(pMVar3 + 0x70),1);
      Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
      DamageInfo::operator=(aDStack_220,(DamageInfo *)aRStack_120);
      DamageInfo::~DamageInfo((DamageInfo *)aRStack_120);
      fVar6 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
      this_01 = *(Plant **)(this + 0x10);
      fVar7 = (float)FUN_03b06104(*(undefined4 *)(this_01 + 0x564));
      local_218 = fVar6 * fVar7 * local_218 + fVar7 * local_218;
      cVar1 = Plant::GetAvatarEnable(this_01);
      if (cVar1 != '\0') {
        __n_00 = 1;
        local_128 = 1;
        std::string::append(asStack_160,"POPANIM_EFFECTS_MANGOSTEEN_ATTACK_AVATAR",1);
        std::string::append(asStack_150,"POPANIM_EFFECTS_MANGOSTEEN_ATTACK_AVATAR_EXPLODE",__n_00);
        std::string::append(asStack_148,"idle",__n_00);
        fVar6 = *(float *)(pMVar3 + 0x2cc);
        cVar1 = NewPVPUtils::IsPlayingNewPVP();
        local_12c = k_mangosteen_attack_rang_factor;
        if (cVar1 != '\0') {
          iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
          local_12c = (float)iVar2;
        }
        local_12c = local_12c * fVar6;
        FUN_03b06120(*(undefined8 *)(pMVar3 + 0x70),3);
        Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
        DamageInfo::operator=(aDStack_1c0,(DamageInfo *)aRStack_120);
        DamageInfo::~DamageInfo((DamageInfo *)aRStack_120);
        fVar6 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
        fVar7 = (float)FUN_03b06104(*(undefined4 *)(*(long *)(this + 0x10) + 0x564));
        local_1b8 = fVar6 * fVar7 * local_1b8 + fVar7 * local_1b8;
      }
    }
    operator|=(auStack_210,0x80);
    ElectricCircleDescription::ElectricCircleDescription
              ((ElectricCircleDescription *)aRStack_120,aEStack_238);
    MangosteenElectricCircle::setValues(param_1,aRStack_120);
    ElectricCircleDescription::~ElectricCircleDescription((ElectricCircleDescription *)aRStack_120);
    ElectricCircleDescription::~ElectricCircleDescription(aEStack_238);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMangosteen::OnAnimCommand(std::string const&, std::string const&) */

void PlantMangosteen::OnAnimCommand(string *param_1,string *param_2)

{
  RtWeakPtr<PowerPropertySheet> *this;
  byte bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  float *pfVar8;
  undefined8 *puVar9;
  Zombie *pZVar10;
  float *pfVar11;
  NewLightningBolt *this_00;
  MangosteenElectricCircle *pMVar12;
  long *plVar13;
  undefined8 uVar14;
  char *__n;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_60;
  undefined8 local_58;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  ulong local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = std::operator==(param_2,"fire");
  if (bVar2) {
    this = (RtWeakPtr<PowerPropertySheet> *)(param_1 + 0x40);
    lVar7 = FUN_03b07de0(*(undefined8 *)(param_1 + 0x10));
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_38);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this,(RtWeakPtr *)a_Stack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
    pfVar8 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(param_1 + 0x10));
    fVar16 = k_mangosteen_find_rang_factor;
    fVar17 = *pfVar8;
    fVar18 = pfVar8[1];
    cVar3 = NewPVPUtils::IsPlayingNewPVP();
    if (cVar3 == '\0') {
      iVar4 = -1;
      iVar5 = -1;
    }
    else {
      iVar5 = SharkMinion::getRow(*(SharkMinion **)(param_1 + 0x10));
      iVar5 = iVar5 - (int)*(float *)(lVar7 + 0x2c4);
      iVar4 = SharkMinion::getRow(*(SharkMinion **)(param_1 + 0x10));
      iVar4 = iVar4 + (int)*(float *)(lVar7 + 0x2c4);
      iVar6 = BoardConstants::GRIDSQUARE_HEIGHT();
      fVar16 = (float)iVar6 * 0.9;
    }
    Sexy::FastCurve::SetOutRange((FastCurve *)a_Stack_38,fVar17,fVar18);
    EntityFinder::GetEntitiesTouchingCircle2D
              (fVar16 * *(float *)(lVar7 + 0x2c4),avStack_50,2,a_Stack_38,iVar5,iVar4);
    local_60 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_50);
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_50);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58), bVar2)
    {
      puVar9 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60)
      ;
      pZVar10 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar9);
      cVar3 = canTarget((BoardEntity *)pZVar10);
      if ((((cVar3 != '\0') && (cVar3 = Zombie::IsControlled(pZVar10), cVar3 == '\0')) &&
          (cVar3 = Creature::IsOnBoard(), cVar3 != '\0')) &&
         ((iVar4 = Zombie::GetSizeType(pZVar10), iVar4 == 0 ||
          (iVar4 = Zombie::GetSizeType(pZVar10), iVar4 == 1)))) {
        pfVar8 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          **)(param_1 + 0x10));
        pfVar11 = (float *)std::
                           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          *)pZVar10);
        fVar17 = (float)Distance2D(*pfVar8,pfVar8[1],*pfVar11,pfVar11[1]);
        if (fVar17 < fVar16 * *(float *)(lVar7 + 0x2c4)) {
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    ((RtWeakPtr<SpartanBambooMatrixSystem> *)this,(RtWeakPtrBase *)a_Stack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38);
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
    }
    cVar3 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)this);
    if (cVar3 != '\0') {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_50);
      bVar1 = 0;
LAB_03b0b08c:
      uVar15 = (ulong)bVar1;
      if (local_8 == ___stack_chk_guard) {
        return;
      }
      goto LAB_03b0b16c;
    }
    pZVar10 = (Zombie *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    cVar3 = Zombie::IsControlled(pZVar10);
    if (cVar3 == '\0') {
      pZVar10 = (Zombie *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      Zombie::SetIsControlled(pZVar10,true);
    }
    RayEntityData::RayEntityData((RayEntityData *)a_Stack_38);
    __n = "POPANIM_EFFECTS_ELECTRICI_TEA_BOLT";
    std::string::append((string *)a_Stack_38,"POPANIM_EFFECTS_ELECTRICI_TEA_BOLT",0x55e6918);
    std::string::append(asStack_30,"POPANIM_EFFECTS_LIGHTNINGREED_HIT",(size_t)__n);
    std::string::append(asStack_28,"idle",(size_t)__n);
    std::string::append(asStack_20,"lightningreed_bolt_start_med",(size_t)__n);
    std::string::append(asStack_18,"lightningreed_bolt_middle_large",(size_t)__n);
    local_10 = 0x40cccccd;
    local_c = 0x41133333;
    this_00 = GameObject::Create<NewLightningBolt>();
    std::
    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    **)(param_1 + 0x10));
    BoardEntity::PlaceOnBoard((SexyVector3 *)this_00);
    std::string::string((string *)&local_60,"POPANIM_EFFECTS_ELECTRICI_TEA_BOLT");
    std::string::string((string *)&local_58,"mangosteen");
    NewLightningBolt::InitializeBounceInfo(this_00,3,0.1,(string *)&local_60,(string *)&local_58);
    std::string::~string((string *)&local_58);
    nop();
    std::string::~string((string *)&local_60);
    nop();
    NewLightningBolt::InitializeDamageInfo(this_00,0.0,1.0,0.01);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_58);
    NewRayEntity::Initialize((NewRayEntity *)0x3dcccccd,this_00,a_Stack_38,(string *)&local_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_58,(RtWeakPtrBase *)this);
    RayEntity::InitiateWithTarget((RayEntity *)this_00,(string *)&local_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
    pZVar10 = (Zombie *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    cVar3 = Zombie::IsInSandStorm(pZVar10);
    if (cVar3 == '\0') {
      plVar13 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)this);
      cVar3 = (**(code **)(*plVar13 + 0x328))();
      if (cVar3 == '\0') {
        plVar13 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)this);
        cVar3 = (**(code **)(*plVar13 + 0x330))();
        if (cVar3 == '\0') {
          uVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
          pZVar10 = (Zombie *)PVZ_EOT();
          Zombie::ApplyCondition(pZVar10,0,uVar14,6,1);
          uVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
          Zombie::ApplyCondition(pZVar10,0,uVar14,0x18,1);
        }
      }
    }
    TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)a_Stack_38);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_50);
  }
  else {
    bVar2 = std::operator==(param_2,"attack");
    if (bVar2) {
      pMVar12 = Board::AddEffect<MangosteenElectricCircle>(*(Board **)(gLawnApp + 0x9f0));
      pMVar12 = Sexy::RtObject::Cast<MangosteenElectricCircle>((RtObject *)pMVar12);
      setCircleEffectValues((PlantMangosteen *)param_1,pMVar12);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x48),
                 (RtWeakPtrBase *)a_Stack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38);
      MessageRouter::Post<Plant*,Plant*>
                ((MessageRouter *)gMessageRouter,Message::PlantCombos,*(Plant **)(param_1 + 0x10));
      bVar1 = 1;
      goto LAB_03b0b08c;
    }
  }
  uVar15 = ___stack_chk_guard;
  if (local_8 == ___stack_chk_guard) {
    PlantFramework::OnAnimCommand(param_1,param_2);
    return;
  }
LAB_03b0b16c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar15);
}

