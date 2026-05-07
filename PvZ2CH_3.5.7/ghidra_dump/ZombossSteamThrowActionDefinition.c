// Class: ZombossSteamThrowActionDefinition


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamThrowActionDefinition::StaticClassInit() */

void ZombossSteamThrowActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossSteamThrowActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_03c4ac4c,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSteamThrowActionDefinition::StaticGetClass() */

long * ZombossSteamThrowActionDefinition::StaticGetClass(void)

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
  uVar2 = ZombieActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSteamThrowActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSteamThrowActionDefinition::GetClass() const */

long * ZombossSteamThrowActionDefinition::GetClass(void)

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
  uVar2 = ZombieActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSteamThrowActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSteamThrowActionDefinition::ZombossSteamThrowActionDefinition() */

void __thiscall
ZombossSteamThrowActionDefinition::ZombossSteamThrowActionDefinition
          (ZombossSteamThrowActionDefinition *this)

{
  ZombieActionDefinition::ZombieActionDefinition((ZombieActionDefinition *)this);
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined ***)this = &PTR_GetClass_06752f90;
  DVec3::DVec3((DVec3 *)(this + 0x3c));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48));
  *(undefined4 *)(this + 0x50) = 0x3f99999a;
  *(undefined4 *)(this + 0x54) = 0x43af0000;
  return;
}


/* ZombossSteamThrowActionDefinition::StaticNew() */

ZombossSteamThrowActionDefinition * ZombossSteamThrowActionDefinition::StaticNew(void)

{
  ZombossSteamThrowActionDefinition *this;
  
  this = ::operator_new(0x58);
  ZombossSteamThrowActionDefinition(this);
  return this;
}


/* ZombossSteamThrowActionDefinition::~ZombossSteamThrowActionDefinition() */

void __thiscall
ZombossSteamThrowActionDefinition::~ZombossSteamThrowActionDefinition
          (ZombossSteamThrowActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_06752f90;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  ZombieActionDefinition::~ZombieActionDefinition((ZombieActionDefinition *)this);
  return;
}


/* ZombossSteamThrowActionDefinition::~ZombossSteamThrowActionDefinition() */

void __thiscall
ZombossSteamThrowActionDefinition::~ZombossSteamThrowActionDefinition
          (ZombossSteamThrowActionDefinition *this)

{
  ~ZombossSteamThrowActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamThrowActionDefinition::pickThrowTargets(ZombieWithActions*, std::vector<Sexy::Point,
   std::allocator<Sexy::Point> >&, int) const */

void __thiscall
ZombossSteamThrowActionDefinition::pickThrowTargets
          (ZombossSteamThrowActionDefinition *this,ZombieWithActions *param_1,vector *param_2,
          int param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  Point *pPVar14;
  undefined8 uVar15;
  ulong uVar16;
  int iVar17;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  Insets aIStack_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  int local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
  uVar4 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1);
  iVar5 = SharkMinion::getRow((SharkMinion *)param_1);
  local_38 = iVar5 + -1;
  local_20 = 0;
  piVar8 = eastl::max_alt<int>(&local_38,(int *)&local_20);
  iVar17 = *piVar8;
  local_20 = 0;
  local_38 = uVar4;
  piVar8 = eastl::max_alt<int>(&local_38,(int *)&local_20);
  iVar2 = *piVar8;
  local_38 = (iVar5 - iVar17) + 1;
  local_20 = 0;
  piVar8 = eastl::max_alt<int>(&local_38,(int *)&local_20);
  iVar5 = *piVar8;
  Sexy::Insets::Insets(aIStack_60,0,iVar17,iVar2,iVar5);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38,1,aIStack_60
            );
  uVar9 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_38);
  uVar10 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)&local_38);
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<Pinata**,std::vector<Pinata*,std::allocator<Pinata*>>>>
            (uVar9,uVar10);
  uVar9 = CONCAT44(uStack_34,local_38);
  uVar11 = FUN_03c3ed5c(uVar9,local_30);
  if ((uVar11 != 0) && (0 < param_3)) {
    uVar16 = 0;
    while( true ) {
      if (uVar16 < uVar11) {
        puVar12 = (undefined8 *)FUN_03c3eda0(uVar9,uVar16);
        iVar6 = BoardEntity::CalcColumnPosition((BoardEntity *)*puVar12);
        puVar12 = (undefined8 *)FUN_03c3eda0(CONCAT44(uStack_34,local_38),uVar16);
        iVar7 = SharkMinion::getRow((SharkMinion *)*puVar12);
        Sexy::Point::Point((Point *)&local_20,iVar6,iVar7);
        std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                  ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_50,(Point *)&local_20);
      }
      if (uVar16 == param_3 - 1) break;
      uVar9 = CONCAT44(uStack_34,local_38);
      uVar16 = uVar16 + 1;
      uVar11 = FUN_03c3ed5c(uVar9,local_30);
    }
  }
  uVar11 = FUN_03c3ed48(local_50,local_48);
  if (uVar11 < (ulong)(long)param_3) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    if (0 < iVar2) {
      iVar5 = iVar17 + iVar5;
      iVar6 = 0;
      do {
        iVar7 = iVar17;
        if (iVar17 < iVar5) {
          do {
            iVar1 = iVar7 + 1;
            Sexy::Point::Point((Point *)&local_68,iVar6,iVar7);
            std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                      ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20,
                       (Point *)&local_68);
            iVar7 = iVar1;
          } while (iVar1 != iVar5);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 != iVar2);
    }
    lVar13 = FUN_03c3ed48(local_50,local_48);
    if (lVar13 != 0) {
      local_88 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_50);
      while( true ) {
        local_68 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_50);
        bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_88,(__normal_iterator *)&local_68)
        ;
        if (!bVar3) break;
        uVar9 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)&local_20);
        uVar10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
        uVar15 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
        local_80 = std::
                   remove<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>,Sexy::Point>
                             (uVar9,uVar10,uVar15);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_70,(__normal_iterator *)&local_80);
        local_78 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_20);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_68,(__normal_iterator *)&local_78);
        std::vector<Sexy::Point,std::allocator<Sexy::Point>>::erase
                  ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20,local_70,local_68);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_88);
      }
    }
    iVar17 = 0;
    uVar9 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_20);
    uVar10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_20);
    std::
    random_shuffle<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>
              (uVar9,uVar10);
    iVar5 = FUN_03c3ed48(local_50,local_48);
    if (iVar5 < param_3) {
      do {
        while( true ) {
          uVar9 = CONCAT44(uStack_1c,local_20);
          uVar11 = FUN_03c3ed48(uVar9,local_18);
          if (uVar11 <= (ulong)(long)iVar17) break;
          iVar5 = iVar5 + 1;
          iVar17 = iVar17 + 1;
          pPVar14 = (Point *)FUN_03c3ed54(uVar9);
          std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_50,pPVar14);
          if (iVar5 == param_3) goto LAB_03c4e714;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 != param_3);
    }
LAB_03c4e714:
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20);
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::operator=
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)param_2,(vector *)&local_50);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x03c4fbb8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossSteamThrowActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition const>,
   ZombieWithActions*) const */

void __thiscall
ZombossSteamThrowActionDefinition::TryStartAction
          (ZombossSteamThrowActionDefinition *this,RtWeakPtrBase *param_2,ZombieWithActions *param_3
          )

{
  ZombossSteamThrowActionHandler *this_00;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  pickThrowTargets(this,param_3,(vector *)avStack_20,*(int *)(this + 0x38));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,param_2);
  this_00 = ZombieWithActions::QueueAction<ZombossSteamThrowActionHandler>
                      ((ZombieWithActions *)this,aRStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  ZombossFireActionHandler::SetRocketTargets
            ((ZombossFireActionHandler *)this_00,(vector *)avStack_20);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

