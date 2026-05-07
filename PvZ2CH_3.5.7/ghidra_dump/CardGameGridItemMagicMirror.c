// Class: CardGameGridItemMagicMirror


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameGridItemMagicMirror::StaticClassInit() */

void CardGameGridItemMagicMirror::StaticClassInit(void)

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
    std::string::string(asStack_10,"CardGameGridItemMagicMirror");
    (*pcVar2)(plVar1,asStack_10,FUN_03612dc8,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameGridItemMagicMirror::StaticGetClass() */

long * CardGameGridItemMagicMirror::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CardGameGridItemMagicMirror",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameGridItemMagicMirror::GetClass() const */

long * CardGameGridItemMagicMirror::GetClass(void)

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
  (*pcVar3)(plVar1,"CardGameGridItemMagicMirror",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameGridItemMagicMirror::CardGameGridItemMagicMirror() */

void __thiscall
CardGameGridItemMagicMirror::CardGameGridItemMagicMirror(CardGameGridItemMagicMirror *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_06668890;
  *(undefined ***)(this + 0x10) = &PTR__CardGameGridItemMagicMirror_06668b48;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a8));
  return;
}


/* CardGameGridItemMagicMirror::StaticNew() */

CardGameGridItemMagicMirror * CardGameGridItemMagicMirror::StaticNew(void)

{
  CardGameGridItemMagicMirror *this;
  
  this = ::operator_new(0x1c0);
  CardGameGridItemMagicMirror(this);
  return this;
}


/* CardGameGridItemMagicMirror::~CardGameGridItemMagicMirror() */

void __thiscall
CardGameGridItemMagicMirror::~CardGameGridItemMagicMirror(CardGameGridItemMagicMirror *this)

{
  *(undefined ***)this = &PTR_GetClass_06668890;
  *(undefined ***)(this + 0x10) = &PTR__CardGameGridItemMagicMirror_06668b48;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x1a8));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to CardGameGridItemMagicMirror::~CardGameGridItemMagicMirror() */

void __thiscall
CardGameGridItemMagicMirror::~CardGameGridItemMagicMirror(CardGameGridItemMagicMirror *this)

{
  ~CardGameGridItemMagicMirror(this + -0x10);
  return;
}


/* CardGameGridItemMagicMirror::~CardGameGridItemMagicMirror() */

void __thiscall
CardGameGridItemMagicMirror::~CardGameGridItemMagicMirror(CardGameGridItemMagicMirror *this)

{
  ~CardGameGridItemMagicMirror(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CardGameGridItemMagicMirror::~CardGameGridItemMagicMirror() */

void __thiscall
CardGameGridItemMagicMirror::~CardGameGridItemMagicMirror(CardGameGridItemMagicMirror *this)

{
  ~CardGameGridItemMagicMirror(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameGridItemMagicMirror::onGridItemInitialize() */

void __thiscall CardGameGridItemMagicMirror::onGridItemInitialize(CardGameGridItemMagicMirror *this)

{
  GridItemAnimationProps *pGVar1;
  PopAnimRig *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onGridItemInitialize((GridItemAnimation *)this);
  pGVar1 = GridItem::GetProps<GridItemAnimationProps>();
  FUN_03612110(*(undefined4 *)(pGVar1 + 0x10),this + 300);
  if (*(code **)(*(long *)this + 0x1e0) == GridItem::GetMaxHitpoints) {
    GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    (**(code **)(*(long *)this + 0x1e0))();
  }
  FUN_03612118(this + 0x128);
  RealObject::JoinTeam((RealObject *)this,1);
  PVZ2UICheckBox::SetRightAligned((PVZ2UICheckBox *)this,true);
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  GridItemAnimation::GetAnimRig();
  pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  std::string::string(asStack_40,"undamaged");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameGridItemMagicMirror::onUpdate() */

void __thiscall CardGameGridItemMagicMirror::onUpdate(CardGameGridItemMagicMirror *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  Zombie *pZVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  RtWeakPtrBase *pRVar14;
  SexyVector3 *this_01;
  int in_w4;
  code *pcVar15;
  ulong uVar16;
  long *plVar17;
  string asStack_78 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  undefined8 local_68;
  undefined4 local_60;
  int local_58 [2];
  int local_50;
  undefined8 local_48;
  undefined8 local_40;
  uint5 local_30;
  undefined1 uStack_2b;
  undefined2 uStack_2a;
  undefined1 uStack_29;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar16 = 0;
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_48);
  uVar8 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  iVar3 = SharkMinion::getRow((SharkMinion *)this);
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(uVar8 & 0xffffffff),iVar3,1,1,in_w4);
  local_50 = local_50 / 2;
  local_58[0] = local_50 + local_58[0];
  uVar4 = SharkMinion::getRow((SharkMinion *)this);
  uVar5 = SharkMinion::getRow((SharkMinion *)this);
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_48,2,local_58,
             uVar4,uVar5);
  uVar12 = local_48;
  lVar9 = FUN_03612130(local_48,local_40);
  if (lVar9 != 0) {
    do {
      puVar10 = (undefined8 *)FUN_0361213c(uVar12,uVar16);
      pZVar11 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar10);
      if ((pZVar11 != (Zombie *)0x0) &&
         (cVar1 = (**(code **)(*(long *)pZVar11 + 0x328))(), cVar1 == '\0')) {
        std::string::string(asStack_78,"clone");
        cVar1 = Zombie::HasTag(pZVar11,asStack_78);
        if ((cVar1 == '\0') && (cVar1 = RealObject::IsOnTeam(pZVar11,1), cVar1 != '\0')) {
          this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(this + 0x1a8);
          uVar12 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(this_00);
          uVar13 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this_00);
          ToolPacketData::GetProps();
          local_68 = std::
                     find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Sexy::RtWeakPtr<GameObject>>
                               (uVar12,uVar13,aRStack_70);
          _local_30 = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end(this_00);
          bVar2 = __gnu_cxx::operator==
                            ((__normal_iterator *)&local_68,(__normal_iterator *)&local_30);
          if (bVar2) {
            iVar3 = Zombie::GetSizeType(pZVar11);
            if (iVar3 == 2) {
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
              std::string::~string(asStack_78);
              nop();
            }
            else {
              iVar3 = Zombie::GetSizeType(pZVar11);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
              std::string::~string(asStack_78);
              nop();
              if (iVar3 != 1) goto LAB_03615018;
            }
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)&local_30,(RtWeakPtrBase *)&local_68);
            std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                      ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                       this_00,(RtWeakPtr *)&local_30);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
            Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
            uVar6 = FUN_0361210c(*(undefined4 *)(pZVar11 + 0x50));
            _local_30 = CONCAT17(1,_local_30);
            uVar12 = _local_30;
            uStack_2a = SUB82(uVar12,6);
            _local_30 = CONCAT15(1,(uint5)uVar6);
            plVar17 = *(long **)(gLawnApp + 0x9f0);
            pcVar15 = *(code **)(*plVar17 + 0x318);
            pRVar14 = (RtWeakPtrBase *)Zombie::GetType(pZVar11);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)&local_68,pRVar14);
            this_01 = (SexyVector3 *)
                      (*pcVar15)(plVar17,(__normal_iterator *)&local_68,0xfffffffb,
                                 (RtWeakPtr<Sexy::SoundResource> *)&local_30);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
            RealObject::JoinTeam((RealObject *)this_01,1);
            Zombie::SetFacing((Zombie *)this_01,1);
            puVar10 = (undefined8 *)
                      std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)pZVar11);
            local_68 = *puVar10;
            local_60 = *(undefined4 *)(puVar10 + 1);
            iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
            iVar7 = BoardConstants::GRIDSQUARE_WIDTH();
            iVar3 = RandRangeInt(-(iVar3 / 2),iVar7 / 2);
            local_68 = CONCAT44(local_68._4_4_,(float)iVar3 + (float)local_68);
            BoardEntity::PlaceOnBoard(this_01);
            CardUtils::CheckZombieCardSettingProperty((Zombie *)this_01);
            Zombie::SetEliminateColor((Zombie *)this_01,2);
            pZVar11 = (Zombie *)PVZ_EOT();
            Zombie::ApplyCondition(pZVar11,0,this_01,0x3a,1);
            std::string::string((string *)aRStack_70,"clone");
            Zombie::AddTag((Zombie *)this_01,(string *)aRStack_70);
            std::string::~string((string *)aRStack_70);
            nop();
            ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
            goto LAB_03615018;
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
        }
        std::string::~string(asStack_78);
        nop();
      }
LAB_03615018:
      uVar12 = local_48;
      uVar16 = uVar16 + 1;
      uVar8 = FUN_03612130(local_48,local_40);
    } while (uVar16 < uVar8);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_48);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

